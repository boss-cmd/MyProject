#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Ukrainian");
    long a,b,check;
    int c,o;
    cout<<"Введіть першу і другу цифри."<<endl;
    cin>>a;
    cin>>b;
    if(b==0){
        cout<<"На нуль не можна ділити!"<<endl;
        return 0;
    }
    c=a/b;
    o=a-(b*c);
    if(o<0){
      o=-1*(a-(b*c));
    }
    cout<<"Остаток = "<<o<<endl;
    check=(a-o)%b;
    if(check!=0){
        cout<<"Не правильно!"<<endl;
    }
    else{
        cout<<"Правильно!"<<endl;
    }
    return 0;
}
