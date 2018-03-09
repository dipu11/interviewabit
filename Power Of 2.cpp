int Solution::power(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int n=stoi(A);
    if(n>0 &&(n&(n-1))==0)
        return 1;
    else return 0;
}
