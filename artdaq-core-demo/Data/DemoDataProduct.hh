#ifndef ARTDAQ_CORE_DEMO_ARTDAQ_CORE_DEMO_DATA_DEMODATAPRODUCT_HH_
#define ARTDAQ_CORE_DEMO_ARTDAQ_CORE_DEMO_DATA_DEMODATAPRODUCT_HH_

#include <string>
#include <vector>

namespace demo {
class DemoDataProduct
{
public:
	DemoDataProduct() {}
	DemoDataProduct(std::string instance_name, std::vector<int> data);

	std::string instance_name;
	std::vector<int> data;
};

}  // namespace demo
#endif  // ARTDAQ_CORE_DEMO_ARTDAQ_CORE_DEMO_DATA_DEMODATAPRODUCT_HH_
