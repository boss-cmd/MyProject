#include <iostream>
#include <vector>
using namespace std;
bool isPowerOfTwo(int n) {
    if (n <= 0) // 0 and negative numbers are not powers of 2
        return false;
    return (n & (n - 1)) == 0;
}
vector<int> shortestArrang(const int &n){
vector <int> rez;
int n1=n;
int n2;
if(n%2!=0){
    rez.push_back(n-int(n/2));
    rez.push_back(int(n/2));
}
if(n%6==0){
 rez.push_back(int(n/3)+1);
 rez.push_back(int(n/3));
 rez.push_back(int(n/3)-1); 
}
if(n%2==0 and n%6!=0 and n%4!=0){
rez.push_back(int(n/4)+2);
rez.push_back(int(n/4)+1);
rez.push_back(int(n/4));
rez.push_back(int(n/4)-1);
}
if(n%4==0 and n%6!=0){
if(n%5==0){
    rez.push_back(int(n/5)+2);
    rez.push_back(int(n/5)+1);
    rez.push_back(int(n/5));
    rez.push_back(int(n/5)-1);
    rez.push_back(int(n/5)-2);
}
if(n%5!=0){
    if(n%7==0){
        n2=int(n1/7)+3;
        while(n1>0){
        n1=n1-n2;
        rez.push_back(n2);
        n2--;
        }
    }
    if(n%8!=0 and n%7!=0){
        n2=int(n1/8)+4;
        while(n1>0){
        n1=n1-n2;
        rez.push_back(n2);
        n2--;
        }
    }
    if(n%8==0 and n%7!=0){
        n2=int(n1/16)+8;
        while(n1>0){
        n1=n1-n2;
        rez.push_back(n2);
        n2--;
        }
    }
}
}

if(isPowerOfTwo(n)){
    rez.clear();
    rez.push_back(-1);
}
for(auto n:rez){
    cout<<n<<endl;
}
return rez;
}
int main(){
int q;
cout<<"Write the number of students in your class:"<<endl;
cin>>q;
shortestArrang(q);
system("pause");
return 0;
}