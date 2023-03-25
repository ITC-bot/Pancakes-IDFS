#include <iostream>
#include <string>
#include <unordered_set>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <stack>

using namespace std;

// Función que voltea los primeros k pancakes de la pila
void voltear(string& pancakes, int k) {
    int i = 0, j = k - 1;
    while (i < j) {
        char temp = pancakes[i];
        pancakes[i] = pancakes[j];
        pancakes[j] = temp;
        i++;
        j--;
    }
}

// Función que verifica si está ordenada
bool esta_ordenada(string pancakes) {
    for (int i = 1; i < pancakes.size(); i++) {
        if (pancakes[i] < pancakes[i-1]) {
            return false;
        }
    }
    return true;
}

// Función que genera los sucesores de una configuración
vector<string> generar_sucesores(string pancakes) {
    vector<string> sucesores;
    for (int i = 1; i <= pancakes.size(); i++) {
        string sucesor = pancakes;
        voltear(sucesor, i);
        sucesores.push_back(sucesor);
    }
    return sucesores;
}

// Función que genera una cadena aleatoria de caracteres que representen los pancakes a ordenar
string generar_caracteres_aleatorios(int n) {
    string pancakes = "";
    unordered_set<char> chars_set;
    srand(time(NULL));
    while (chars_set.size() < n) {
        char c = 'a' + rand() % 26;
        if (chars_set.find(c) == chars_set.end()) {
            chars_set.insert(c);
            pancakes += c;
        }
    }
    return pancakes;
}

// Función que realiza la búsqueda en profundidad
void dfs(string pancakes) {
    stack<string> pila;
    unordered_set<string> visitados;
    int count = 0;
    pila.push(pancakes);
    visitados.insert(pancakes);
    while (!pila.empty()) {
        string curr_pancakes = pila.top();
        pila.pop();
        count++;
        if (esta_ordenada(curr_pancakes)) {
            cout << "Solucion encontrada: " << curr_pancakes << endl;
            cout << "Numero de nodos visitados: " << count << endl;
            return;
        }
        vector<string> sucesores = generar_sucesores(curr_pancakes);
        for (string sucesor : sucesores) {
            if (visitados.find(sucesor) == visitados.end()) {
                pila.push(sucesor);
                visitados.insert(sucesor);
                count++;
            }
        }
    }
    cout << "No se encontro solucion." << endl;
    cout << "Numero de nodos visitados: " << count << endl;
}

//Funcion principal
int main() {
    int n;
    cout << "Ingrese el numero de caracteres de pancakes: ";
    cin >> n;
    string pancakes = generar_caracteres_aleatorios(n);
    cout << "Pila de pancakes original: " << pancakes << endl;
    dfs(pancakes);
    return 0;
}

