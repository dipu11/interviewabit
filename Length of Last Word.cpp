
int Solution::lengthOfLastWord(const string A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l,i,c=0;
    l=A.length();
    for(i=l-1;i>=0;i--)
    {
        if(A[i]==' ' && l==1) break;
        if(c>0 && A[i]==' ') break;
        else if(A[i]==' ' && c==0)
        {
            //do nothing
        }
        else
        {
            c++;
        }
    }
    return c;
}

