 class Solution {
    public:
        int romanToInt(string s) {
            int num = 0;
            int size = s.size();
            
            for (int i = 0; i < size; i++) {
            	if (i < (size - 1) && romanCharToInt(s[i]) < romanCharToInt(s[i + 1])) {
            		num -= romanCharToInt(s[i]);
            	} else {
    				num += romanCharToInt(s[i]);
    			}
            }
            return num;
        }
        
        int romanCharToInt(char c) {
        	switch (c) {
        		case 'I': 	return 1;
        		case 'V':	return 5;
        		case 'X':	return 10;
        		case 'L':	return 50;
        		case 'C':	return 100;
        		case 'D':	return 500;
        		case 'M':	return 1000;
        		default:	return 0;
        	}
        }
    };