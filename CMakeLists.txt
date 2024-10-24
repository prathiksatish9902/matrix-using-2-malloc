cmake_minimum_required(VERSION 3.16)

project(malooc_task1 LANGUAGES C)

add_executable(malooc_task1 main.c)

include(GNUInstallDirs)
install(TARGETS malooc_task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
