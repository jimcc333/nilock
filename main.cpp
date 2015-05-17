#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    if(argc != 3){
        cout << "Input error!" << endl;
        return 0;
    }

    cout << "    Inputs: " << argv[1] << " " << argv[2] << endl;



    return 0;
}
