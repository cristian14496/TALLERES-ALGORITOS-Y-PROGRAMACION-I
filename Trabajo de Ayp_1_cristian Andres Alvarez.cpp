/******************************************************************************
Dado una fecha en a�o, mes, d�a (a�os superiores a 1300) indique si es una fecha
valida, indicando si el a�o es bisiesto o no. Un a�o es bisiesto, solo si es m�ltiplo de 4
pero no de 100, salvo que sea m�ltiplo de 400.

Fecha:11 Abril del 2021
Hora: 21:45pm
Compilado: GBD
Autor:Cristian Andres Alvarez Jaramillo
*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    
    int dia,mes,ano;
    
    cout<<"Digite dia: ";
    cin>>dia;
    
    cout<<"Digite mes: ";
    cin>>mes;
    
    cout<<"Digite a�o: ";
    cin>>ano;
    
    cout<<dia;
    cout<<"/";
    cout<<mes;
    cout<<"/";
    cout<<ano<<endl;
    
    
    if(dia<0){
        cout<<"dia incorrecto";

    }   
    else if (dia>31){
            cout<<"dia incorrecto";
        }
        else if (mes<0){
            cout<<"mes incorrecto";
        }
         else if (mes>12){
            cout<<"mes incorrecto";
        }
        
            else if (ano<1300){
                
                cout<<"a�o no valido";
            }
        
        
    
    else if(ano%4 != 0){
        
        cout<<"fecha valida"<<endl;
        cout<<"No es a�o bisiesto";
        
    }
    
        else if(ano%100 !=0){
           
         cout<<"El a�o es bisiesto";
        
        }
            
            else if(ano%400 !=0){
            cout<<"El a�o no es bisiesto";
            }
                else{
                    cout<<"Es una fecha valida y ";
                    cout<<"El a�o es bisiesto";
                    
                }
    return 0;
}
