#include <iostream>
#include <cmath>

int main(){
    std::cout<<"Escriba un número del 3 al 11:"<<std::endl;
    int N;
    std::cin>>N;
    if (N < 3 || N > 11 ){
        std::cout<<"El número ingresado no se encuentra entre el rango indicado."
    }
    int myMatriz_uno[N+2][N];
    std::cout<<relleno()<<std::endl;
    std::cout<<imprime_Cabezas()<<std::endl;
    
    
    return 0;
}

int relleno(){
    for (int i=0; i < N+2: i++){
        for (int j=0; j < N;j++){
            valor=i+j;
            myMatriz[i][j]=valor;
        }
    }
    
}

int imprime_Cabezas(){
        int suma=0;
    for (int i=0; i < N+2: i++){
        for (int j=0; j < N;j++){
            valor=i+j;
            myMatriz[i][0]=i+j;
            suma=suma+myMatriz[i][0];
            
        }
    }
    
}