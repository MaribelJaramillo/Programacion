//Creado por: Maribel Elizabeth Jaramillo Quiñónez
#include<iostream>
using namespace std;
int main()
{
	int MEJQ_i=0,MEJQ_l;
	float MEJQ_x,MEJQ_s=0;
	cout<<"ingrese el limite MEJQ_l="; cin>>MEJQ_l;
	do{

	cout<<"ingrese el numero MEJQ_x="; cin>>MEJQ_x;
	MEJQ_i=MEJQ_i+1;
	MEJQ_s=MEJQ_s+MEJQ_x;



	}while(MEJQ_i<MEJQ_l);
	cout<<"Se ingresaron "<<MEJQ_l<<" numeros "<< "que sumaron "<<MEJQ_s<<endl;
	return 0;
}
