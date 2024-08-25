#include <iostream>
#include "math.h"
using namespace std;
//Задание 1
//float degree(float num, float deg){
//return pow(num,deg);
//}
//int main(){
//float n,d;
//cout<<"write you number and degree"<<endl;
//cin>>n;
//cin>>d;
//cout<<"results: "<<degree(n,d)<<endl;
//system ("pause");
//return 0;
//}
//Задание 2
//int sum (int a, int b){
//int rez=0;
//if(a>=b){
//for(int i=b+1;i<a;i++){
//rez=rez+i;
//}
//}
//if(a<b){
//for(int j=a+1; j<b;j++){
//rez=rez+j;
//}
//}
//return rez;
//}
//int main(){
//int x,y;
//cout<<"Write you number:"<<endl;
//cin>>x;
//cin>>y;
//cout<<"result: "<<sum(x,y)<<endl; //Ремарка, сумма цыфр между двумя заданными не включает сами заданные (Однако, это можно исправить изменив цыкл).
//system ("pause");
//return 0;
//}
//Задание 5
bool is_number(const string& s)
{
    return !s.empty() && (s.find_first_not_of("0123456789") == s.npos);
}
bool num6(const string& n){
    if (is_number(n)){
        if(size(n)==6){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
void luknum(const string& nm){
if(num6(nm)){
int nm1=stoi(nm);
int n1 = nm1 / 100000;
int n2 = (nm1 / 10000) % 10;
int n3 = (nm1 / 1000) % 10;
int n4 = (nm1 / 100) % 10;
int n5 = (nm1 / 10) % 10;
int n6 = nm1 % 10;
if(n1+n2+n3==n4+n5+n6){
 cout<<"Number is lucky!"<<endl;  
}
else{
    cout<<"Number not is lucky!"<<endl;
}
}
else{
    cout<<"This is not a number or this number is not 6 digits"<<endl;
}
}
int main(){
string n;
cout<<"write your number: "<<endl;
cin>>n;
luknum(n);
return 0;
}
