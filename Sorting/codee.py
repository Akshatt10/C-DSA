import threading
import time
import sqlite3

# Define a global mutex lock
mutex_lock = threading.Lock()
reader_lock = threading.Lock()
# Define a worker thread that updates the database
def worker_thread(order,name):
    # Acquire the mutex lock to ensure exclusive access to the database
    mutex_lock.acquire()

    # Update the database with the new order
    conn = sqlite3.connect('orders.db')
    c = conn.cursor()
    c.execute('INSERT INTO orders VALUES (?,?)', (order,name))
    conn.commit()
    conn.close()

    # Release the mutex lock
    mutex_lock.release()
def reader_thread():
    reader_lock.acquire()
    readCount = 0
    readCount+=1
    if(readCount == 1):
      mutex_lock.acquire()
    reader_lock.release()
    # read perform
    conn = sqlite3.connect('orders.db')
    c = conn.cursor()
    c.execute('select * from orders')
    result = c.fetchall()
    # print(result)
    print("Orders ->")
    for i in result:
      print(i[0],i[1])

    reader_lock.acquire()
    readCount-=1
    if(readCount == 0):
      reader_lock.release()
      mutex_lock.release()

def handle_read():
    worker = threading.Thread(target=reader_thread)
    worker.start()
# Define a function that handles incoming orders
def handle_order(order,name):
    # Create a new worker thread to handle the order
    worker = threading.Thread(target=worker_thread, args=(order,name,))
    worker.start()

    # Continue handling incoming orders
    # ...

# Initialize the database
conn = sqlite3.connect('orders.db')
c = conn.cursor()
c.execute('CREATE TABLE IF NOT EXISTS orders (order_id INTEGER, name VARCHAR)')
conn.commit()
conn.close()

# Start handling incoming orders
handle_order(1,"Akshat")
handle_order(2,"v")
handle_order(3,"eb09")
handle_read()
handle_read()
handle_read()

# Wait for the worker threads to finish
time.sleep(1)
