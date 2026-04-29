class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int tem = x;

        if(x < 0)
            return false;

            
            while(x != 0){
                int ld = x % 10;
                 if ( rev > INT_MAX / 10 || rev < INT_MIN /10)
                return 0;
                rev = rev * 10 + ld;
                 x = x /10;
            }
    
    if (tem == rev)
        return true;
    
    else 
        return false;
    }
};