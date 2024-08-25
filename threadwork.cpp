#include <iostream>
#include <thread>
#include <chrono> 
using namespace std;

void LRTusk(int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Thread running " << i << endl;  // Вывод текущего шага выполнения
     this_thread::sleep_for(chrono::seconds(1));
    }
    cout<< "Exit!"<<endl;
}

int main() {
    thread t1(LRTusk,3);  // Создание потока, который запускает функцию printMessage
    t1.join();  // Ожидание завершения потока перед выходом из main
    thread t2(LRTusk,2);  // Создание потока, который запускает функцию printMessage
    t2.join();  // Ожидание завершения потока перед выходом из main
    thread t3(LRTusk,1);  // Создание потока, который запускает функцию printMessage
    t3.join();  // Ожидание завершения потока перед выходом из main
    return 0;
}
