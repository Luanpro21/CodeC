#include<iostream>
#include<string>

using namespace std;

struct man{
  string masv;
  string ten;
  int tuoi;
  float toan,ly,hoa;
  bool gt;
  }
int main(){
 man my_man;
 my_man.masv;
 my_man.tuoi="20";
  my_man.ten="Luan";
  my_man.toan="10";
  my_man.ly="9";
  my_man.hoa="6";
  cout << my_man.ten << " is a type-"<< (int)my_man.toan<<" cow."<<endl;
  cout << my_man.ten << " is "<< my_man.tuoi << " year old." << endl;
  return(0);
}