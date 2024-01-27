#include <iostream>

#include "node.h"

using namespace Zag;

Node::Node() { this->type = NODE_UNDEF; }

Node::Node(NodeType type) { this->type = type; }

Node::Node(NodeType type, std::string data) {
  this->type = type;
  this->data = data;
}

void Node::Debug(int tabs) {
  PrintTabs(tabs);
  std::cout << "{" << std::endl;
  PrintTabs(tabs);
  std::cout << "type: " << type << std::endl;
  PrintTabs(tabs);
  std::cout << "data: " << data << std::endl;
  PrintTabs(tabs);
  std::cout << "args: " << arguments.size() << std::endl;
  PrintTabs(tabs);
  std::cout << "childs: " << children.size() << std::endl;
  if (children.size() > 0) {
    PrintTabs(tabs);
    std::cout << "children: [" << std::endl;
    for (int i = 0; i < children.size(); i++) {
      children[i]->Debug(tabs + 1);
    }
  }
  PrintTabs(tabs);
  std::cout << "]}" << std::endl;
}

void Node::PrintTabs(int tabs) {
  for (int i = 0; i < tabs; i++)
    std::cout << "\t";
}


