//
//  expiry_seg.h
//  See the file "LICENSE.md" for the full license governing this code.
//

#ifndef DMZ_SCAN_EXPIRY_SEG_H
#define DMZ_SCAN_EXPIRY_SEG_H

#include "expiry_types.h"
#include "opencv2/imgproc/types_c.h"

DMZ_INTERNAL GroupedRectsList best_expiry_seg(IplImage *y, uint16_t y_offset);

#endif
