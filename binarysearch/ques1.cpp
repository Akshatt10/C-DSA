//Tell the first and last occurence of the given element from the given sorted array.
#include<iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key){

    int s = 0;
    int e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e=mid-1;
        }
        else if(key < arr[mid]){   //go to left
            e = mid-1;

        }
        else if(key > arr[mid]) {  // go to right
            s = mid + 1;

        }

        mid = s + (e-s)/2;

    }
    return ans;
}

int lastoccurence(int arr[], int n, int key){

    int s = 0;
    int e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key < arr[mid]){   //go to left
            e = mid-1;

        }
        else if(key > arr[mid]) {  // go to right
            s = mid + 1;

        }

        mid = s + (e-s)/2;

    }
    return ans;
}
int main(){

    int n1;
    cin>>n1;
    int arr[n1];
    for(int i = 0; i <n1; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<"First occurrence of "<< key <<" is "<< firstoccurence(arr, n1, key)<<endl;
    cout<<"Last occurrence of "<< key <<" is "<< lastoccurence(arr, n1, key)<<endl;

}