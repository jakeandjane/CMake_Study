add_library(add_shared SHARED add.cpp) # Create a shared library named add_shared from add.cpp

target_compile_definitions(add_shared PRIVATE EXPORT) # Define EXPORT for the add_shared target to control symbol export
 #结合第一句，它的意思就是，在编译add.cpp的时候，帮我加上EXPORT这个宏定义
