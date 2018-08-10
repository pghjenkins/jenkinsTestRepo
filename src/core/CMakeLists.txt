set(CORE_SOURCES
	dumcore.cpp
	)

set(CORE_HEADERS
	dumcore.h
	)

add_library(jenkinsTestProj_core ${CORE_SOURCES} ${CORE_HEADERS})

target_include_directories(jenkinsTestProj_core
        PUBLIC
        "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>"
	)

target_link_libraries(jenkinsTestProj_core PUBLIC)
