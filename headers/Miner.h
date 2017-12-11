//
// Created by Nael Abou Chahine on 11/12/2017.
//

#ifndef COINCOIN_MINER_MINER_H
#define COINCOIN_MINER_MINER_H

#include <string>

using namespace std;

class Miner {
    private:
        string minC;
    public:
        Miner(string minC);
        string generateMinC(int nb);

};


#endif //COINCOIN_MINER_MINER_H
