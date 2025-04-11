#ifndef SORT_H
#define SORT_H

#include "dataStruct.h"
#include <algorithm>
#include <vector>

namespace nspace
{
    bool compare(const DataStruct left, const DataStruct right);
    void sortDataVector(std::vector<DataStruct>& data);
}
#endif