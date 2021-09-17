//zadanie 2
//wykonanie: Patryk Jajdyk(09.09.21)
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
int x, y;

string tab_imie[10];
string tab_nazwisko[10];

tab_imie[0] = "Andrzej" ;
tab_imie[1] = "Bartosz" ;
tab_imie[2] = "Maciek"  ;
tab_imie[3] = "Hubert"  ;
tab_imie[4] = "Szymon"  ;
tab_imie[5] = "Filip"   ;
tab_imie[6] = "Oskar"   ;
tab_imie[7] = "Marek"   ;
tab_imie[8] = "Alex"    ;
tab_imie[9] = "Oles"    ;
 
tab_nazwisko[0] = "Nowak"      ;
tab_nazwisko[1] = "Kowalski"   ;
tab_nazwisko[2] = "Wisniewski" ;
tab_nazwisko[3] = "Wojcik"     ;
tab_nazwisko[4] = "Kowalczyk"  ;
tab_nazwisko[5] = "Kaminski"   ;
tab_nazwisko[6] = "Lewandowski";
tab_nazwisko[7] = "Zielinski"  ;
tab_nazwisko[8] = "Szymanski"  ;
tab_nazwisko[9] = "Wozniak"    ;

srand(time(NULL));
for(int i=0; i<10; i++)
    {
        for(int a=0; a<10; a++)
        {
            x=rand()%10;
            y=rand()%10;
            cout<<tab_imie[x]<< " " << tab_nazwisko[y]<< "    "<<"\t";
        }
cout<<endl;  
    }      
}
