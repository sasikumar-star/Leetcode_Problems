class Solution {
public:
    bool possible(int n,int mid,vector<int>&quant){
        int size=quant.size();
        int ans=0;
        for(int i=0;i<size;i++){
            ans+=(quant[i]+mid-1)/mid;
        }
        return (ans<=n) ? true : false;
    }
    int minimizedMaximum(int n, vector<int>& quant) {
        int low=1;
        int high=*max_element(quant.begin(),quant.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(n,mid,quant)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
};