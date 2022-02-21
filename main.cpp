#include <iostream>
#include <string>

#include "include/dbg.h"

int main(int argc, char *argv[]){
    std::cout << "Hello" << std::endl;
    DBG("ITS STRING MESSAGE!");
    int a = 5;
    std::string str = "some value";
    double d = 4.3321568;
    bool b = false;
    bool bb = true;
    DBGMESSAGE("Выведем Int");
    DBGVALUE("a", a);
    DBGMESSAGE("Выведем std::string");
    DBGVALUE("str", str);
    DBGMESSAGE("Выведем double");
    DBGVALUE("d", d);
    DBGMESSAGE("Выведем bool");
    DBGVALUE("b", b);
    DBGVALUE("bb", bb);
    return 0;
}