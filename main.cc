#include "include/Graph.h"

int main() {
    Graph<int, double> graph;

    graph.add_vertex(1);
    graph.add_vertex(2);
    graph.add_vertex(3);
    graph.add_vertex(4);

    graph.add_edge(1, 1, 1);
    graph.add_edge(1, 2, 2);
    graph.add_edge(4, 1, 7);
    graph.add_edge(3, 3, 3);
    graph.add_edge(4, 2, 9);

    std::cout << graph.order() << std::endl;

    graph.print();

    std::cout << graph.degree(1) << std::endl;
    std::cout << graph.degree(2) << std::endl;
    std::cout << graph.degree(3) << std::endl;
    std::cout << graph.degree(4) << std::endl;

    graph.remove_edge(1, 1);

    graph.remove_vertex(4);

    graph.print();

    return 0;
}