//
// Created by Nael Abou Chahine on 11/12/2017.
//
#include <sstream>
#include <ctime>
#include "../headers/Token.h"


Token::Token(string trigramme)
{
    this->triOwn = trigramme;

}
char Token::genRandomChar()
{
    return alphanum[rand() % stringLength];
}

string Token::randomString(int length)
{
    std::string Str;
    for(unsigned int i = 0; i < length; ++i)
    {
        Str += genRandomChar();

    }

    return Str;
}

string Token::getTimestamp()
{
    time_t result = std::time(nullptr);
    stringstream ss;
    ss << result;
    string ts = ss.str();

    return ts;
}

string Token::generateToken()
{
    ssToken.str("");
    ssToken << randomString(32) << "-" << this->triOwn << "-CC1.0-" << getTimestamp() << "-0f0f0f";

    return ssToken.str();
}
