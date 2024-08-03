#include<iostream>
using namespace std;

bool ispresent(int arr[][4], int target, int i , int j) {
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if( arr[i][j] == target){
                return 1;
            }
            }
        }
          
        return 0;
}
void sum(int arr[][4], int i, int j){
      for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){

           sum += arr[i][j];
        }
        cout<<sum<<" \n";
      }
      cout<<endl;

}
int largestrowsum(int arr[][4], int i, int j){
     int max = INT16_MIN;
     int rowindex = -1;
     for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){

           sum += arr[i][j];
        }
        if(sum > max){


            max = sum;
            rowindex = i;
        }
      }
      cout<<"maximum sum is"<< max<< endl;
      return rowindex;
}
int main() {
    int arr[3][4];
    cout<<"Enter the elements"<<endl;
//row wise input leta hai

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];

        }
    }
    cout<<"Printing the array"<< endl;

    for(int i=0; i<3; i++){
        for(int j=0;j<4; j++){
            cout << arr[i][j]<< " ";
        }

        cout<<endl;
    }

    cout<<"Enter the element to be search" << endl;
    int target;
    cin>>target;

    if(ispresent(arr, target, 3, 4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<< endl;
    }

    sum(arr,3,4);
    cout<<"Maximum row index is"<< largestrowsum(arr, 3,4)<<endl;

    return 0;
}
