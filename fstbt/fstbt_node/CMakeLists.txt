add_executable (fstbt_node
	daemon.cpp
	daemon.hpp
	entry.cpp)

target_link_libraries (fstbt_node
	node
	secure
	argon2
	Boost::boost
	${PLATFORM_LIBS}
)

target_compile_definitions(fstbt_node
	PRIVATE
		-DFROSTBIT_VERSION_MAJOR=${CPACK_PACKAGE_VERSION_MAJOR}
		-DFROSTBIT_VERSION_MINOR=${CPACK_PACKAGE_VERSION_MINOR})

set_target_properties (fstbt_node
	PROPERTIES
		COMPILE_FLAGS
			"-DQT_NO_KEYWORDS -DBOOST_ASIO_HAS_STD_ARRAY=1")

if (FROSTBIT_GUI AND NOT APPLE)
	install(TARGETS fstbt_node
			RUNTIME DESTINATION bin
			LIBRARY DESTINATION lib
			ARCHIVE DESTINATION lib
	)
endif()
