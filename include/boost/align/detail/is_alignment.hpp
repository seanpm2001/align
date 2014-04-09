/*
 Copyright (c) 2014 Glen Joseph Fernandes
 glenfe at live dot com

 Distributed under the Boost Software License,
 Version 1.0. (See accompanying file LICENSE_1_0.txt
 or copy at http://boost.org/LICENSE_1_0.txt)
*/
#ifndef BOOST_ALIGN_DETAIL_IS_ALIGNMENT_HPP
#define BOOST_ALIGN_DETAIL_IS_ALIGNMENT_HPP

#include <cstddef>

namespace boost {
    namespace alignment {
        namespace detail {
            inline bool is_alignment(std::size_t value)
            {
                return (value > 0) && ((value & (value - 1)) == 0);
            }
        }
    }
}

#endif