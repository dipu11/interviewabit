vector<int> Solution::allFactors(int A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int>v;
    int i,j;
    int limit=sqrt(A);
     if(A==1)
      {
          v.push_back(1);
          return v;
      }
    for(i=1;i<=limit;i++)
    {
        if(A%i==0)
        {
            v.push_back(i);
            if(i!=(A/i))
            {
            v.push_back(A/i);
            }
        }

    }
    //or you can just use your own/better sorting algo.
    sort(v.begin(),v.end());
    return v;
}
