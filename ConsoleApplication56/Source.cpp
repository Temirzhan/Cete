#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"Header.h"

using namespace std;
char f;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		printf("Выберите задание");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			
			Note *Block;
			Block = (Note*)calloc(9, sizeof(Note));
			for (int i = 0; i < 9; i++)
			{
				NewName((Block +i)->name.fN);
				NewName((Block + i)->name.SN);
				NewName((Block + i)->name.LN);
				(Block + i)->Tele = 87470000000 + rand() % 99999;
				(Block + i)->Date.d = 1 + rand() % 30;
				(Block + i)->Date.m = 1 + rand() % 12;
				(Block + i)->Date.y =1950 + rand() %40 ;
			}
			Happy p;
			printf("Введите дату ождения d.d.d\n");
			scanf("%d.%d.%d", &p.d, &p.m, &p.y);
			for (int i = 0; i < 9; i++)
			{
				if (p.d == (Block + i)->Date.d
					&&p.m == (Block + i)->Date.m
					&&p.y == (Block + i)->Date.y)
					PrintInfo(Block + i);
			}
		}
		break;
		case 2:
		{
			Tovar *Spisok;
			Spisok = (Tovar*)calloc(9, sizeof(Tovar));
			for (int i = 0; i < 9; i++)
			{
				NewName((Spisok + 1)->Name2);
				(Spisok + i)->count = 1 + rand() % 1000;
				(Spisok + i)->Date.d = 1 + rand() % 30;
				(Spisok + i)->Date.m = 7 + rand() % 12;
				(Spisok + i)->Date.y = 2017 + rand() % 2;
				(Spisok + i)->price = 1000 + rand() % 100000;
			}
			int sred = 0;
			for (int i = 0; i < 9; i++)
			{
				sred += (Spisok + i)->price;
			}
			sortir(Spisok);
			for (int i = 0; i < 9; i++)
			{
				if ((Spisok + i)->Date.m > 10 && (Spisok + i)->Date.y == 2018)
					PrintInfo2(Spisok + 1);
			}
			printf("Средняя стоимость %d", sred / 9);
		}
		break;
		case 3:
		{
			Marshrut* Almaty;
			Almaty = (Marshrut*)calloc(9, sizeof(Marshrut));
			for (int i = 0; i < 9; i++)
			{
				(Almaty + i)->N = 1 + rand() % 100;
				NewName((Almaty + i)->start);
				NewName((Almaty + i)->end);
				(Almaty + i)->dlina = 10 + rand() % 50;
			}
			int Max = 0;
			int j;
			for (int i = 0; i < 9; i++)
			{
				if (Max < (Almaty + i)->dlina)
				{
					Max = (Almaty + i)->dlina;
					j = i;
				}
			}
			printf("Маршрут с максимальной длиной\n");
			Marshrutinfo(Almaty + j);
			sortir2(Almaty);
			char Start[20];
			char Konec[20];
			printf("Введите маршрут начало:");
			scanf("%s", Start);
			printf("Введите маршрут Конец:");
			scanf("%s", Konec);
			for (int i = 0; i < 9; i++)
			{
				if (strcmp((Almaty + i)->start,Start)==0&& strcmp((Almaty + i)->end, Konec) == 0)
				{
					Marshrutinfo(Almaty + i);
				}
			}
		}
		break;
		case 4:
		{
			Abone* abonent;
			abonent = (Abone*)calloc(9, sizeof(Abone));
			for (int i = 0; i < 9; i++)
			{
				NewName((abonent + i)->name.fN);
				NewName((abonent + i)->name.SN);
				NewName((abonent + i)->name.LN);
				(abonent + i)->Tele = 87470000000 + rand() % 99999;
				(abonent + i)->Date.d = 1 + rand() % 30;
				(abonent + i)->Date.m = 1 + rand() % 12;
				(abonent + i)->Date.y = 2000 + rand() % 18;
				(abonent + i)->popol = 0 + rand() % 5000;
				(abonent + i)->balance = (abonent + i)->popol +( 0 + rand() % 5000);
				Aboneinfo(abonent + i);
					if ((abonent + i)->Date.y > 10)
						(abonent + i)->balance += 20;
			}
			printf("------");
			sortir3(abonent);
			int nomer;
			printf("введите номер:");
			scanf("%d", &nomer);
			for (int i = 0; i < 9; i++)
			{
				if ((abonent + i)->Tele==nomer)
					Aboneinfo(abonent + i);
			}
		}
		break;
		}
		printf("Хотите продолжить y-da");
		scanf("%c", &f);
	} while (f == 'y');
}