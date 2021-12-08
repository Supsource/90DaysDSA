/* 
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
*/

//ANS :

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while ( n != 0){
            if(n&1){
                count ++;
            }
            n = n>>1;
        }
        return count;
    }
};
