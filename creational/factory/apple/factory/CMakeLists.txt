add_library ("iphone_factory" OBJECT
             "iphonex_factory.cpp"
             "iphone11_factory.cpp")
target_link_libraries ("iphone_factory" PRIVATE "iphone")
target_include_directories ("iphone_factory" PUBLIC .)
