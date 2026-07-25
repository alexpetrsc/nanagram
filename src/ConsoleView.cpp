#include "ConsoleView.h"

#include <iostream>

void ConsoleView::print(

const std::map<

std::string,

std::vector<std::string>>& data){

    for(

        auto& pair

        : data

    ){

        if(

            pair.second.size() < 2

        )

            continue;

        std::cout

            << "Group\n";

        for(

            auto& word

            : pair.second

        ){

            std::cout

                << "  "

                << word

                << "\n";

        }

        std::cout

            << "\n";

    }

}
