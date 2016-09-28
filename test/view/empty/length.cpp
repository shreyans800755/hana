// Copyright Louis Dionne 2013-2016
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

#include <boost/hana/assert.hpp>
#include <boost/hana/equal.hpp>
#include <boost/hana/integral_constant.hpp>
#include <boost/hana/length.hpp>
#include <boost/hana/view.hpp>
namespace hana = boost::hana;


int main() {
    {
        auto empty = hana::detail::empty_view();
        BOOST_HANA_CONSTANT_CHECK(hana::equal(
            hana::length(empty),
            hana::size_c<0>
        ));
    }
}
