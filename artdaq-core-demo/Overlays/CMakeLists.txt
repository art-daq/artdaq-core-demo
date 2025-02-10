cet_make_library(LIBRARY NAME Overlays
SOURCE	
AsciiFragment.cc
FragmentType.cc
ToyFragment.cc
UDPFragment.cc
LIBRARIES PUBLIC
  artdaq-core::Utilities
  artdaq-core::Data
  TRACE::TRACE
  )
  
  
include(ArtdaqCorePlugins)
cet_build_plugin(ArtdaqDemo artdaq::fragmentNameHelper LIBRARIES REG artdaq-core-demo::Overlays)


install_headers()
install_source()
