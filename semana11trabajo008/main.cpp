#include <iostream>
#include <sstream>

using namespace std;

/* string convertir(int v){
    // proceso para convertir un entero en cadena
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;
} */
string obtenetData(int a, int b, string nombre){
    int c = a + b;
    int h = c/2;
    string tipo = "";
    if(h>=0 && h<=10){
        tipo = "ïnsuficiente";
    }else{
        if(h>=10 &&h<=14){
            tipo = "regular";
        }else{
            if(h>=14 && h<=16){
                tipo = "buena";
            }else{
                if(h>=16 && h<=18){
                    tipo = "muy buena";
                }else{
                    if(h>=18 && h<=20){
                        tipo = "sobresaliente";
                    }
                }
            }
        }
    }
    string  data = nombre + " tiene un promedio  "+ tipo + "\n";
    return data;
}

int main()
{
    //int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};

//    int limite = (sizeof(edades)/sizeof(edades[0]));
    int bimestre1 [] = {20, 15, 16, 19};
    int bimestre2 [] = {20, 18, 10, 10};
    string nombre [] = {"Luis ", "Jose ", "Maria ", "Ana "};
    int suma = 0;
    //for(int i = 0; i<4; i++){
          //  suma = bimestre1[i] + bimestre2[i];
       // cout<< nombre[i]<< "tiene un calificacion final de "<< suma <<endl;
   // }

    for(int i = 0; i<4; i++){
            string data = obtenetData(bimestre1[i], bimestre2[i], nombre[i]);
            cout<<data;
        //cout<< nombre[i]<< "tiene un calificacion final de "<< suma <<endl;
   }

//    for (int i = 0; i < limite; i++)
   // {
       //     cout<<edades[i]<<endl;
   // }

    return 0;
}
