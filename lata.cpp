# include <iostream>

using namespace std;

int wiek;

int main ()
{
    cout<<"Witaj, podaj swoj wiek"<< endl;
    cin>>wiek;
    
    if ((wiek>=18)&&(wiek>=35))
    {
    cout<<"jestes pelnoletni i mozesz kandydowac na prezydenta";
    }
    else if ((wiek>=18)&&(wiek<=35))
    {
    cout<<"jestes pelnoletni ale nie mozesz kandydowac na prezydenta";
    }
    else 
    {
    cout<<"nie jestes pelnoletni i nie mozesz zostac prezydentem";
    }
    return 0;
}
