class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int i=0,j=n-1;
        int sum1=0,sum2=0;
        int alice=0;
        while(i<j){
            int k=max(piles[i],piles[n-1]);
            if(piles[i]>=piles[j]) {
                sum1+=piles[i];
             }
            else {
                sum2+=piles[j];
            }
            i++;
            j--;
        }
        if(sum1>=sum2 || sum2>=sum1) return true;
        else return false;
    }
};