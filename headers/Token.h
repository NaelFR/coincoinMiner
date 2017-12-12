//
// Created by Nael Abou Chahine on 11/12/2017.
//

#ifndef COINCOIN_MINER_TOKEN_H
#define COINCOIN_MINER_TOKEN_H

#include <string>
#include <sstream>

using namespace std;

class Token {



    private:
        string triOwn;
        stringstream ssToken;
    public:
        Token(string trigramme);
        string generateToken();
        char genRandomChar();
        string getTimestamp();
        string randomString(int length);



};


#endif //COINCOIN_MINER_TOKEN_H
