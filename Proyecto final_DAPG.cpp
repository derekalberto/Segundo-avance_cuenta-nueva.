#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int* item, * anio, registros, n = 1, desicion, modificar;
string* nombre, * clasificacion, * caracteristicas, * genero, * descripcion;
float* precio, * iva, * total;

///funciones void
void Agregar();
void Modificar();
void Eliminar();
void Lista();
void Archivo();

int main()
{
	int opcion;
	printf("\t ***Videojuegos UANL***");
	printf("Ingrese una opcion\n 1. Agregar articulo \n2. Modificar articulo \n3. Eliminar articulo \n4.Lista de articulos \n5.Limpiar pantalla \n6.Salir");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1: //Agregar
		///
		Agregar();
			system("pause");
		return main();
		break;
	case 2: //Modificar
		///
		Modificar();
			system("pause");
		return main();
		break;
	case 3: //Eliminar
		///
		Eliminar();
			system("pause");
		return main();
		break;
	case 4: //Lista
		///
		Lista();
			system("pause");
		return main();
		break;
	case 5: //Limpiar
		///
		system("pause");
		return main();
		break;
	case 6: //Salir
		///
		system("pause");
		return main();
		break;

	default:
		break;
	}
}

void Agregar()
{
	printf("Cuantos registros desea dar de alta");
	scanf_s("%d", &registros);
	item = new int[registros];
	anio = new int[registros];
	nombre = new string[registros];
	clasificacion = new string[registros];
	caracteristicas = new string[registros];
	genero = new string[registros];
	descripcion = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];


	//arreglo
	for (int i = 0; i < registros; i++)
	{
		printf("Ingrese el numero del articulo \n ");
		scanf_s("%d", &item[i]);
		do
		{
			if (item[i] != item[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("El numero del articulo ya existe \n ");
				printf("Ingrese el numero del articulo \n ");
				scanf("%d", &item[i]);
			}
		} while (n < registros);
		printf("ingrese el nombre del videojuego \n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese el a%co de lanzamiento \n", 164);
		scanf_s("%d", &anio[i]);
		printf("Ingrese el clasificacion del videojuego \n");
		cin.ignore();
		getline(cin, clasificacion[i]);
		printf("Ingrese la caracteristicas del videojuego \n");
		cin.ignore();
		getline(cin, caracteristicas[i]);
		printf("Ingrese el genero del videojuego \n");
		cin.ignore();
		getline(cin, genero[i]);
		printf("Ingrese la descripcion videojuego \n");
		cin.ignore();
		getline(cin, descripcion[i]);
		printf("Ingrese el precio del videojuego \n");
		cin.ignore();
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * 1.16;
		total[i] = precio[i] + iva[i];
		printf("El precio total del videojuego es de $%f \n", total[i]);
		system("pause");
		//preguntar si se quiere dar de alta el producto
		if ((registros - 1) == i)
		{
			do
			{
				printf("Quieres dar de alta otros registros 1.Si \n2.No\n ");
				scanf_s("%d", &desicion);
				if (desicion == 1 || desicion == 2)
				{
					if (desicion == 1)
					{
						registros = registros + 1;
					}
				}
				else
				{
					printf("Ingrese una opcion correcta");
				}
			} while (desicion == 1 || desicion == 2);
		}
	}
}

void Modificar()
{
	
	do
	{
		printf("Ingrese el num del articulo a modificar \n");
		scanf_s("%d", &modificar);
	} while (Modificar > 0);
	//swith
	for (int i = 0; i < registros; i++)
	{
		if (mod == item[i]);
		{

			printf("ingrese el nombre del videojuego \n");
			cin.ignore();
			getline(cin, nombre[i]);
			printf("Ingrese el a%co de lanzamiento \n", 164);
			scanf_s("%d", &anio[i]);
			printf("Ingrese el clasificacion del videojuego \n");
			cin.ignore();
			getline(cin, clasificacion[i]);
			printf("Ingrese la caracteristicas del videojuego \n");
			cin.ignore();
			getline(cin, caracteristicas[i]);
			printf("Ingrese el genero del videojuego \n");
			cin.ignore();
			getline(cin, genero[i]);
			printf("Ingrese el descripcion videojuego \n");
			cin.ignore();
			getline(cin, descripcion[i]);
			printf("Ingrese el precio del videojuego \n");
			cin.ignore();
			scanf_s("%f", &precio[i]);
			iva[i] = precio[i] * 1.16;
			total[i] = precio[i] + iva[i];
			printf("El precio total del videojuego es de $%f \n", total[i]);
			system("pause");

		}
	}
}

void Eliminar()
{
	int eliminar;
	printf("Ingrese el articulo a eliminar \n");
	scanf_s("%d", &eliminar);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar == item[i]);
		{
			item[i] = 0;
		}
	}
}

void Lista()
{
	int opc2;
	string busc;
	printf("1.-Clasificacion \n 2.-Genero \n");
	scanf_s("%d", &opc2);
	switch (opc2)
	{
	case 1:
		printf("Ingrese la clasificacion a buscar: \n");
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busc);
			{
				if(item[i] !=0)
				{
				printf("Articulo: %d", item[i]);
				printf("Anio: %d", anio[i]);
				printf("Videojuego: %s", nombre[i].c_str());
				printf("Clasificacion: %s", clasificacion[i].c_str());
				printf("Genero: %s", genero[i].c_str());
				printf("Caracteristicas: %s", caracteristicas[i].c_str());
				printf("Descripcion: %s", descripcion[i].c_str());
				printf("subtotal: %f", precio[i]);
				printf("iva: %f", iva[i]);
				printf("total: %f", total[i]);
				}
			}
		}
		break;

	case 2:
		printf("Ingrese el genero a buscar: \n");
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (genero[i] == busc);
			{
					if (item[i] != 0)
					{
				printf("Articulo: %d", item[i]);
				printf("Anio: %d", anio[i]);
				printf("Videojuego: %s", nombre[i].c_str());
				printf("Clasificacion: %s", clasificacion[i].c_str());
				printf("Genero: %s", genero[i].c_str());
				printf("Caracteristicas: %s", caracteristicas[i].c_str());
				printf("Descripcion: %s", descripcion[i].c_str());
				printf("subtotal: %f", precio[i]);
				printf("iva: %f", iva[i]);
				printf("total: %f", total[i]);
					}
			}
		}
		break;
	default:
		printf("Ingrese la opcion correcta");
		return Lista();
	}while (opc2 != 1 || opc2 != 2);
}
