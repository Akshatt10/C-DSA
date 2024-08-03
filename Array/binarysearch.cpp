#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int num){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == num){
            return mid;
        }
        else if(arr[mid]>num){
            e=mid-1;

        }
        else{
            e = mid+1;
        }

    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int num;
    cin>>num;


cout<<binarySearch(arr, n, num)<<endl;

return 0;

}
