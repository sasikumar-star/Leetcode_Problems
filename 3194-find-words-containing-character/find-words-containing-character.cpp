class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(auto j:words[i]){
                if(j==x){
                    ans.push_back(i); 
                    break;
                }
            }
        }
        return ans;
    }
};