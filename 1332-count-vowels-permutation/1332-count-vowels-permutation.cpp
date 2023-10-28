class Solution {
public:
    int countVowelPermutation(int n) {
        long long mod = 1e9+7,a = 1, e = 1, i = 1, o = 1, u = 1;
        
        for (int length = 1; length < n; length++) {
            long long aa = e;
            long long ee = (a + i) % mod;
            long long ii = (a + e + o + u) % mod;
            long long oo = (i + u) % mod;
            long long uu = a;
            a = aa;
            e = ee;
            i = ii;
            o = oo;
            u = uu;
        }
        return (a + e + i + o + u) % mod;
    }
};