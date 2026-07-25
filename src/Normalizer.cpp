#include "Normalizer.h"

#include <algorithm>

std::string

Normalizer::signature(

const std::string& word){

    std::string value = word;

    std::sort(

        value.begin(),

        value.end()

    );

    return value;

}
