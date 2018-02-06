#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int liczba, wpisana_liczba, proba=0;

int main()
{
    cout<<"Czesc! Pomyslalem liczbe 1...100:"<<endl;
    srand(time(NULL));
    liczba = rand()%100+1;
   
    
    while(wpisana_liczba!=liczba)
    {
      proba++;
      cout<<"Zgadnij jaka to liczba (to twoja "<<proba<<" proba):";
      cin>>wpisana_liczba;
      
      if(wpisana_liczba==liczba)
      cout<<"Brawo! wygrales!(wygrales w "<<proba<<" probie)"<<endl;
      
      else if (wpisana_liczba<liczba)
      cout<<"To za malo!"<<endl;
      
      else if(wpisana_liczba>liczba)
      cout<<"to za duzo"<<endl;
      
      
    }
    
    getchar();

    return 0;
}


