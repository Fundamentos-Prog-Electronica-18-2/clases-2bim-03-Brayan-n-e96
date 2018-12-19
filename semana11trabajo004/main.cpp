#include <iostream>

using namespace std;

int main()
{
    //int edades[] = {1,2,9,8,16,32,9,50,36,20,1,87};

//    int limite = (sizeof(edades)/sizeof(edades[0]));
    int promedios [] = {19, 15, 16, 17};
    string nombre [] = {"Luis ", "Jose ", "Maria ", "Ana "};

    for(int i = 0; i<4; i++){
        cout<< nombre[i]<< "tiene un acalificacion de "<< promedios[i]<<endl;
    }


//    for (int i = 0; i < limite; i++)
   // {
       //     cout<<edades[i]<<endl;
   // }

    return 0;
}
