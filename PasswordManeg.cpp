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
    f.open("D:\\C++ & PYTHON LOVE\\с++\\password.txt");
    if(!f){
        cout<<"Файл не открыт"<<endl;
        return 0;
    }
    else{
       cout<<"Файл открыт"<<endl;
    }
    for(int i=0;i<3;i++){
    cout<<"Введи действие: 1 - просмотр списка, 2 - ввод, 3 - конец сеанса(2 не работает)"<<endl;
    cin>>deist;
    switch(deist){
    case 1:
    getline(f,test);
    cout<<test<<endl;
    i=0;
    break;
    case 2:
    cout<<"Введите логин и пароль через пробел."<<endl;
    cin>>logpar;
    f<<logpar;
    i=0;
    break;
    case 3:
     cout<<"Пока-пока"<<endl;
     i=2;
     break;
    }
    f.close();
    }
    return 0;
}
