#include<iostream>
using namespace std;
int a,b,c,d,e,f ;//definimos 6 variables 3 para la primera hora 3 para la segunda
void varia(int& hora,int& minu,int& sec)   {// la funcion varia es para colocar la hora en la que el usuario ingreso
    cin>>hora;cout<<hora<<":";
    cin>>minu;cout<<hora<<":"<<minu<<":";
    cin>>sec;
    cout<<hora<<":"<<minu<<":"<<sec<<endl;
    }
void reloj(int& hora,int& minu,int& sec)// esta funcion revisa si la hora colocada es valida
{
    while( hora >23|| minu> 59 || sec>59 ||hora< 0 ||minu< 0 ||sec < 0){
            cout<<"hora incorecta,introduzca de nuevo"<<endl;
            varia(hora,minu,sec);}}
int dife(int a,int b){// la duncion dife se encarga de calcular la diferencia entre las horas y mandarlas
	int c;
        if (a<b){// si el primer valor es menor al segundo la diferencia es una simple resta
            c=b-a;
            return c;}

		else if(a==b){
		return 0;}
		else{
			c= (24-a)+(b-0);
          }
         return c;}
int difem(int a,int b){// la duncion dife se encarga de calcular la diferencia entre las horas y mandarlas
	int c;
        if (a<b){// si el primer valor es menor al segundo la diferencia es una simple resta
            c=b-a;
            return c;}

		else if(a==b){
		return 0;}
		else{
			c= (60-a)+(b-0);
          }

         return c;}

int main(){
    cout<<"introduce la hora de ingreso"<<endl;// pedimos la hora y la revisamos
    varia(a,b,c);
    reloj(a,b,c);

    cout<<"introduce la hora de salida"<<endl;// pedimos la hora y la revisamos
    varia(d,e,f);
    reloj(d,e,f);

    cout<<"sus horas de trabajo son"<<endl;// aqui usamos la funcion dive  e imprimimos las horas trabajadas
    cout<<dife(a,d)<<":"<<difem(b,e)<<":"<<difem(c,f)<<endl;
    return 0;


}
