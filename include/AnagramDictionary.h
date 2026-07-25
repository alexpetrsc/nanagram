#pragma once

#include <vector>
#include <map>
#include <string>

class AnagramDictionary{

public:

    std::map<

        std::string,

        std::vector<std::string>

    >

    build(

        const std::vector<std::string>&

    );

};
