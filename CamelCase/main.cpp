# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    int count = 0;
    cin >> s;
    for (size_t i = 0; i < s.size(); ++i) if (s[i] >= 'A' && s[i] <= 'Z') ++count;
    cout << count + 1 << '\n';

    return 0;
}
