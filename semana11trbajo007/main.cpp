#include <iostream>

using namespace std;

int main(){
    string nombre[5];
    //string valor = "";

    for(int i = 0; i<5; i++){
       cout << "Ingrese el nomnbre por favor " << endl;
       getline(cin, nombre[i]);
        //cin >> nombre[i];
    }
    for(int i = 0; i<5; i++){
        cout << nombre[i] << endl;
    }

    return 0;
}

