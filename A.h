
#ifndef LIB_A_H_
#define LIB_A_H_
#include <iostream>

class A {
	public:
	~A();
	static A* create();
	private:
	static A* aaa;
	A();
};  //  class A
#endif // LIB_A_H_

