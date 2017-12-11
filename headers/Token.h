//
// Created by Nael Abou Chahine on 11/12/2017.
//

#ifndef COINCOIN_MINER_TOKEN_H
#define COINCOIN_MINER_TOKEN_H

#include <string>

using namespace std;

class Token {

    static const char alphanum[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
    int stringLength = sizeof(alphanum) - 1;

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
