//
// Created by User on 2019/4/19.
//

#ifndef NLAI_DECISION_TREES_H
#define NLAI_DECISION_TREES_H

namespace nlai {
    class decision_trees {

    public:
        decision_trees();
        decision_trees *dt = new decision_trees;
        decision_trees *left_node;
        decision_trees *right_node;

    private:

    };

    class regression_tree : public decision_trees{


    };

    class classification_tree : public decision_trees{

    };
}


#endif //NLAI_DECISION_TREES_H
