CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(FannyProject)

IF(UNIX)
  SET(CMAKE_C_COMPILER gcc)
  SET(CMAKE_CXX_COMPILER g++)
  SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexceptions -Wno-unused-local-typedefs -ffunction-sections -fdata-sections")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fexceptions")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-local-typedefs -Wreorder -ffunction-sections -fdata-sections")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-omit-frame-pointer")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak")

  SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -D_DEBUG -O0 -Wall")
  SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wextra -Wpointer-arith -Wcast-qual")
  SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wunreachable-code -Wundef -Woverloaded-virtual")
  SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wdouble-promotion -Wunused-parameter -g -ggdb -fpic -fPIC")

  SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -DNDEBUG -Os -Wall")
  SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wextra -Wpointer-arith")
  SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wcast-qual -Wunreachable-code -Wundef")
  SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wdouble-promotion -Woverloaded-virtual")
  SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wunused-parameter -g -fpic -fPIC")

  EXECUTE_PROCESS(
    COMMAND gcc --version
    OUTPUT_VARIABLE GCCVERSIONSTR
  )
  STRING(REGEX REPLACE ".* ([0-9]\\.[0-9]\\.[0-9]).*" "\\1" GCCVERSION ${GCCVERSIONSTR})
  MESSAGE(STATUS  "gcc compiler:${GCCVERSION}")

  IF(EXISTS "${CMAKE_SOURCE_DIR}/.svn/")
    FIND_PACKAGE(Subversion)
    IF(SUBVERSION_FOUND)
      Subversion_WC_INFO(${CMAKE_SOURCE_DIR} FannyProject)
      SET(VERSION_REVISION ${FannyProject_WC_REVISION})
      MESSAGE(STATUS "FannyProject build svn--version ${VERSION_REVISION}")
      CONFIGURE_FILE("Version.h.in" "${CMAKE_SOURCE_DIR}/server/Version.h")
    ENDIF(SUBVERSION_FOUND)
  ENDIF(EXISTS "${CMAKE_SOURCE_DIR}/.svn/")

  IF(EXISTS "${CMAKE_SOURCE_DIR}/.git/")
    EXECUTE_PROCESS(
      COMMAND git rev-list HEAD -n 1
      OUTPUT_VARIABLE VERSION_REVISION_STR
    )
    STRING(REGEX MATCH "^[a-zA-Z0-9]+" VERSION_REVISION ${VERSION_REVISION_STR})
    MESSAGE(STATUS "FannyProject build git--version ${VERSION_REVISION}")
    CONFIGURE_FILE("Version.h.in" "${CMAKE_SOURCE_DIR}/server/Version.h")
  ENDIF(EXISTS "${CMAKE_SOURCE_DIR}/.git/")

ELSE(UNIX)
  SET(CMAKE_CONFIGURATION_TYPES "Debug;Release" )
  SET(CMAKE_C_COMPILER msvc)
  SET(CMAKE_CXX_COMPILER msvc)
  SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W3 /MP  /bigobj /wd4496 /wd4267 /wd4244 /Zi")
  SET(CMAKE_CXX_FLAGS_DEBUG "-DDEBUG /MTd")
  SET(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG /MT")

  ADD_DEFINiTIONS(-D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
  ADD_DEFINiTIONS(-DWIN32 -D_WINSOCK_DEPRECATED_NO_WARNINGS)
  ADD_DEFINiTIONS(_DLUA_COMPAT_APIINTCASTS -D_LIB -DLUA_COMPAT_APIINTCASTS)
  ADD_DEFINiTIONS(-DFINNY_HTTP_STATIC_LIB)
  ADD_DEFINiTIONS(-DMYSQLPP_NO_DLL -DCPPCONN_LIB_BUILD)
  ADD_DEFINiTIONS(-DLEVELDB_PLATFORM_WINDOWS)
  ADD_DEFINiTIONS(-DWIN32_LEAN_AND_MEAN -DBOOST_ASIO_WINDOWS_RUNTIME)
ENDIF(UNIX)

SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/")
SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib/${CMAKE_BUILD_TYPE}/")

INCLUDE_DIRECTORIES("./")
LINK_DIRECTORIES(${LIBRARY_OUTPUT_PATH})

SET(LINK_LIBS ${LINK_LIBS} server)
SET(LINK_LIBS ${LINK_LIBS} luatinker)
SET(LINK_LIBS ${LINK_LIBS} net)
SET(LINK_LIBS ${LINK_LIBS} cache)
SET(LINK_LIBS ${LINK_LIBS} database)
SET(LINK_LIBS ${LINK_LIBS} http)
SET(LINK_LIBS ${LINK_LIBS} message)
SET(LINK_LIBS ${LINK_LIBS} protobufc)
SET(LINK_LIBS ${LINK_LIBS} utility)
SET(LINK_LIBS ${LINK_LIBS} log)

SET(LINK_LIBS ${LINK_LIBS} leveldb)
SET(LINK_LIBS ${LINK_LIBS} mysqlcppconn-static)
SET(LINK_LIBS ${LINK_LIBS} log4cplus)
SET(LINK_LIBS ${LINK_LIBS} hiredis)
SET(LINK_LIBS ${LINK_LIBS} uv)
SET(LINK_LIBS ${LINK_LIBS} lua)

IF(UNIX)
  INCLUDE_DIRECTORIES("/usr/local/libxs/include")
  INCLUDE_DIRECTORIES("/usr/local/include")
  INCLUDE_DIRECTORIES("$ENV{LOG4CPLUS}/include")
  LINK_DIRECTORIES("/usr/local/lib/")
  LINK_DIRECTORIES("/usr/local/lib64/")
  LINK_DIRECTORIES("/usr/local/gperftools/lib/")
  LINK_DIRECTORIES("/usr/local/mysql/lib/")
  LINK_DIRECTORIES("$ENV{LOG4CPLUS}/lib/")

  SET(LINK_LIBS ${LINK_LIBS} snappy)
  SET(LINK_LIBS ${LINK_LIBS} boost_date_time)
  SET(LINK_LIBS ${LINK_LIBS} mysqlclient_r)
  SET(LINK_LIBS ${LINK_LIBS} boost_system)
  SET(LINK_LIBS ${LINK_LIBS} boost_filesystem)
  SET(LINK_LIBS ${LINK_LIBS} boost_thread)
  SET(LINK_LIBS ${LINK_LIBS} boost_context)
  SET(LINK_LIBS ${LINK_LIBS} boost_coroutine)
  SET(LINK_LIBS ${LINK_LIBS} protobuf)
  SET(LINK_LIBS ${LINK_LIBS} pthread)
  SET(LINK_LIBS ${LINK_LIBS} tcmalloc)
ELSE(UNIX)
  SET(WIN_INCLUDE "${CMAKE_SOURCE_DIR}/third/include/")
  INCLUDE_DIRECTORIES("${WIN_INCLUDE}")
  INCLUDE_DIRECTORIES("${WIN_INCLUDE}/mysqlconn/include")
  INCLUDE_DIRECTORIES("${WIN_INCLUDE}/mysql/include")
  INCLUDE_DIRECTORIES("${WIN_INCLUDE}/redis/")
  LINK_DIRECTORIES("${CMAKE_SOURCE_DIR}/third/libs/${CMAKE_BUILD_TYPE}")
  SET(LINK_LIBS ${LINK_LIBS} Win32_Interop)
ENDIF(UNIX)

ADD_SUBDIRECTORY(cache)
ADD_SUBDIRECTORY(database)
ADD_SUBDIRECTORY(http)
ADD_SUBDIRECTORY(log)
ADD_SUBDIRECTORY(luatinker)
ADD_SUBDIRECTORY(message)
ADD_SUBDIRECTORY(net)
ADD_SUBDIRECTORY(pbc-master)
ADD_SUBDIRECTORY(server)
ADD_SUBDIRECTORY(utility)
ADD_SUBDIRECTORY(tool)
ADD_SUBDIRECTORY(test)
