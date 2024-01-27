#include <string>
#include <vector>

#pragma once

namespace Zag {

enum NodeType {
  NODE_UNDEF,
  NODE_SPACE,
  NODE_BLOCK,
  NODE_FUNCTION,
  NODE_ARGS,
  NODE_IF,
  NODE_LUP,
  NODE_OP_BIN,
  NODE_OP_UN,
  NODE_ASSIGN,
  NODE_EXPRESSION,
  NODE_YEP_VAL,
  NODE_NOP_VAL,
  NODE_NIL_VAL,
  NODE_ASSIGNATION,
  NODE_TYPE,
  NODE_INTERVAL_ASSIGNATION, // children: 2 - 4, arguments: NODE_IDENTIFIER
  NODE_NUMBER_VAL,
  NODE_STRING_VAL,
  NODE_IDENTIFIER,
};

class Node {
public:
  NodeType type;

  std::vector<Node *> children;
  std::vector<Node *> arguments;

  std::string data;

  Node();
  Node(NodeType);
  Node(NodeType, std::string);

  void Debug(int);

private:
  void PrintTabs(int);
};

}; // namespace Zag
