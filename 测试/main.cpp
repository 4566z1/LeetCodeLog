#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<string> permutation(string s) {
        dfs(s, 0);
        return res;
    }

private:
    vector<string> res;

    void dfs(string s, int x) {
        if (x == s.size() - 1) {
            res.push_back(s);                       // ������з���
            return;
        }
        set<int> st;
        for (int i = x; i < s.size(); i++) {
            if (st.find(s[i]) != st.end()) continue; // �ظ�����˼�֦
            st.insert(s[i]);
            swap(s[i], s[x]);                       // �������� s[i] �̶��ڵ� x λ
            dfs(s, x + 1);                          // �����̶��� x + 1 λ�ַ�
            swap(s[i], s[x]);                       // �ָ�����
        }
    }
};

int main() {
    Solution* solution = new Solution;
    solution->permutation("abc");

    return 0;
}
