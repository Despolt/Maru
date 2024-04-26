#include "Server/Include/MaruMemMacro.h"
#include <iostream>

int main() {
    auto memObject = MaruMemMacro::NewObject<int>(3);
    std::cout << *memObject << std::endl;
    return 0;
}
