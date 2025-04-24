#include "artdaq-core-demo/Data/DemoDataProduct.hh"

demo::DemoDataProduct::DemoDataProduct(std::string instance_name, std::vector<int> data)
    : instance_name(instance_name)
    , data(data)
{}
