int countDigits(int n){
	// Write your code here.	
	 int count = 0;
     int number=n;
     while(number!=0){
         int rem = number%10;
         number= number/10;
         if(rem==0){
             continue;
         }if(n%rem ==0){
             count++;
         }
     }
     return count;
}

// TC: O(log10(N))