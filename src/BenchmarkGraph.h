//
// Created by Andrea Ferlini on 07/11/2017.
//

#ifndef PRACTICAL6_BENCHMARK_H
#define PRACTICAL6_BENCHMARK_H
#include "Node.h"


class BenchmarkGraph {
public:
    BenchmarkGraph(unsigned int nodes_number, float p, float q);
    void initGraph();
    //TODO
    //void addEdge(unsigned int n1_id, unsigned int n2_id);
    //***
    //***
    //***
    void printGraph();

private:
    Node *nodes;
    unsigned int nodes_number;
    unsigned int edges_number;
    float p;
    float q;
};


#endif //PRACTICAL6_BENCHMARK_H
