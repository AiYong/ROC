//
// Created by aiyong on 16-10-16.
//

#ifndef ROC_ACLASSPPCALLBACKS_H
#define ROC_ACLASSPPCALLBACKS_H

#include "clang/Lex/PPCallbacks.h"
#include "clang/Lex/Preprocessor.h"


class AClassPPCallbacks : public clang::PPCallbacks
{
public:


    AClassPPCallbacks(clang::Preprocessor &Preprecessor);

    void MacroExpands(const clang::Token &MacroNameTok,
                      const clang::MacroDefinition &MD, clang::SourceRange Range,
                      const clang::MacroArgs *Args) override;

private:

    clang::Preprocessor &Preprocessor;
    
};


#endif //ROC_ACLASSPPCALLBACKS_H
