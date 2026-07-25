cmake_minimum_required(VERSION 3.15)

project(AnagramDictionary)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(

    anagram-dictionary

    src/main.cpp

    src/AnagramDictionary.cpp

    src/LanguageLoader.cpp

    src/Normalizer.cpp

    src/ConsoleView.cpp

)
