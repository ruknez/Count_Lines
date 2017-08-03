#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using namespace std;

unsigned long long int row_counting (string file_name_);

int main (int argc,char *argv []) {

	if (argc < 2) {
		cout << "ERROR, no file" << endl;
	 	return 0;	
	}
	string name_of_file = string(argv [1]);
	
	

	cout << "count_of_string = " << row_counting (name_of_file) << endl;
//	printf ("Hellow %s, %s \n", argv[0], argv [1]);


return 0;
}


unsigned long long int row_counting (string file_name_) {

	
	ifstream file (file_name_);
	std::string str;

	unsigned long long int count_of_string = 0;
	
	/*if (!file_name_.is_open()) {
        cout << "Error file not open " << endl;
//		!!!!!!!!!
	}*/
	while (!file.eof()) {
		getline (file, str);
		//cout << str << endl;
		count_of_string++;
	}	
	file.close ();

	return --count_of_string;
}

