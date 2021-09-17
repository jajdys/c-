#include<iostream>
//zadanie 3 (16.09.21)
//wykonanie: Patryk Jajdyk
using namespace std;

int main()
{
	int tab[10][10];

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (a == b)
			{
				tab[a][b] = 1;
			}
			else
			{
				tab[a][b] = 0;
			}
			cout << tab[a][b] << "\t";
		}
		cout << endl;
	}
}
