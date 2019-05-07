int twoStacks(int x, vector<int> a, vector<int> b) {
    int sum = 0,i=0,j=0,ii=a.size(),jj=b.size() , cnt=0;
    while(i<ii && sum+a[i]<=x)
        sum+=a[i++];
    cnt = i;
    while(i>=0 && j<jj)
        {
            sum+=b[j++];
            while(sum>x && i>0)
                sum-=a[--i];
            if(sum<=x && (i+j)>cnt)
                cnt = i+j;
        }
    return cnt;
}