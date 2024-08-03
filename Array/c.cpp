#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> scores;

int main() {
int q;
cin >> q;

while (q--) {
char operation;
cin >> operation;

switch (operation) {
case 'a': {
int x;
cin >> x;
scores.push_back(x);
break;
}
case 'b': {
sort(scores.begin(), scores.end());
break;
}
case 'c': {
reverse(scores.begin(), scores.end());
break;
}
case 'd': {
cout << scores.size() << endl;
break;
}
case 'e': {
for (int i : scores) {
cout << i << " ";
}
cout << endl;
break;
}
case 'f': {
sort(scores.rbegin(), scores.rend());
break;
}
}
}
    return 0;
}