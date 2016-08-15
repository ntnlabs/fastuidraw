/*!
 * \file painter_stroke_value.hpp
 * \brief file painter_stroke_value.hpp
 *
 * Copyright 2016 by Intel.
 *
 * Contact: kevin.rogovin@intel.com
 *
 * This Source Code Form is subject to the
 * terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with
 * this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 *
 * \author Kevin Rogovin <kevin.rogovin@intel.com>
 *
 */

#pragma once

#include <fastuidraw/painter/painter_value.hpp>

namespace fastuidraw
{
/*!\addtogroup Painter
  @{
 */

  /*!
    Class to specify stroking parameters, data is packed
    as according to PainterPacking::stroke_data_offset_t.
   */
  class PainterStrokeParams:public PainterItemShaderData
  {
  public:
    /*!
      Enumeration that provides offsets for the stroking
      parameters.
     */
    enum stroke_data_offset_t
      {
        stroke_width_offset, /*!< offset to stroke width (packed as float) */
        stroke_miter_limit_offset, /*!< offset to stroke miter limit (packed as float) */

        stroke_data_size /*!< size of data for stroking*/
      };

    /*!
      Ctor.
     */
    PainterStrokeParams(void);

    /*!
      The miter limit for miter joins
     */
    float
    miter_limit(void) const;

    /*!
      Set the value of miter_limit(void) const
     */
    PainterStrokeParams&
    miter_limit(float f);

    /*!
      The stroking width
     */
    float
    width(void) const;

    /*!
      Set the value of width(void) const
     */
    PainterStrokeParams&
    width(float f);
  };

/*! @} */

} //namespace fastuidraw
