#pragma once


struct Name
{
	char fN[20];
	char SN[20];
	char LN[20];
};

struct  Happy
{
	int d;
	int m;
	int y;
};
struct Note
{
	Name name;
	int Tele;
	Happy Date;
};

struct Tovar
{
	char Name2[20];
	Happy Date;
	int count;
	int price;
};
struct  Marshrut
{
	int N;
	char start[20];
	char end[20];
	int dlina;
};

struct Rab
{
	char Name[20];
	int year;
	char Prof[20];
	int zp;
	char Study[40];
};

struct student
{
	char Name[20];
	int Group;
	int year;
	int Fiz;
	int Mat;
	int Inform;
};
struct Abone
{
	Name name;
	int Tele;
	Happy Date;
	int balance;
	int popol;
};