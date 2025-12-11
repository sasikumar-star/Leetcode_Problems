class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++){
        string k=(details[i].substr(11,2));
        int j=stoi(k);
        if(j>60) cnt++;
        }
        return cnt;
    }
};