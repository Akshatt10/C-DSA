#include<iostream>
using namespace std;

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
    cout<< name << endl;
    
    return 0;

}