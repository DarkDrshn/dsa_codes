class Solution {
public:
    bool canBeEqual(string a, string b) {
        if((a[0]==b[0])&&(a[2]==b[2])){
            if((a[1]==b[1])&&(a[3]==b[3])){
                return 1;
            }
            else if((a[1]==b[3])&&(a[3]==b[1])){
                return 1;
            }
        }
        else if((a[0]==b[2])&&(a[2]==b[0])){
            if((a[1]==b[1])&&(a[3]==b[3])){
                return 1;
            }
            else if((a[1]==b[3])&&(a[3]==b[1])){
                return 1;
            }
        }
        return 0;
    }
};