//
// Created by aiyong on 16-10-16.
//

#ifndef ROC_ACLASSASTVISITOR_H
#define ROC_ACLASSASTVISITOR_H

#include "clang/AST/RecursiveASTVisitor.h"


class AClassASTVisitor : public clang::RecursiveASTVisitor<AClassASTVisitor>
{
public:

    AClassASTVisitor();

public:



};


#endif //ROC_ACLASSASTVISITOR_H
