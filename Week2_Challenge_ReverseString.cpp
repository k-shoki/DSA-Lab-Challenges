#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            // Swap the characters
            swap(s[left], s[right]);
            // Move the pointers towards each other
            left++;
            right--;
        }
    }
};

int main() {
    Solution solution;
    
    vector<char> s1 = {'h', 'e', 'l', 'l', 'o'};
    solution.reverseString(s1);
    for (char c : s1) {
        cout << c;
    }
    cout << endl;

    vector<char> s2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    solution.reverseString(s2);
    for (char c : s2) {
        cout << c;
    }
    cout << endl;

    return 0;
}
