//
// Created by aiyong on 16-10-16.
//

#ifndef ROC_ACLASSFRONTACTION_H
#define ROC_ACLASSFRONTACTION_H


#include "clang/Frontend/FrontendAction.h"

class AClassFrontAction : public clang::FrontendAction
{
public:

protected:
    virtual std::unique_ptr<clang::ASTConsumer>
    CreateASTConsumer(clang::CompilerInstance &CI, llvm::StringRef InFile) override;
};


#endif //ROC_ACLASSFRONTACTION_H
