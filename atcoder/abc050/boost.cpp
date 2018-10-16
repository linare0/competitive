#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <string>

using namespace std;
using namespace boost::gregorian;

int main(void) {
	date d(day_clock::local_day());
	cout << to_iso_extended_string(d) << endl;
}
