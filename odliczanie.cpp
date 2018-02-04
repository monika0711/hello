#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;


int main()
{
    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        system("clear");
        cout<<i<<endl;
    }
    cout<<"BOOOM!!!";
    
    return 0;
    
}


