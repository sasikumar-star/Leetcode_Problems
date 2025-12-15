class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();

        for(int i = 0; i < n; i += 2*k) {

            int l = i;
            int r = min(i + k - 1, n - 1);

            while(l < r){
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
