#include <cstdlib>
#include <iostream>
#include <queue>    //para generar la cola

using namespace std;

int main(int argc, char *argv[])
{
	int opc=0,s=0,l=6,n;
	
	queue<int> a;
	do
	{
	system("Cls");
	cout<<"Programa para generar colas"<<endl;
	cout<<"1.- Insertar elemento\n2.- Eliminar elemento\n3.- Mostrar elemento del frente\n4.- Mostrar final \n5.- Mostrar cola\n6.- Salir"<<endl;
	cin>>opc;
	
	switch(opc)
	{
		case 1: cout<<"Insertar elemento"<<endl;
				cout<<"Que numero desea ingresar"<<endl;
				cin>>n;
				a.push(n);
			break;
		case 2: cout<<"Eliminar elemento"<<endl;
			cout << a.front()<<endl;
			a.pop();
			cout<<"\nSe ha eliminado el elemento correctamente"<<endl;
			break;
		case 3: cout<<"Mostrar elemento del frente"<<endl;
			cout<<a.front()<<endl;
				
			break;
		case 4: cout<<"Mostrar el ultimo elemento"<<endl;
			cout<<a.back()<<endl;
				
			break;
		case 5: cout<<"Mostrar cola"<<endl;
			if(a.size()>0)
			{
			cout<<"El tamaño de la cola es de: "<<a.size()<<endl;
			while(! a.empty())
			{
				cout << a.front() <<" ";
				a.pop();
			}
			cout<<endl;
			}
			else
			{
				cout<<"Cola vacia"<<endl;
			}
			break;
		case 6: cout<<"Salir"<<endl;
			exit (-1);
			break;
		default: cout<<"Seleccione una opcion correcta"<<endl;
	}
	cout<<"Desea regresar al menu?    Si=1       No=cualquier numero"<<endl;
	cin>>s;
	}while(s==1);
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
