#include "map.h"
#include <map>
#include <string>
#include <iostream>

Map::Map()
{
    std::map<std::string, int> mp = {
        {"Eren", 0},
        {"Mikasa", 1},
        {"Armin", 2}
    };

    // Access a map
    std::cout << mp["Eren"] << std::endl;

    // Insert a new element
    mp.insert({"Coni", 3});
    std::cout << mp["Coni"] << std::endl;
    // Or
    std::pair<std::string, int> p("Historia", 4);
    mp.insert(p);
    std::cout << mp["Historia"] << std::endl;
    // Pair specific (Pair has first and second)
    std::cout << p.first << std::endl; // Historia
    std::cout << p.second << std::endl; // 4

    // Erase an element
    mp.erase(p.first);

    // Clear a map
    mp.clear();

    // Check if a map is empty (Can be used with an if statement)
    mp.empty();

    // Retreive the size of the map
    mp.size();

    // Display map content through a loop
    for(auto &content: mp) {
        std::cout << content.first << " : " << content.second << std::endl;
    }

    // Print first and last element of the map
    std::cout << mp.begin()->first << std::endl;

    // Display map content through an ITERATOR loop
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        std::cout << itr->first << " : " << itr->second << std::endl;
    }

    // Example of map use (Get the character frequency)
    std::string str = "Hello world ooo!";
    std::map<char, int> freq;

    for (size_t i = 0; i < str.length(); i++) {

        char letter = str[i]; // This will retreive every char in the string

        // This will fill the by checking if the letter from str exists in the map by adding the letter as a key and setting its value at 0
        if (freq.find(letter) == freq.end())
            freq[letter] = 0;

        // This will increment by one the value of the letter each time the letter is found in the str
        freq[letter]++;
    }
    // Print the letter (Key) which its value
    for (auto &mp : freq) {
        std::cout << mp.first << " : " << mp.second << std::endl;
    }
}
