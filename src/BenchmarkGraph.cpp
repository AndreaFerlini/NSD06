//
// Created by Andrea Ferlini on 07/11/2017.
//

#include "BenchmarkGraph.h"
using namespace std;

BenchmarkGraph::BenchmarkGraph(unsigned int nodes_number, float p, float q) {
    this->nodes = new Node [nodes_number]();
    this->nodes_number = nodes_number + 1;
    this->edges_number = 0;
    this->p = p;
    this->q = q;
}

void BenchmarkGraph::initGraph() {
    // add all the nodes to the graph
    for (unsigned int i = 1; i < this->nodes_number; i++) {
        this->nodes[i] = Node(i, 0);
    }
}

//
//
//
//

void BenchmarkGraph::printGraph() {
    for (unsigned int i = 1; i < this->nodes_number; i++) {
        this->nodes[i].printNode();
    }
}