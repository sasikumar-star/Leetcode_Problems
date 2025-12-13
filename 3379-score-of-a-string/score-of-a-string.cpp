class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.length()-1;i++){
            sum+=abs((s[i]-'a')-(s[i+1]-'a'));
        }
        return sum;
    }
};