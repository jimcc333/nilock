#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/* shuffle function */
void shuffle1(vector<int> ip){
    vector< vector<int> > blocks;
    vector<int> block;
    int ip_size = ip.size();
    int block_size = ip_size/10;
    vector<int>::iterator it1, it2;

    // Divide input into 10+1 blocks
    for(int i = 0; i < 10; i++){
        blocks.push_back(block);

        it1 = ip.begin() + i*block_size;
        it2 = ip.begin() + (i+1)*block_size;

        blocks[i].assign(it1, it2);
    }
    blocks.push_back(block);
    blocks[10].assign(it2, ip.end());

    /// shuffle blocks


    cout << "begin" << endl;
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < blocks[i].size(); j++){
            cout << blocks[i][j] << " ";
        }
    }

    return;
}


/* encrypting function */
vector<int> encrypt(string &input){
    int ipsize = input.size();
    vector<int> intip;

    for(int i = 0; i < ipsize; i++){
        intip.push_back((int)input[i]);
        cout << intip[i] << " ";
    }

    /// Shuffle(1) input x times where x is derived from key
    for(int i = 0; i < 1; i++){
        shuffle1(intip);
    }

    /// encrypt input x times using repeated key

    /// shuffle(2) input x times

    /// encrypt input x times using repeated manipulated key

    /// shuffle(3) input x times

	return intip;
}

/* decrypting function */
string decrypt(vector<int> &input){
    string output;
    char c;

    for(int i = 0; i < input.size(); i++){
        c = (char)input[i];
        output.push_back(c);
    }

	return output;
}

/* password hashing function */
vector<int> hashPW(string &input){
    int ipsize = input.size();
    vector<int> intip;

    for(int i = 0; i < ipsize; i++){
        intip.push_back((int)input[i]);
    }

	return intip;
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
		string password;

		inf.close();
/*
		//Enter Password
		cout << "Enter Password: ";
		cin >> password;

		vector<int> hashedPW = hashPW(password);

		cout << "Hashed Password: ";
		for(int i = 0; i<hashedPW.size(); i++){
            cout << hashedPW[i] << " ";
		}
		cout << endl;
		//End of printing hashed password

        cout << (int)input[0] << " " << (int)input[1] << " " << (int)input[2] << endl;

		cout << input << endl;
*/
		if(test(input)){
			cout << "Passed test!" << endl;
		} else {
			cout << "---Failed test" << endl;
		}

    return 0;
}
