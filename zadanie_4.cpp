//zadanie 4
//wykonanie: Patryk Jajdyk(09.09.21)
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
int tab[10];
int x;
int max=0;
srand(time(NULL));
for(int a=0; a<10; a++)
    {
        tab[a]=rand()%100;
        cout<<tab[a]<< "\t";
        if(tab[a]>max)
        {
            max=tab[a];
        }

    }

cout<<endl;
cout<< "Najwieksza liczba to: " << max;
}
