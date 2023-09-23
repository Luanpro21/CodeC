#include<iostream>
#include<string>

using namespace std;

enum cow_purpose {dairy,meat,hide,pet};
struct cow{
  string name;
  int age;
  unsigned char purpose;
};
int main(){
  cow my_cow;
  my_cow.age=20;
  my_cow.name="Luan";
  my_cow.purpose=dairy;
  cout << my_cow.name << " is a type-"<< (int)my_cow.purpose<<" cow."<<endl;
  cout << my_cow.name << " is "<< my_cow.age << " year old." << endl;
  return(0);
}