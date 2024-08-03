// merging 2 arrays in first array itself

#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m ){

    int i =0; 
    int j = 0;
    while( i<n && j<m){
        if(arr1[i] < arr2[j]){
            
          i++;
        }
        else{
            arr1[i] = arr2[j];
            j++;
            i++;
        }
    }
}
void print(int ans[], int n){
    for(int i=0; i<n; i++){
        cout<< ans[i] << " ";
    }
    cout<<endl;
}
int main(){

    int n1;
    int n2;
    int n3 = n1+n2;
    cin>>n1;
    int arrr[n1];
    for(int i=0; i< n1; i++){
        cin>>arrr[i];
    }
    cin>>n2;
    int arrr2[n2];
    for(int j=0; j< n2; j++){
        cin>>arrr2[j];
    }

    merge(arrr, n1, arrr2, n2);

    print(arrr,  n3);

    return 0;
}
