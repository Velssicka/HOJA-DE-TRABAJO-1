#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	int horas, cant, opcion;
	float pago;
	
	fflush(stdin);
	ofstream archivo;
	string filename, amenor, amayor, apromedio;
	cout<<"Indique nombre de archivo: ";
	getline(cin,filename);
	
	archivo.open(filename.c_str(),ios::app);
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	

	cout<<"Elija una de las siguientes opciones: "<<endl;
	cout<<"1 - Ingrese cantidad de horas trabajadas y costo "<<endl;
	cout<<"2 - Leer datos ingresados "<<endl;
	cout<<"3 - Mostrar planilla de IGSS "<<endl;
	cin>>opcion;
	
	
	
	switch (opcion){
		case 1: cout<<"Ingrese el costo de hora ordinaria: "<<endl;
				cout<<"Ingrese la cantidad de horas trabajadas: "<<endl;
				cin>>cant;
				if(cant<=40){
					pago = cant * horas;
					cout<<"Cantidad a pagar: Q "<<pago;
				}
				else{
					pago = ((cant-40)*(horas*1.5))+(40*horas);
					cout<<"Cantidad a pagar: Q "<<pago;
				}
		case 2:	cout<<"En proceso..."<<endl;
	}
		

}
}
