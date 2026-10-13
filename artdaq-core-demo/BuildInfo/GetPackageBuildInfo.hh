#ifndef ARTDAQ_CORE_DEMO_ARTDAQ_CORE_DEMO_BUILDINFO_GETPACKAGEBUILDINFO_HH_
#define ARTDAQ_CORE_DEMO_ARTDAQ_CORE_DEMO_BUILDINFO_GETPACKAGEBUILDINFO_HH_

#include "artdaq-core/Data/PackageBuildInfo.hh"

#include <string>

/**
 * \brief Namespace used to differentiate the artdaq_core_demo version of GetPackageBuildInfo
 * from other versions present in the system.
 */
namespace coredemo {
/**
 * \brief Wrapper around the coredemo::GetPackageBuildInfo::getPackageBuildInfo function
 */
struct GetPackageBuildInfo
{
	/**
	 * \brief Gets the version number and build timestmap for artdaq_core_demo
	 * \return An artdaq::PackageBuildInfo object containing the version number and build timestamp for artdaq_core_demo
	 */
	static artdaq::PackageBuildInfo getPackageBuildInfo();
};
}  // namespace coredemo

#endif  // ARTDAQ_CORE_DEMO_ARTDAQ_CORE_DEMO_BUILDINFO_GETPACKAGEBUILDINFO_HH_
