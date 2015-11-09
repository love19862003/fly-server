ADD_EXECUTABLE(fanny_server main.cpp)
ADD_DEPENDENCIES(fanny_server cache database http log luatinker message server utility protobufc)
TARGET_LINK_LIBRARIES(fanny_server ${LINK_LIBS})
