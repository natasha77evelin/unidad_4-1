#include <iostream>
#include <fstream>  //Biblioteca para trabajar con archivos
#include <string>

using namespace std;

string ingresoDeFrases();

int main() {

    ingresoDeFrases();

    return 0;
}

string ingresoDeFrases(){

    string frase;
    ofstream archivo;
    
    archivo.open("frasesDeBjarne.txt");

    if (archivo.is_open()) {//Verificar si el archivo se abrió correctamente

        //Leer las frases ingresadas por el usuario
        while (true) {
            cout << "Ingrese una frase (escribe 'fin' para terminar): ";
            getline(cin, frase);

            if (frase == "fin") {
                break;
            }

            archivo << frase << endl;//Se guarda la frase en el archivo (excepto 'fin')
        }
    } 
    else {
        cout << "No se pudo abrir el archivo." << endl;
    }
   

        archivo.close();//Cerrar el archivo
        cout << "Frases guardadas correctamente en 'frasesDeBjarne.txt'." << endl;
    
    return frase;
}

