#include <iostream>
using namespace std;

string PIN;

int main()
{
    cout<<"Witaj w banku"<<endl;
    cout<<"Podaj kod PIN:";
    cin>> PIN;
    
    if (PIN=="1234")
    {
    cout<<"Poprawny PIN";
    }

    else if(PIN!="1234")
    {
        
        cout<<"Niepoprawny PIN";
        
    }
    return 0;

}  