#include <iostream>
using namespace std;

int main() {
 int Operator;
   int num1, num2;
   
 
  cout<<"Enter 2 no's";
  cin>>num1>>num2;
   cout<<"Please enter your choice \n Enter 1 for addition\n Enter 2for sub\n Enter 3 for mul \n Enter 4 for div:";
  cin>>Operator;
  switch (Operator) {
     case 1:
     cout<<"You have selected addition operation\n";
     cout<<"Result is: "<<num1+num2;
     break;
     
     
     default:
     cout<<"Invalid operator"; 
     break;
      
  }
  return 0;
}
