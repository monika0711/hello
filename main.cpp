
#include <iostream>

using namespace std; 

int uczniowie, cukierki, ile_cukierkow_dostanie_kazdy_uczen, ile_cukierkow_dostnie_jas;

int main() { cout<<"ile cukierkow kupila mama:"; cin>>cukierki; cout<<"ile jest uczniow w klasie:"; cin>>uczniowie;

ile_cukierkow_dostanie_kazdy_uczen=cukierki/(uczniowie-1);
cout<<"ile_cukierkow_dostanie_kazdy_uczen:"<<ile_cukierkow_dostanie_kazdy_uczen;

ile_cukierkow_dostnie_jas=cukierki-ile_cukierkow_dostanie_kazdy_uczen*(uczniowie-1);
cout<<endl<<"ile_cukierkow_dostnie_jas:"<<ile_cukierkow_dostnie_jas;

return 0;
}


