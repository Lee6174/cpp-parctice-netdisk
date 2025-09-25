#include<iostream>
using namespace std;
#include <vector>
#include<string>
int main() {
	vector<int> score = { 100,88,999 };
	for (int i = 0; i < score.size(); i++) {
		cout << score[i] << " ";
	}
	return 0;
}