#include<iostream>
using namespace std;
int age[4];
float teamperature[]={35.7,66.33,12.64};
int main(){
    age[0]=4;
    age[1]=7;
    age[2]=10;
    age[3]=2;
    cout << "age[0]= "<< age[0]<< endl;
    cout << "age[1]= "<< age[1]<< endl;
    cout << "age[2]= "<< age[2]<< endl;
    cout << "age[3]= "<< age[3]<< endl;
    cout<<endl;
    cout << "temp[0]= "<< teamperature[0]<< endl;
    cout << "temp[1]= "<< teamperature[1]<< endl;
    cout << "temp[2]= "<< teamperature[2]+age[2]<< endl;



}