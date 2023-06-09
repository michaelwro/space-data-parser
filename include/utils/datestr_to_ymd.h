/**
 * @file datestr_to_ymd.h
 * @author Michael Wrona
 * @date 2023-05-25
 */

#ifndef SDP_DATESTR_TO_YMD_H_
#define SDP_DATESTR_TO_YMD_H_

#include <tuple>
#include <string>

namespace sdp {
namespace utils {

/**
 * @brief Convert "YY-mm-dd" date string to year, month, and day number.
 *
 * @param datestr Date string in "YY-mm-dd" format.
 * @return tuple(year, month, day).
 *
 * @exception std::invalid_argument Invalid date string.
 * @ref https://stackoverflow.com/a/35290214
 */
std::tuple<unsigned int, unsigned int, unsigned int> datestr_to_ymd(const std::string& datestr);

}  // namespace utils
}  // namespace sdp

#endif  // SDP_DATESTR_TO_YMD_H_
