#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){

    int mid = s+(s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k =s;
    for(int i = 0; i<len1; i++){
        first[i]== arr[k++];
    }

    int k = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[k++];
    }

    //merge 2 sorted arrays

    int index1=0;
    int index2=0;

    mainarrayindex = s;

}

void mergesort(int *arr, int s,int e){
    //base case
    if(s>e){
        return;
    }

    int mid = s+(s+e)/2;

    //left part sort
    mergesort(arr,s,mid);

    //right part sort
    mergesort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
}

int main(){

    int arr[5] = {2,5,1,6,9};

    mergesort(arr,5);

    for(int i =0; i<5; i++){
        cout<< arr[i]<<" ";
    }

    return 0;

}
