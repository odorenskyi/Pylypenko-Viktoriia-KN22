#include <iostream>
#include <ModulesPylypenko.h>
#include <windows.h>
#include <clocale>
#include <iomanip>
#include <cmath>

const float pi = 3.14159;

using namespace std;

float s_calculation(float x, float y, float z){
    return pow((x + y + z), 2) - 2 * pi * sqrt((1/3) * z);
}
void mainmenu(){
    int first,second,third;
    char action;
    cout<<"Enter your action: h, g, f "<<endl;
    cin>>action;

    if(action=='k')
    {  cout<<"Enter your x:"<<first<<endl;
       cout<<"Enter your y:"<<second<<endl;
       cout<<"Enter your z:"<<third<<endl;
       cout<<"Result: " << s_calculation(first,second,third)<<endl;
    }
    if(action=='h')
    {
         cout<<"Enter your number:"<<endl;
         cin>>first;

         windbyBafort(first);
    }
    if(action=='g')
    {
        cout<<"Enter your deposit: "<<first<<endl;
        cout<<"Enter your term months: "<<second<<endl;

       int term(int first, int second);
    }
    if(action=='f')
    {
        cout<<"Enter your N:"<<endl;
        cin>>first;
        bitN(first);
    }
    else{
        cout<<"\a"<<endl;
        cout<<"Enter new action: "<<endl;
        cin>>action;
        if(action=='s'||action=='S')
        {
            exit(0);
        }
        else{
            mainmenu();
        }
    }
}
int main()
{   mainmenu();
    return 0;
}
