#include "tuple.h"
#include <tuple>
#include <string>
#include <iostream>

Tuple::Tuple()
{
    // Example of a tuple
    std::tuple<int, std::string> eren(26, "Eren");
    std::cout << std::get<0>(eren) << std::endl;
    std::cout << std::get<1>(eren) << std::endl;

    // Example of a tuple using make_tuple
    std::tuple<int, std::string> mikasa = std::make_tuple(27, "Mikasa");

    // Change the content of a tuple
    std::get<0>(eren) = 20;
    std::cout << std::get<0>(eren) << std::endl;

    // Some methods
    eren.swap(mikasa);          // Will swap the contents of the two tuples
    int age;
    std::string name;
    std::tie(age, name) = eren; // Will fill age and name from the tuple

    std::tuple concatTuple = std::tuple_cat(eren, mikasa); // Will concat two tuples in one
    std::cout << "Concat tuple" << std::endl;
    std::apply([](auto&&... args) {((std::cout << args << '\n'), ...);}, concatTuple);


}
