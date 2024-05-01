#include "include/Graph.h"

template<typename Vertex>
void print(const Vertex& vertex) {
    std::cout << vertex << " ";
}

int main() {
    Graph<int, double> graph;

    graph.add_vertex(1);
    graph.add_vertex(2);
    graph.add_vertex(3);
    graph.add_vertex(4);
    graph.add_vertex(3);
    graph.add_vertex(4);

    graph.add_edge(1, 2, 1);
    graph.add_edge(2, 3, 2);
    graph.add_edge(3, 4, 7);
    graph.add_edge(4, 2, 3);
    graph.add_edge(1, 4, 9);
    graph.add_edge(1, 1, 1);
    graph.add_edge(5, 3, 2);
    graph.add_edge(5, 6, 7);
    graph.add_edge(6, 6, 3);

    graph.dfs(5, print<int>);

    return 0;
}