#include<iostream>
using namespace std;
int sum(int n){
    int summ = 0;
    for(int i = 1; i<=n; i++)
    summ = summ + i;
    return summ;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;



}