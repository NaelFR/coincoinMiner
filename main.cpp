#include <iostream>
#include <string>
#include "./headers/Miner.h"
#include "./libs/args.hxx"

using namespace std;

int main(int argc, char *argv[]) {

    args::ArgumentParser parser("Welcom to coincoin-miner.", "");
    args::HelpFlag help(parser, "help", "Display this help menu", {'h', "help"});
    args::ValueFlag<int> minc(parser, "minc", "Limit the number of c at the start of coins", {'m'});
    args::ValueFlag<string> trigram(parser, "trigramme", "The trigramme flag for mining", {'t'});

    try
    {
        parser.ParseCLI(argc, argv);
    }
    catch (args::Help)
    {
        std::cout << parser;
        return 0;
    }
    catch (args::ParseError e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr << parser;
        return 1;
    }

    if (trigram && minc) {
        Miner* miner = Miner::getInstance(args::get(minc));

        miner->startMining(args::get(trigram));
    } else {
        std::cout << parser;
        return 0;
    }

    if (argc != 5 ) {
        cout << "Erreur de commande" << endl;

        return 42;
    }

    if (string("-t").compare(argv[1]) != 0 && string("-m").compare(argv[3]) != 0) {
        cout << "Une commande valable est de type : ./executable -t trigramme -m minc" << endl;
        return 42;
    }



    return 0;
}