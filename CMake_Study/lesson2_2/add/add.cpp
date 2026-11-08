#include <iostream>
// #define EXPORT // 更规范的是写在同级目录的CMakeLists.txt中
#include "export.h"


CMAKE_STUDY_API int add(int a, int b) {
    return a + b;
}
