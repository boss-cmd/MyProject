#include <iostream> //основная либа бля всего
#include <stdlib.h> 
#include <conio.h> // Считывает нажатия и кнопки с клавы.
#include <random> //отвечает за корректную работу рандома как и stdlib
#include <windows.h> // Позволяет делать задержки (в коде это будет реализовано как Sleep 200)
using namespace std;

bool gameover;
const int height=20;
const int width=20;
int x,y,fx,fy,score;
enum ED{S=0, L, R, U, D};
ED dir;

void MakeFruit()
{
	fx = (rand() % (width-1)) + 1;
	fy = (rand() % (height-1)) + 1;
}

void Setup(){ // Функция первоначальной настройки игры.
    gameover=false;
    dir=S;
    x=width/2; // Ширина, на которой находится наша змейка. Изначально - центр.
    y=height/2; // Высота, на которой находится наша змейка. Изначально - центр.
    score=0;
    srand(time(0));
    MakeFruit();
}

void Draw() // Функция отрисовки карты. 
{
    system("cls");
    for (int i = 0; i < width; i++) cout << '#';
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        cout << '#';
        for (int j = 2; j < width; j++)
        {
            if(i==y and j==x){cout<<"0";}
            else{ 
                if(i==fy and j==fx){cout<<"F";}
                else{cout << ' ';}
                }
        }
        cout << '#' << endl;
    }
    for (int i = 0; i < width; i++) cout << '#';
    cout << endl;
    cout<<"Score: "<<score<<endl;
}

void input(){ // Функция для считывания ввода.
    if(_kbhit()){
        switch (_getch()){
            case 'a':
                dir=L;
                break;
            case 'd':
                dir=R;
                break;
            case 'w':
                dir=U;
                break;
            case 's':
                dir=D;
                break;
            case 'x':
                gameover=true;
                break;
        }
    }
}


void logic(){ // Вся логика игры.
    switch(dir){
        case L:
            x--;
            break;
        case R:
            x++;
            break;
        case U:
            y--;
            break;
        case D:
            y++;
            break;
    }
    if(x>width or x<0 or y>height or y<0){
        gameover=true;
    }
    if(x==fx and y==fy){
        score++;
        MakeFruit();
    }
}

int main(){
Setup();
while(gameover==false){
    Draw();
    input();
    logic();
    Sleep(200);
}
if(gameover==true){
    system("cls");
    cout<<"Game over!"<<"\n Your score: "<<score<<"\n Press enter to exit!"<<endl;
    cin.get();
}
return 0;
}