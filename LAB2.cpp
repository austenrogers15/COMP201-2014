#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
   vector<int> stack;
   string word;
   char *end;
   int left, right, result;
   
   while (cin >> word) {
		if (word == ".") {
		cout << result;			// print out the stack
			break;
		} else if (word == "+") {
			stack.push_back();
			stack.push_back();				// pop two items off the stack
			right = stack.back();
			stack.pop_back();
			left = stack.back();
			stack.pop_back();				// add them together
			cout << result;
			push(result);			// put result on the stack
		} else {
			// assume that word is an operand
			result = strtol(word.c_str(), &end, 10);
			stack.push_back(result);
		}
   }
  
  
    return 0;
}