#include <bits/stdc++.h>

using namespace std;

struct Edge{
    int src,dest,w;
    
};

struct Graph{
    int V,E;
    struct Edge* edge;
};

struct Graph* createGraph(int V,int E){
   struct Graph* graph = new Graph;
   graph->V= V;
   graph->E = E;
   graph->edge = new Edge[E];
   return graph;
}

void display(int dist[],int n){
    cout<<" Vertex    Distance"<<endl;

    for(int i=0;i<n;i++){
         printf("%d  \t\t  %d\n",i,dist[i]);
    }
  printf ("\n");
    
}

void bellmanFord(struct Graph* graph,int src){
    int V = graph->V;
    int E = graph->E;
    int dist[V];
    
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
        
    }
    dist[src]=0;
    for(int i=1;i<=V-1;i++){
        for(int j=0;j<E;j++){
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int wt = graph->edge[j].w;
            if(dist[u] != INT_MAX && dist[u]+wt < dist[v])
              dist[v]= dist[u]+wt;
            
        }
        
    }
    for(int j=0;j<E;j++){
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int wt = graph->edge[j].w;
            if(dist[u] != INT_MAX && dist[u]+wt < dist[v]){
                cout<<"graph contains negative weight cycle ";
                return;
            }
        }
    display(dist,V);
    return;
}


int main(){
    int V,E;
    cin>>V>>E;
    struct Graph *graph = createGraph(V,E);
    for(int i=0;i<E;i++){
        int a,b,c;
        cout<<"Enter src :";
        cin>>a;
        cout<<endl;
        cout<<"Enter dest :";
        cin>>b;
        cout<<endl;
        cout<<"Enter weight :";
        cin>>c;
        graph->edge[i].src=a;
        graph->edge[i].dest=b;
        graph->edge[i].w=c;
        
    }
    bellmanFord(graph,0);
    
    return 0;
}
