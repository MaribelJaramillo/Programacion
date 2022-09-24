//Programa que presenta las operaciones básicas
//Creado por Maribel Elizabeth Jaramillo Quiñónez
//Fecha: 24-09-2022

#include<iostream>
using namespace std;
int main()
{
	float MEJQ_x,MEJQ_y,MEJQ_s,MEJQ_m,MEJQ_d,MEJQ_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de MEJQ_x=:";
	cin>>MEJQ_x;
	cout<<"Ingrese en valor de MEJQ_y=:";
	//Operaciones 
	cin>>MEJQ_y;
	MEJQ_s=MEJQ_x+MEJQ_y;
	MEJQ_m=MEJQ_x*MEJQ_y;
	MEJQ_d=MEJQ_x/MEJQ_y;
	MEJQ_r=MEJQ_x-MEJQ_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<MEJQ_x<<" + "<<MEJQ_y<<" = "<<MEJQ_s<<endl;
	cout<<"Las multiplicacion de "<<MEJQ_x<<" * "<<MEJQ_y<<" = "<<MEJQ_m<<endl;
	cout<<"Las division de "<<MEJQ_x<<" / "<<MEJQ_y<<" = "<<MEJQ_d<<endl;
	cout<<"Las resta de "<<MEJQ_x<<" - "<<MEJQ_y<<" = "<<MEJQ_r<<endl;
	return 0;
}
