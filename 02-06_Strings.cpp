#include<iostream>
#include<string>
#include<cstring>

using namespace std;
const int LENGTH1 =25;
char array_str1[LENGTH1]="Hey guys! ";
char array_str2[] = "What's up? ";
string std_str1 = "Hi everybody! ";
string std_str2 = "How the going? ";
int main(){
  cout << array_str1+std_str2<< endl;
  return (0);
}