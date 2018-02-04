#include <iostream>
using namespace std;

string login, haslo;

int main()
{
    cout<<"Witaj, Zaloguj sie"<<endl;
    cout<<"Podaj login:";
    cin>> login;
    
    cout<<"Podaj haslo:";
    cin>> haslo;
    
    if ((login=="monika")&& (haslo=="test"))
    {  
    cout<<"Udalo sie!";
    }
    
    else if ((login!="monika")&& (haslo!="test"))
    {
        cout<<"Nieudalo sie zalogowac! Sprobuj ponownie";
    }
    
    if ((login=="monika") &&(haslo!="test"))
    {
        cout<<"Niepoprawne haslo";
    }
    
    else if ((login!="monika")&&(haslo=="test"))
    {
        cout<<"niepoprawny login";
    }
    return 0;
} 
