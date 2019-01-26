///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Primordial Machine's Math Scalars Library
// Copyright (C) 2017-2019 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "primordialmachine/math/scalars/include.hpp"
#include "gtest/gtest.h"

TEST(relational_functors_test, lower_than_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_lower_than_functor_v<float, float>,
                "lower than functor must be available");
  static_assert(true == has_result_type_v<lower_than_functor<float, float>>,
                "result type must be available");
  static_assert(true == has_arity_v<lower_than_functor<float, float>>,
                "arity must be available");
  static_assert(false == has_lower_than_functor_v<char, char>,
                "lower than functor must not be available");
  static_assert(false == has_result_type_v<lower_than_functor<char, char>>,
                "result type must not be available");
  ASSERT_FALSE((lower_than_functor<float, float>()(1.f, 1.f)));
  ASSERT_TRUE((lower_than_functor<float, float>()(1.f, 2.f)));
  ASSERT_FALSE((lower_than_functor<float, float>()(2.f, 1.f)));
  ASSERT_TRUE((lower_than_functor<float, float>()(0.f, 1.f)));
}

TEST(relational_functors_test, lower_than_test)
{
  using namespace primordialmachine;
  ASSERT_FALSE((lower_than(1.f, 1.f)));
  ASSERT_TRUE((lower_than(1.f, 2.f)));
  ASSERT_FALSE((lower_than(2.f, 1.f)));
  ASSERT_TRUE((lower_than(0.f, 1.f)));
}

TEST(relational_functors_test, lower_than_or_equal_to_functor_test)
{
  using namespace primordialmachine;
  //
  static_assert(true == has_lower_than_or_equal_to_functor_v<float, float>,
                "lower than or equal to functor must be available");
  static_assert(
    true == has_result_type_v<lower_than_or_equal_to_functor<float, float>>,
    "result type must be available");
  static_assert(true ==
                  has_arity_v<lower_than_or_equal_to_functor<float, float>>,
                "arity must be available");
  //
  static_assert(false == has_lower_than_or_equal_to_functor_v<char, char>,
                "lower than or equal to functor must not be available");
  static_assert(false ==
                  has_result_type_v<lower_than_or_equal_to_functor<char, char>>,
                "result type must not be available");
  ASSERT_TRUE((lower_than_or_equal_to_functor<float, float>()(1.f, 1.f)));
  ASSERT_TRUE((lower_than_or_equal_to_functor<float, float>()(1.f, 2.f)));
  ASSERT_FALSE((lower_than_or_equal_to_functor<float, float>()(2.f, 1.f)));
  ASSERT_TRUE((lower_than_or_equal_to_functor<float, float>()(0.f, 1.f)));
}

TEST(relational_functors_test, lower_than_or_equal_to_test)
{
  using namespace primordialmachine;
  ASSERT_TRUE((lower_than_or_equal_to(1.f, 1.f)));
  ASSERT_TRUE((lower_than_or_equal_to(1.f, 2.f)));
  ASSERT_FALSE((lower_than_or_equal_to(2.f, 1.f)));
  ASSERT_TRUE((lower_than_or_equal_to(0.f, 1.f)));
}

TEST(relational_functors_test, greater_than_functor_test)
{
  using namespace primordialmachine;
  //
  static_assert(true == has_greater_than_functor_v<float, float>,
                "greater than functor must be available");
  static_assert(true == has_result_type_v<greater_than_functor<float, float>>,
                "result type must be available");
  static_assert(true == has_arity_v<greater_than_functor<float, float>>,
                "arity must be available");
  //
  static_assert(false == has_greater_than_functor_v<char, char>,
                "greater than functor must not be available");
  static_assert(false == has_result_type_v<greater_than_functor<char, char>>,
                "result type must not be available");
  ASSERT_FALSE((greater_than_functor<float, float>()(1.f, 1.f)));
  ASSERT_FALSE((greater_than_functor<float, float>()(1.f, 2.f)));
  ASSERT_TRUE((greater_than_functor<float, float>()(2.f, 1.f)));
  ASSERT_FALSE((greater_than_functor<float, float>()(0.f, 1.f)));
}

TEST(relational_functors_test, greater_than_test)
{
  using namespace primordialmachine;
  ASSERT_FALSE((greater_than(1.f, 1.f)));
  ASSERT_FALSE((greater_than(1.f, 2.f)));
  ASSERT_TRUE((greater_than(2.f, 1.f)));
  ASSERT_FALSE((greater_than(0.f, 1.f)));
}

TEST(relational_functors_test, greater_than_or_equal_to_functor_test)
{
  using namespace primordialmachine;
  //
  static_assert(true == has_greater_than_or_equal_to_functor_v<float, float>,
                "greater than or equal to functor must be available");
  static_assert(
    true == has_result_type_v<greater_than_or_equal_to_functor<float, float>>,
    "result type must be available");
  static_assert(true ==
                  has_arity_v<greater_than_or_equal_to_functor<float, float>>,
                "arity must be available");
  //
  static_assert(false == has_greater_than_or_equal_to_functor_v<char, char>,
                "greater than or equal to functor must not be available");
  static_assert(
    false == has_result_type_v<greater_than_or_equal_to_functor<char, char>>,
    "result type must not be available");
  ASSERT_TRUE((greater_than_or_equal_to_functor<float, float>()(1.f, 1.f)));
  ASSERT_FALSE((greater_than_or_equal_to_functor<float, float>()(1.f, 2.f)));
  ASSERT_TRUE((greater_than_or_equal_to_functor<float, float>()(2.f, 1.f)));
  ASSERT_FALSE((greater_than_or_equal_to_functor<float, float>()(0.f, 1.f)));
}

TEST(relational_functors_test, greater_than_or_equal_to_test)
{
  using namespace primordialmachine;
  ASSERT_TRUE((greater_than_or_equal_to(1.f, 1.f)));
  ASSERT_FALSE((greater_than_or_equal_to(1.f, 2.f)));
  ASSERT_TRUE((greater_than_or_equal_to(2.f, 1.f)));
  ASSERT_FALSE((greater_than_or_equal_to(0.f, 1.f)));
}

TEST(relational_functors_test, equal_to_functor_test)
{
  using namespace primordialmachine;
  //
  static_assert(true == has_equal_to_functor_v<float, float>,
                "equal to functor must be available");
  static_assert(true == has_result_type_v<equal_to_functor<float, float>>,
                "result type must be available");
  static_assert(true ==
                  has_arity_v<equal_to_functor<float, float>>,
                "arity must be available");
  //
  static_assert(false == has_equal_to_functor_v<char, char>,
                "equal to functor must not be available");
  static_assert(false == has_result_type_v<equal_to_functor<char, char>>,
                "result type must not be available");
  ASSERT_TRUE((equal_to_functor<float, float>()(1.f, 1.f)));
  ASSERT_FALSE((equal_to_functor<float, float>()(1.f, 2.f)));
  ASSERT_FALSE((equal_to_functor<float, float>()(2.f, 1.f)));
  ASSERT_FALSE((equal_to_functor<float, float>()(0.f, 1.f)));
}

TEST(relational_functors_test, equal_to_test)
{
  using namespace primordialmachine;
  ASSERT_TRUE((equal_to(1.f, 1.f)));
  ASSERT_FALSE((equal_to(1.f, 2.f)));
  ASSERT_FALSE((equal_to(2.f, 1.f)));
  ASSERT_FALSE((equal_to(0.f, 1.f)));
}

TEST(relational_functors_test, not_equal_to_functor_test)
{
  using namespace primordialmachine;
  //
  static_assert(true == has_not_equal_to_functor_v<float, float>,
                "not equal to functor must be available");
  static_assert(true == has_result_type_v<not_equal_to_functor<float, float>>,
                "result type must be available");
  static_assert(true == has_arity_v<not_equal_to_functor<float, float>>,
                "arity must be available");
  //
  static_assert(false == has_not_equal_to_functor_v<char, char>,
                "not equal to functor must not be available");
  static_assert(false == has_result_type_v<not_equal_to_functor<char, char>>,
                "result type must not be available");
  ASSERT_FALSE((not_equal_to_functor<float, float>()(1.f, 1.f)));
  ASSERT_TRUE((not_equal_to_functor<float, float>()(1.f, 2.f)));
  ASSERT_TRUE((not_equal_to_functor<float, float>()(2.f, 1.f)));
  ASSERT_TRUE((not_equal_to_functor<float, float>()(0.f, 1.f)));
}

TEST(relational_functors_test, not_equal_to_test)
{
  using namespace primordialmachine;
  ASSERT_FALSE((not_equal_to(1.f, 1.f)));
  ASSERT_TRUE((not_equal_to(1.f, 2.f)));
  ASSERT_TRUE((not_equal_to(2.f, 1.f)));
  ASSERT_TRUE((not_equal_to(0.f, 1.f)));
}
