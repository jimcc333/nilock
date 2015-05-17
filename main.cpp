#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/* encrypting function */
vector<int> encrypt(string &input){
    int ipsize = input.size();
    vector<int> intip;

    for(int i = 0; i < ipsize; i++){
        intip.push_back((int)input[i]);
        cout << intip[i] << " ";
    }

	return intip;
}

/* decrypting function */
string decrypt(vector<int> &input){
    string output;
	return output;
}

/* test to see output from decrypt matches input */
bool test(string &input){
	vector<int> encrypted = encrypt(input);

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

		input[0] = 60;
		input[1] = 60 + 256;
		if((int)input[0] == (int)input[1]){cout << "Passed domain test" << endl;}

        cout << (int)input[0] << " " << (int)input[1] << " " << (int)input[2] << endl;

		cout << input << endl;

		if(test(input)){
			cout << "Passed test!" << endl;
		} else {
			cout << "---Failed test" << endl;
		}

    return 0;
}
