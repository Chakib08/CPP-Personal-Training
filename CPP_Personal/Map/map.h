#ifndef MAP_H
#define MAP_H

#include <map>
#include <string>
#include <iostream>

class Map
{
public:
    Map();
    unsigned int getCharFreq(std::string str, char c);
};

#endif // MAP_H
