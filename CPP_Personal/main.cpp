#include "Personal.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "Pointers/pointer.h"
#include "Tuple/tuple.h"
#include "Map/map.h"

int main(int argc, char *argv[])
{

//    Pointer p;
//    p.pointerWithArray();

//    Tuple tup;

    Map mp;
    char c = 'a';
    std::string str =  "aaba";
    std::cout << "Freq of the char is " << mp.getCharFreq(str, c) << std::endl;

    return 0;
}
