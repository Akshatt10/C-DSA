#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch >='a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

bool palindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(tolowercase( a[s] ) != tolowercase( a[e] )){
            
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
      return 1;
}

void reverse(char name[], int n){

    int s= 0;
    int e= n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int lenght(char name[]){
    int count =0;
    for(int i=0; name[i]!= '\0'; i++ ){
        count++;
    }

    return count;
}

int main(){

    char name[20];
    cout<<"Enter the name"<<endl;
    cin>> name;
    int len = lenght(name);
    reverse(name, len);
    cout<<"Your name is"<<endl;
    cout<< name << endl;
    cout<<"Lenght is"<<endl;
    cout<< len << endl;
    cout<<"Palindrome or not:  "<< palindrome(name, len)<<endl;
    cout<<"Character is "<<tolowercase('b') << endl;
    cout<< "Character is "<< tolowercase('c') << endl;
    return 0;

}