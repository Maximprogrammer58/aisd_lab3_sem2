#include "include/Graph.h"

template<typename Vertex>
void print(const Vertex& vertex) {
    std::cout << vertex << " ";
}

template <typename Vertex, typename Distance = double>
using Edge = Graph<Vertex, Distance>::Edge;

int main() {
    Graph<int> graph;

    graph.add_vertex(1);
    graph.add_vertex(2);
    graph.add_vertex(3);
    graph.add_vertex(4);
    graph.add_vertex(5);
    graph.add_vertex(6);

    graph.add_edge(1, 2, 1);
    graph.add_edge(2, 3, 2);
    graph.add_edge(3, 4, 2);
    graph.add_edge(4, 2, 3);
    graph.add_edge(1, 4, 9);
    graph.add_edge(1, 1, 1);
    graph.add_edge(5, 3, 2);
    graph.add_edge(1, 6, 100);
    graph.add_edge(6, 5, 3);

    graph.dfs(5, print<int>);

    for (const Edge<int>& edge : graph.shortest_path(1, 4)) 
        std::cout << "From " << edge.from << " to " << edge.to << " distance =  " << edge.distance << std::endl;

    return 0;
}