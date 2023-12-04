#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> vec;
    int n, p;

    // Input the number of elements
    cin >> n;

    // Input the elements and insert into the set
    for (int i = 0; i < n; i++) {
        cin >> p;
        vec.insert(p);
    }

    // No need for selection sort as set is already sorted

    // Print values after sort
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
