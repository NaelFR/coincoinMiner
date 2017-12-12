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
        static Miner* instance;

        /* Private constructor to prevent instancing. */
        explicit Miner(int minC);
    public:
        static Miner* getInstance(int c);
        string generateMinC(int nb);
        void startMining(string tri);

};


#endif //COINCOIN_MINER_MINER_H
