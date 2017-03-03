
#include "A.h"
A* A::aaa;
A* A::create() {
    if (!aaa) {
        aaa = new A();
    }
    return aaa;
}
A::A() {
    std::cout<<__FILE__<<":"<<__LINE__<<std::endl;
}
A::~A() {
    std::cout<<__FILE__<<":"<<__LINE__<<std::endl;
}

