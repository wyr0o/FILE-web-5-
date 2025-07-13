#include <iostream>
#include "Counter.h"

counter::counter(int setCount): count{setCount}
{}
counter::counter() : count{1}
{}

void counter::plus() 
{ 
 count++; 
}
void counter::minus() 
{ 
	 count--; 
}
int counter::getValue() { return count; }