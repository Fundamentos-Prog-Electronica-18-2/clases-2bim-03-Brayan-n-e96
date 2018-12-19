#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int valores[4]; // arreglo de enteros, para 4 posiciones
    valores[0] = 20;
    valores[1] = 30;
    valores[2] = 40;
    valores[3] = 50;

    double promedio = 0;
    // sumar todos lo valores
    //int suma = valores[0]; valores [1];etc;
    int suma = 0;
    int i = 0;//es el contDR PARA EL WHILW
    while(i<4){
        suma = suma + valores[1];
        i = i+1;

    }
    //for(int i = 0; i<=3; i++){//para que los valores corran presentandose aunmnetado la pocicion 1 2 3
            //tambien de esta manera para sumar el arreglo
           // suma = suma + valores[i];
        //cout << valores[i] <<endl;

    promedio = suma/4;
    cout<< "El promedio es "<<promedio<<endl;
    return 0;
}
