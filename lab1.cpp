#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(int argc, char* argv[]) {
    ifstream file;
    file.open(argv[1]);
   
    if (file.fail()) {
            cout << "Enter A File" << endl;
            return 1;
    }
    float val, squared, sum;
    while (file >> val) {
        cout << val << "\t" << squared << "\t" << sum << endl;
        squared = (val + 1) * (val + 1);
        sum = (val + 1) + squared;
    }

    file.close();
    return 0;
}