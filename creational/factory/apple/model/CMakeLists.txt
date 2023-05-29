add_library ("iphone" OBJECT
             "iphone.cpp"
             "iphonex.cpp"
             "iphonexsmax.cpp"
             "iphone11.cpp"
             "iphone11pro.cpp")
target_include_directories ("iphone" PUBLIC .)
