//smallest element shifted to the right place
#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){
    for(int i = 0; i< n-1; i++){
        int MIN = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[MIN])
            MIN = j;

        }

        swap(arr[MIN], arr[i]);
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

    selectionsort(arrr, n1);
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n1; i++){
        cout<<arrr[i]<<" ";
    }
    return 0; 
}