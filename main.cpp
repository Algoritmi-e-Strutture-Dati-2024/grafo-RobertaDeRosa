#include <iostream>
#include "Grafo.cpp"

using namespace std;

int main() {
    Grafo<int> grafo;

    grafo.aggiungiNodo("Mario");
    grafo.aggiungiNodo("Lorenza");
    grafo.aggiungiNodo("Giacomo");
    grafo.aggiungiNodo("Anna");
    grafo.aggiungiNodo("Antonio");

    grafo.aggiungiArco("Mario", "Lorenza", 5);
    grafo.aggiungiArco("Mario", "Giacomo", 3);
    grafo.aggiungiArco("Lorenza", "Anna", 2);
    grafo.aggiungiArco("Giacomo", "Antonio", 4);
    grafo.aggiungiArco("Anna", "Antonio", 1);
    grafo.aggiungiArco("Antonio", "Lorenza", 6);

    grafo.stampa();

    if (grafo.verificaNodo("Giacomo")) {
        cout << "Il nodo denominato Giacomo esiste? Sì" << endl;
    } else {
        cout << "Il nodo denominato Giacomo esiste? No" << endl;
    }

    if (grafo.verificaArco("Mario", "Lorenza")) {
        cout << "Esiste un arco tra Mario e Lorenza? Sì" << endl;
    } else {
        cout << "Esiste un arco tra Mario e Lorenza? No" << endl;
    }

    if (grafo.verificaArco("Mario", "Anna")) {
        cout << "Esiste un arco tra Mario e Anna? Sì" << endl;
    } else {
        cout << "Esiste un arco tra Mario e Anna? No" << endl;
    }

    grafo.nodiAdiacenti("Mario");

    grafo.rimuoviArco("Mario", "Lorenza");
    cout << "Scrivo ora la matrice di adiacenza dopo che ho rimosso l'arco tra Mario e Lorenza:" << endl;
    grafo.stampa();

    grafo.rimuoviNodo("Giacomo");
    cout << "Scrivo ora la matrice di adiacenza dopo aver rimosso il nodo Giacomo:" << endl;
    grafo.stampa();

    grafo.aggiungiNodo("Francesco");
    grafo.aggiungiArco("Antonio", "Francesco", 7);
    cout << "Scrivo la matrice di Adiacenza dopo aver aggiunto il nodo Francesco e dell'arco tra Antonio e Francesco:" << endl;
    grafo.stampa();

    if (grafo.verificaArco("Mario", "Antonio")) {
        cout << "Il nodo Mario è connesso al nodo Antonio? Sì" << endl;
    } else {
        cout << "Il nodo Mario è connesso al nodo Antonio? No" << endl;
    }

    int arcoMinimo = grafo.arcoConPesoMinore(5);
    if (arcoMinimo != -1) {
        cout << "L'arco con il peso minimo da 5 ha peso: " << arcoMinimo << endl;
    } else {
        cout << "Non ci sono archi uscenti da 5." << endl;
    }

    return 0;
}
