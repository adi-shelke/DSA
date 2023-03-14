#include<iostream>
using namespace std;
#define MAX 30
class Graph{
    public:
    int edges,u,v,weight;
    int G[MAX][MAX];
    Graph(int size){
        int G[size][size];
    }
    int minDist(int distanceArr[],bool visited[],int size){
        int min=INT_MAX,index;
        for(int v=0;v<size;v++)
            if(visited[v]==false && distanceArr[v]<=min)
                min=distanceArr[v],index=v;
        return index;
    }
    void printDistance(int distanceArr[],int size){
        cout<<"The distance from the source node to other nodes is"<<endl;
        for(int i=0;i<size;i++)
            cout<<i<<" "<<distanceArr[i]<<endl;
    }
    void readGraph(int size){
        for(int i=0;i<size;i++)
            for(int j=0;j<size;j++)
                G[i][j]=0;  

        cout<<"Enter the number of edges in the graph"<<endl;
        cin>>edges;
        for(int i=0;i<edges;i++){
            cout<<"Enter the edge (start,end,weight): ";
            cin>>u>>v>>weight;
            G[u][v]=G[v][u]=weight;
        }
    }
    void algo(int start,int size){
        int distanceArr[size];
        bool visited[size];

        for(int i=0;i<size;i++)
            distanceArr[i]=INT_MAX,visited[i]=false;
        distanceArr[start]=0;

        for(int i=0;i<size;i++){
            int u=minDist(distanceArr,visited,size);
            visited[u]=true;

            for(int v=0;v<size;v++)
                if(!visited[v] && G[u][v] && distanceArr[u] != INT_MAX && distanceArr[u]+G[u][v] < distanceArr[v])
                    distanceArr[v]=distanceArr[u]+G[u][v];
        }
        printDistance(distanceArr,size);
    }
    void printMatrix(int size){
        for(int i=0;i<size;i++)
            for(int j=0;j<size;j++)
                cout<<G[i][j]<<" ";
    }
};
int main(){
    int size;
    cout<<"Enter the number of nodes in graph"<<endl;
    cin>>size;
    Graph g(size);
    g.readGraph(size);
    g.printMatrix(size);
    int start;
    cout<<"Enter the starting vertex: ";
    cin>>start;
    g.algo(start,size);
}