#include "Karkasi.h"

int p[100];

void Kraskala(int n,int cost[100][100]){
	int a,b,u,v,ne=1,min,mincost=0;
	while(ne < n)
	{min=999;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j < n;j++)
			{
				if(cost[i][j]!=0&&cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u+1);
		v=find(v+1);
		if(uni(u,v))
		{
			cout<<"\n"<<ne++<<" вершина ("<<a+1<<","<<b+1<<") = "<<min;
			mincost +=min;
		}
		cost[a][b]=cost[b][a]=0;
	}
	cout<<"\nМiнiмальний шлях = "<<mincost<<"\n";
}
void Pryma(int n,int cost[100][100]){
	int a,b,ne=1,visited[100],min,mincost=0;
	for (int i=0;i<n;i++)visited[i]=0;
	visited[0]=1;
	while(ne < n)
	{min=INT_MAX;
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		if(cost[i][j]!=0&&cost[i][j]< min&&visited[i]!=0)
		{
			min=cost[i][j];
			a=i;
			b=j;
		}
		if(visited[a]==0 || visited[b]==0)
		{
			cout<<"\n"<<ne++<<" вершина ("<<a+1<<","<<b+1<<") = "<<min;
			mincost+=min;
			visited[b]=1;
		}
		cost[a][b]=cost[b][a]=INT_MAX;
	}
	cout<<"\nМiнiмальний шлях = "<<mincost<<"\n";
}










int find(int i)
{
	while(p[i])
	i=p[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		p[j]=i;
		return 1;
	}
	return 0;
}