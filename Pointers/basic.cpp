#include<iostream>
using namespace std;

int main(){
    //int num = 5;
    //int *p =0;
    //p = &num;
    //cout<<num<<endl;

    //address of any operator -> &
    //cout<<"Address of num is"<<p<< endl;
    //cout<<"Value is "<< *p<<endl; 
    //int num =5;
    //int a =num;
    //a++;
    //cout<< num << endl;
    //int *p = &num;
    //cout<<"before"<<num<<endl;
    //(*p)++;
    //cout<<"after"<<num<<endl;

    // COPYING A POINTER
   // int *q = p;
    //cout<<p<<"-"<<q<<endl;
    //cout<<*p<<"-"<<*q<<endl;

    //Important concept

   // int i=3;
   // int *t = &i;
   // cout<<(*t)++<<endl;

    //float f=10.5;
    //float p=2.5;
    //float *ptr=&f;
    //(*ptr)++;
   // *ptr=p;
    //cout<<*ptr<<" "<<f<<" "<<p<<endl;

    //int *pptr=0;
   // int a =20;
    //*pptr=a;
   // cout<<*pptr;

   char ch='a';
   char*ptr=&ch;
   ch++;
   cout<<*ptr;
    int a = 7;
    int *c = &a;
    c = c + 3;
    cout<< c << endl;

    return 0;
}