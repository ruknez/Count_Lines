#include <iostream>
#include <fstream>
#include <string>
#include <errno.h>

using std::cout;
using std::endl;

unsigned long long int row_counting (std::string file_name_);

int main (int argc,char *argv []) {

	if (argc < 2) {
		cout << "ERROR, no file" << endl;
	 	return 0;	
	}
	std::string name_of_file = std::string(argv [1]);

	cout << "count_of_string = " << row_counting (name_of_file) << " " << argv [1] <<endl;

return 0;
}

unsigned long long int row_counting (std::string file_name_) {

	std::ifstream file (file_name_);
	std::string str;

	unsigned long long int count_of_string = 0;
	
	if (!file.is_open()) {
		perror(file_name_.c_str() );
		exit(0);
	}

	while (!file.eof()) {
		getline (file, str);
		count_of_string++;
	}	
	file.close ();

	return --count_of_string;
}

