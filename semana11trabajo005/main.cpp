#include <iostream>

using namespace std;

int main()
{
    //int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};

//    int limite = (sizeof(edades)/sizeof(edades[0]));
    int bimestre1 [] = {19, 15, 16, 17};
    int bimestre2 [] = {10, 15, 20, 10};
    string nombre [] = {"Luis ", "Jose ", "Maria ", "Ana "};
    int suma = 0;
    for(int i = 0; i<4; i++){
            suma = bimestre1[i] + bimestre2[i];
        cout<< nombre[i]<< "tiene un calificacion final de "<< suma <<endl;
    }



//    for (int i = 0; i < limite; i++)
   // {
       //     cout<<edades[i]<<endl;
   // }

    return 0;
}
