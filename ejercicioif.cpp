#include <iostream>

using namespace std;

int main()
{


    string nombre ="";

    // se pide al usuario el dato de las condiciones
    cout << "Ingresa si el usuario es malo, un animal o es una persona. " << endl;
    cin >> nombre;

    // verificar si el usuario es una de las 3 condiciones
    if (nombre == "malo")
    {

        // si es malo, se muestra el siguiente mensaje
        cout << " El usuario esta dentro de la lista de presas de Kraven. " << endl;
    }
    else if (nombre == "animal")
    {

        // si es animal, se muestra el siguiente mensaje
        cout << "El animal estara protegido por Kraven." << endl;

    }

    else
    {

        // si no cumple estas condiciones o es persona, se muestra el siguiente mensaje
        cout << "No estas en la lista de caza de Kraven, tienes suerte por hoy... ve en paz." << endl;
    }

    return 0;
}