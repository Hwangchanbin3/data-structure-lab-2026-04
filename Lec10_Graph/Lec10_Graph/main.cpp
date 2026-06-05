#include "AdjMatGraph.h"
#include "WGraphPrim.h"
#include "WGraphDijkstra.h"

int main()
{
	WGraphPrim g;
	g.load("../graph.txt");
	printf("MST By Prim's Algorithm \n");
	g.Prim(0);
	//return 0;

	WGraphDijkstra f;
	f.load("../graph.txt");
	printf("Shortest Path By Dijkstra algorithm\n");
	f.ShortestPath(0);
	return 0;
	
	//SrchAMGraph g;

	//for (int i = 0; i < 4; i++)
	//	g.insertVertex('A' + i);
	//g.insertEdge(0, 1);
	//g.insertEdge(0, 3);
	//g.insertEdge(1, 2);
	//g.insertEdge(1, 3);
	//g.insertEdge(2, 3);
	//printf("인접 행렬로 표현한 그래프\n");
	//g.display();

	//FILE* fp;
	//fopen_s(&fp, "../text_out.txt", "w");
	//if (fp != NULL) {
	//	g.display(fp);
	//	fclose(fp);
	//}

	//printf("그래프(graph.txt)\n");
	//g.display();
	//printf("DFS ==> ");
	//g.resetVisited();
	//g.DFS(0);
	//printf("\n\n");

	//WGraphMST mstGraph;
	//// 현재 graph.txt 파일이 위치한 상위 폴더 경로로 정확히 지정했습니다.
	//mstGraph.load("../graph.txt");

	//printf("=== 가중치 그래프 정보 ===\n");
	//mstGraph.display();
	//printf("\n");

	//printf("MST BY Kruskal's Algorithm\n");
	//mstGraph.Kruskal();

	return 0;
}