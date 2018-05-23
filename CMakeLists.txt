cmake_minimum_required(VERSION 3.1.0)

project(spam_detector)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH D:/Qt/5.10.1/msvc2017_64)
# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)
include_directories("
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_BINARY_DIR}
    ${glew_inc}
    ${glew_src}
    ${glfw_inc}
    ${glfw_src}
    ${glm}
    ${soil_lib}
    ${soil_src}
    ${PROJECT_ROOT}
    ")
# Populate a CMake variable with the sources
set(spam_detector_SRCS
    src/mainwindow/mainwindow.cpp
    src/main.cpp
    src/forms/spamdetector.ui
    src/table/table.cpp
    src/method/method.cpp
    src/browser/browser.cpp
)
# Tell CMake to create the helloworld executable
add_executable(spam_detector WIN32 ${spam_detector_SRCS})
# Use the Widgets module from Qt 5
target_link_libraries(spam_detector Qt5::Widgets)