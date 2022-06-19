#include <fstream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

ifstream f1("input.txt");
ofstream f2("output.txt");

int main() {
	unordered_set<long long int>c;
	int currEl = 1;
	while (currEl) {
		f1 >> currEl;
		if (currEl > 0 && !(c.count(currEl)))
			c.insert(currEl);
		if (currEl < 0 && c.count(-currEl))
			c.erase(-currEl);
	}
	vector<int>vector(c.begin(), c.end());
	sort(vector.begin(), vector.end());
	for (auto now : vector)
		f2 << now << " ";
	return 0;
}