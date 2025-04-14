cet_make_library(SOURCE
  DemoDataProduct.cc
  LIBRARIES
  PUBLIC
)

include(ArtDictionary)
art_dictionary( NO_CHECK_CLASS_VERSION
  DICTIONARY_LIBRARIES
  artdaq-core-demo::Data
)

function(disable_sanitizers DictName)
  get_target_property(DictCompileOptions ${DictName} COMPILE_OPTIONS)
  if(DictCompileOptions)
        string(REPLACE "-fsanitize=thread" "" DictCompileOptions "${DictCompileOptions}")
        string(REPLACE "-fsanitize=address" "" DictCompileOptions "${DictCompileOptions}")
        string(REPLACE "-ltsan" "" DictCompileOptions "${DictCompileOptions}")
        string(REPLACE "-lasan" "" DictCompileOptions "${DictCompileOptions}")

        set_target_properties(${DictName} PROPERTIES COMPILE_OPTIONS "${DictCompileOptions}")
   endif()
endfunction()

disable_sanitizers(artdaq-core-demo_Data_dict)

install_headers()
install_source()
