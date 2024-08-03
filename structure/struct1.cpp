#include <iostream>
using namespace std;
struct Students{
int roll;
int age;
int marks;
void printDetails(Students S);
};
void Students::printDetails(Students S)
{
cout<<"Roll = "<<S.roll<<"\n";
cout<<"Age = "<<S.age<<"\n";
cout<<"Marks = "<<S.marks;
}
int main(){
Students S1, S2;
S1.roll = 12345;
S1.age = 25;
S1.marks=20;
S1.printDetails(S1);
return 0;
}
