struct Graph{
    int V,E;
    int **Adj;
};
struct Graph* adjMatrixOfGraph(){
  int u,v,i;
  struct Graph *G=(struct Graph*)malloc(Sizeof(struct Graph));
  if(G){
    printf("Memory Error");
    return;
  }
  printf("Enter number of nodes and number edges");
  scanf("%d %d",&G->V,&G->E);
  G->Adj=malloc(sizeof(int)*(G->V*G->V));
  for(u=0;u<G->V;u++)
        for(v=0;v<G->V;v++)
        G->Adj[i][j]=0;
  printf("Enter node numbers in a pair that coonects an edge:");
  for(i=0;i<G->E;i++)
    scanf("%d %d",&u,&v);
    G->Adj[u][v]=1;
    G->Adj[v][u]=1;
};
