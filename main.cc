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

    graph.add_edge(1, 2, 1);
    graph.add_edge(2, 3, 2);
    graph.add_edge(3, 4, 2);
    graph.add_edge(4, 2, 1);
    graph.add_edge(4, 3, 3);
    graph.add_edge(3, 5, 4);
    graph.add_edge(5, 4, 5);
   
    graph.dfs(1, print<int>);

    std::cout << "Center: " << graph.find_center() << std::endl;

    return 0;
}