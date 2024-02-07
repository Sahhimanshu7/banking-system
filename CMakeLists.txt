cmake_minimum_required(VERSION 3.27)
project(banking_system)

set(CMAKE_CXX_STANDARD 17)

add_executable(banking_system src/main.cpp
        src/database/database.cpp
        include/main.h
        src/services/errorMessage.cpp
        include/errorMessage.h
        src/services/registrationValidator.cpp
        include/registrationValidator.h
)
