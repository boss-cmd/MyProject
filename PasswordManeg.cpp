#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main( )
{
    int deist;
    string test,logpar;
    fstream f;
    setlocale(LC_ALL,"Ukrainian");
    f.open("D:\\C++ & PYTHON LOVE\\�++\\password.txt");
    if(!f){
        cout<<"���� �� ������"<<endl;
        return 0;
    }
    else{
       cout<<"���� ������"<<endl;
    }
    for(int i=0;i<3;i++){
    cout<<"����� ��������: 1 - �������� ������, 2 - ����, 3 - ����� ������(2 �� ��������)"<<endl;
    cin>>deist;
    switch(deist){
    case 1:
    getline(f,test);
    cout<<test<<endl;
    i=0;
    break;
    case 2:
    cout<<"������� ����� � ������ ����� ������."<<endl;
    cin>>logpar;
    f<<logpar;
    i=0;
    break;
    case 3:
     cout<<"����-����"<<endl;
     i=2;
     break;
    }
    f.close();
    }
    return 0;
}
