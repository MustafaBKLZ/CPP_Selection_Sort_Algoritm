#include <iostream>  
#include <ctime>  
#include <cstdlib>  
using namespace std;


void printArray(int dizii[], int size)
{
	for (int i = 0; i < size; i++)
		cout << dizii[i] << " ";
	cout << endl;
}

int main() {
	int Sayilar[] = { 5, 6, 8, 1, 88, 99, 78, 45, 36, 25, 12, 9, 7 };
	int  enkucuk, yedek;
	int n = sizeof(Sayilar) / sizeof(Sayilar[0]);


	for (int i = 0; i < n - 1; i++)
	{
		enkucuk = i;
		for (int j = i + 1; j < n; j++)
			if (Sayilar[j] < Sayilar[enkucuk])
				enkucuk = j;

		if (enkucuk != i)
		{
			yedek = Sayilar[i];
			Sayilar[i] = Sayilar[enkucuk];
			Sayilar[enkucuk] = yedek;
		}
		printArray(Sayilar, n); // aþama aþama gösterir.
	}
	//printArray(Sayilar, n); // sadece sonucu gosterir.
}

