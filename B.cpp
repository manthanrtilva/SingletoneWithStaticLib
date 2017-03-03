
#include "B.h"
#include "A.h"
B::B() {
    std::cout<<__FILE__<<":"<<__LINE__<<std::endl;
	A* a = A::create();
}
B::~B() {
    std::cout<<__FILE__<<":"<<__LINE__<<std::endl;
}

