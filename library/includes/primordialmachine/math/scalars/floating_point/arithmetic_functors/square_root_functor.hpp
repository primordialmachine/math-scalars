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

#pragma once

#include "primordialmachine/arithmetic_functors/include.hpp"

namespace primordialmachine {

// Default implementation for floating point types.
template<typename OPERAND>
struct square_root_functor<
  OPERAND,
  enable_if_t<is_floating_point_v<OPERAND>>>
{
  using operand_type = OPERAND;
  using result_type = OPERAND;
  result_type operator()(const operand_type& operand) const
    noexcept(noexcept(std::sqrt(operand)))
  {
	return std::sqrt(operand);
  }
}; // struct square_root_functor

} // namespace primordialmachine