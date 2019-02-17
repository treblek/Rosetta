#include <stdio.h>
#include "stdint.h"
#include <stdlib.h>

//Array 2 yani dizi kaydırma modülü henüz tamamlanmadı.
//system("CLS"); delete command

 void setArray(uint8_t sayilar[][4]);
 void print(uint8_t sayilar[][4]);
 uint8_t control(uint8_t sayilar[][4]);
 void play(uint8_t sayilar[][4]);
 void setArray2(uint8_t sayilar[][4],uint8_t cor1);
int main()
{
	uint8_t sayilar[4][4];
	setArray(sayilar);
	play(sayilar);
	
  return 0;
}
void print(uint8_t sayilar[][4])
{
	for(uint8_t i =0;i<4;i++)
	{
				if(i==0)
		{
		
		printf("\t       1   2   3    4\n");
		printf("\t       |   |   |    |\n");
		printf("\t       v   v   v    v\n\n");}
			printf("\t%d---> %d - %d - %d - %d   ",5+i,sayilar[i][0],sayilar[i][1],sayilar[i][2],sayilar[i][3]);
			//printf("\t%d---> %d - %d - %d - %d   <---%d",13+i,sayilar[i][0],sayilar[i][1],sayilar[i][2],sayilar[i][3],5+i);
		printf("\n");
	/*	if(i==3)
		{
			printf("\n");
		printf("\t       ^   ^   ^    ^\n\n");
		printf("\t       |   |   |    |\n");
		printf("\t       12  11  10   9\n");}*/
	}
			
		
		
}
 void setArray2(uint8_t sayilar[][4],uint8_t cor1)
 {
 	uint8_t var; 
 	switch(cor1)
 	{
 		case 1:
 				var = sayilar[0][3];
 		sayilar[0][0] += '\n';
		 sayilar[0][0] = var; 
		 system("cls");
	 print(sayilar);
 			break;
 		case 2:
 			system("cls");
	 print(sayilar);
 			break;
 		case 3:
 			system("cls");
	 print(sayilar);
 			break;
 		case 4:
 			system("cls");
	 print(sayilar);
 			break;
 		case 5:
 			system("cls");
	 print(sayilar);
 			break;
 		case 6:
 			system("cls");
	 print(sayilar);
 			break;
 		case 7:
 			system("cls");
	 print(sayilar);
 			break;
 		case 8:
 	system("cls");
	 print(sayilar);
 			break;
 		default:
 			printf("Lutfen 1-8 ve arasinda bir deger giriniz.");
 			break;
	 }
 }
void play(uint8_t sayilar[][4])
{
	print(sayilar);
	int cor1,cor2;
	
	while(control(sayilar) !=1)
	{
		printf("\nLutfen koordinati giriniz.");
		scanf("%d",&cor1);
		setArray2(sayilar,cor1);
	}
}
	
uint8_t control(uint8_t sayilar[][4])
{
    //tek kontrolden daha hızlı bir geri dönüş
    uint8_t i = 0;
    if (sayilar[0][i] == 1 && sayilar[0][i + 1] == 2 && sayilar[0][i + 2] == 3 && sayilar[0][i + 3] == 4)
    {
        if (sayilar[1][i] == 5 && sayilar[1][i + 1] == 6 && sayilar[1][i + 2] == 7 && sayilar[1][i + 3] == 8)
        {
            if (sayilar[2][i] == 9 && sayilar[2][i + 1] == 10 && sayilar[2][i + 2] == 11 && sayilar[2][i + 3] == 12)
            {
                if (sayilar[3][i] == 13 && sayilar[3][i + 1] == 14 && sayilar[3][i + 2] == 15 && sayilar[3][i + 3] == 16)
                {
                    return 1;
                }
            }
        else
        {
            return 0;
        }
    }
	else
	{
		return 0;
	}	
	}
	else
	{
		return 0;
	}
}
void setArray(uint8_t sayilar[][4])
{
	uint8_t m = 1;
	for(uint8_t i =0;i<4;i++)
	{
		for(uint8_t j=0;j<4;j++)
		{
			sayilar[i][j] = m;
			m++;
		}
	}
	uint8_t randomArray,rand1,rand2;
	
	for(uint8_t m= 0;m<100;m++)
	{
		for(uint8_t i =0;i<4;i++)
	{
			for(uint8_t j =0;j<4;j++)
	{
		for(uint8_t k =0;k<2;k++)
		{
			rand1=rand()%4;
			rand2=rand()%4;
		}
		randomArray = sayilar[i][j];
		sayilar[i][j] = sayilar[rand1][rand2];
		sayilar[rand1][rand2] = randomArray;
	}
	}
	}
	
}
