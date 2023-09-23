#include<iostream>
#include<string>
#include"cow.h"
using namespace std;
int main(){
  cow my_cow("Hildy",20,pet);
  cout << my_cow.get_name() << " is a type-"<< (int)my_cow.get_purpose()<<" cow."<<endl;
  cout << my_cow.get_name() << " is "<< my_cow.get_age() << " year old." << endl;
  return(0);
}