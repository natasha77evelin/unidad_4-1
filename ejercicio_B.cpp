#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string frase; //Para mostrar las cadenas de caracteres guardadas en 'frase'
    ifstream archivo;
    
    archivo.open("frasesDeBjarne.txt");//Se abre el archivo en modo de lectura

    //Mostrar las frases por pantalla con interlineado
    while (getline(archivo, frase)) {
        cout << frase << endl;
        cout << endl;
    }

    archivo.close(); //Cerrar el archivo

    return 0;
}
