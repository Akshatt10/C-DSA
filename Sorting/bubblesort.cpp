#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    for(int i= 1; i<n; i++){
        //For round 1
        for(int j =0; j<n-i; j++ ){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main(){

    int n1; 
    cin>>n1;
    int arrr[n1];
    for(int i=0; i< n1; i++){
        cin>>arrr[i];

    }
    cout<<endl;
    bubblesort(arrr, n1);
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n1; i++){
        cout<<arrr[i]<<" ";
    }
    return 0; 
}