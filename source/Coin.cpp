//
// Created by Nael Abou Chahine on 11/12/2017.
//

#include "../headers/Coin.h"


string Coin::getCoin(string token)
{
    SHA1 checksum;
    checksum.update(token);

    return checksum.final();
}