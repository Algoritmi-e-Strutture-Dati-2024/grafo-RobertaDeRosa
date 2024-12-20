#include <iostream>
#include "Grafo.cpp" 
int main() {
    // Creazione del grafo
    Grafo<int> grafo;

    // Aggiunta dei nodi 
    grafo.aggiungiNodo(1);
    grafo.aggiungiNodo(2);
    grafo.aggiungiNodo(3);
    grafo.aggiungiNodo(4);
    grafo.aggiungiNodo(5);

    // Aggiunta degli archi con pesi
    grafo.aggiungiArco(1, 2, 5);
    grafo.aggiungiArco(1, 3, 3);
    grafo.aggiungiArco(2, 4, 2);
    grafo.aggiungiArco(3, 5, 4);
    grafo.aggiungiArco(4, 5, 1);
    grafo.aggiungiArco(5, 2, 6);

// Stampa della matrice di adiacenza del grafo
    grafo.stampa();

    // Verifica se un nodo esiste
    std::cout << "Esiste il nodo 3? " << (grafo.verificaNodo(3) ? "Sì" : "No") << std::endl;

    // Verifica se un arco esiste
    std::cout << "Esiste un arco tra 1 e 2? " << (grafo.verificaArco(1, 2) ? "Sì" : "No") << std::endl;
    std::cout << "Esiste un arco tra 1 e 4? " << (grafo.verificaArco(1, 4) ? "Sì" : "No") << std::endl;

    // Visualizza i nodi adiacenti a un nodo
    grafo.nodiAdiacenti(1);

