//if (arr[pivot]<=target<=arr[n-1] -> Binary search on 2nd line)
//else (binary search on 1st line)\
// sabse phele pivot nikal liya fir upar vali condition check kri ki wheather the lement is searched or not 

#include<iostream>
using namespace std;

 int  pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] >= arr[0]){
            s = mid + 1;

        }

        else{
            e = mid;
        }
        mid = s + (e-s)/2;



         
    }

    return s;
 }

 int binarysearch(int arr[], int s, int e, int key){

    int start = s;
    int end = e;

    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }

        mid = (start+end)/2;
    }

    return -1;

}

int findposition(int arr[], int n, int k) {
    int pivott = pivot(arr, n);
    if( k >= arr[pivott] && k<= arr[n-1] ){
        return binarysearch(arr, pivott, n-1, k);
    }
    else
    {
        return binarysearch(arr, 0, pivott - 1, k);
    }

}

