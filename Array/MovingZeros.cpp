#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& num) {

    int i = 0;

    for(int j=0; j<num.size(); j++){
        if(num[j]!=0){
            swap(num[j], num[i]);
            i++;
        }
    }
}