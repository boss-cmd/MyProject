#include <iostream>
#include <vector>
using namespace std;
class Car{
public:
int wheels;
string TP;
int mileage;
string color;
Car(int W, int Mil, string C): wheels(W), mileage(Mil), color(C){}
void displayinfo(){
    try{
    if(wheels<1 or mileage<0) {throw runtime_error("Помилка! У вас неправильна кількість коліс чи пробігу.");} 
    cout<<"Тип машини: "<<TP<<"\n Колір машини: "<<color<<"\n Пробіг: "<<mileage<<"\n Кількість коліс: "<<wheels<<endl;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
void CC(){
    try{
    cout<<"Введіть кількість коліс, пробіг, колір: "<<endl;
    cin>>wheels;
    cin>>mileage;
    cin>>color;
    if(wheels<1 or mileage<0) { throw runtime_error("Помилка! У вас неправильна кількість коліс чи пробігу.");}
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
};
class Sedan: public Car{
public:
string TP="Легковий автомобіль";
int NOD;
Sedan(int W, int Mil, string C, int N): Car(W,Mil,C), NOD(N){}
void displayinfo(){
    try{
    if(NOD<1){throw runtime_error("Помилка! У вас замало дверей!");}
    Car::displayinfo();
    cout<<"Кількість дверей: "<<NOD<<endl;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
void CC(){
    try{
    Car::CC();
    cout<<"Введіть кількість дверей: "<<endl;
    cin>>NOD;
    if(NOD<1){throw runtime_error("Помилка! У вас замало дверей!");}
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
};
class Pickup: public Car{
public:
string TP="Пікап";
int mspeed;
Pickup(int W, int Mil, string C, int S): Car(W,Mil,C), mspeed(S){}
void displayinfo(){
    try{
    if(mspeed<0){throw runtime_error("Помилка! Не буває від'ємної швидкості!");}
    Car::displayinfo();
    cout<<"Максимальна швидкість: "<<mspeed<<endl;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
void CC(){
    try{
    Car::CC();
    cout<<"Введіть максимальну швидкість: "<<endl;
    cin>>mspeed;
    if(mspeed<0){throw runtime_error("Помилка! Не буває від'ємної швидкості!");}
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
};
class Truck: public Car{
public:
string TP="Вантажівка";
int LC;
Truck(int W, int Mil, string C, int L): Car(W,Mil,C), LC(L){}
void displayinfo(){
    try{
    if(LC<0){throw runtime_error("Помилка! У вас замала вантажопідйомність!");}
    Car::displayinfo();
    cout<<"Вантажопідйомність: "<<LC<<endl;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
void CC(){
    try{
    Car::CC();
    cout<<"Введіть Вантажопідйомність: "<<endl;
    cin>>LC;
    if(LC<0){throw runtime_error("Помилка! У вас замала вантажопідйомність!");}
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
};
class Bus: public Car{
public:
string TP="Автобус";
int NOP;
Bus(int W, int Mil, string C, int P): Car(W,Mil,C), NOP(P){}
void displayinfo(){
    try{
    if(NOP<0){throw runtime_error("Помилка! У вас замала людовмісткість!");}
    Car::displayinfo();
    cout<<"Людовмісткість: "<<NOP<<endl;
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
void CC(){
    try{
    Car::CC();
    cout<<"Введіть Людовмісткість: "<<endl;
    cin>>NOP;
    if(NOP<0){throw runtime_error("Помилка! У вас замала людовмісткість!");}
    }
    catch(const exception& e){
        cerr << e.what() << endl;
    }
}
};
void CS(vector<Sedan>& VS){
    int ki;
    Sedan* mys=new Sedan(0,0,"black",0);
    cout<<"Введіть кількість авто, які хочите додати: "<<endl;
    cin>>ki;
    for(int i=0; i<ki;ki++){
        mys->CC();
        VS.push_back();
    }
}
int main(){
setlocale(LC_ALL, "Ukrainian");
Sedan* SD= new Sedan(4, 100, "White", 4);


return 0;
}