#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Función para recorrer la cola y mostrar los elementos (FIFO)
template <typename T>
void recorrerCola(queue<T> q, const string& tipoCola) {
    cout << "Recorriendo la " << tipoCola << ":\n";
    int posicion = 1;
    while (!q.empty()) {
        cout << "Posición " << posicion << ": " << q.front() << endl;
        q.pop();
        posicion++;
    }
}

// Función para eliminar los elementos de la cola
template <typename T>
void eliminarCola(queue<T>& q, const string& tipoCola) {
    cout << "Eliminando elementos de la " << tipoCola << ":\n";
    int posicion = 1;
    while (!q.empty()) {
        cout << "Posición " << posicion << ": " << q.front() << " - Elemento eliminado.\n";
        q.pop();
        posicion++;
    }
}

int main() {
    // Cola 1 para float
    queue<float> colaFloat;

    // Definir previamente los valores de la cola 1
    colaFloat.push(1.1f);
    colaFloat.push(2.2f);
    colaFloat.push(3.3f);
    colaFloat.push(4.4f);
    colaFloat.push(5.5f);
    colaFloat.push(6.6f);
    colaFloat.push(7.7f);
    colaFloat.push(8.8f);
    colaFloat.push(9.9f);
    colaFloat.push(10.0f);

    // Cola 2 para string
    queue<string> colaString;
    string animal;

    // Ingresar nombres de animales desde teclado
    cout << "Ingrese 10 nombres de animales:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Animal " << i + 1 << ": ";
        getline(cin, animal);
        colaString.push(animal);
    }

    // Recorrer ambas colas
    recorrerCola(colaFloat, "cola de floats");
    recorrerCola(colaString, "cola de strings");

    // Eliminar elementos de ambas colas
    eliminarCola(colaFloat, "cola de floats");
    eliminarCola(colaString, "cola de strings");

    return 0;
}