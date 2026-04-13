class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size(),i=0;
        long long sum=0;
        if(n==1) return 0;
        for(int j=0;j<n;j++)
        {
            sum+=chalk[j];
        }
        k%=sum;
        while(k>=chalk[i])
        {
            k-=chalk[i];
            i++;
            i%=n;
        }
        return i;
    }
};