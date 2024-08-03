
#include<iostream>
using namespace std;
void replace(string str){
	string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    cout<< temp<< endl;;
}

int main(){
    string s;
    cout<<replace(s)<<endl;
    for(int j=0; j<s.length(); j++){
        cin>>s[j];
    }
}