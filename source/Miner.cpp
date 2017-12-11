//
// Created by Nael Abou Chahine on 11/12/2017.
//
#include "../headers/Miner.h"
#include "../libs/sha1.h"

Miner::Miner(string minC) {
    int c = atoi(minC);

    this->minC = generateMinC(c);
}

string Miner::generateMinC(int nb)
{
    string tmp;
    for (int i = 0; i < nb ; ++i) {
        tmp += 'c';
    }

    return tmp;
}