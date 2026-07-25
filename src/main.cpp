#include "LanguageLoader.h"

#include "AnagramDictionary.h"

#include "ConsoleView.h"

int main(){

    LanguageLoader loader;

    auto words =

        loader.load(

            "data/english.txt"

        );

    auto groups =

        AnagramDictionary()

        .build(

            words

        );

    ConsoleView()

        .print(

            groups

        );

}
