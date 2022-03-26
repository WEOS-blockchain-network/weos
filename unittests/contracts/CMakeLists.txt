# will be implictly used for any compilation unit if not overrided by SYSTEM_INCLUDE_FOLDERS parameter
# these directories go as -isystem <dir> to avoid warnings from code of third-party libraries

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/weos.bios/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/weos.bios/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/weos.msig/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/weos.msig/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/weos.system/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/weos.system/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/weos.token/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/weos.token/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/weos.wrap/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/weos.wrap/)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/old_versions/v1.6.0-rc3/weos.bios/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/old_versions/v1.6.0-rc3/weos.bios/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/old_versions/v1.7.0-develop-preactivate_feature/weos.bios/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/old_versions/v1.7.0-develop-preactivate_feature/weos.bios/)
