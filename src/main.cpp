#include "BenchmarkGraph.h"

int main() {

    BenchmarkGraph graph(400, 0.8, 0.1);
    graph.initGraph();
    graph.printGraph();
    return 0;
}