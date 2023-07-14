class Solution {
public:
    int subtractProductAndSum(int n) {
      int sum=0;
      int product=1;
int digit1=n;
int digit2=n;
      while(digit1>0){
          int last = digit1%10;
          sum=sum+last;
          digit1=digit1/10;
      }  

      while(digit2>0){
           int last = digit2%10;
          product=product*last;
          digit2=digit2/10;
      }
      int answer = product-sum;
      return answer;
    }
};
