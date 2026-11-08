
add_subdirectory(add)

include_directories(./lib)
# 链接静态库 方式一
# link_libraries(D:/tyy_install/desktop/infra_study/基础学习/CMake_Study/lesson2_1/lib/add_static.lib)

# 链接静态库 方式二
link_directories(D:/tyy_install/desktop/infra_study/基础学习/CMake_Study/lesson2_1/lib)


add_executable(lesson2_1 main.cpp)

target_link_libraries(lesson2_1 add_static.lib) # 链接静态库 方式二

# target_link_libraries(lesson2_1 PRIVATE add_static)  # 链接静态库 方式三





 





























