
#include "C.h"
#include "A.h"
C::C() {
    std::cout<<__FILE__<<":"<<__LINE__<<std::endl;
	A* a = A::create();
}
C::~C() {
    std::cout<<__FILE__<<":"<<__LINE__<<std::endl;
}

