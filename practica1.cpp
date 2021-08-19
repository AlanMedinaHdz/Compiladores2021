#include <stdlib.h>
#include <stdio.h>

class AFN
{
	char* estadoInicial;
	char* estadoActual;
	char** tablaTransicion;
	char* estados;
	char* simbolos;
	int numEstados;
	int numSimbolos;
	
	public:
	void pedirSimbolos()
	{
		printf("Inserte el numero de simbolos del AFN");
		scanf("%d",&numSimbolos);
		
		simbolos = new char[numSimbolos];
		
		int i;
		for(i=0;i<numSimbolos;i++)
			scanf("%c",simbolos+i);
	}
	
	public:
	void pedirEstados()
	{
		printf("Inserte el numero de estados del AFN");
		scanf("%d",&numEstados);
		
		estados = new char[numEstados];
		
		int i;
		for(i=0;i<numEstados;i++)
			scanf("%c",estados+i);
	}
	
	public:
	void inicializarTabla()
	{
		tablaTransicion = new char*[numEstados];
		
		int i,j;
		for(i=0;i<numEstados;i++)
			tablaTransicion[i] = new char[numSimbolos];
			
		for(i=0;i<numEstados;i++)
		{
			for(j=0;j<numSimbolos;j++)
			{
				printf("Inserte la transicion del estado %c para el simbolo %c",estados[i],simbolos[j]);
				scanf("%c",&tablaTransicion[i][j]);	
			}
		}
	}
}

class AFD
{
	char* estadoInicial;
	char* estadoActual;
	char** tablaTransicion;
	char* estados;
	char* simbolos;
	int numEstados;
	int numSimbolos;
	
	public:
	void pedirSimbolos()
	{
		printf("Inserte el numero de simbolos del AFN");
		scanf("%d",&numSimbolos);
		
		simbolos = new char[numSimbolos];
		
		int i;
		for(i=0;i<numSimbolos;i++)
			scanf("%c",simbolos+i);
	}
	
	public:
	void pedirEstados()
	{
		printf("Inserte el numero de estados del AFN");
		scanf("%d",&numEstados);
		
		estados = new char[numEstados];
		
		int i;
		for(i=0;i<numEstados;i++)
			scanf("%c",estados+i);
	}
	
	public:
	void inicializarTabla()
	{
		tablaTransicion = new char*[numEstados];
		
		int i,j;
		for(i=0;i<numEstados;i++)
			tablaTransicion[i] = new char[numSimbolos];
			
		for(i=0;i<numEstados;i++)
		{
			for(j=0;j<numSimbolos;j++)
			{
				printf("Inserte la transicion del estado %c para el simbolo %c",estados[i],simbolos[j]);
				scanf("%c",&tablaTransicion[i][j]);	
			}
		}
	}
}

int main()
{
	
}
