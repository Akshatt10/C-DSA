#include<iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid){

    int studentcount = 1;
    int pagesum = 0;

    for(int i = 0; i<n; i++){

        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m || arr[i] > mid){

                return false;
            }

            pagesum = arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[], int n, int m){

    int s = 0;
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }

    int e = sum;
    int ans = -1;

    int mid = s + (e-s)/2;

    while (s<=e){

        if(ispossible(arr,n,m,mid)){

            ans = mid;
            e = mid-1;
        }
        else{

            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int main() {

 int n1;
    cin>>n1;
    int arr[n1];
    for(int i = 0; i <n1; i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;

    cout<<" minimum number of pages for "<< m <<" students is "<< allocatebooks(arr, n1, m)<<endl;
    

}