
#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
#include "Top.hpp"

int main()
{
	system("cls");
	srand(time(0));
	
	Top *balarray = new Top();
	
	int *arraysize = new int;
	
	cout << "Dizi Boyutu:";
	
	cin >> *arraysize;
	
	Top *temp = new Top[*arraysize];
	
	balarray = new Top[*arraysize];
	

	if (balarray)
		cout << "Diziniz Basariyla Olusturuldu" << endl;

	int* choice = new int;

	for (int i = 0; i < *arraysize; i++)	
		balarray[i].ptr=&balarray[i]; 

	do {
		
		cout << "1. Diziyi Ters Cevir" << endl;
		cout << "2. Diziyi Yazdir" << endl;
		cout << "3. Cikis" << endl;

		if (*choice == 1)
		{	
			for (int i = 0; i < *arraysize / 2; i++)
			{
				temp[i] = balarray[i];
				balarray[i] = balarray[(*arraysize - 1) - i];
				balarray[(*arraysize - 1) - i] = temp[i];	
			}
			cout << "Diziniz Basariyla Ters Cevirildi" << endl;
		}

		else if (*choice == 2)
		{
			cout << "Dizideki Toplar:" << endl;

			for (int i = 0; i < *arraysize; i++)
			{
				cout << "[" << i << "] " << "-> ";
				balarray[i].colorassign();
				cout << balarray[i].show() << " " << balarray[i].ptr <<" "<< endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);	
			}
		}
		cout << ">>";
		cin >> *choice;
		if (*choice != 1 && *choice != 2 && *choice != 3)
		{
			cout << "Lutfen 1,2 veya 3'u tuslayin" << endl;
			Sleep(2000);
		}
			
		
		system("cls");
	} while (*choice != 3);
		
	
	delete[] balarray;
	delete[] temp;
	delete choice;
	delete arraysize;
	

	return 0;

}