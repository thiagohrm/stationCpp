cmake_minimum_required(VERSION 3.9.1)

project(myApp
    VERSION 1.0
    DESCRIPTION "A brief CMake experiment"
    LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 20)

# UNIX, WIN32, WINRT, CYGWIN, APPLE are environment variables as flags set by default system
if(UNIX)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(WIN32)
    message("This is a Windows System")
endif()
# or use MATCHES to see if actual system name 
# Darwin is Apple's system name
if(${CMAKE_SYSTEM_NAME} MATCHES Darwin)
    message("This is a ${CMAKE_SYSTEM_NAME} system")
elseif(${CMAKE_SYSTEM_NAME} MATCHES Windows)
    message("This is a Windows System")
endif()

include_directories(inc)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

file(GLOB APP_SOURCES */*.cpp)
foreach (testsourcefile ${APP_SOURCES})
    get_filename_component(testname ${testsourcefile} NAME_WLE)
    get_filename_component(dirname ${testsourcefile} DIRECTORY)
    file(GLOB dir_src CONFIGURE_DEPENDS
            "${dirname}/*.cpp"
            )
    message("${testname}.cpp | ${dir_src}")
    add_executable("${testname}" ${dir_src})
endforeach (testsourcefile ${APP_SOURCES})

# add_executable(myApp
#     src/main.cpp)

