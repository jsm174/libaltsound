// ---------------------------------------------------------------------------
// altsound_csv_parser.hpp
//
// Parser for legacy and traditional AltSound format CSV files
// ---------------------------------------------------------------------------
// license:BSD-3-Clause
// copyright-holders:Carsten W�chter, Dave Roscoe
// ---------------------------------------------------------------------------

#ifndef ALTSOUND_CSV_PARSER_HPP
#define ALTSOUND_CSV_PARSER_HPP
#if !defined(__GNUC__) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4) || (__GNUC__ >= 4)	// GCC supports "pragma once" correctly since 3.4
#pragma once
#endif

#if _MSC_VER >= 1700
 #ifdef inline
  #undef inline
 #endif
#endif

#include "altsound_data.hpp"

using std::string;

//extern string get_vpinmame_path();

// ---------------------------------------------------------------------------
// Class definitions
// ---------------------------------------------------------------------------

class AltsoundCsvParser {
public: // methods

	// Standard constructor
	explicit AltsoundCsvParser(const string& altsound_path_in);

	bool parse(std::vector<AltsoundSampleInfo>& samples_out);

public: // data

protected:

	// Default constructor
	AltsoundCsvParser() {/* not used */ }

	// Copy constructor
	AltsoundCsvParser(AltsoundCsvParser&) {/* not used */ }

private: // functions

private: // data

	string altsound_path;
	string filename;
};

#endif // ALTSOUND_CSV_PARSER_HPP
