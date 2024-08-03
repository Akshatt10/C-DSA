 #include<iostream>
 using namespace std;

 void reverse(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
 }

 void printArray(int arr[], int n){
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
 }

 int main(){
    int n1;
    cin>>n1;

    int arrr[n1];
       cout<<reverse(arrr, n1);
    cout<<printArray(arrr, n1);
    for(int i=0; i<n1; i++){
      cin>>arrr[i]<<endl;
    }
 }
