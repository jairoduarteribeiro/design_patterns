add_subdirectory ("factory")
add_subdirectory ("model")

add_executable ("factory_apple" "client.cpp")
target_link_libraries ("factory_apple" PRIVATE "iphone" "iphone_factory")
