//
// Created by Andrea Ferlini on 07/11/2017.
//

#include "Node.h"

Node::Node(unsigned int id, unsigned int degree) {
    this->id = id;
    this->degree = degree;
}

Node::Node() {
    this->id = 0;
    this->degree = 0;
}

unsigned int Node::getId() const {
    return id;
}

unsigned int Node::getDegree() const {
    return degree;
}

void Node::setId(unsigned int id) {
    Node::id = id;
}

void Node::setDegree(unsigned int degree) {
    Node::degree = degree;
}

void Node::printNode() {
    cout << this->getId() << "-" << this->getDegree() << endl;
}
