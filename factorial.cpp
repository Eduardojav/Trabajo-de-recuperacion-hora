#include<iostream>
using namespace std;
int a,b,c,d,e,f ;
void varia(int& hora,int& minu,int& sec)   {
    cin>>hora;cout<<hora<<":";
    cin>>minu;cout<<hora<<":"<<minu<<":";
    cin>>sec;
    cout<<hora<<":"<<minu<<":"<<sec<<endl;
    }
void reloj(int& hora,int& minu,int& sec)
{
    while( hora >23|| minu> 59 || sec>59 ||hora< 0 ||minu< 0 ||sec < 0){
            cout<<"hora incorecta,introduzca de nuevo"<<endl;
            varia(hora,minu,sec);}}
int dife(int a,int b){
int c;
if (a<24){
        if (a<=b){
            c=b-a;
            }
        else
        {while (a!=b){
        a=a+1;
        c=c+1;
        if (a==24){
            a=0;

        }
        }
         return c;
        }
        return c;}
else {
        if (a<=b){
            c=b-a;
            }
        else
        {while (a!=b){
        a=a+c;
        c=+1;
        if (a==60){
            a=0;

        }
        }
         return c;
        }
        return c;}
        }
int main(){
    cout<<"introduce la hora de ingreso"<<endl;
    varia(a,b,c);
    reloj(a,b,c);

    cout<<"introduce la hora de salida"<<endl;
    varia(d,e,f);
    reloj(d,e,f);
    cout<<a<<":"<<b<<":"<<c<<endl;

    cout<<"sus horas de trabajo son"<<endl;
    cout<<dife(a,d)<<":"<<dife(b,e)<<":"<<dife(c,f)<<endl;
    return 0;


}
