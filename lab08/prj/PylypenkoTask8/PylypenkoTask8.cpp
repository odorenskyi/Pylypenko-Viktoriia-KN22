#include <iostream>
#include <clocale>
#include <windows.h>
#include <iomanip>
#include <ModulesPylypenko.h>

using namespace std;

string copyright() {
    return "(c) Пилипенко Вікторія";
}

char expression(char a, char b)
{
    if (a + 1 < b){
        cout << "1";
    }else{
        cout << "0";
    }
}

float DecHexSFunc(float x, float y, float z) {

    cout << "В десятковiй: " << endl;
    cout << "x: " << dec << x << endl;
    cout << "y: " << dec << y << endl;
    cout << "z: " << dec << z  << endl << endl;
    cout << "В шiстнадцятковiй: " << endl;
    cout << "x: " << hex << x << endl;
    cout << "y: " << hex << y << endl;
    cout << "z: " << hex << z << endl << endl;
    cout << "Результат обчислення виразу: S = " << s_calculation(x,y,z) << endl;
    return 0;
}


int main() {
    setlocale(LC_ALL, "ukr");
    cout << copyright() << endl << endl;

    int x, y, z;
    char a, b;

    cout << "Введiть x: ";
    cin >> x;
    cout << "Введiть y: ";
    cin >> y;
    cout << "Введiть z: ";
    cin >> z;
    cout << "Введiть 'a': ";
    cin >> a;
    cout << "Введiть 'b': ";
    cin >> b;

    cout << "Результат виразу: a + 1 < b: " << expression(a, b) << endl;
    cout << DecHexSFunc(x, y, z);
    return 0;
}
