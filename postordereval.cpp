// postordereval.cpp
#include "SatTree.h"

void SatTree::PostOrderEval()
{
    PostOrderEval(root);
}

void SatTree::PostOrderEval(SatNode *s)
{
    if (s)
    {
        PostOrderEval(s->LeftChild);
        PostOrderEval(s->RightChild);
        switch (s->data)
        {
        case LogicalNot:
            s->value = !s->RightChild->value;
            break;
        case LogicalAnd:
            s->value = s->LeftChild->value && s->RightChild->value;
            break;
        case LogicalOr:
            s->value = s->LeftChild->value || s->RightChild->value;
            break;
        case LogicalTrue:
            s->value = true;
            break;
        case LogicalFalse:
            s->value = false;
            break;
        };
    }
}
