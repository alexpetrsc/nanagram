#include "LanguageLoader.h"

#include <fstream>

std::vector<std::string>

LanguageLoader::load(

const std::string& file){

    std::ifstream in(file);

    std::vector<std::string> words;

    std::string line;

    while(

        getline(

            in,

            line

        )

    ){

        if(!line.empty())

            words.push_back(line);

    }

    return words;

}
