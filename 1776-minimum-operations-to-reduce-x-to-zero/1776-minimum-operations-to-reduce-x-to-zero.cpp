class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int n=a.size();
        //return solve(0,n,x,a,dp);

        
				int t=-x;
				for (int num : a) t += num;
				if(!t) return n;

				map<int, int> m;
				m[0]=-1;
				int sum = 0, res = INT_MIN;
				for (int i=0;i<n;++i) {
						sum+=a[i];
						if (m.count(sum-t)) res=max(res, i-m[sum - t]);
						m[sum]=i;
				}

				return (res == INT_MIN) ? -1:n-res;
    }
};