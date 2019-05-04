map<int,bool> calc(vector<int>v)
{
    map<int, bool> mp;
    int sz = v.size(), sum = 0;
    for (int i = sz-1; i >=0; i--) {
        sum += v[i];
        mp[sum] = 1;
    }
    return mp;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
  map<int, bool> mp1, mp2;
  mp1 = calc(h1);
  mp2 = calc(h2);
  vector<int>v;
  int sum=0;
  for(int i=h3.size()-1; i>=0; i--)
    v.push_back(sum+=h3[i]);
  for(int i=v.size()-1; i>=0; i--)
  {
      if(mp1[v[i]] && mp2[v[i]])
        return v[i];
  }
  return 0;

}