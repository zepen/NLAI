//
// Created by User on 2019/4/19.
//

#ifndef NLAI_DECISION_TREES_H
#define NLAI_DECISION_TREES_H

namespace nlai {
    class DecisionTrees {

    public:
        DecisionTrees();
        DecisionTrees *dt = new DecisionTrees;
        DecisionTrees *left_node;
        DecisionTrees *right_node;

    private:

    };

    class RegressionTree : public DecisionTrees{


    };

    class ClassificationTree : public DecisionTrees{


    };
}


#endif //NLAI_DECISION_TREES_H
