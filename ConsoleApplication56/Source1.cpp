#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<math.h>
#include"struct.h"

void NewName(char *pt)
{
	char Name[10][15] = { "�������","����������","��������","������","�����","�����","����","�������","������","������" };
	int N = 0 + rand() % 9;
	strcpy(pt, Name[N]);
}

void PrintInfo(Note *pt)
{
	printf("%s %c.%c\n", pt->name.fN, pt->name.SN, pt->name.LN);
	printf("%d\n", pt->Tele);
	printf("���� �������� %d.%d.%d\n", pt->Date.d, pt->Date.m, pt->Date.y);
}

void sortir(Tovar *pt)
{

	Tovar *temp;
	temp= (Tovar*)calloc(1, sizeof(Tovar));
	for (int i = 0; i < 9; i++)
	{
		for (int j = 9; j > i ; j--)
		{
			if ((pt + j)->price < (pt + j - 1)->price)
			{
				temp = (pt + j);
				*(pt + j) = *(pt + j - 1);
				*(pt + j - 1) = *temp;
			}
		}
	}
}
void PrintInfo2(Tovar *pt)
{
	printf("%s\n", pt->Name2);
	printf("����������� %d\n", pt->count);
	printf("���� ����������� %d.%d.%d\n", pt->Date.d, pt->Date.m, pt->Date.y);
	printf("���� %d\n", pt->price);
}


void Marshrutinfo(Marshrut *pt)
{
	printf("����� %d\n", pt->N);
	printf("������ ��������� %s\n", pt->start);
	printf("����� ��������� %s\n", pt->end);
	printf(" ����� %d ����������\n", pt->dlina);
}
void sortir2(Marshrut *pt)
{

	Marshrut *temp;
	temp = (Marshrut*)calloc(1, sizeof(Marshrut));
	for (int i = 0; i < 9; i++)
	{
		for (int j = 9; j > i; j--)
		{
			if ((pt + j)->N < (pt + j - 1)->N)
			{
				temp = (pt + j);
				*(pt + j) = *(pt + j - 1);
				*(pt + j - 1) = *temp;
			}
		}
	}
}

void sortir3(Abone *pt)
{

	Abone *temp;
	temp = (Abone*)calloc(1, sizeof(Abone));
	for (int i = 0; i < 9; i++)
	{
		for (int j = 9; j > i; j--)
		{
			if (strcmp((pt+j)->name.fN, (pt + j-1)->name.fN)==-1)
			{
				temp = (pt + j);
				*(pt + j) = *(pt + j - 1);
				*(pt + j - 1) = *temp;
			}
		}
	}
}
void Aboneinfo(Abone *pt)
{
	printf("%s %c.%c\n", pt->name.fN, pt->name.SN, pt->name.LN);
	printf("%d\n", pt->Tele);
	printf("���� ����������� %d.%d.%d\n", pt->Date.d, pt->Date.m, pt->Date.y);
	printf("��������� %d\n", pt->popol);
	printf("�� ������� %d\n", pt->balance);
}