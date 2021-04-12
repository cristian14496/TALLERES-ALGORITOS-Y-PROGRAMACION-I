#include <iostream>

using namespace std;

int main(){
    
    float cal_d=1.08,cal_s=1.66,h_dormido,h_sentado,totalcal; // valores estimados en calorias* minuto

    cout<<"Ingresa la cantidad de horas dormidas: ";
    cin>>h_dormido;
    cout<<"Ingrese la cantidad de horas sentado: ";
    cin>>h_sentado;
    
    
    h_dormido=h_dormido*cal_d;
    h_sentado=h_sentado*cal_s;
    
    totalcal=h_dormido+h_sentado;
    
    cout<<"\nla cantidad de calorias dormido son : "<<h_dormido<<endl;
    cout<<"La cantidad de calorias sentado son : "<<h_sentado<<endl;
    cout<<"Total de calorias gastadas: "<<totalcal;
    

    
    
    return 0;
}

