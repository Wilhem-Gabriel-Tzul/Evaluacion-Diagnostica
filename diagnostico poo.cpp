#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

void gotoxy(short x, short y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void cointable()//table that triggers when the user wants to buy bundles.
{
	gotoxy(25, 5); cout << "+--------------------------------------------------------------------------+";
	gotoxy(25, 6); cout << "+                             Agregar Moneda                               +";
	gotoxy(25, 7); cout << "+--------------------------------------------------------------------------+";
	gotoxy(25, 8); cout << "+        1. $1                                   2. $2                     +";
	gotoxy(25, 9); cout << "+        3. $5                                   4. $10                    +";
	gotoxy(25, 10); cout << "+--------------------------------------------------------------------------+";
	gotoxy(25, 11); cout << "+                            Option:                                       +";
	gotoxy(25, 12); cout << "+--------------------------------------------------------------------------+";
}

void billtable()//table that triggers when the user wants to buy bundles.
{
	gotoxy(25, 5); cout << "+--------------------------------------------------------------------------+";
	gotoxy(25, 6); cout << "+                             Agregar Billete                              +";
	gotoxy(25, 7); cout << "+--------------------------------------------------------------------------+";
	gotoxy(25, 8); cout << "+        1. $20                  2. $50                3. $100             +";
	gotoxy(25, 9); cout << "+        4. $200                 5. $500               6. $1000            +";
	gotoxy(25, 10); cout << "+--------------------------------------------------------------------------+";
	gotoxy(25, 11); cout << "+                            Option:                                       +";
	gotoxy(25, 12); cout << "+--------------------------------------------------------------------------+";
}

void maintable()//the program's main table
{
	gotoxy(5, 5); cout << "+--------------------------------------------------------------------------------------------------------+";
	gotoxy(5, 6); cout << "+                                                Alcancia                                                +";
	gotoxy(5, 7); cout << "+--------------------------------------------------------------------------------------------------------+";
	gotoxy(5, 8); cout << "+           Monedas Obtenidas          |                         Billetes Obtenidos                      +";
	gotoxy(5, 9); cout << "+--------------------------------------------------------------------------------------------------------+";
	gotoxy(5, 10); cout << "+ De $1:   De $2:   De $5:  De $10:    |  De $20:   De $50:   De $100:  De $200:  De $500:   De $1000:   +";
	gotoxy(5, 11); cout << "+--------------------------------------------------------------------------------------------------------+";
	gotoxy(5, 12); cout << "+ 1. Agregar Moneda  2. Agregar Billete|                                                                 +";
	gotoxy(5, 13); cout << "+ 3. Calcular Total  4. Romper         |                                                                 +";
	gotoxy(5, 14); cout << "+--------------------------------------|                                                                 +";
	gotoxy(5, 15); cout << "+            Option:                   |        Total Ahorrado: $                                        +";
	gotoxy(5, 16); cout << "+--------------------------------------|                                                                 +";
	gotoxy(5, 17); cout << "+    Press 5 to exit the program       |                                                                 +";
	gotoxy(5, 18); cout << "+--------------------------------------------------------------------------------------------------------+";
}

class coin {
  public:
    int coin1;   
    int coin2;
    int coin5;
    int coin10;
};

class bill {
  public:
    int bill20;   
    int bill50;
    int bill100;
    int bill200;
    int bill500;
    int bill1k;
};

int main(){
	system("cls");
	system("color 09");
	
	int option, coinopt, billopt;
	int c1 = 0, c2 = 0, c5 = 0, c10 = 0;
	int b20 = 0, b50 = 0, b100 = 0, b200 = 0, b500 = 0, b1k = 0;
	
	//uso de la clase "coin"
	 coin Moneda;
	 Moneda.coin1=1;
	 Moneda.coin2=2;
	 Moneda.coin5=5;
	 Moneda.coin10=10;
  
	
	//uso de la clase "bill"
	bill Billete;
	Billete.bill20 = 20;
	Billete.bill50 = 50;
	Billete.bill100 = 100;
	Billete.bill200 = 200;
	Billete.bill500 = 500;
	Billete.bill1k = 1000;
	
	char exit = 'n';
	double totaldinero = 0;
	
	do{	
	maintable();
	gotoxy(13, 10); cout << c1;
	gotoxy(22, 10); cout << c2;
	gotoxy(31, 10); cout << c5;
	gotoxy(40, 10); cout << c10;
	
	
	gotoxy(54, 10); cout << b20;
	gotoxy(64, 10); cout << b50;
	gotoxy(75, 10); cout << b100;
	gotoxy(85, 10); cout << b200;
	gotoxy(95, 10); cout << b500;
	gotoxy(107, 10); cout << b1k;
	
	gotoxy(26, 15); cin >> option;
	
	if (option == 1) // agregar monedas
		{
			system("cls");
			cointable();
			gotoxy(62, 11); cin >> coinopt;
			switch (coinopt){
			case 1:
				c1++;
				break;
			case 2:
			c2++;
				break;

			case 3:
			c5++;
				break;

			case 4:
			c10++;
				break;
			}
		}
		
		else if (option == 2) //agregar billetes
		{
			system("cls");
			billtable();
			gotoxy(62, 11); cin >> billopt;
			switch (billopt){
			case 1:
				b20++;
				break;
			case 2:
			b50++;
				break;

			case 3:
			b100++;
				break;

			case 4:
			b200++;
				break;
				
			case 5:
			b500++;
			break;
			
			case 6:
				b1k++;
				break;
			}
		}
		
		else if (option == 3) //calcular total
		{
		totaldinero = (Moneda.coin1 * c1) + (Moneda.coin2 * c2) + (Moneda.coin5 * c5) + (Moneda.coin10 * c10) + (Billete.bill20 * b20) + 
		(Billete.bill50 * b50) + (Billete.bill100 * b100) + (Billete.bill200 * b200) +(Billete.bill500 * b500) + (Billete.bill1k * b1k);
			gotoxy(70, 15); cout << totaldinero;
			system("pause>null");
			
		}
		
		else if (option == 4) //vaciar alcancia
		{
			totaldinero = 0;
			c1=0;
			c2=0;
			c5=0;
			c10=0;
			
			b20 = 0;
			b50 = 0;
			b100 = 0;
			b200 = 0;
			b500 = 0;
			b1k = 0;
			
			gotoxy(5, 19); cout << "+                                   La Alcancia se ha Vaciado!                                           +";
			gotoxy(5, 20); cout << "+--------------------------------------------------------------------------------------------------------+";
		}
		
	else if (option == 5) //end
		{
			system("cls");
			gotoxy(25, 5); cout << "Do you want to exit? Press y to exit and n to return to main menu.";
			gotoxy(25, 7); cout << "Exit Theory of Everything 2? :___";
			gotoxy(56, 7); cin >> exit;
			system("cls");
		}
	} while (exit != 'y');
	return 0;
}

