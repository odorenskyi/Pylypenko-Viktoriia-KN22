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
        cout<<"�������� ����:<0.3.��������������:³�������� ����. ��� ��������� ����������. ����� ����� �������"<<endl;
if(x==1)
        cout<<"�������� ����:0.3-1.5.��������������:��� �����. ������ �� ����������"<<endl;
if(x==2)
        cout<<"�������� ����:1.6-9.4.��������������:��� ������ ���������� ��������. ��������� �����. ������ ����������"<<endl;
if(x==3)
        cout<<"�������� ����:9.4-5.4.��������������:������ �����, ��������� ���� ����. �������� �������"<<endl;
if(x==4)
        cout<<"�������� ����:5.5-7.9.��������������:��������� ���� ����� �����. ³��� ����� ��� �� ������ ������"<<endl;
if(x==5)
        cout<<"�������� ����:8.0-10.7.��������������:��������� ����� ����. �� ��� �'��������� ����"<<endl;
if(x==6)
        cout<<"�������� ����:10.8-13.8.��������������:��������� ����� ����"<<endl;
if(x==7)
        cout<<"�������� ����:13.9-17.1.��������������:��������� ������� �������� �����. �� ��� ���������� ����, �������"<<endl;
if(x==8)
        cout<<"�������� ����:17.2-20.7.��������������:��������� ���� �����, ����� ��� ����� ����"<<endl;
if(x==9)
        cout<<"�������� ����:20.8-24.4.��������������:������� ����������. ����� ������, ����� �����."<<endl;
if(x==10)
        cout<<"�������� ����:24.5-28.4.��������������:����� ����������. ������ ����������� � �������"<<endl;
if(x==11)
        cout<<"�������� ����:28.5-32.6.��������������:����� ����������"<<endl;
if(x==12)
        cout<<"�������� ����:>=32.7.��������������: ���������� �� ����������"<<endl;

    return 0;
}
int term(x,y)
{
    double deposit, interest_rate, monthly_interest_rate, total_interest, monthly_payment;
    int term_months;

    // �������� ������� �����
    cout << "������ ���� ��������: ";
    cin >> x;

    cout << "������ ����� 䳿 �������� � ������: ";
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
        cout << "����� 䳿 �������� ������� ���� 6 ������ ��� 12 ������." << endl;
        return 0;
    }

    // ���������� �������� ������ ������� �� �������� ���� �������
    monthly_interest_rate = pow(1 + interest_rate, 1.0 / 12) - 1;
    total_interest = x * interest_rate * y / 12;

    // ���������� ���� ��������� ������ �������
    monthly_payment = x * monthly_interest_rate;

    // ��������� ����������
    cout << "���� ��������� ������ �������: " << monthly_payment << " ���." << endl;
    cout << "�������� ���� ������� �� ���� ����� 䳿 ��������: " << total_interest << " ���." << endl;

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
