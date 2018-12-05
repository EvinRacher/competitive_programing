/**
 * 12/2018
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=430
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

#define D(x) // cout << #x << " = " <<  x << endl

bool verifying(vector<bool> answer){
	for(int i = 0; i < answer.size();++i){
		if(answer[i] == false){
			return false;
		}
	}
	return true;
}

int main() {
	int round;
	cin >> round;
	while (round != -1) {
		string solution;
		cin >> solution;
		string guesses;
		cin >> guesses;
		set<char> wrong;
		vector<bool> solving(solution.size(),false);

		for (int i = 0; i < guesses.length(); i++) {
			bool isError = true;
			for (int j = 0; j < solution.length(); j++) {
				if (guesses[i] == solution[j]) {
					isError = false;
					solving[j] = true;
				}
			}

			if (isError) {
				wrong.insert(guesses[i]);
			}
			if(verifying(solving)){
				break;
			}
		}

		cout << "Round " << round << endl;
		if (wrong.size() >= 7) {
			cout << "You lose." << endl;
		} else if (verifying(solving)) {
			cout << "You win." << endl;
		} else {
			cout << "You chickened out." << endl;
		}
		cin >> round;
	}
}
