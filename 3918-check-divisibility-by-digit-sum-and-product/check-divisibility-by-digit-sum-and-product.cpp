class Solution {
public:
    bool checkDivisibility(int n)
    {
       int sum=0;
       int prod=1;
       int temp=n;

       while(n>0)
       {
        int dig= n%10;
        sum+=dig;
        prod*=dig;

        n=n/10;
       }  
       int q= sum+prod;
       if(temp%q==0)return true;
       else return false;  
    }
};