#include <bits/stdc++.h>

#define N 112345

using namespace std;

vector<int> g[N];
set<int> caminho;
bool comp[N];

void ida(int a,int b){
    caminho.insert(a);
    for(int i=0;i<g[a].size();i++){
        if(b==g[a][i]){
            caminho.insert(b);
            return;
        }
        ida(g[a][i],b); 
        if(caminho.find(b)==caminho.end()){
            auto p = caminho.find(a);
            caminho.erase(p);
        }
        else{
            return;
        }
    }
}

void volta(int c,int d){
    for(int i=0;i)
}


int main(){
    int n,q;
    scanf("%d%d",&n,&q);
    for(int i=0;i<n-1;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=0;i<q;i++){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);

    }
    return 0;
}