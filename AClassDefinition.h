//
// Created by aiyong on 16-10-15.
//

#ifndef ROC_ACLASSDEFINITION_H
#define ROC_ACLASSDEFINITION_H

#include "AFieldDefinition.h"
#include "AMethodDefinition.h"
#include "AAnnotationDefinition.h"

#include <list>

/**
 *
 */
class AClassDefinition
{
public:

    /**
     *
     * @return
     */
    std::list<AFieldDefinition*> const& GetFieldDefinitions();

    /**
     *
     * @return
     */
    std::list<AMethodDefinition*> const& GetMethodDefinitions();

    /**
     *
     * @return
     */
    std::list<AAnnotationDefinition*> const& GetAnnotationDifinitions();

private:

    friend class AClassParser;

    std::list<AFieldDefinition*> FieldDefinitions;
    std::list<AMethodDefinition*> MethodDefinitions;
    std::list<AAnnotationDefinition*> AnnotationDefinitions;

};


#endif //ROC_ACLASSDEFINITION_H
