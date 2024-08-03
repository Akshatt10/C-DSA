#include<iostream>
using namespace std;

void reverse(int i, int j, string& str){

    //base case
    if(i>j)
        return ;

    swap(str[i],str[j]);
    i++;
    j--;

    //Recursive call
    reverse(i,j,str);


}



int main(){

    string str="abcde";
    reverse(0, str.length()-1, str);
    cout<<"New string is "<<str<<endl;
    return 0;
}