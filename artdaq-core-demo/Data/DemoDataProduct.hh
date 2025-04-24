#ifndef artdaq_core_demo_Data_DemoDataProduct_hh
#define artdaq_core_demo_Data_DemoDataProduct_hh

#include <string>
#include <vector>

namespace demo {
class DemoDataProduct
{
public:
	DemoDataProduct() {}
	DemoDataProduct(std::string instance_name, std::vector<int> data);

public:
	std::string instance_name;
	std::vector<int> data;
};

}  // namespace demo
#endif  // artdaq_core_demo_Data_DemoDataProduct_hh
