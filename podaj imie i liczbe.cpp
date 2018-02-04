#include <iostream>

using namespace std;

int liczba; string imie;

int main()

{
    cout<<"Podaj swoje imie:";
    cin>>imie;
    cout<<"podaj dodatnia liczbe calkowita:";
    cin>>liczba;
    
    for (int i=1; i<=liczba; i++)
    {
      cout<<i<<")"<<imie<<endl;
    }
    
    return 0;
    
}


