class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> s, g;

        while(start != 0) {
            s.push_back(start % 2);
            start /= 2;
        }

        while(goal != 0) {
            g.push_back(goal % 2);
            goal /= 2;
        }

        int i = 0, j = 0;
        int n = s.size(), m = g.size();
        int cnt = 0;

        while(i < n && j < m) {
            if(s[i] != g[j])
                cnt++;

            i++;
            j++;
        }

        while(i < n) {
            if(s[i] == 1)
                cnt++;
            i++;
        }

        while(j < m) {
            if(g[j] == 1)
                cnt++;
            j++;
        }

        return cnt;
    }
};