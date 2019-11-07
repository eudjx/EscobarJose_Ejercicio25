#include <iostream>
#include <cmath>

void relleno(int N, float **mat);

void imprime_cabezas(int N, float **mat);

void imprime(int N, float **mat);


int main(){
    std::cout<<"Escriba un número del 3 al 11:" <<std::endl;
    int N=0;
    std::cin>>N;
    if (N > 3 && N < 11 ){
        
        float **mat= new float *[N];
        
        for (int i=0; i < N; i++){
            mat[i]= new float[N+2];
        }
        
        relleno (N, mat);
        imprime(N, mat);
        imprime_cabezas(N, mat);
    }
       else{std::cout<<"El número ingresado no se encuentra entre el rango indicado."<<std::endl;}
    
    
    return 0;
}

void relleno(int N, float **mat){
    for (int i=0; i < N+2; i++){
        for (int j=0; j < N;j++){
            mat[i][j]=i+j;
        }
    }
    
}

void imprime_cabezas(int N, float **mat){
        float suma=0;
    std::cout<<"la primera fila de la matriz y la suma de sus valores son:"<<std::endl;
    for (int i=0; i < N; i++){
            std::cout<<mat[i][0];
            suma=suma+mat[i][0];
            
        }
    std::cout<<std::endl;
    }

    
void imprime(int N,float **mat){

for (int j=0 ;j < N+2 ;j++) {

for ( int i=0; i <N;i++) {

std::cout<<"La matriz es"<<mat[i][j]<<std::endl;

}
std::cout<<std::endl;
}
 

}