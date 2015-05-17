#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 3){
        cout << "Input error!" << endl;
        return 0;
    }
		
    cout << "    Inputs: " << argv[1] << " " << argv[2] << endl;

		ifstream input (argv[1]);
		string line;
		
		if (input.is_open()) {
    while ( getline (input,line) ) {
    	cout << line << '\n';
    }
    input.close();
  	}
		

    return 0;
}
