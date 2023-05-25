/**
 * @file ymd_to_mjd.h
 * @author Michael Wrona
 * @date 2023-04-23
 * @copyright Copyright (c) 2023 Michael Wrona
 */

#ifndef EOPPARSER_YMD_TO_MJD_H_
#define EOPPARSER_YMD_TO_MJD_H_

namespace sdp {
namespace utils {

/**
 * @brief Convert Gregorian year/month/day date to mean Julian date (MJD).
 *
 * @details Algorithm from "Astronomical Algorithms" 2nd ed. (Meeus).
 *
 * @param year Year number.
 * @param month Month number [1-12].
 * @param day Day number [1-31].
 * @return Mean Julian date.
 *
 * @exception std::domain_error Invalid date input.
 */
unsigned int ymd_to_mjd(unsigned int year, unsigned int month, unsigned int day);

}
}

#endif  // EOPPARSER_YMD_TO_MJD_H_
