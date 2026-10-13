#include "artdaq-core-demo/Overlays/AsciiFragment.hh"

std::ostream& demo::operator<<(std::ostream& os, AsciiFragment const& f)
{
	os << "AsciiFragment event size: " << f.hdr_event_size() << ", line number: " << f.hdr_line_number() << "\n";

	return os;
}
