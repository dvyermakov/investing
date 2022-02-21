#include <iostream>
#include <string>

#include "include/dbg.h"
#include "include/date.h"

int main(int argc, char *argv[]){
    Date datef(22, 1, 1986);
    Date datef1(datef);
    std::cout << datef.toString() << std::endl;
    std::cout << datef1.toString() << std::endl;
    
    
    return 0;
}