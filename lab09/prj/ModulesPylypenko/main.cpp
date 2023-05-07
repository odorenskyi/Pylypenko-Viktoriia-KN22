#include "ModulesPylypenko.h"
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cmath>
#include <bitset>
#include <main.h>

using namespace std;
int windbyBafort(int x)
{
setlocale(LC_ALL,"ukr");
if(x==0)
        cout<<"Швидкість вітру:<0.3.Характеристика:Відсутність вітру. Дим піднімається прямовисно. Листя дерев нерухлмі"<<endl;
if(x==1)
        cout<<"Швидкість вітру:0.3-1.5.Характеристика:Дим пливе. Флюгер не обертається"<<endl;
if(x==2)
        cout<<"Швидкість вітру:1.6-9.4.Характеристика:Рух повітря відчувається обличчям. Шелестить листя. Флюгер обертається"<<endl;
if(x==3)
        cout<<"Швидкість вітру:9.4-5.4.Характеристика:Тріпоче листя, хитаються дрібні гілки. Майорять прапори"<<endl;
if(x==4)
        cout<<"Швидкість вітру:5.5-7.9.Характеристика:Хитаються тонкі ггілки дерев. Вітер піднімає пил та шматки паперу"<<endl;
if(x==5)
        cout<<"Швидкість вітру:8.0-10.7.Характеристика:Хитаються великі гілки. На воді з'являються хвилі"<<endl;
if(x==6)
        cout<<"Швидкість вітру:10.8-13.8.Характеристика:Хитаються великі гілки"<<endl;
if(x==7)
        cout<<"Швидкість вітру:13.9-17.1.Характеристика:Хитаються невеликі стовбури дерев. На морі здіймаються хвилі, піняться"<<endl;
if(x==8)
        cout<<"Швидкість вітру:17.2-20.7.Характеристика:Ламаються гілки дерев, важко йти проти вітру"<<endl;
if(x==9)
        cout<<"Швидкість вітру:20.8-24.4.Характеристика:Невеликі руйнування. Зриває покрівлі, руйнує димарі."<<endl;
if(x==10)
        cout<<"Швидкість вітру:24.5-28.4.Характеристика:Значні руйнування. дерева вириваються з корінням"<<endl;
if(x==11)
        cout<<"Швидкість вітру:28.5-32.6.Характеристика:Великі руйнування"<<endl;
if(x==12)
        cout<<"Швидкість вітру:>=32.7.Характеристика: Призводить до спустошень"<<endl;

    return 0;
}
int term(x,y)
{
    double deposit, interest_rate, monthly_interest_rate, total_interest, monthly_payment;
    int term_months;

    // Введення вхідних даних
    cout << "Введіть суму депозиту: ";
    cin >> x;

    cout << "Введіть строк дії договору у місяцях: ";
    cin >> y;

    if (y == 6)
    {
        interest_rate = 0.16;
    }
    else if (y == 12)
    {
        interest_rate = 0.18;
    }
    else
    {
        cout << "Строк дії договору повинен бути 6 місяців або 12 місяців." << endl;
        return 0;
    }

    // Обчислення щомісячної ставки відсотків та загальної суми відсотків
    monthly_interest_rate = pow(1 + interest_rate, 1.0 / 12) - 1;
    total_interest = x * interest_rate * y / 12;

    // Обчислення суми щомісячних виплат відсотків
    monthly_payment = x * monthly_interest_rate;

    // Виведення результатів
    cout << "Сума щомісячних виплат відсотків: " << monthly_payment << " грн." << endl;
    cout << "Загальна сума відсотків за весь строк дії договору: " << total_interest << " грн." << endl;

    return 0;
}

int bitN(int N)
{
    unsigned int n;
    cout << "Enter a natural number from 0 to 9008000: ";
    cin >> n;

    int zeros = 0;
    int ones = 0;
    bool return_zeros = false;
    for (int i = 0; num > 0;i++){
        if (i == 13){
            if (num%2 == 0){
                return_zeros = true;
           }
        }
        if (num%2 == 1){
            ones++;
        }
        else {
            zeros++;
        }
        num >>= 1;
    }
    if (return_zeros){
        return zeros;
    }
    else{
        return ones;
    }
}
