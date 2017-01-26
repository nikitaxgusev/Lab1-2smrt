#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {

	std::string s;
	std::cout << "argc = " << argc <<std::endl;
	for (int i = 0; i < argc; i++) {
		std::cout << "Argument: " << i << " = " << argv[i] <<std::endl;
	}

	if (argc != 2) {
		std::cerr<< "Error: You have more than 2 arguments" << std::endl;
		exit(-1);
	}

	std::ifstream infile;
	infile.open(argv[1]);
	if (!infile) {
		std::cerr << "Error: Can't open a file" << argv[1];
		exit(-1);
	}
	while (getline(infile, s)){
		system(s.c_str());
	}
	infile.close();
	system("pause");
	return 0;
}