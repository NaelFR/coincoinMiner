#include <iostream>
#include <string>
#include "./headers/Miner.h"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 4 ) {
        cout << "Erreur de commande" << endl;

        return 42;
    }

    if (string("-t").compare(argv[1]) != 0 && string("-m").compare(argv[3]) != 0) {
        cout << "Une commande valable est de type : ./executable -t trigramme -m minc" << endl;
        return 42;
    }

    Miner* miner = Miner::getInstance(argv[4]);

    miner->startMining(argv[2]);

    return 0;
}