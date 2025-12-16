class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0];
        for(int i=1;i<candies.size();i++){
            if(candies[i]>max){
                max=candies[i];
            }
        }
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
           ans.push_back(extraCandies+candies[i] >= max);
        }
        return ans; 
    }
};
