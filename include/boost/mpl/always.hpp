
#ifndef BOOST_MPL_ALWAYS_HPP_INCLUDED
#define BOOST_MPL_ALWAYS_HPP_INCLUDED

// Copyright (c) Aleksey Gurtovoy 2001-2002
//
// Use, modification and distribution are subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy 
// at http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date$
// $Revision$

#include <boost/mpl/aux_/preprocessor/def_params_tail.hpp>
#include <boost/mpl/void.hpp>
#include <boost/mpl/aux_/arity_spec.hpp>
#include <boost/mpl/aux_/lambda_spec.hpp>

namespace boost {
namespace mpl {

template< typename Value >
struct always
{
    template<
          typename T
        BOOST_MPL_PP_NESTED_DEF_PARAMS_TAIL(1, typename T, void_)
        >
    struct apply
    {
        typedef Value type;
    };
};


BOOST_MPL_AUX_ARITY_SPEC(1,always)
BOOST_MPL_AUX_PASS_THROUGH_LAMBDA_SPEC(1,always)

} // namespace mpl
} // namespace boost

#endif // BOOST_MPL_ALWAYS_HPP_INCLUDED