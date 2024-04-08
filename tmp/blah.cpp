#include <iostream>
#include <vector>
#include <string>

int main(){
	std::string name = {'A'};
	std::vector<std::string> v{name};
	std::cout << v.front() << std::endl;
	return 0;
}

