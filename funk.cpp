#include <iostream>
using namespace std;
void pause()
{
   cin.clear();
   cin.ignore(INT_MAX, '\n');
   cin.get();
}
int calc(int a, int b, int d){
    int rez;
    switch(d){
    case 1:
        rez=a+b;
    case 2:
        rez=a-b;
    case 3:
        rez=a*b;
    case 4:
        rez=a/b;
    }
    return rez;
}
int main(){
    setlocale(LC_ALL,"Ukrainian");
    int a,b,d,c;
    c=1;
    while(c==1){
    cout<<"Enter the operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division): "<<endl;
    cin>>d;
    cout<<"Enter two numbers with which you will perform these actions: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"The result of the action: "<<calc(a,b,d)<<endl;
    cout<<"Shall we continue? (0-no, 1-yes)"<<endl;
    cin>>c;
    }
    cout<<"Goodbye"<<endl;
    pause();
}