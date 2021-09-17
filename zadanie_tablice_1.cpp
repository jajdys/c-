#include<iostream>
//zadania 1 (16.09.21)
//wykonanie: Patryk Jajdyk
using namespace std;

int main()
{
	int tab[2][2];
	int a, b;
	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			cin >> tab[a][b];
		}
	}



	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 2; b++)
		{
			cout << tab[a][b]<< "  ";
		} 
		cout << endl;
	}


}
