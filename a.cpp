#include <iostream>
#include <vector>
#include <algorithm> // for sort and unique

using namespace std;

vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m) {
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }


    return ans;
}

int main() {
    int n, m;
    cout << "Enter the size of array A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements of array A: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Enter the size of array B: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter elements of array B: ";
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    vector<int> intersection = findArrayIntersection(a, n, b, m);

    if (intersection.empty()) {
        cout << "No intersection found.\n";
    } else {
        cout << "Intersection of arrays A and B: ";
        for (int num : intersection) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}
