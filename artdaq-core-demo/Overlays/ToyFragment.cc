#include "artdaq-core-demo/Overlays/ToyFragment.hh"

#include "cetlib_except/exception.h"

void demo::ToyFragment::checkADCData(int daq_adc_bits) const
{
	demo::ToyFragment::adc_t const* adcPtr(findBadADC(daq_adc_bits));
	if (adcPtr != dataEndADCs())
	{
		throw cet::exception("IllegalADCVal")  // NOLINT(cert-err60-cpp)
		    << "Illegal value of ADC word #" << (adcPtr - dataBeginADCs()) << ": 0x" << std::hex << *adcPtr << ".";
	}
}

std::ostream& demo::operator<<(std::ostream& os, ToyFragment const& f)
{
	os << "ToyFragment event size: " << f.hdr_event_size() << ", trigger number: " << f.hdr_trigger_number() << "\n";

	return os;
}
