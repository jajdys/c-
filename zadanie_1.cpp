//zadanie 1.
//wykonanie: Patryk Jajdyk(09.09.21)
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
	int tab[6][6];
	int wybor,liczba;

	srand(time(NULL));
	for (int a = 0; a < 6; a++) 
	{
		for (int b = 0; b < 6; b++) 
		{
			tab[a][b] = (rand() % 100) + 1;
			cout << tab[a][b] << "\t";
		}
		cout << endl;
	}
wybor_:
	cout << endl;
	cout << "Co mam zrobic z liczbami?" << endl;
	cout << "1.dodac liczbe podana pozniej" << endl;
	cout << "2.pomnozyc przez liczbe podana pozniej" << endl;
	cin >> wybor;
	switch (wybor) 
	{
	case 1:
		cout << "Jaka liczbe mam dodac?" << endl;
		cin >> liczba;
		for (int a = 0; a < 6; a++) 
		{
			for (int b = 0; b < 6; b++) 
			{
				tab[a][b] += liczba;
				cout << tab[a][b] << "\t";
			}
			cout << endl;
		}
		break;
	case 2:
		cout << "Jaka liczbe mam mnozyc?" << endl;
		cin >> liczba;
		for (int a = 0; a < 6; a++)
		{
			for (int b = 0; b < 6; b++)
			{
				tab[a][b] *= liczba;
				cout << tab[a][b] << "\t";
			}
			cout << endl;
		}
		break;
	}
}
