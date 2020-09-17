#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{

    Pointer<int> p = new int(19);
  	Pointer<int, 5> k = new int[5];
  	Pointer<int, 10> j = new int[10];
  	Pointer<char, 2> l = new char[2];
  
  	l = new char[3];
  	k = new int[2];
    p = new int(21);
  	p = new int(28);
   
  return 0;
}