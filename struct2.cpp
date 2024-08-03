#include<iostream>
using namespace std;
struct Value{
int x;
string y;
}value1;
int main(){
Value value2;
value1.x=10;
value1.y="xyz";
cout<< value1.x<<"\n";
cout<<value1.y<<"\n";
value2.x=20;
value2.y="abc";
cout<< value2.x<<"\n";
cout<<value2.y<<"\n";
return 0;
}