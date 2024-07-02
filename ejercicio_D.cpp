#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    string linea, palabra, palabraMasLarga;
    int totalPalabras = 0;
    int totalLineas = 0;
    ifstream archivo;

    archivo.open("frasesDeBjarne.txt");

    while (getline(archivo, linea)){
        int contador = 0;

        stringstream ss(linea);

            while (ss >> palabra){
            contador++;
                
                //El método .length() se llama para obtener el número de caracteres que contiene.
                if (palabra.length() > palabraMasLarga.length()) {
                palabraMasLarga = palabra; //Cuando se encuentre la palabra mas larga se detendrá el bucle
            }
            }
        totalPalabras = totalPalabras + contador;
        totalLineas++;
        
        cout << "Cantidad de palabras en la linea " << totalLineas << ": " << contador << endl;
    }
    archivo.close();

    cout << "Cantidad total de palabras: " << totalPalabras << endl;
    cout << "Promedio de palabras por linea: " << double(totalPalabras) / totalLineas << endl;
    cout << "La palabra mas larga es: " << palabraMasLarga << endl;

    return 0;
}
