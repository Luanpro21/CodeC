#include<iostream>
using namespace std;

float GiaTri_1,GiaTri_2,result;
char operation;

int main(){
  cout <<"Nhap gia tri_1: "<<endl;
  cin >> GiaTri_1;
  cout <<"Nhap gia tri_2: "<<endl;
  cin >> GiaTri_2;
  cout <<"Chon phep tinh + - * / "<<endl;
  cin >> operation;
  switch (operation)
  {
  case '+':
    result = GiaTri_1+GiaTri_2;
    break;
      case '-':
    result = GiaTri_1-GiaTri_2;
    break;
      case '*':
    result = GiaTri_1*GiaTri_2;
    break;
      case '/':
    result = GiaTri_1/GiaTri_2;
    break;
  
  default:
    result = GiaTri_1+GiaTri_2;
    break;
  }
      cout << GiaTri_1 << operation << GiaTri_2 << " = " << result << endl;
    return (0);
}