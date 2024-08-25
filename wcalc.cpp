#include <iostream>
#include <math.h> //Для округлення.

using namespace std;


int Calculate(float dv, float dO, float n, float arm, float br){
return round((dv*dO*n)/(arm *(1-br)));
}

void pause()
{
   cin.clear();
   cin.ignore(INT_MAX, '\n');
   cin.get();
}


int main(){
float d1,d2,N,ar,b,ch;
bool c=true;
while(c==true){
cout<<"\n Write the variables in this order: species damage, basic damage, number of units, armor penetration and armor"<<endl;
cin>>d1;
cin>>d2;
cin>>N;
cin>>b;
cin>>ar;
cout<<"Total damage that you caused it: "<<Calculate(d1,d2,N,ar,b)<<endl;
cout<<"Continue(0-yes, 1-no)?"<<endl;
cin>>ch;
if(ch==1 or ch!=0 and ch!=1){
    c=false;
}
}
cout<<"Goodbye!"<<endl;
pause();
return 0;
}