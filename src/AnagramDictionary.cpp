#include "AnagramDictionary.h"

#include "Normalizer.h"

std::map<

std::string,

std::vector<std::string>>

AnagramDictionary::build(

const std::vector<std::string>& words){

    Normalizer normalizer;

    std::map<

        std::string,

        std::vector<std::string>

    > result;

    for(

        auto& word

        : words

    ){

        result[

            normalizer.signature(word)

        ].push_back(word);

    }

    return result;

}
