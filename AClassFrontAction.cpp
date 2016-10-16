//
// Created by aiyong on 16-10-16.
//

#include "AClassFrontAction.h"
#include "AClassAstConsumer.h"


std::unique_ptr<clang::ASTConsumer>
AClassFrontAction::CreateASTConsumer(clang::CompilerInstance &CI, llvm::StringRef InFile) {
    return nullptr;
}
