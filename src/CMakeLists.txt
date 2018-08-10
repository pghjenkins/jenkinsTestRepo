add_subdirectory(core)

add_executable(main Main.cpp)
target_include_directories(main
        PUBLIC
	)
target_link_libraries(main PUBLIC jenkinsTestProj_core)
