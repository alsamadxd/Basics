#include<iostream>
using namespace std;

int main(){
  int a=5;
  int* b=&a;
  int** c=&b;
  cout<<"value at &a "<<&a<<endl;
  cout<<"value at b "<<b<<endl;
  cout<<"value at *b "<<*b<<endl;
  cout<<"value at &b "<<&b<<endl;

  cout<<"\nvalue at &c "<<&c<<endl;
  cout<<"value at c "<<c<<endl;
  cout<<"value at *c "<<*c<<endl;
  cout<<"value at **c "<<(**c)<<endl;
  
  return 0;
} 