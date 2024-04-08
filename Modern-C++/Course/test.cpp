#include <vector>
#include <iostream>
#include <string>

struct Counted {
	Counted(){ Counted::count++; }
	static int count;
};
int Counted::count=0;

int main(){
	Counted a,b;
	std::cout << "Count is: " << Counted::count << std::endl;
	Counted c;
	std::cout << "Now it is: " << Counted::count <<std::endl;
	return 0;
}

