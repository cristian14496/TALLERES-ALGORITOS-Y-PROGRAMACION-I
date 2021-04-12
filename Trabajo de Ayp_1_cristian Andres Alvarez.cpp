/******************************************************************************
Dado una fecha en año, mes, día (años superiores a 1300) indique si es una fecha
valida, indicando si el año es bisiesto o no. Un año es bisiesto, solo si es múltiplo de 4
pero no de 100, salvo que sea múltiplo de 400.

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
    
    cout<<"Digite año: ";
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
                
                cout<<"año no valido";
            }
        
        
    
    else if(ano%4 != 0){
        
        cout<<"fecha valida"<<endl;
        cout<<"No es año bisiesto";
        
    }
    
        else if(ano%100 !=0){
           
         cout<<"El año es bisiesto";
        
        }
            
            else if(ano%400 !=0){
            cout<<"El año no es bisiesto";
            }
                else{
                    cout<<"Es una fecha valida y ";
                    cout<<"El año es bisiesto";
                    
                }
    return 0;
}
