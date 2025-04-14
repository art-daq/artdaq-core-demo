#ifndef artdaq_core_demo_Data_DemoDataProduct_hh
#define artdaq_core_demo_Data_DemoDataProduct_hh

#include <vector>
#include <string>

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

}  // namespace mu2e
#endif  // artdaq_core_demo_Data_DemoDataProduct_hh
