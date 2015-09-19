#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int node,edge,visit[200000],indegree[200000];
vector<int>EDGES[200000];
vector<int>vertex;
int BFS()
{
    queue<int>q;
    int u,v,i,j,c=0;
    for(i=1;i<=node;i++)
    {
        if(indegree[i]==0)
        {
            c++;
            q.push(i);
        }
    }
    while(!q.empty())
    {
        u=q.front();
        visit[u]=1;
        vertex.push_back(u);
        q.pop();
        for(i=0;i<EDGES[u].size();i++)
        {
            v=EDGES[u][i];
            if(!visit[v])
            {
                q.push(v);
            }
        }
    }
    return c;
}
void DFS2(int u)
{
    visit[u]=1;
    for(int i=0;i<EDGES[u].size();i++)
    {
        int v=EDGES[u][i];
        if(!visit[v])
        {
            DFS2(v);
        }
    }
}
int main()
{
    int i,j,u,v;
    long long int test=1,t,min;
    scanf("%lld",&t);
    while(test<=t)
    {
        scanf("%d %d",&node,&edge);
        for(i=0;i<=node;i++)
        {
            EDGES[i].clear();
            vertex.clear();
            visit[i]=indegree[i]=0;
        }
        for(i=0;i<edge;i++)
        {
            scanf("%d %d",&u,&v);
            if(u!=v)
            {
                indegree[v]++;
                EDGES[u].push_back(v);
            }
        }
        int ans=BFS();
        int z=0;
        for(i=1;i<=node;i++)
        {
            if(!visit[i])
            {
                z++;
                break;
            }
        }
        min=0;
        if(z>0)
        {
            min=200000;
            for(i=1;i<=node;i++)
            {
                for(j=1;j<=node;j++)
                {
                    visit[j]=0;
                }
                for(j=0;j<vertex.size();j++)
                {
                    visit[j]=1;
                }
                int x=1;
                DFS2(i);
                for(j=1;j<=node;j++)
                {
                    if(!visit[j])
                    {
                        x++;
                        DFS2(j);
                    }
                }
                if(min>x)
                {
                    min=x;
                }
                if(min<2)
                {
                    break;
                }
            }
        }
        int result=ans+min;
        printf("%d\n",result);
        test++;
    }
    return 0;
}
 
