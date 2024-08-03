#include<vector>
using namespace std;
void insertionSort(vector<int> &arr){
    int n;
    for(int i=0; i<n; i++){
          int temp = arr[i];
    int j = i-1;
        for(; j>=0; j--){
        //swap
        if(arr[j] > temp){
        arr[j+1]=arr[j];
        }
        else{
        break;
        }

    }

    // J will be 1 index value less where it has to be written, SO

    arr[j+1] = temp;

}}

