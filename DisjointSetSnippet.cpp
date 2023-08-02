#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int>rank,parent,size;
public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for (int i = 0; i <= n; i++)
        {
            parent[i]=i;
            size[i]=1;
        }
    }

    int findPar(int node){
        if(node==parent[node])
            return node;
        return parent[node]=findPar(parent[node]);
    }

    void unionByRank(int u, int v){
        int ulp_u=findPar(u); //ulp_u is ultimate parent of u
        int ulp_v=findPar(v);
        if(ulp_u==ulp_v) return;
        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v; //smaller rank one will get attached
        }
        else if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++; //v attached to u so the larger one will grow in size 
        }
    }
    void unionBySize(int u, int v){
        int ulp_u=findPar(u); //ulp_u is ultimate parent of u
        int ulp_v=findPar(v);
        if(ulp_u==ulp_v) return;
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }            
};
//don't use both unionByRank and unionBySize together
//use one at a time.....although they have same TC O(4alpha).