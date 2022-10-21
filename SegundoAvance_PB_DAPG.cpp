// PrimerAvance_PB.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
	int NumeArti, Opcion;
	float precio_local = 0, impuesto, total;
	string Videojuego, descripcion, categoria, clasificacion, genero, Anoex;

	cout << " ***VIDEOGAME DEKOKO34*** " << endl;
	system("cls");
	cout << "1.-Agregar videojuego \n 2.-Modificar videojuego \n 3.-Eliminar Videojuego \n 4.-Lista Videojuegos \n 5.-Limpiar pantalla \n 6.-Salir \n ";
	cin >> Opcion;

	switch (Opcion)

	{

	case 1:
		//capturar y guardar los datos por posicion
		for (int i = 0; i < 3; i++)
		{
			videojuego[i].idjuego = 20142623435 + i;
			printf("ID del videjuego: %d \n", videojuego[i].idjuego);
			int salida = 1;

			do
			{
				printf("Agrege el num del videojuego \n");
				scanf("%d", &videojuego[i].numjuego);
			} while (videojuego[i].NumeArti == videojuego[i - 1].NumeArti || videojuego[i].NumeArti == videojuego[i - 2].NumeArti);


			printf("Agregar el nombre del videojuego\n");
			cin.ignore();
			getline(cin, videojuego[i].Videojuego);
			printf("Agregar el fecha de lanzamiento del videojuego\n");
			cin.ignore();
			getline(cin, videojuego[i].Anoex);
			printf("Agregar el clasificacion del videojuego\n");
			cin.ignore();
			getline(cin, videojuego[i].clasificacion);
			printf("Agregar la descripcion del videojuego\n");
			cin.ignore();
			getline(cin, videojuego[i].descripcion);
			printf("Agregar la categoria del videojuego\n");
			cin.ignore();
			getline(cin, videojuego[i].categoria);
			printf("Agregar el subtotal \n");
			scanf("%f", &videojuego[i].precio_unitario);
			videojuego[i].impuesto = videojuego[i].precio_unitario * .16;
			videojuego[i].total = videojuego[i].precio_unitario + videojuego[i].impuesto;

		}
		break;

	case 2:
		break;

	case 3:// no hara nada
		printf("Agrege el num del videojuego");
		scanf("%d", &busqueda);

		//imprimir los datos por posicion 
		for (int i = 0; i < 3; i++)
		{
			if (busqueda == videojuego[i].NumeArti)
			{
				videojuego[i].numgame = 0;
			}
		}
		break;

	case 4:
		int opc;
		printf(" 1.-Listas Vigentes\n");
		scanf("%d", &opc);
		if (opc == 1)
		{
			printf("Agrege el num del videojuego");
			scanf("%d", &busqueda);

			//imprimir los datos por posicion 
			for (int i = 0; i < 3; i++)
			{
				if (busqueda == videojuego[i].NumeArti)
				{
					printf("Id del videojuego: %d \n", videojuego[i].idjuego);
					printf("Numero del videojuego: %d \n", videojuego[i].NumeArti);
					printf("Nombre del videojuego: %s \n", videojuego[i].Videojuego.c_str());
					printf("Fecha de lanzamiento del videojuego: %s \n", videojuego[i].Anoex.c_str());
					printf("Clasificacion del videojuego: %s \n", videojuego[i].clasificacion.c_str());
					printf("Descripcion del videojuego: %s \n", videojuego[i].descripcion.c_str());
					printf("Precio unitario del videojuego: %f \n", videojuego[i].precio_unitario);
					printf("El Iva: %f \n", videojuego[i].impuesto);
					printf("Costo total: %f \n", videojuego[i].total);
				}
			}
		}
		break;
	case 5:
		printf("saliendo... \n");
		break;
	default:
		printf("intente denuevo... \n");
		break;
	}
} while (opcion != 5);
system("pause");
}

}