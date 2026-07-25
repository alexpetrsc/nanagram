# Anagram Dictionary

Anagram Dictionary is a C++ console application for discovering anagram groups in word lists from different languages.

The application reads dictionaries, normalizes words, groups them by character signature and displays all detected anagram families.

## Features

- Multi-language dictionaries
- Fast anagram grouping
- Alphabet normalization
- Search by word
- Export grouped results

## Example

Input

listen
silent
enlist
stone
tones

Output

listen
silent
enlist

stone
tones

Build

```bash
mkdir build
cd build
cmake ..
cmake --build .
```
