#include <iostream>
#include <string>

#include "include/dbg.h"
#include "include/date.h"

int main(int argc, char *argv[]){
    Date datef(23, 2, 1986);
    Date datef1(22, 2, 1986);
    std::cout << datef.toString() << std::endl;
    std::cout << datef1.toString() << std::endl;
    if (datef <= datef1)
        std::cout << datef.toString() << " <= " << datef1.toString() << std::endl;
    else
        std::cout << datef.toString() << " > " << datef1.toString() << std::endl;
    
    return 0;
}