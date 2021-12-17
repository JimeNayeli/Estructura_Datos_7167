#include <iostream>
#include <ctype.h>

bool continuar(char mensaje[]){
	char ch;
	printf(mensaje);
	do{
		scanf("%c",&ch);
		ch = toupper(ch);		
	}while(ch!='S'&&ch!='N');
	return (ch=='S'?true:false);
}

int menu()
{
	int opc;
	printf("\n**** INICIO ****");
	printf("\n1. Ordenar Burbuja");
	printf("\n2. Ordenar QuickSort");
	printf("\n3. Ordenar ShellSort");
	printf("\n4. Ordenar Por Distribucion");
	printf("\n5. Ordenacion con ingreso");
	printf("\n0. Salir");
	printf("\nElija una opcion: ");
	scanf("%d",&opc);
	return opc;
}
void ingresar(double notas[],int n)
{
	int i;
	system("cls");
	for(i=0;i<n;i++)
	{
		do
		{
			printf("\n\t\tDato %d: ",i+1);
			scanf("%lf",&notas[i]);
		}while(notas[i]<0 || notas[i]>100);		
	}
}
void imprimir(double notas[],int n)
{
	int i;
	//printf("\n\t%4s%10s","No.","Dato");
	for(i=0;i<n;i++)
	{
		printf("\n\t%4d%10.2lf\t",i+1,notas[i]);			
	}	
}
