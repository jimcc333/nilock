#include <iostream>
#include <fstream>

using namespace std;

/* encrypting function */
string encrypt(string &input){
	return input;
}

/* decrypting function */
string decrypt(string &input){
	return input;
}

/* test to see output from decrypt matches input */
bool test(string &input){
	string encrypted = encrypt(input);
	
	//I dont think this is the right way to test of two strings are same
	if(input == decrypt(encrypted)){
		return true;
	} else {
		return false;
	}
}

int main(int argc, char* argv[])
{
    if (argc != 3){
        cout << "Input error!" << endl;
        return 0;
    }
		
    cout << "    Inputs: " << argv[1] << " " << argv[2] << endl;

		ifstream inf (argv[1]);
		
		// reads the whole file in input
		string input((std::istreambuf_iterator<char>(inf)), std::istreambuf_iterator<char>());
		
		inf.close();
		
		cout << input << endl;
		
		if(test(input)){
			cout << "Passed test!" << endl;
		} else {
			cout << "---Failed test" << endl;
		}		

    return 0;
}
