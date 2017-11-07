//
// Created by Andrea Ferlini on 07/11/2017.
//

#ifndef PRACTICAL6_NODE_H
#define PRACTICAL6_NODE_H

#include <iostream>
using namespace std;


class Node {
private:
    unsigned int id;
    unsigned int degree;
public:
    Node();
    Node(unsigned int id, unsigned int degree);
    unsigned int getDegree() const;
    unsigned int getId() const;
    void setId(unsigned int id);
    void setDegree(unsigned int degree);
    void printNode();
};


#endif //PRACTICAL6_NODE_H
