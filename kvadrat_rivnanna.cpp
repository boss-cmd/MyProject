#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,x,d;
    int deistnumb = 2, check;
    for(int i=0; i<deistnumb; i++){
        cout<<"Enter the equation (constants a, b and c only)"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<a<<"x2+"<<b<<"x+"<<c<<endl;
        cout<<"Is this the correct equation? (Yes - 0, No - 1)"<<endl;
        cin>>check;
        if(check==0){
            d=pow(b , 2) - 4*a*c;
            cout<<"D="<<d<<endl;
            cout<<"X1="<<((b*-1)+sqrt(d))/(2*a)<<endl;
            cout<<"X2="<<((b*-1)-sqrt(d))/(2*a)<<endl;
            cout<<"Shall we continue? (Yes - 0, No - 1)"<<endl;
            cin>>check;
            if(check==0){
                i=0;
            }
            else{
                return 0;
            }
        }
        else{
           cout<<"Then re-enter"<<endl;
           i = 0;
        }
    }

    return 0;
}