#include <iostream>
#include "child.h"

// Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o
//           => (freeCodeCamp.org)

int main(){

    Child c1(25);
    c1.print_var(); // Calls the method in child
    c1.Parent::print_var();  // Calls the method in Parent,
                                // value in parent just contains junk or whatever
                                // in class initialization we did.

    std::cout << "-------------------" << std::endl;
    c1.show_values();

    std::cout << "-------------------" << std::endl;

    Parent p1(56);
    p1.print_var();

    Parent p2;
    p2.print_var();

    return 0;
}