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

TEST(arithmetic_functors_test, binary_star_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_binary_star_functor_v<float, float>,
                "binary star functor must be available");
  static_assert(false == has_binary_star_functor_v<char, char>,
                "binary star functor must not be available");
  ASSERT_FLOAT_EQ(+6.f, binary_star(2.f, 3.f));
}

TEST(arithmetic_functors_test, binary_slash_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_binary_slash_functor_v<float, float>,
                "binary slash functor must be available");
  static_assert(false == has_binary_slash_functor_v<char, char>,
                "binary slash functor must not be available");
  ASSERT_FLOAT_EQ(+3.f, binary_slash(6.f, 2.f));
}

TEST(arithmetic_functors_test, binary_plus_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_binary_plus_functor_v<float, float>,
                "binary plus functor must be available");
  static_assert(false == has_binary_plus_functor_v<char, char>,
                "binary plus functor must not be available");
  ASSERT_FLOAT_EQ(+3.f, binary_plus(1.f, 2.f));
}

TEST(arithmetic_functors_test, binary_minus_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_binary_minus_functor_v<float, float>,
                "binary minus functor must be available");
  static_assert(false == has_binary_minus_functor_v<char, char>,
                "binary minus functor must not be available");
  ASSERT_FLOAT_EQ(-1.f, binary_minus(1.f, 2.f));
}

TEST(arithmetic_functors_test, unary_plus_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_unary_plus_functor_v<float>,
                "unary plus functor must be available");
  static_assert(false == has_unary_plus_functor_v<char>,
                "unary plus functor must not be available");
  ASSERT_FLOAT_EQ(+1.f, unary_plus(1.f));
}

TEST(arithmetic_functors_test, unary_minus_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_unary_minus_functor_v<float>,
                "unary minus functor must be available");
  static_assert(false == has_unary_minus_functor_v<char>,
                "unary minus functor must not be available");
  ASSERT_FLOAT_EQ(-1.f, unary_minus(1.f));
}

TEST(arithmetic_functors_test, plus_assignment_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_plus_assignment_functor_v<float, float>,
                "plus assignment functor must be available");
  static_assert(false == has_plus_assignment_functor_v<char, char>,
                "plus assignment functor must not be available");
  float x = 1.f;
  plus_assignment(x, 2.0f);
  ASSERT_FLOAT_EQ(+3.f, x);
}

TEST(arithmetic_functors_test, minus_assignment_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_minus_assignment_functor_v<float, float>,
                "minus assignment functor must be available");
  static_assert(false == has_minus_assignment_functor_v<char, char>,
                "minus assignment functor must not be available");
  float x = 1.f;
  minus_assignment(x, 2.0f);
  ASSERT_FLOAT_EQ(-1.f, x);
}

TEST(arithmetic_functors_test, slash_assignment_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_slash_assignment_functor_v<float, float>,
                "slash assignment functor must be available");
  static_assert(false == has_slash_assignment_functor_v<char, char>,
                "slash assignment functor must not be available");
  float x = 6.f;
  slash_assignment(x, 2.0f);
  ASSERT_FLOAT_EQ(3.f, x);
}

TEST(arithmetic_functors_test, square_root_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_square_root_functor_v<float>,
                "square root functor must be available");
  static_assert(false == has_square_root_functor_v<char>,
                "square root functor must not be available");
  ASSERT_FLOAT_EQ(2.f, square_root(4.f));
}

TEST(arithmetic_functors_test, star_assignment_functor_test)
{
  using namespace primordialmachine;
  static_assert(true == has_star_assignment_functor_v<float, float>,
                "star assignment functor must be available");
  static_assert(false == has_star_assignment_functor_v<char, char>,
                "star assignment functor must not be available");
  float x = 2.f;
  star_assignment(x, 3.0f);
  ASSERT_FLOAT_EQ(6.f, x);
}
