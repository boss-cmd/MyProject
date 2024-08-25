#include <iostream>
#include <windows.h> // Необхідна бібліотека для коліру тексту.
using namespace std;
void pause()
{
   cin.clear();
   cin.ignore(INT_MAX, '\n');
   cin.get();
}
int main()
{
int check;
char d;
float a,b,deistnumb;
HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE); //Це для покраски тексту будемо використовувати.
deistnumb = 2;
for(int i=0;i<deistnumb;i++){
    cout<<"\n Write an action (+,-,/,*)!"<<endl;
    cin>>d;
    if(d!='+'&d!='-'&d!='*'&d!=':'&d!='/'){
        cout<<"You entered an action that does not exist."<<endl;
        pause();
        return 0;
    }
    cout<<"First number."<<endl;
    cin>>a;
    cout<<"Second number."<<endl;
    cin>>b;
    if(d==':'&b==0 or d=='/'&b==0){
        cout<<"You cannot divide by zero!"<<endl;
        pause();
        return 0;
    }
    SetConsoleTextAttribute(hstdout,FOREGROUND_GREEN); //Надаємо колір тексту.
    if(d=='+'){
        cout<<a<<'+'<< b<<'='<<a+b<<endl;
    }
    if(d=='-'){
        cout<<a<<'-'<< b<<'='<<a-b<<endl;
    }
    if(d=='*'){
        cout<<a<<'*'<< b<<'='<<a*b<<endl;
    }
    if(d==':' or d=='/'){
        cout<<a<<':'<< b<<'='<<a/b<<endl;
    }
    SetConsoleTextAttribute(hstdout,FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY); //Робимо текст знову білим.
    cout<<"Continue? 0 - yes, 1 - no:"<<endl;
    cin>>check;
    if(check==0){
            cout<<"Ok!"<<endl;
            i=0;
    }
    else{
            cout<<"Gooodbye"<<endl;
            pause();
            return 0;
    }
}
return 0;
}
