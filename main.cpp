#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

int main(){
	std::cout<<"Hello,World!!!"<<std::endl;
	A* a = A::create();
	B b;
	C c;
	return 0;
}