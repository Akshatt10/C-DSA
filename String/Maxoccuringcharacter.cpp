#include<iostream>
using namespace std;
char max(string s){
    int arr[26] = {0};

    //Create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int n = 0;
        //lowercase
        if(ch>='a'&&ch<='z'){
            n = ch-'a';
        }
        else{//uppercase
             n = ch-'A';
        }
        arr[n]++;
    }
    int maxi= -1;
    int ans = 0;
    for(int i =0; i<26; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a'+ans;
    return finalans;
}

int main(){

    string s;
    cin>>s;
      cout<<max(s)<<endl;
      return 0;

}