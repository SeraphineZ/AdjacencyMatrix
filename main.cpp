#include <iostream>
#include <cstdio>
#define MAX_VEX 100
#define INF 65535

using namespace std;
struct Graph{
    char vexs[MAX_VEX];
    int arcs[MAX_VEX][MAX_VEX];
    int numvex, numarc;
};

void CreateGraph(Graph &G){
    int vi,vj,w;
    cout<<"please enter the number of vertexes and arcs: \n";
    cin>>G.numvex>>G.numarc;
    for(int i=0;i<G.numvex;i++)
        for(int j=0;j<G.numarc;j++){
            G.arcs[i][j]=INF;
        }
    cout<<endl;
    for(int i=0;i<G.numarc;i++){
        cout<<"Enter the subscripts and weights from vertex vi to vj: ";
        cin>>vi>>vj>>w;
        G.arcs[vi][vj]=w;
        G.arcs[vj][vi]=w;
    }
}
void DisplayGraph(Graph G){
    for(int i=0;i<G.numvex;i++){
        cout<<G.vexs[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<G.numvex;i++){
        for(int j=0;j<G.numvex;j++){
            if(G.arcs[i][j]==INF)   printf("%6s","INF");
            else printf("%6d",G.arcs[i][j]);
        }
        cout<<endl;
    }
}
int main()
{
    Graph G;
    CreateGraph(G);
    DisplayGraph(G);
    return 0;
}
