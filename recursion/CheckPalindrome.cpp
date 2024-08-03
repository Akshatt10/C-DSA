#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    //base case
    if(i>j){
        return true ;

    }

    if(str[i]!=str[j])
        return false;
    else{
        return checkPalindrome(str, i+1, j-1);
    }

}

int main(){

    string str = "abbbba";
    cout<<endl;

    bool ispalindrome = checkPalindrome(str,0,str.length()-1);

    if(ispalindrome){
        cout<<"IS PALINDROME"<< endl;
    }
    else{
        cout<< "NOT PALINDROME" <<endl;
    }
    return 0;
}