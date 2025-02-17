set(WORK_ROOT $ENV{WORK_ROOT})

if("${CLEAN_BUILD}" STREQUAL "true")
    file(REMOVE_RECURSE ${WORK_ROOT}/out)
    file(REMOVE_RECURSE ${WORK_ROOT}/bin)
else()
    include(build_tools/cmake-scripts/get_env.cmake)
    include(libs.cmake)

    foreach(lib ${libs})
        build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}" "${WORK_ROOT}" "${lib}")
    endforeach()

    foreach(lib ${libs})
        if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test")
            build("${CMAKE_CURRENT_SOURCE_DIR}/${lib}/test" "${WORK_ROOT}" "${lib}_test")
        endif()
    endforeach()
endif()
