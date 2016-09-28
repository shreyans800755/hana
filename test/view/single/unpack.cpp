// Copyright Louis Dionne 2013-2016
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

#include <boost/hana/assert.hpp>
#include <boost/hana/equal.hpp>
#include <boost/hana/unpack.hpp>
#include <boost/hana/view.hpp>

#include <laws/base.hpp>
namespace hana = boost::hana;
using hana::test::ct_eq;


int main() {
    auto f = hana::test::_injection<0>{};

    {
        auto single = hana::detail::single_view(ct_eq<0>{});
        BOOST_HANA_CONSTANT_CHECK(hana::equal(
            hana::unpack(single, f),
            f(ct_eq<0>{})
        ));
    }
}
