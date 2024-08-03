#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int originaln=n;
    while(n>0){
        int lastdig = n%10;
        s+= pow(lastdig,3);
        n=n/10;


    }
    if(s==originaln){
        cout<<"The number is armstrong"<<endl;
    }
    else{
        cout<<"not a armstorng number"<<endl;
    }
}