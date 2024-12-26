enum LogicalType {
    LogicalNot,
    LogicalAnd,
    LogicalOr,
    LogicalTrue,
    LogicalFalse
};
// SatTree.h
class SatNode {
public:
    LogicalType  data; // 节点的逻辑类型，例如 LogicalNot, LogicalAnd 等
    bool value;
    SatNode* LeftChild;
    SatNode* RightChild;
};

class SatTree {
public:
    void PostOrderEval();
    void PostOrderEval(SatNode* s);
private:
    SatNode* root;
};
