include_directories(${PROJECT_SOURCE_DIR}/src)

set(danmaQ_SOURCES 
	${PROJECT_SOURCE_DIR}/src/danmaku_ui.cpp
	${PROJECT_SOURCE_DIR}/src/danmaku_window.cpp
	)

message(STATUS ${PROJECT_SOURCE_DIR}/src)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5X11Extras REQUIRED)
find_package(X11 REQUIRED)

# if(CMAKE_SYSTEM_NAME STREQUAL Linux)
# 	set(DANMAQ_LIBRARIES ${DANMAQ_LIBRARIES} )
# 
# 	# set(DANMAQ_LIBRARIES ${DANMAQ_LIBRARIES} ${X_LIB})
# endif()

add_executable(test_dm test_dm.cpp ${danmaQ_SOURCES})
target_link_libraries(test_dm Qt5::Widgets Qt5::X11Extras ${X11_LIBRARIES})
