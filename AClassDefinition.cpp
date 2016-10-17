//
// Created by aiyong on 16-10-15.
//

#include "AClassDefinition.h"


std::list<AFieldDefinition *> const& AClassDefinition::GetFieldDefinitions()
{
    return FieldDefinitions;
}

std::list<AMethodDefinition *> const& AClassDefinition::GetMethodDefinitions()
{
    return MethodDefinitions;
}

std::list<AAnnotationDefinition *> const& AClassDefinition::GetAnnotationDifinitions()
{
    return AnnotationDefinitions;
}
