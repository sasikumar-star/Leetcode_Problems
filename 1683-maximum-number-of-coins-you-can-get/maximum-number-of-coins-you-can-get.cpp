class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int total=piles.size()/3;
        int cnt=0,sum=0;
        for(int i=piles.size()-2;i>=0;i-=2){
            sum+=piles[i];
            cnt++;
            if(cnt==total) break;
        }
        return sum;
    }
};