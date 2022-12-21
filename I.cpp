#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,l;
    scanf("%d%d",&n,&m);
    scanf("%d",&l);
    set<int> acs;
    vector<int> ap[n];
    for(int i=0;i<l;i++){
        int a;
        scanf("%d",&a);
        acs.insert(a);
    }
    for(int i=0;i<n;i++){
        int k;
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            int ki;
            scanf("%d",&ki);
            ap[i].push_back(ki);
        }
    }
    int i=0,t=0;
    while(acs.size()){
        for(int j=0;j<ap[i].size();j++){
            auto pos = acs.find(ap[i][j]); 
            if(pos!=acs.end()){
                acs.erase(pos);
            }
            else{
                acs.insert(ap[i][j]);
            }
        }
        i++;
        i%=n;
        t++;
        if(t>=(int)pow(10,6)){
            t = -1;
            break;
        }
    }
    printf("%d\n",t);
    return 0;
}