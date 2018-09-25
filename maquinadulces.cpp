#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>


using namespace std;

struct Dispensador{
	char Nombre[20];
	int precio;
	int disponibilidad;
};


main(){

	int menu=99,saldo=0,dinero=0,dulce=0;
	Dispensador dulce1,dulce2,dulce3,dulce4,dulce5,dulce6,dulce7,dulce8,dulce9,dulce10;
	
	dulce1.Nombre, "Chocolatina Jumbo";
	dulce1.precio=2000;
	dulce1.disponibilidad=10;
	
	dulce2.Nombre, "Galletas Dux";
	dulce2.precio=600;
	dulce2.disponibilidad=2;
	
	dulce3.Nombre, "Galletas Festival grande";
	dulce3.precio=700;
	dulce3.disponibilidad=5;
	
	dulce4.Nombre, "Galletas Festival pequeña";
	dulce4.precio=600;
	dulce4.disponibilidad=1;
	
	dulce5.Nombre, "Mani La Especial";
	dulce5.precio=1500;
	dulce5.disponibilidad=0;
	
	dulce6.Nombre, "Chocolatina Gol";
	dulce6.precio=900;
	dulce6.disponibilidad=8;
	
	dulce7.Nombre, "Galletas Tosh";
	dulce7.precio=800;
	dulce7.disponibilidad=5;
	
	dulce8.Nombre, "Jumbo Cremosita";
	dulce8.precio=1000;
	dulce8.disponibilidad=8;
	
	dulce9.Nombre, "Submarino";
	dulce9.precio=1500;
	dulce9.disponibilidad=8;
	
	dulce10.Nombre, "Chocoso";
	dulce10.precio=2000;
	dulce10.disponibilidad=14;
	
	
	while(menu!=0){
		cout<<"Ingrese la opcion deseada"<<endl;
		cout<<" su saldo es: "<< saldo<<endl;
		cout<<"1. Agregar dinero"<<endl;
		cout<<"2. Sacar dulce"<<endl;
		cout<<"0. Salir"<<endl;
		cin>>menu;
		switch (menu){
			
			case 1:
				cout<<"1. Ingresar billete de 1000"<<endl;
				cout<<"2. Ingresar billete de 2000"<<endl;
				cout<<"3. Ingresar billete de 5000"<<endl;
				cout<<"0. Salir"<<endl;
				cin>>dinero;
				switch(dinero){
					
					case 1:
						saldo=saldo+1000;
						break;
						
					case 2:
						saldo=saldo+2000;
						break;
						
					case 3:
						saldo=saldo+5000;
						break;
						
					default:
						break;
				}
				break;
				
			case 2:
				cout<<"Ingrese el dulce que quiere"<<endl;
				cout<<"1. Chocolatina Jumbo:  2000"<<endl;
				cout<<"2. Galleta Dux:  600"<<endl;
				cout<<"3. Galleta Festival Grande:  700"<<endl;
				cout<<"4. Galleta Festival Pequeña:  600"<<endl;
				cout<<"5. Mani La Especial:  1500"<<endl;
				cout<<"6. Chocolatina Gol:  900"<<endl;
				cout<<"7. Galletas Tosh:  800"<<endl;
				cout<<"8. Jumbo Cremosita:  1000"<<endl;
				cout<<"9. Submarino:  1500"<<endl;
				cout<<"10. Chocoso:  2000"<<endl;
				cin>>dulce;
				switch(dulce){
					
					case 1:
						if(saldo>=dulce1.precio){
							if(dulce1.disponibilidad>0){
								saldo=saldo-dulce1.precio;
								dulce1.disponibilidad=dulce1.disponibilidad-1;
								cout<<"Chocolatina Jumbo"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce1.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
					
					case 2:
						if(saldo>=dulce2.precio){
							if(dulce2.disponibilidad>0){
								saldo=saldo-dulce2.precio;
								dulce2.disponibilidad=dulce2.disponibilidad-1;
								cout<<"Galleta Dux"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce2.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 3:
						if(saldo>=dulce3.precio){
							if(dulce3.disponibilidad>0){
								saldo=saldo-dulce3.precio;
								dulce3.disponibilidad=dulce3.disponibilidad-1;
								cout<<"Galleta Festival Grande"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce3.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 4:
						if(saldo>=dulce4.precio){
							if(dulce4.disponibilidad>0){
								saldo=saldo-dulce4.precio;
								dulce4.disponibilidad=dulce4.disponibilidad-1;
								cout<<"Galleta Festival Pequeña"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce4.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 5:
						if(saldo>=dulce5.precio){
							if(dulce5.disponibilidad>0){
								saldo=saldo-dulce5.precio;
								dulce5.disponibilidad=dulce5.disponibilidad-1;
								cout<<"Mani La Especial"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce5.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 6:
						if(saldo>=dulce6.precio){
							if(dulce6.disponibilidad>0){
								saldo=saldo-dulce6.precio;
								dulce6.disponibilidad=dulce6.disponibilidad-1;
								cout<<"Chocolatina Gol"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce6.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
					
					case 7:
						if(saldo>=dulce7.precio){
							if(dulce7.disponibilidad>0){
								saldo=saldo-dulce7.precio;
								dulce7.disponibilidad=dulce7.disponibilidad-1;
								cout<<"Gallestas Tosh"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce7.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 8:
						if(saldo>=dulce8.precio){
							if(dulce8.disponibilidad>0){
								saldo=saldo-dulce8.precio;
								dulce8.disponibilidad=dulce8.disponibilidad-1;
								cout<<"Jumbo Cremosita"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce8.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 9:
						if(saldo>=dulce9.precio){
							if(dulce9.disponibilidad>0){
								saldo=saldo-dulce9.precio;
								dulce9.disponibilidad=dulce9.disponibilidad-1;
								cout<<"Submarino"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce9.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
						
					case 10:
						if(saldo>=dulce10.precio){
							if(dulce10.disponibilidad>0){
								saldo=saldo-dulce10.precio;
								dulce10.disponibilidad=dulce10.disponibilidad-1;
								cout<<"Chocoso"<<endl;
								cout<<"Su cambio es: "<<saldo<<endl;
								cout<<"Disponible "<<dulce10.disponibilidad<<endl;
							}
							else
							cout<<"No quedan unidades disponibles."<<endl;
						}
						else
						cout<<"Saldo insuficiente"<<endl;
						break;
				}
				break;
				
			default:
				break;
		}
	}
	
	return 0;
}
