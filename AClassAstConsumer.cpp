//
// Created by aiyong on 16-10-16.
//

#include "AClassAstConsumer.h"

#include "clang/AST/Decl.h"
#include "clang/AST/DeclCXX.h"


AClassAstConsumer::AClassAstConsumer(clang::CompilerInstance *Compiler)
    :Compiler(Compiler)
{
}

AClassAstConsumer::~AClassAstConsumer()
{
}


void AClassAstConsumer::Initialize(clang::ASTContext &Context) {
    ASTConsumer::Initialize(Context);
    this->Context = &Context;
    this->PPCallbacks = new AClassPPCallbacks(this->Compiler->getPreprocessor());
    this->Compiler->getPreprocessor().addPPCallbacks(std::unique_ptr<clang::PPCallbacks>(this->PPCallbacks));
}

bool AClassAstConsumer::HandleTopLevelDecl(clang::DeclGroupRef D) {
    return ASTConsumer::HandleTopLevelDecl(D);
}

void AClassAstConsumer::HandleInlineFunctionDefinition(clang::FunctionDecl *D) {
    ASTConsumer::HandleInlineFunctionDefinition(D);
}

void AClassAstConsumer::HandleInterestingDecl(clang::DeclGroupRef D) {
    ASTConsumer::HandleInterestingDecl(D);
}

void AClassAstConsumer::HandleTranslationUnit(clang::ASTContext &Ctx) {
    ASTConsumer::HandleTranslationUnit(Ctx);
}

void AClassAstConsumer::HandleTagDeclDefinition(clang::TagDecl *D) {
    ASTConsumer::HandleTagDeclDefinition(D);


}

void AClassAstConsumer::HandleTagDeclRequiredDefinition(const clang::TagDecl *D) {
    ASTConsumer::HandleTagDeclRequiredDefinition(D);
}

void AClassAstConsumer::HandleCXXImplicitFunctionInstantiation(clang::FunctionDecl *D) {
    ASTConsumer::HandleCXXImplicitFunctionInstantiation(D);
}

void AClassAstConsumer::HandleTopLevelDeclInObjCContainer(clang::DeclGroupRef D) {
    ASTConsumer::HandleTopLevelDeclInObjCContainer(D);
}

void AClassAstConsumer::HandleImplicitImportDecl(clang::ImportDecl *D) {
    ASTConsumer::HandleImplicitImportDecl(D);
}

void AClassAstConsumer::CompleteTentativeDefinition(clang::VarDecl *D) {
    ASTConsumer::CompleteTentativeDefinition(D);
}

void AClassAstConsumer::AssignInheritanceModel(clang::CXXRecordDecl *RD) {
    ASTConsumer::AssignInheritanceModel(RD);
}

void AClassAstConsumer::HandleCXXStaticMemberVarInstantiation(clang::VarDecl *D) {
    ASTConsumer::HandleCXXStaticMemberVarInstantiation(D);
}

void AClassAstConsumer::HandleVTable(clang::CXXRecordDecl *RD) {
    ASTConsumer::HandleVTable(RD);
}

clang::ASTMutationListener *AClassAstConsumer::GetASTMutationListener() {
    return ASTConsumer::GetASTMutationListener();
}

clang::ASTDeserializationListener *AClassAstConsumer::GetASTDeserializationListener() {
    return ASTConsumer::GetASTDeserializationListener();
}

void AClassAstConsumer::PrintStats() {
    ASTConsumer::PrintStats();
}

bool AClassAstConsumer::shouldSkipFunctionBody(clang::Decl *D) {
    return ASTConsumer::shouldSkipFunctionBody(D);
}

