/*
Name           : Ong YiLiang
Class          : 1DCN1
Task           : YOLKLIT Fast Food Billing System

TO HAVE A BETTER VISUAL ENJOYMENT
Window size     - width  :100
				- height :40
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <iostream>
#pragma warning (disable:4996)
#define SST 0.10
#define COMBO_A 10.0
#define COMBO_B 15.0
#define COMBO_C 18.0
#define COMBO_D 24.0
#define DISCOUNT_PERCENTAGE 0.05
const double PRICE_DISCOUNT = 1 - DISCOUNT_PERCENTAGE;

//global declaration
void logo();
void yolklit();
void yl();
void yolk();
void lit();
void animationLogo();
void security1();
void security2();
void menu();
void order();

void main()
{
	system("color 3f");

	//function call
	animationLogo();
	security1();
	logo();
	yolklit();
	menu();
	order();

	system("pause");
}

void logo()
{
	printf("                          /\\\                   ____                              \n");
	printf("                         /  \\\           /\\     |  |                             \n");
	printf("                        / /\\ \\____     /  \\    |  |                             \n");
	printf("                        \\ \\ \\_____    / /\\ \\___|  |                           \n");
	printf("                         \\ \\         / /  \\____   |                             \n");
	printf("                          \\ \\       / /        |  |                              \n");
	printf("                           \\ \\     / /         |  |                              \n");
	printf("                            \\ \\   / /          |  |                              \n");
	printf("                             \\ \\ / /           |  |                              \n");
	printf("                              \\ \  /            |  |                              \n");
	printf("                               | |             |  |                                \n");
	printf("                        _______|_|________     |  |   _________________            \n");
	printf("                       (__________________)    |  |  /   .   .    .    \\          \n");
	printf("                       |-_-___-|-|_--___-_|    |  | ( .   .   . .   .   )          \n");
	printf("                       (  O    | |-     o )    |  | _\\_______.____.____/_         \n");
	printf("                       |   -  o| |  O     |    |  |{_.,_.,.,._,._.,_.,_._}         \n");
	printf("                       (   o   | | -     o)    |  | (_\\_\\_\\_\\_\\_\\_\\_\\_\\_) \n");
	printf("                       |o   -  | |o     - |    |  |{_.,_.,.,._,._.,_.,_._}         \n");
	printf("                       (      -| |    o   )    |  |<_____________________>         \n");
	printf("                       |   o   | |    - o |    |  |_(_/_/_/_/_/_/_/_/_/_)_         \n");
	printf("                       (     - | |-      -)    |  |\\                     /        \n");
	printf("                       |- o    | |  o   - |    |  |_\\___________________/___      \n");
	printf("                       (__________________)    |____________________________|      \n\n");
}

void yolklit()
{
	printf("                     YY     YY OOOOO   LL        KK  KK   LL        II TTTTTTTT \n");
	printf("                      YY   YY OO   OO  LL        KK KK    LL              TT    \n");
	printf("                       YY YY OO     OO LL        KKK      LL        II    TT    \n");
	printf("                        YY   OO     OO LL        KKKK     LL        II    TT    \n");
	printf("                        YY   OO     OO LL        KK KKK   LL        II    TT    \n");
	printf("                        YY    OO   OO  LL        KK  KKK  LL        II    TT    \n");
	printf("                        YY     OOOOO   LLLLLLLLL KK   KKK LLLLLLLLL II    TT    \n\n");
}

void yl()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                     YY     YY                            LL        \n");
	printf("                      YY   YY                             LL        \n");
	printf("                       YY YY                              LL        \n");
	printf("                        YY                                LL        \n");
	printf("                        YY                                LL        \n");
	printf("                        YY                                LL        \n");
	printf("                        YY                                LLLLLLLLL \n");
}

void yolk()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                     YY     YY OOOOO   LL        KK  KK   \n");
	printf("                      YY   YY OO   OO  LL        KK KK    \n");
	printf("                       YY YY OO     OO LL        KKK      \n");
	printf("                        YY   OO     OO LL        KKKK     \n");
	printf("                        YY   OO     OO LL        KK KKK   \n");
	printf("                        YY    OO   OO  LL        KK  KKK  \n");
	printf("                        YY     OOOOO   LLLLLLLLL KK   KKK \n\n");
}

void lit()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                                          LL        II TTTTTTTT \n");
	printf("                                                          LL              TT    \n");
	printf("                                                          LL        II    TT    \n");
	printf("                                                          LL        II    TT    \n");
	printf("                                                          LL        II    TT    \n");
	printf("                                                          LL        II    TT    \n");
	printf("                                                          LLLLLLLLL II    TT    \n\n");
}

void animationLogo()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                     YY     YY \n");
	printf("                      YY   YY  \n");
	printf("                       YY YY   \n");
	printf("                        YY     \n");
	printf("                        YY     \n");
	printf("                        YY     \n");
	printf("                        YY     \n");
	_sleep(1000);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                               OOOOO   \n");
	printf("                              OO   OO  \n");
	printf("                             OO     OO \n");
	printf("                             OO     OO \n");
	printf("                             OO     OO \n");
	printf("                              OO   OO  \n");
	printf("                               OOOOO   \n");
	_sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                       LL        \n");
	printf("                                       LL        \n");
	printf("                                       LL        \n");
	printf("                                       LL        \n");
	printf("                                       LL        \n");
	printf("                                       LL        \n");
	printf("                                       LLLLLLLLL \n");
	_sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                                 KK  KK   \n");
	printf("                                                 KK KK    \n");
	printf("                                                 KKK      \n");
	printf("                                                 KKKK     \n");
	printf("                                                 KK KKK   \n");
	printf("                                                 KK  KKK  \n");
	printf("                                                 KK   KKK \n");
	_sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                                          LL        \n");
	printf("                                                          LL        \n");
	printf("                                                          LL        \n");
	printf("                                                          LL        \n");
	printf("                                                          LL        \n");
	printf("                                                          LL        \n");
	printf("                                                          LLLLLLLLL \n");
	_sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                                                    II \n");
	printf("                                                                       \n");
	printf("                                                                    II \n");
	printf("                                                                    II \n");
	printf("                                                                    II \n");
	printf("                                                                    II \n");
	printf("                                                                    II \n");
	printf("                                                                    II \n");
	_sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                                                       TTTTTTTT \n");
	printf("                                                                          TT    \n");
	printf("                                                                          TT    \n");
	printf("                                                                          TT    \n");
	printf("                                                                          TT    \n");
	printf("                                                                          TT    \n");
	printf("                                                                          TT    \n");
	_sleep(500);
	system("cls");

	yl();
	_sleep(100);
	system("cls");
	_sleep(100);

	system("color f3");
	yl();
	_sleep(100);
	system("cls");
	_sleep(100);

	system("color 3f");
	yolk();
	_sleep(100);
	system("cls");
	_sleep(100);

	system("color f3");
	yolk();
	_sleep(100);
	system("cls");
	_sleep(100);

	system("color 3f");
	lit();
	_sleep(100);
	system("cls");
	_sleep(100);

	system("color f3");
	lit();
	_sleep(100);
	system("cls");
	_sleep(100);

	system("color 3f");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                     YY     YY                                         TTTTTTTT \n");
	printf("                      YY   YY                                             TT    \n");
	printf("                       YY YY                                              TT    \n");
	printf("                        YY                                                TT    \n");
	printf("                        YY                                                TT    \n");
	printf("                        YY                                                TT    \n");
	printf("                        YY                                                TT    \n\n");
	_sleep(100);
	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                     YY     YY OOOOO                                II TTTTTTTT \n");
	printf("                      YY   YY OO   OO                                     TT    \n");
	printf("                       YY YY OO     OO                              II    TT    \n");
	printf("                        YY   OO     OO                              II    TT    \n");
	printf("                        YY   OO     OO                              II    TT    \n");
	printf("                        YY    OO   OO                               II    TT    \n");
	printf("                        YY     OOOOO                                II    TT    \n\n");
	_sleep(100);
	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                     YY     YY OOOOO   LL                 LL        II TTTTTTTT \n");
	printf("                      YY   YY OO   OO  LL                 LL              TT    \n");
	printf("                       YY YY OO     OO LL                 LL        II    TT    \n");
	printf("                        YY   OO     OO LL                 LL        II    TT    \n");
	printf("                        YY   OO     OO LL                 LL        II    TT    \n");
	printf("                        YY    OO   OO  LL                 LL        II    TT    \n");
	printf("                        YY     OOOOO   LLLLLLLLL          LLLLLLLLL II    TT    \n\n");
	_sleep(100);
	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	yolklit();
	_sleep(100);
	system("cls");
	_sleep(50);

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	yolklit();
	_sleep(1000);
	system("cls");

	printf("                          /\\\                   ____                         \n");
	printf("                         /  \\\           /\\     |  |                        \n");
	printf("                        / /\\ \\____     /  \\    |  |                        \n");
	printf("                        \\ \\ \\_____    / /\\ \\___|  |                      \n");
	printf("                         \\ \\         / /  \\____   |                        \n");
	printf("                          \\ \\       / /        |  |                         \n");
	printf("                           \\ \\     / /         |  |                         \n");
	printf("                            \\ \\   / /          |  |                         \n");
	printf("                             \\ \\ / /           |  |                         \n");
	printf("                              \\ \  /            |  |                         \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |                           \n");
	printf("                               | |             |  |_________________________  \n");
	printf("                               |_|             |____________________________| \n\n");
	_sleep(1200);
	system("cls");

	logo();
	_sleep(1000);
	system("cls");
	_sleep(50);

	logo();
	yolklit();
	_sleep(1000);
}

struct PASSWORD
{
	const char code[100];
	char start[100];
}pin = { "123456" }, password = {"123456"};

void security1()
{
	for (int a = 0; a < 3; a++)
	{
		printf("Please enter PIN number : ");
		scanf("%s", &pin.start);
		rewind(stdin);

		if (strcmp(pin.code, pin.start) != 0)
		{
			system("color 4f");
			printf("\a\n***WRONG PIN PLEASE TRY AGAIN***\n");
			if (a == 2)
			{
				system("color 3f");
				security2();
			}
		}
		else
		{
			system("color 2f");
			_sleep(1000);
			system("cls");
			break; //to break the loop.
		}
	}
}

void security2()
{
	do
	{
		printf("Please enter PASSWORD   : ");
		scanf("%s", &password.start);
		rewind(stdin);

		if (strcmp(password.code, password.start) != 0)
		{
			system("color 4f");
			printf("\a\n***WRONG PASSWORD PLEASE TRY AGAIN***\n");
		}
	} while (strcmp(password.code, password.start) != 0);

		system("color 2f");
		_sleep(1000);
		system("cls");

}

void menu()
{
	printf("__________________________________________________________\n");
	printf("| COMBO |            Food Product            | PRICE(RM) |\n");
	printf("|_______|____________________________________|___________|\n");
	printf("|   A   |     Chicken Burger + YolkFries     |   %.2f   |\n", COMBO_A);
	printf("|_______|____________________________________|___________|\n");
	printf("|   B   | Chicken Burger + YolkFries + Drinks|   %.2f   |\n", COMBO_B);
	printf("|_______|____________________________________|___________|\n");
	printf("|   C   |      Beef Burger + YolkFries       |   %.2f   |\n", COMBO_C);
	printf("|_______|____________________________________|___________|\n");
	printf("|   D   |  Beef Burger + YolkFries + Drinks  |   %.2f   |\n", COMBO_D);
	printf("|_______|____________________________________|___________|\n");
	printf("   # Order 5 same combo or above to get 5%% discount!! #      \n");
}

void order()
{
	//variable declaration and initialization
	struct QUANTITY
	{
		int qty = 0;
		int totalQty;
	}discount, original;

	struct COMBO
	{
		QUANTITY discount, original;
		double disAllow, disPrice;
		double total;
	}comA, comB, comC, comD;

	//order
	float quantity;
	char combo, yesno, nextCustomer;

	//billing
	double price, subtotal, tax, roundTax, total, roundTotal, amountPaid, amountLeft, paidAgain, change, amountGet = 0;

	//Daily Sales report
	char cashier[100];
	int totalCustomer = 0, customer = 0;
	int totalQuantity;
	double totalTax, totalCmbCharge, totalAmount, totalDiscount, profitLoss;

	time_t currentTime;
	time(&currentTime);

	system("color 3f");
	//to get who is on duty today
	printf("Cashier : ");
	while (scanf("%[^\n]", &cashier) != 1)
	{
		printf("Cashier : ");
		rewind(stdin);
	}

	do //repeat customer service
	{
		//initialize
		int comboA = 0, comboB = 0, comboC = 0, comboD = 0, noOrder = 0;
		double sumSub = 0, totalPaid = 0; 

		totalCustomer += 1; //record the total customer

		//generate 4 digits random number as customer no.
		srand(time(NULL));
		customer = ((9999 + 1) - 1000);
		rewind(stdin);
		printf("\a\n====================================================================================================\n");
		printf("Customer No : %d \n", rand() % customer + 1000); 

		//order
		do //repeat order
		{
			system("color 3f");
			//hidden feature, press M to show menu, press K to show current order
			printf("\nCombo A, B, C or D (X/x=cancel) :");
			scanf("%c", &combo);
			combo = toupper(combo); //change the lower case to upper case
			rewind(stdin);

			switch (combo)
			case'A':
			{
				printf("Enter the quantity \t\t:");
				while (scanf("%f", &quantity) != 1 || (int)quantity != quantity) //only accept integer input
				{
					system("color 4f");
					printf("Please enter an integer \t:");
					rewind(stdin);
				}
				rewind(stdin);
				quantity = abs(quantity); //change the negative integer to positive integer
				comboA += quantity;
				break;
			case'B':
				printf("Enter the quantity \t\t:");
				while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
				{
					system("color 4f");
					printf("Please enter an integer \t:");
					rewind(stdin);
				}
				rewind(stdin);
				quantity = abs(quantity);
				comboB += quantity;
				break;
			case'C':
				printf("Enter the quantity \t\t:");
				while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
				{
					system("color 4f");
					printf("Please enter an integer \t:");
					while (getchar() != '\n');
				}
				rewind(stdin);
				quantity = abs(quantity);
				comboC += quantity;
				break;
			case'D':
				printf("Enter the quantity \t\t:");
				while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
				{
					system("color 4f");
					printf("Please enter an integer \t:");
					rewind(stdin);
				}
				rewind(stdin);
				quantity = abs(quantity);
				comboD += quantity;
				break;

				//cancellation
			case'X':
				system("color b0");
				printf("\n#\nCancel combo A, B, C or D \n(other = exits)\t\t :");
				scanf("%c", &combo);
				combo = toupper(combo);
				rewind(stdin);
				switch (combo)
				{
				case'A':
					printf("Enter the quantity \t :");
					while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
					{
						system("color 4f");
						printf("Please enter an integer  :");
						rewind(stdin);
					}
					rewind(stdin);
					quantity = abs(quantity);
					system("color b0");
					if (quantity > comboA)
					{
						system("color b4");
						printf("\a***Unsucessful cancel COMBO A***\n#\n");
						_sleep(1000);
					}
					else
					{
						comboA -= quantity;
						printf("<%d COMBO A have been successfully cancel>\n#\n", (int)quantity);
					}
					break;
				case'B':
					printf("Enter the quantity \t :");
					while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
					{
						system("color 4f");
						printf("Please enter an integer  :");
						rewind(stdin);
					}
					rewind(stdin);
					quantity = abs(quantity);
					if (quantity > comboB)
					{
						system("color b4");
						printf("\a***Unsucessful cancel COMBO B***\n#\n");
						_sleep(1000);
					}
					else
					{
						comboB -= quantity;
						printf("<%d COMBO B have been successfully cancel>\n#\n", (int)quantity);
					}
					break;
				case'C':
					printf("Enter the quantity \t :");
					while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
					{
						system("color 4f");
						printf("Please enter an integer  :");
						rewind(stdin);
					}
					rewind(stdin);
					quantity = abs(quantity);
					if (quantity > comboC)
					{
						system("color b4");
						printf("\a***Unsucessful cancel COMBO C***\n#\n");
						_sleep(1000);
					}
					else
					{
						comboC -= quantity;
						printf("<%d COMBO C have been successfully cancel>\n#\n", (int)quantity);
					}
					break;
				case'D':
					printf("Enter the quantity \t :");
					while (scanf("%f", &quantity) != 1 || (int)quantity != quantity)
					{
						system("color 4f");
						printf("Please enter an integer  :");
						rewind(stdin);
					}
					rewind(stdin);
					quantity = abs(quantity);
					if (quantity > comboD)
					{
						system("color b4");
						printf("\a***Unsucessful cancel COMBO D***\n#\n");
						_sleep(1000);
					}
					else
					{
						comboD -= quantity;
						printf("<%d COMBO D have been successfully cancel>\n#\n", (int)quantity);
					}
					break;
				default:
					printf("Add order(Y/y=yes) \t ? ");
					scanf("%c", &yesno);
					rewind(stdin);
					printf("#\n");
				}
				break;

			case 'M': //show menu
				menu();
				break;
			case 'K': //check order
				if (comboA > 0)
					printf("> COMBO A : \t%-4d\n", comboA);

				if (comboB > 0)
					printf("> COMBO B : \t%-4d\n", comboB);

				if (comboC > 0)
					printf("> COMBO C : \t%-4d\n", comboC);

				if (comboD > 0)
					printf("> COMBO D : \t%-4d\n", comboD);

				if (comboA == 0 && comboB == 0 && comboC == 0 && comboD == 0)
					printf("\a\n***Please make order***\n");
				break;
			default:
				system("color 4f");
				//solve the problem when cashier accidentally press other key.
				if (comboA != 0 || comboB != 0 || comboC != 0 || comboD != 0)
				{
					printf("\nAdd order(Y/y=yes)? ");
					scanf("%c", &yesno);
					rewind(stdin);
					if (yesno == 'y' || yesno == 'Y')
						printf("\n***Please select A, B, C or D***");
				}
				else
				{
					printf("\n***Please make order***\n");
					noOrder += 1;
					if (noOrder >= 3)
					{
						printf("Continue to serve this costumer (Y/y=yes)?");
						scanf("%c", &yesno);
						rewind(stdin);
						if (yesno != 'y' && yesno != 'Y')
						{
							comboA -= 1; //skip the receipt part
							totalCustomer -= 1;
						}
					}
				}
			}
		} while (combo == 'A' || combo == 'B' || combo == 'C' || combo == 'D' || combo == 'M' || combo == 'K' || yesno == 'y' || yesno == 'Y' || comboA == 0 && comboB == 0 && comboC == 0 && comboD == 0);
		
		//receipt
		if (comboA != -1)
		{
			printf("__________________________________________\n");
			if (comboA > 0)
			{
				if (comboA >= 5) //discount is given
				{
					price = COMBO_A * PRICE_DISCOUNT;
					comA.discount.qty += comboA;
				}
				else //discount is not given
				{
					price = COMBO_A * 1;
					comA.original.qty += comboA;
				}
				subtotal = price * comboA;
				sumSub += subtotal;
				printf("COMBO A :\t%-4d * %.2f\t= RM%.2f\n", comboA, price, subtotal);
			}

			if (comboB > 0)
			{
				if (comboB >= 5)
				{
					price = COMBO_B * PRICE_DISCOUNT;
					comB.discount.qty += comboB;
				}
				else
				{
					price = COMBO_B * 1;
					comB.original.qty += comboB;
				}
				subtotal = price * comboB;
				sumSub += subtotal;
				printf("COMBO B :\t%-4d * %.2f\t= RM%.2f\n", comboB, price, subtotal);
			}

			if (comboC > 0)
			{
				if (comboC >= 5)
				{
					price = COMBO_C * PRICE_DISCOUNT;
					comC.discount.qty += comboC;
				}
				else
				{
					price = COMBO_C * 1;
					comC.original.qty += comboC;
				}
				subtotal = price * comboC;
				sumSub += subtotal;
				printf("COMBO C :\t%-4d * %.2f\t= RM%.2f\n", comboC, price, subtotal);
			}

			if (comboD > 0)
			{
				if (comboD >= 5)
				{
					price = COMBO_D * PRICE_DISCOUNT;
					comD.discount.qty += comboD;
				}
				else
				{
					price = COMBO_D * 1;
					comD.original.qty += comboD;
				}
				subtotal = price * comboD;
				sumSub += subtotal;
				printf("COMBO D :\t%-4d * %.2f\t= RM%.2f\n", comboD, price, subtotal);
			}
			printf("__________________________________________\n");

			system("color f0");
			tax = sumSub * SST;

			printf("\nCombo Charges \t= RM%.2f\n", sumSub);
			printf("Add 10%% of SST \t= RM%.2f\n", tax);

			//because the total cannot round off to two decimal place properly after add the 3d.p tax.
			roundTax = (int)(tax * 1000) % 10;
			if (roundTax >= 5)
				tax = ceil(tax * 100) / 100;
			else if (roundTax >= 1 && roundTax <= 4)
				tax = floor(tax * 100) / 100;

			total = sumSub + tax;
			printf("TOTAL TO PAY \t= RM%.2f\n", total);

			printf("Amount Paid \t= RM");
			while (scanf("%lf", &amountPaid) != 1) //only accept numerical input
			{
				system("color f4");
				printf("***Please enter a number***\n");
				printf("Amount Paid \t= RM");
				rewind(stdin);
			}
			rewind(stdin);
			amountPaid = fabs(amountPaid);

			//round off 1-9cents except 5cents because customer cannot pay 1-9cents except 5cents.
			roundTotal = (int)(total * 100) % 10;
			if (roundTotal > 5)
				total = ceil(total * 10) / 10;
			else if (roundTotal <= 4)
				total = floor(total * 10) / 10;

			//when customer paid insufficient amount.
			amountLeft = total - amountPaid;
			if (amountPaid < total && amountLeft > 0.04)
			{
				system("color f4");
				printf("***INSUFFICIENT AMOUNT!!!***\n\n");
				for (; amountLeft > 0.04;)
				{
					printf("Amount Left \t= RM%.2f\n", amountLeft);
					printf("Amount Paid \t= RM");
					while (scanf("%lf", &paidAgain) != 1)
					{
						printf("\n***Please enter a number***\n");
						printf("Amount Paid \t= RM");
						rewind(stdin);
					}
					rewind(stdin);
					paidAgain = fabs(paidAgain);
					amountLeft -= paidAgain;
					totalPaid += paidAgain;
				}
			}
			system("color f0");

			change = amountPaid + totalPaid - total;
			if (change <= 0.04)
				change = 0;

			printf("Change Due \t= RM%.2f\n\n", change);

			//to record the money collected from customer
			amountGet = amountGet + amountPaid + totalPaid - change;

			printf("THANK YOU, HAVE A NICE DAY!!\n");
		}
		printf("====================================================================================================\n\n");
		system("color f0");
		printf("Next customer (N/n=no) : ");
		scanf("%c", &nextCustomer);
		//to avoid a serious issues happen. Total sales report will not shown when cashier accidentally press any key.
	} while (nextCustomer != 'n' && nextCustomer != 'N');

	//formula for daily sales report

	//calculate the quantity
	original.totalQty = comA.original.qty + comB.original.qty + comC.original.qty + comD.original.qty;
	discount.totalQty = comA.discount.qty + comB.discount.qty + comC.discount.qty + comD.discount.qty;
	totalQuantity = original.totalQty + discount.totalQty;

	//total amount of discount allowed in combo
	comA.disAllow = comA.discount.qty * COMBO_A * DISCOUNT_PERCENTAGE;
	comB.disAllow = comB.discount.qty * COMBO_B * DISCOUNT_PERCENTAGE;
	comC.disAllow = comC.discount.qty * COMBO_C * DISCOUNT_PERCENTAGE;
	comD.disAllow = comD.discount.qty * COMBO_D * DISCOUNT_PERCENTAGE;

	//total amount of combo A/B/C/D with discount 
	comA.disPrice = comA.discount.qty * COMBO_A*PRICE_DISCOUNT;
	comB.disPrice = comB.discount.qty * COMBO_B*PRICE_DISCOUNT;
	comC.disPrice = comC.discount.qty * COMBO_C*PRICE_DISCOUNT;
	comD.disPrice = comD.discount.qty * COMBO_D*PRICE_DISCOUNT;

	//total amount of combo A/B/C/D with discount and no discount
	comA.total = comA.original.qty * COMBO_A + comA.disPrice;
	comB.total = comB.original.qty * COMBO_B + comB.disPrice;
	comC.total = comC.original.qty * COMBO_C + comC.disPrice;
	comD.total = comD.original.qty * COMBO_D + comD.disPrice;

	//total amount of discount allowed
	totalDiscount = comA.disAllow + comB.disAllow + comC.disAllow + comD.disAllow;
	//total amount of combo charge
	totalCmbCharge = comA.total + comB.total + comC.total + comD.total;
	//the totalTax cannot round off properly, when show in 2d.p.
	totalTax = round(totalCmbCharge * SST * 100) / 100;
	totalAmount = totalCmbCharge + totalTax;
	profitLoss = amountGet - totalAmount;

	//daily sales report
	system("color f2");
	printf("\n====================================================================================================");
	printf("\nDAILY SALES REPORT\n");
	printf("------------------\n");
	printf("%s\n", ctime(&currentTime));
	printf("Today's cashier: %s", cashier);
	printf("\nTotal Customers: %d\n", totalCustomer);
	printf("\nCombo Sales For Today\n");
	printf("____________________________________________________________________\n");
	printf("| COMBO |  QTY  | DISCOUNT QTY | DISCOUNT ALLOWED(RM) | AMOUNT(RM) |\n");
	printf("|_______|_______|______________|______________________|____________|\n");
	printf("|   A   |  %-5d|     %-9d|      %-16.2f| %-11.2f|                   \n", comA.original.qty, comA.discount.qty, comA.disAllow, comA.total);
	printf("|_______|_______|______________|______________________|____________|\n");
	printf("|   B   |  %-5d|     %-9d|      %-16.2f| %-11.2f|                   \n", comB.original.qty, comB.discount.qty, comB.disAllow, comB.total);
	printf("|_______|_______|______________|______________________|____________|\n");
	printf("|   C   |  %-5d|     %-9d|      %-16.2f| %-11.2f|                   \n", comC.original.qty, comC.discount.qty, comC.disAllow, comC.total);
	printf("|_______|_______|______________|______________________|____________|\n");
	printf("|   D   |  %-5d|     %-9d|      %-16.2f| %-11.2f|                   \n", comD.original.qty, comD.discount.qty, comD.disAllow, comD.total);
	printf("|_______|=======|==============|______________________|____________|\n");
	printf("  Total :  %-5d|     %-9d                                           \n", original.totalQty, discount.totalQty);
	printf("         =======|==============                                     \n\n");
	printf("Total Quantity         = %d     \n", totalQuantity);
	printf("Total Discount Allowed = RM%.2f \n\n", totalDiscount);
	printf("Total Combo Charges    = RM%.2f \n", totalCmbCharge);
	printf("Total SST Charges      = RM%.2f \n\n", totalTax);
	printf("Total Amount           = RM%.2f \n", totalAmount);
	printf("Total Amount Collected = RM%.2f \n", amountGet);

	if (profitLoss > 0)
		printf("PROFIT                 = RM%.2f \n", profitLoss); 
	else if (profitLoss < 0)
	{
		profitLoss = fabs(profitLoss);
		printf("LOSS                   = RM%.2f \n", profitLoss);
	}
	else
		printf("Profit or Loss         = RM%.2f \n", profitLoss);
		//the business may collect less or more cents because of the roundTotal.
	printf("====================================================================================================\n\n");
}