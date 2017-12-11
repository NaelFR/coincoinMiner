//
// Created by Nael Abou Chahine on 11/12/2017.
//
#include "../headers/Miner.h"
#include "../headers/Coin.h"
#include "../headers/Token.h"

Miner* Miner::instance = 0;

Miner::Miner(string minC) {
    int c = atoi(minC);

    this->minC = generateMinC(c);
}

Miner* Miner::getInstance(string c)
{
    if (instance == 0)
    {
        instance = new Miner(c);
    }

    return instance;
}

string Miner::generateMinC(int nb)
{
    string tmp;
    for (int i = 0; i < nb ; ++i) {
        tmp += 'c';
    }

    return tmp;
}

void Miner::startMining(string tri) {
    Token* token = new Token(tri);
    Coin* coin = new Coin();

    string tempTok;

    while(1) {
        tempTok = token->generateToken();
        if(coin->getCoin(tempTok).compare(0, this->minC.length(), this->minC) == 0) {
            cout << tempTok << endl;
        }
    }

}