class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>freq(26,0);
        for(char ch: words[0]){
            freq[ch-'a']++;
        }
        for(int i=1;i<words.size();i++){
            vector<int>temp(26,0);
            for(char y:words[i]){
                temp[y-'a']++;
            }
            for(int i=0;i<26;i++){
                freq[i]=min(freq[i],temp[i]);
            }
        }
        vector<string>ans;
        for(int i=0;i<26;i++){
        while(freq[i]--){
            ans.push_back(string(1,char(i+'a')));
        }
        }
        return ans;
    }
};