#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int  m=0, i=0, tiempo, total_mes=0, febrero=0;
	int semana,anio,mes,dia;
	int res;
	
	time_t sisTime;
	time(&sisTime);
	struct tm *mtp =localtime(&sisTime);
	dia=mtp->tm_mday;
	mes=mtp->tm_mon;
	anio=(mtp->tm_year)+1900;

	printf("El dia de hoy es: %d/%d/%d\n\n", mtp->tm_mday, mtp->tm_mon+1, mtp->tm_year+1900);

	mes=mtp->tm_mon;
	
	switch (mes)
	{
	case 0:printf("\t\tENERO\tdel\tDEL\t%d", anio); break;	
	case 1:printf("\t\tFREBRERO\tDEl\t%d", anio); break;	
	case 2:printf("\t\tMARZO\tDEL\t%d", anio); break;	
	case 3:printf("\t\tABRIL\tDEl\t%d", anio); break;	
	case 4:printf("\t\tMAYO\tDEl\t%d", anio); break;	
	case 5:printf("\t\tJUNIO\tDEL\t%d", anio); break;	
	case 6:printf("\t\tJULIO\tDEl\t%d", anio); break;	
	case 7:printf("\t\tAGOSTO\tDEL\t%d", anio); break;	
	case 8:printf("\t\tSEPTIEMBRE\tDEl\t%d", anio); break;	
	case 9:printf("\t\tOCTUBRE\tDEl\t%d", anio); break;	
	case 10:printf("\t\tNOVIEMBRE\tDEl\t%d", anio); break;	
	case 11:printf("\t\tDICIEMBRE\tDEL\t%d", anio); break;	
	}
	
	if ((anio%4==0) && (anio%100!=0) || anio%400==0)
		febrero=29;
	else
		febrero=28;
	
	switch (mes){
		case 3: case 5: case 8: case 10:
		total_mes=30;
		break;
		case 1:
		total_mes=febrero;
		break;
		case 0: case 4: case 6: case 7: case 9: case 11:
		total_mes=31;
		break;
	}
	
	printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");
	
	semana = ((anio-1)%7+((anio-1)/4-(3*((anio-1)/100+1)/4))%7+mes&total_mes+1%7)%7;
	
		for(m=0; m<semana; m++)
		printf("\t");
		
		for(i=1; i<=total_mes; i++)
		{
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana||i==36-semana)
				printf("\n%d\t",i);
			else
				printf("%d\t",i);
		}	

	printf("\n\nDesea Buscar Otra Fecha?");
	printf("\n\t 1=SI 0=NO\t>>>");
	scanf("%d", &res);
	
	if (res!=0){
	printf("Mes:\n"); scanf("%d",&mes);
	printf("Anio:\n"); scanf("%d",&anio);
	
	mes= mes-1;
	
	system ("cls");
	
		switch (mes)
	{
	case 0:printf("\t\tENERO\tdel\tDEL\t%d", anio); break;	
	case 1:printf("\t\tFREBRERO\tDEl\t%d", anio); break;	
	case 2:printf("\t\tMARZO\tDEL\t%d", anio); break;	
	case 3:printf("\t\tABRIL\tDEl\t%d", anio); break;	
	case 4:printf("\t\tMAYO\tDEl\t%d", anio); break;	
	case 5:printf("\t\tJUNIO\tDEL\t%d", anio); break;	
	case 6:printf("\t\tJULIO\tDEl\t%d", anio); break;	
	case 7:printf("\t\tAGOSTO\tDEL\t%d", anio); break;	
	case 8:printf("\t\tSEPTIEMBRE\tDEl\t%d", anio); break;	
	case 9:printf("\t\tOCTUBRE\tDEl\t%d", anio); break;	
	case 10:printf("\t\tNOVIEMBRE\tDEl\t%d", anio); break;	
	case 11:printf("\t\tDICIEMBRE\tDEL\t%d", anio); break;	
	}
	
	if ((anio%4==0) && (anio%100!=0) || anio%400==0)
		febrero=29;
	else
		febrero=28;
	
	switch (mes){
		case 3: case 5: case 8: case 10:
		total_mes=30;
		break;
		case 1:
		total_mes=febrero;
		break;
		case 0: case 4: case 6: case 7: case 9: case 11:
		total_mes=31;
		break;
	}
	
	printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");
	
	semana = ((anio-1)%7+((anio-1)/4-(3*((anio-1)/100+1)/4))%7+anio%total_mes+1%7)%7;
	
		for(m=0; m<semana; m++)
		printf("\t");
		
		for(i=1; i<=total_mes; i++)
		{
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana||i==36-semana)
				printf("\n%d\t",i);
			else
				printf("%d\t",i);
		}	
	}
	else{
		system("pause");
	}


	return 0;
}
