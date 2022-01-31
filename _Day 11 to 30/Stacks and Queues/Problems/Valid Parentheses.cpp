bool isValid(string s) {
     stack<char> sack;
     int n = s.size();
     for(int i=0;i<n;i++)
     {   
         if(s[i]=='(' || s[i]=='{' || s[i]=='[')
         { 
           sack.push(s[i]);
           continue;
         }
         if(sack.empty())
             return false;
         char x = sack.top();
         if((x=='(' && s[i]==')') || (x=='{' && s[i]=='}') || (x=='[' && s[i]==']'))
             sack.pop();
         else
            return false;
     } 
     if(sack.empty())
         return true;
     return false;
 }
};
