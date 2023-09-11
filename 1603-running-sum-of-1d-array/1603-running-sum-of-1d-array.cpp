class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        int sum=0;
        for(int &i:v){
            sum+=i;
            i=sum;
        }
        return v;
    }
};