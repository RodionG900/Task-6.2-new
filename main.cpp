#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> S;
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "¬ведите количество:\n";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << (S.find(x) == S.end() ? "NO" : "YES") << endl;
        S.insert(x);
    }
}
