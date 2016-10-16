//
// Created by aiyong on 16-10-16.
//

#ifndef LLVM_ACLASSASTCONSUMER_H
#define LLVM_ACLASSASTCONSUMER_H


#include "clang/AST/ASTConsumer.h"
#include "clang/AST/DeclGroup.h"
#include "clang/Frontend/CompilerInstance.h"


#include "AClassPPCallbacks.h"


using namespace clang;

class AClassAstConsumer : public ASTConsumer
{
public:

    AClassAstConsumer(clang::CompilerInstance *Compiler);

    ~AClassAstConsumer();

public:

    virtual void Initialize(clang::ASTContext &Context) override;

    virtual bool HandleTopLevelDecl(clang::DeclGroupRef D) override;

    virtual void HandleInlineFunctionDefinition(clang::FunctionDecl *D) override;

    virtual void HandleInterestingDecl(clang::DeclGroupRef D) override;

    virtual void HandleTranslationUnit(clang::ASTContext &Ctx) override;

    virtual void HandleTagDeclDefinition(clang::TagDecl *D) override;

    virtual void HandleTagDeclRequiredDefinition(const clang::TagDecl *D) override;

    virtual void HandleCXXImplicitFunctionInstantiation(clang::FunctionDecl *D) override;

    virtual void HandleTopLevelDeclInObjCContainer(clang::DeclGroupRef D) override;

    virtual void HandleImplicitImportDecl(clang::ImportDecl *D) override;

    virtual void CompleteTentativeDefinition(clang::VarDecl *D) override;

    virtual void AssignInheritanceModel(clang::CXXRecordDecl *RD) override;

    virtual void HandleCXXStaticMemberVarInstantiation(clang::VarDecl *D) override;

    virtual void HandleVTable(clang::CXXRecordDecl *RD) override;

    virtual clang::ASTMutationListener *GetASTMutationListener() override;

    virtual clang::ASTDeserializationListener *GetASTDeserializationListener() override;

    virtual void PrintStats() override;

    virtual bool shouldSkipFunctionBody(clang::Decl *D) override;

private:

    clang::CompilerInstance *Compiler;
    clang::ASTContext *Context;
    AClassPPCallbacks *PPCallbacks;

};


#endif //LLVM_ACLASSASTCONSUMER_H
