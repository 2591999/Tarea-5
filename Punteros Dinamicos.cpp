#include <iostream>
using namespace std;
// punteros con asignacion de memoria dinamica
// new =  reservar un espacio en memoria
// delete [] = liberar la memoria
main(){
	
	/*int edad, *p_edad;
	p_edad =&edad;
	cout<<"Ingrese edad:";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if (*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else {
		cout<<"Menor de edad"<<endl;
	}*/
	
	/*int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;*/
	
	/*int total = 0,*p_notas;
	p_notas = new int[total];
	char res;
	
	do{
		cout<<"Ingrese Nota "<<total<<":";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro valor:";
		cin>>res;
	}while(res=='s' || res=='S');
	
	cout<<"----------Mostrar notas------------"<<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}*/
	
	int fil = 0, col=0,**pm_notas;
	cout<<"Ingrese la cantidad de estudiantes Estudiantes:";
	cin>>fil;
	cout<<"Ingrese la cantidad de Notas por estudiantes";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"------------Estudiante-------------"<<i<<endl;		
		for (int ii=0;ii<col;ii++){
			cout<<"Estudiante "<<i<<", Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas)+ii);
		}
		cout<<"-------------------------"<<endl;
	}
	cout<<"--------------Mostrar Notas------------------"<<endl;
	for (int i=0;i<fil;i++){		
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas)+ii)<<endl;
		}
		cout<<"---------------------------"<<endl;
	}
	
	for(int i=0;i<fil;i++){
		delete []  pm_notas[i];
	}
	delete [] pm_notas;

	system("pause");
}
