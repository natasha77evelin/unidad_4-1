#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
    string linea, palabra;
    int totalPalabras = 0; //Para calcular el total de palabras
    int totalLineas = 0;//Para contar lineas
    ifstream archivo;

    archivo.open("frasesDeBjarne.txt");

    while (getline(archivo, linea)){
        int contador = 0; //Contador de cada palabra

        stringstream ss(linea); // Creacion de un stringstream para procesar la línea

            while (ss >> palabra){ //Bucle anidado, que de cada linea, lee cada palabra contenida
            contador++; //Aumenta el contador hasta que no encuentre ninguna palabra en esa linea
            }
        totalPalabras = totalPalabras + contador;
        totalLineas++;
        
        cout << "Cantidad de palabras en la linea " << totalLineas << ": " << contador << endl;
    }
    archivo.close();

    cout << "Cantidad total de palabras: " << totalPalabras << endl;
    cout << "Promedio de palabras por linea: " << double(totalPalabras) / totalLineas << endl;//Casteo de tipo

    return 0;
}
