#include <iostream>
#include <time.h>

using namespace std;

int liczba, i;

int main()
{
  cout<<"Witaj! Maszyna losujaca jest pusta, nastepuje zwolnienie blokady i zaczynamy losowanie szesc liczb"<<endl;

  srand(time(NULL));
  
  for (i=1; i<=6; i++)
  {
    liczba =rand()%49+1;
   
    cout<<liczba<<endl;
  }
  return 0;
}