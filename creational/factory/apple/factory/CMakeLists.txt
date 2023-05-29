add_library ("iphone_factory" OBJECT
             "iphone_simple_factory.cpp")
target_link_libraries ("iphone_factory" PRIVATE "iphone")
target_include_directories ("iphone_factory" PUBLIC .)
