#include<iostream>
#include<string>
#include<vector>
#include"cow.h"
using namespace std;

vector<int>primes;
int main(){
  primes.push_back(2);
  primes.push_back(5);
  primes.push_back(52);
  primes.push_back(21);
  primes.push_back(26);
  primes.push_back(53);
  cout << "The vector has "<<primes.size()<<" elements."<< endl;
  cout << "The element at index 2 is "<< primes[2]<<endl;
  primes[2]=13;
  cout << "The element at index 2 is "<< primes[2]<<endl;

  vector <cow> cattle;
  cattle.push_back(cow("Betty",6,meat));
  cattle.push_back(cow("Libby",4,hide));
  cattle.push_back(cow("Trudy",5,pet));
  cattle.push_back(cow("Betsy",2,dairy));

  cout << "The first cow is "<< cattle.begin()->get_name()<<endl;
  cout << "At index 1 we have " << cattle[1].get_name()<<endl;
  cout << "Next to last is " << prev(cattle.end(),2)->get_name()<<endl;
  cout << "The last cow is " << (cattle.end()-1)->get_name()<< endl; 
  return(0);
}