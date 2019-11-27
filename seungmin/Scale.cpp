#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
int solution(vector<int> weight) {
	int answer = 0;
	sort(weight.begin(), weight.end());

	for (int i = 0; i < weight.size(); i++) {
		if (answer < (weight[i] - 1)) { 
			return answer + 1; 
		}
		answer += weight[i];
	}

	return answer + 1;
}

int main() {

	vector <int> weight = { 1,1,3 };
	cout << solution(weight);

	return 0;
}