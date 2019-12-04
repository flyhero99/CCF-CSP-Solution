#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 10005;

int tree[maxn];

int main() {
    int n, m; cin >> n >> m;
    memset(tree, 0, sizeof tree);
    int sum = 0; // 苹果总数
    int max_kill = 0; // 疏果个数
    int max_kill_index = -1; // 疏果编号
    for(int i = 1; i <= n; i++) {
        cin >> tree[i];
        int kill = 0;
        for(int j = 1; j <= m; j++) {
            int x; cin >> x; x = fabs(x);
            kill += x;
            tree[i] -= x;
        }
        if(kill > max_kill) {
            max_kill = kill;
            max_kill_index = i;
        }
        sum += tree[i];
    }
    cout << sum << ' ' << max_kill_index << ' ' << max_kill << endl;
    return 0;
}
