// DES5.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;


bool key[64], keyI[16][48], rightP[32], leftP[32], expanded[48], xor1[48], xor2[32], sub[32], per[32];
char keyWord[7], text[1000], final[1000], block[64];

void translateKey(void)
{
	int buf=128;
	bool temp[7][8];
	for(int i=0, k=0; i<7;)
	{
		temp[i][k++] = bool(keyWord[i] & (char)buf);
		if(k>=8) {k=0; i++; buf=128;}
		else buf = buf/2;
	}
	int col=0, pos=0;
	for(int i=0, j=0, k=0, m=0; k<7;)
	{
		if(temp[k][m]) col++;
		key[i*8+(j++)]=temp[k][m++];
		pos++;
		if(j>=8) {j=0; i++;}
		if(pos>=7) {if(col%2) key[i*8+(j++)]=false; else key[i*8+(j++)]=true; if(j>=8) {j=0; i++;} col=0; pos=0;}
		if(m>=8) {m=0; k++;}
	}
}

void keyGen(void)
{
	char shift=0;
	bool temp[56], qr;
	const char perm1[56]={57, 49, 41, 33, 25, 17,  9,  1, 58, 50, 42, 34, 26, 18,
						  10,  2, 59, 51, 43, 35, 27, 19, 11,  3, 60, 52, 44, 36,
	                      63, 55, 47, 39, 31, 23, 15,  7, 62, 54, 46, 38, 30, 22,
						  14,  6, 61, 53, 45, 37, 29, 21, 13,  5, 28, 20, 12,  4};

	const char perm2[48]={13, 16, 10, 23,  0,  4,  3, 27, 14,  5, 20,  9, 22, 18, 11,  3,
                          25,  7, 15,  6, 26, 29, 12,  2, 40, 51, 30, 36, 46, 54, 29, 39,
                          50, 44, 32, 47, 43, 48, 38, 55, 33, 52, 45, 41, 49, 35, 28, 31};
	translateKey();
	for(int i=0; i<56; i++)
		temp[i]=key[perm1[i]-1];
	for(int round=0; round<16; round++)
	{
		if(round==0||round==1||round==8||round==15) shift=1;
		else shift=2;
		while(shift)
		{
			qr=temp[0];
			for(int i=0; i<27; i++)
				temp[i]=temp[i+1];
			temp[27]=qr;
			qr=temp[28];
			for(int i=28; i<55; i++)
				temp[i]=temp[i+1];
			temp[55]=qr;
			shift--;
		}
		for(int i=0;i<48;i++)
			keyI[round][i]=temp[perm2[i]];
	}
}

void IP1(char *temp)
{
	const char perm[64]={58, 50, 42, 34, 26, 18, 10,  2, 60, 52, 44, 36, 28, 20, 12,  4,
                         62, 54, 46, 38, 30, 22, 14,  6, 64, 56, 48, 40, 32, 24, 16,  8,
                         57, 49, 41, 33, 25, 17,  9,  1, 59, 51, 43, 35, 27, 19, 11,  3,
                         61, 53, 45, 37, 29, 21, 13,  5, 63, 55, 47, 39, 31, 23, 15,  7};
	for(int i=0; i<64; i++)
		block[i]=temp[perm[i]-1];
}

void IP2(char *temp)
{
	const char perm[64]={40,  8, 48, 16, 56, 24, 64, 32, 39,  7, 47, 15, 55, 23, 63, 31,
	                     38,  6, 46, 14, 54, 22, 62, 30, 37,  5, 45, 13, 53, 21, 61, 29,
	                     36,  4, 44, 12, 52, 20, 60, 28, 35,  3, 43, 11, 51, 19, 59, 27,
	                     34,  2, 42, 10, 50, 18, 58, 26, 33,  1, 41,  9, 49, 17, 57, 25};
	for(int i=0; i<64; i++)
		block[i]=temp[perm[i]-1];
}

void expand(void)
{
	const char perm[48]={32,  1,  2,  3,  4,  5,  4,  5,  6,  7,  8,  9,  8,  9, 10, 11, 12, 13, 12, 13, 14, 15, 16, 17,
	                     16, 17, 18, 19, 20, 21, 20, 21, 22, 23, 24, 25, 24, 25, 26, 27, 28, 29, 28, 29, 30, 31, 32,  1};
	for(int i=0; i<48; i++)
		expanded[i]=rightP[perm[i]-1];
}

void xorRAK(int round, bool flag)
{
	if(flag) 
		for(int i=0; i<48; i++)
			xor1[i]=expanded[i]^keyI[round][i];
	else 
		for(int i=0; i<48; i++)
			xor1[i]=expanded[i]^keyI[15-round][i];
}

void subs(void)
{                        /*S1*/
	const char s[8][64]={14,  4, 13,  1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7,
		                  0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8,
		                  4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0,
		                 15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13,
						 /*S2*/
	                     15,  1,  8, 14,  6, 11,  3,  4,  9,  7,  2, 13, 12,  0,  5, 10,
		                  3, 13,  4,  7, 15,  2,  8, 14, 12,  0,  1, 10,  6,  9, 11,  5,
		                  0, 14,  7, 11, 10,  4, 13,  1,  5,  8, 12,  6,  9,  3,  2, 15,
					     13,  8, 10,  1,  3, 15,  4,  2, 11,  6,  7, 12,  0,  5, 14,  9,
						 /*S3*/
	                     10,  0,  9, 14,  6,  3, 15,  5,  1, 13, 12,  7, 11,  4,  2,  8,
		                 13,  7,  0,  9,  3,  4,  6, 10,  2,  8,  5, 14, 12, 11, 15,  1,
		                 13,  6,  4,  9,  8, 15,  3,  0, 11,  1,  2, 12,  5, 10, 14,  7,
		                  1, 10, 13,  0,  6,  9,  8,  7,  4, 15, 14,  3, 11,  5,  2, 12,
						 /*S4*/
	                      7, 13, 14,  3,  0,  6,  9, 10,  1,  2,  8,  5, 11, 12,  4, 15,
		                 13,  8, 11,  5,  6, 15,  0,  3,  4,  7,  2, 12,  1, 10, 14,  9,
		                 10,  6,  9,  0, 12, 11,  7, 13, 15,  1,  3, 14,  5,  2,  8,  4,
		                  3, 15,  0,  6, 10,  1, 13,  8,  9,  4,  5, 11, 12,  7,  2,  14,
						 /*S5*/
	                      2, 12,  4,  1,  7, 10, 11,  6,  8,  5,  3, 15, 13,  0, 14,  9,
		                 14, 11,  2, 12,  4,  7, 13,  1,  5,  0, 15, 10,  3,  9,  8,  6,
		                  4,  2,  1, 11, 10, 13,  7,  8, 15,  9, 12,  5,  6,  3,  0, 14,
					     11,  8, 12,  7,  1, 14,  2, 13,  6, 15,  0,  9, 10,  4,  5, 3,
						 /*S6*/
	                     12,  1, 10, 15,  9,  2,  6,  8,  0, 13,  3,  4, 14,  7,  5, 11,
		                 10, 15,  4,  2,  7, 12,  9,  5,  6,  1, 13, 14,  0, 11,  3,  8,
		                  9, 14, 15,  5,  2,  8, 12,  3,  7,  0,  4, 10,  1, 13, 11,  6,
		                  4,  3,  2, 12,  9,  5, 15, 10, 11, 14,  1,  7,  6,  0,  8, 13,
						 /*S7*/
	                      4, 11,  2, 14, 15,  0,  8, 13,  3, 12,  9,  7,  5, 10,  6,  1,
		                 13,  0, 11,  7,  4,  9,  1, 10, 14,  3,  5, 12,  2, 15,  8,  6,
		                  1,  4, 11, 13, 12,  3,  7, 14, 10, 15,  6,  8,  0,  5,  9,  2,
		                  6, 11, 13,  8,  1,  4, 10,  7,  9,  5,  0, 15, 14,  2,  3, 12,
						 /*S8*/
	                     13,  2,  8,  4,  6, 15, 11,  1, 10,  9,  3, 14,  5,  0, 12,  7,
		                  1, 15, 13,  8, 10,  3,  7,  4, 12,  5,  6, 11,  0, 14,  9,  2,
		                  7, 11,  4,  1,  9, 12, 14,  2,  0,  6, 10, 13, 15,  3,  5,  8,
		                  2,  1, 14,  7,  4, 10,  8, 13, 15, 12,  9,  0,  3,  5,  6, 11};
	char temp[8][6], qr[8]; 
	int buf=8;
	for(int i=0; i<8; i++)
		for(int j=0; j<6; j++)
			temp[i][j]=xor1[i*6+j];

	for(int i=0; i<8; i++)
		qr[i]=s[i][(temp[i][0]*2+temp[i][5])*16+(8*temp[i][1]+4*temp[i][2]+2*temp[i][3]+temp[i][4])];
	for(int i=0, k=0; i<8;)
	{
		sub[i*4+(k++)] = bool(qr[i] & (char)buf);
		if(k>=4) {k=0; i++; buf=8;}
		else buf = buf/2;
	}
}

void permut(void)
{
	const char perm[]={16,  7, 20, 21, 29, 12, 28, 17,  1, 15, 23, 26,  5, 18, 31, 10,
		                2,  8, 24, 14, 32, 27,  3,  9, 19, 13, 30,  6, 22, 11,  4, 25};
	for(int i=0; i<32; i++)
		per[i]=sub[perm[i]-1];
}

void xorLAP(void)
{
	for(int i=0; i<32; i++)
		xor2[i]=per[i]^leftP[i];
}

char* encryption(char *t)
{
	memset(text, 0, 1000);
	memset(final, 0, 1000);
	strncpy(text, t, strlen(t));
	short size=strlen(text), pos;
	int buf=128;
	char temp[64]={0};
	if(pos=size%8, pos) for(int i=0; i<8-pos; i++) text[size++]=' '; text[size]='\0';
	keyGen();
	for(int i=0, nT=0, nF=0; i<size/8; i++)
	{
		for(int j=0, k=0; j<8;)
		{
			temp[j*8+(k++)] = bool(text[nT] & (char)buf);
			if(k>=8) {k=0; j++; nT++; buf=128;}
			else buf = buf/2;
		}
		IP1(temp);
		for(int j=0; j<32; j++) leftP[j]=block[j];
		for(int j=32; j<64; j++) rightP[j-32]=block[j];
		for(int round=0; round<16; round++)
		{
			expand();
			xorRAK(round, true);
			subs();
			permut();
			xorLAP();
			for(int j=0; j<32; j++) leftP[j]=rightP[j];
			for(int j=0; j<32; j++) rightP[j]=xor2[j];
		}
		for(int j=0; j<32; j++) temp[j]=rightP[j];
		for(int j=32; j<64; j++) temp[j]=leftP[j-32];
		IP2(temp);
		int buf, d;
		for(int j=0; j<8; j++)
		{
			buf=128;
			d=0;
			for(int m=0; m<8; m++)
			{
				d=d+block[j*8+m]*buf;
				buf=buf/2;
			}
			final[nF++]=(char)d;
		}
	}
	final[1000]='\0';
	return final;
}

char* decryption(char *t)
{
	memset(text, 0, 1000);
	memset(final, 0, 1000);
	strncpy(text, t, strlen(t));
	short size=strlen(text), pos;
	int buf=128;
	char temp[64]={0};
	if(pos=size%8, pos) for(int i=0; i<8-pos; i++) text[size++]=' '; text[size]='\0';
	keyGen();
	for(int i=0, nT=0, nF=0; i<size/8; i++)
	{
		for(int j=0, k=0; j<8;)
		{
			temp[j*8+(k++)] = bool(text[nT] & (char)buf);
			if(k>=8) {k=0; j++; nT++; buf=128;}
			else buf = buf/2;
		}
		IP1(temp);
		for(int j=0; j<32; j++) leftP[j]=block[j];
		for(int j=32; j<64; j++) rightP[j-32]=block[j];
		for(int round=0; round<16; round++)
		{
			expand();
			xorRAK(round, false);
			subs();
			permut();
			xorLAP();
			for(int j=0; j<32; j++) leftP[j]=rightP[j];
			for(int j=0; j<32; j++) rightP[j]=xor2[j];
		}
		for(int j=0; j<32; j++) temp[j]=rightP[j];
		for(int j=32; j<64; j++) temp[j]=leftP[j-32];
		IP2(temp);
		int buf, d;
		for(int j=0; j<8; j++)
		{
			buf=128;
			d=0;
			for(int m=0; m<8; m++)
			{
				d=d+block[j*8+m]*buf;
				buf=buf/2;
			}
			final[nF++]=(char)d;
		}
	}
	final[1000]='\0';
	return final;
}

#include "Form1.h"
using namespace DES5;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());
	return 0;
}
