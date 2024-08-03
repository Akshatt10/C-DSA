#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    //base case
    if(size==0){
        return false;
        }

    if(arr[0] == key){
        return true;
    }

    else{
        bool remainingpart=search(arr+1, size-1, key);
    }
}



int main(){

    int arr[5] = {3,5,1,2,6};
    int size= 5;
    int key = 0;
    bool ans = search(arr,size,key);

    if(ans){
        cout<<"present"<<endl;

    }
    else{
        cout<<"absent";
    }

    return 0;
}