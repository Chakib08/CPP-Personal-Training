#include "Personal.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "Pointers/pointer.h"
#include "Tuple/tuple.h"
#include "Map/map.h"

#include <set>

int main(int argc, char *argv[])
{

//    Pointer p;
//    p.pointerWithArray();

//    Tuple tup;

//    Map mp;
//    char c = 'a';
//    std::string str =  "aaba";
//    std::cout << "Freq of the char is " << mp.getCharFreq(str, c) << std::endl;

    /* set are contrainers that stores elements without keeping the duplicate */
    std::set<int> sett = {1, 2 , 3, 1, 2};
//    for(auto &s : sett) {
//        std::cout << s << std::endl;

//    }

    /* Example of retreiving the set in a vector (Dynamic array) */
//    std::vector<int> vc(sett.begin(), sett.end());
//    for (auto &v : vc) {
//        std::cout << v << std::endl;
//    }

    // Creating a vector and copying elements from the set
    std::vector<int> vec;
    for (int num : sett) {
        vec.push_back(num);
    }

    // Now vec contains the elements of sett
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
