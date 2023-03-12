#include <iostream>
using namespace std;

int main() {
  
    
  int x=100;
  int *px;
  px=&x;

  cout<<"\nx= "<<x;
  cout <<"\nContents of px= "<<*px;
  cout<<"\n------------------------";
  cout<<"\nAddress of x= "<<&x;
  cout<<"\nAddress of x= "<<px;
  cout<<"\n------------------------";
  cout<<"\nAddress of x "<<long(&x);
  cout<<"\nAddress of x "<<long(px);
  cout<<"\n-------------------------";
  
    

  
 cout << "Hello World!\n";
}