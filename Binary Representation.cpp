//main method is avoided as the main target is how to solve the problem here.
string Solution::findDigitsInBinary(int A)
 {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s="";
    int a,b,i,j,arr[1000];
    int idx=0;
    if(A==0)
       {
           s=s+"0";
           return s;
       }
    while(A!=0)
    {
        int r=A%2;
        s=s+ to_string(r);
        A=A/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
