/*
Copyright (c) 2015-2017, Raspberry Pi Foundation
Copyright (c) 2015, Dave Stevenson
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holder nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


// These register settings were as logged off the line
// by jbeale. There is a datasheet for OV5647 floating
// about on the internet, but the Pi Foundation/Trading have
// information from Omnivision under NDA, therefore
// we can not offer support on this.
// There is some information/discussion on the Freescale
// i.MX6 forums about supporting OV5647 on that board.
// There may be information available there that is of use.
//
// REQUESTS FOR SUPPORT ABOUT THESE REGISTER VALUES WILL
// BE IGNORED.

#ifndef OV5647MODES_H_
#define OV5647MODES_H_

// clang-format off
// We want to preserve 1 register per line.

struct sensor_regs ov5647_5MPix[] = {
   {0x0100, 0x00},
   {0x0103, 0x01},
   {0x3034, 0x1a},
   {0x3035, 0x21},
   {0x3036, 0x69},
   {0x303c, 0x11},
   {0x3106, 0xf5},
   //{0x3821, 0x00}, //Written again later
   //{0x3820, 0x00}, //Written again later
   {0x3827, 0xec},
   {0x370c, 0x03},
   {0x3612, 0x5b},
   {0x3618, 0x04},
   {0x5000, 0x06},
   {0x5002, 0x40},
   {0x5003, 0x08},
   {0x5a00, 0x08},
   {0x3000, 0x00},
   {0x3001, 0x00},
   {0x3002, 0x00},
   {0x3016, 0x08},
   {0x3017, 0xe0},
   {0x3018, 0x44},
   {0x301c, 0xf8},
   {0x301d, 0xf0},
   {0x3a18, 0x00},
   {0x3a19, 0xf8},
   {0x3c01, 0x80},
   {0x3b07, 0x0c},
   {0x380c, 0x0b},
   {0x380d, 0x1c},
   {0x380e, 0x07},
   {0x380f, 0xb0},
   {0x3814, 0x11},
   {0x3815, 0x11},
   {0x3708, 0x64},
   {0x3709, 0x12},
   {0x3808, 0x0a},
   {0x3809, 0x20},
   {0x380a, 0x07},
   {0x380b, 0x98},
   {0x3800, 0x00},
   {0x3801, 0x00},
   {0x3802, 0x00},
   {0x3803, 0x00},
   {0x3804, 0x0a},
   {0x3805, 0x3f},
   {0x3806, 0x07},
   {0x3807, 0xa3},
   {0x3811, 0x10},
   {0x3813, 0x06},
   {0x3630, 0x2e},
   {0x3632, 0xe2},
   {0x3633, 0x23},
   {0x3634, 0x44},
   {0x3636, 0x06},
   {0x3620, 0x64},
   {0x3621, 0xe0},
   {0x3600, 0x37},
   {0x3704, 0xa0},
   {0x3703, 0x5a},
   {0x3715, 0x78},
   {0x3717, 0x01},
   {0x3731, 0x02},
   {0x370b, 0x60},
   {0x3705, 0x1a},
   {0x3f05, 0x02},
   {0x3f06, 0x10},
   {0x3f01, 0x0a},
   {0x3a08, 0x01},
   {0x3a09, 0x28},
   {0x3a0a, 0x00},
   {0x3a0b, 0xf6},
   {0x3a0d, 0x08},
   {0x3a0e, 0x06},
   {0x3a0f, 0x58},
   {0x3a10, 0x50},
   {0x3a1b, 0x58},
   {0x3a1e, 0x50},
   {0x3a11, 0x60},
   {0x3a1f, 0x28},
   {0x4001, 0x02},
   {0x4004, 0x04},
   {0x4000, 0x09},
   {0x4837, 0x16},
   {0x4800, 0x24},
   {0x3503, 0x03},
   {0x3820, 0x41},
   {0x3821, 0x03},
   {0x350A, 0x00},
   {0x350B, 0x23},
   {0x3212, 0x00},
   {0x3500, 0x00},
   {0x3501, 0x04},
   {0x3502, 0x60},
   {0x3212, 0x10},
   {0x3212, 0xA0},
   {0x0100, 0x01}
};

struct sensor_regs ov5647_mode1[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3034, 0x1A},
    {0x3035, 0x21},
    {0x3036, 0x62},
    {0x303C, 0x11},
    {0x3106, 0xF5},
    {0x3827, 0xEC},
    {0x370C, 0x03},
    {0x3612, 0x5B},
    {0x3618, 0x04},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3016, 0x08},
    {0x3017, 0xE0},
    {0x3018, 0x44},
    {0x301C, 0xF8},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x380C, 0x09},
    {0x380D, 0x70},
    {0x3814, 0x11},
    {0x3815, 0x11},
    {0x3708, 0x64},
    {0x3709, 0x12},
    {0x3808, 0x07},
    {0x3809, 0x80},
    {0x380A, 0x04},
    {0x380B, 0x38},
    {0x3800, 0x01},
    {0x3801, 0x5C},
    {0x3802, 0x01},
    {0x3803, 0xB2},
    {0x3804, 0x08},
    {0x3805, 0xE3},
    {0x3806, 0x05},
    {0x3807, 0xF1},
    {0x3811, 0x04},
    {0x3813, 0x02},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3636, 0x06},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x4B},
    {0x3A0A, 0x01},
    {0x3A0B, 0x13},
    {0x3A0D, 0x04},
    {0x3A0E, 0x03},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x04},
    {0x4000, 0x09},
    {0x4837, 0x19},
    {0x4800, 0x34},
    {0x3503, 0x03},
    {0x3820, 0x00},
    {0x3821, 0x02},
    {0x380E, 0x04},
    {0x380F, 0x66},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x15},
    {0x3502, 0x20},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

struct sensor_regs ov5647_mode2[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3034, 0x1A},
    {0x3035, 0x21},
    {0x3036, 0x69},
    {0x303C, 0x11},
    {0x3106, 0xF5},
    {0x3827, 0xEC},
    {0x370C, 0x03},
    {0x3612, 0x5B},
    {0x3618, 0x04},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3016, 0x08},
    {0x3017, 0xE0},
    {0x3018, 0x44},
    {0x301C, 0xF8},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x380C, 0x0B},
    {0x380D, 0x1C},
    {0x3814, 0x11},
    {0x3815, 0x11},
    {0x3708, 0x64},
    {0x3709, 0x12},
    {0x3808, 0x0A},
    {0x3809, 0x20},
    {0x380A, 0x07},
    {0x380B, 0x98},
    {0x3800, 0x00},
    {0x3801, 0x00},
    {0x3802, 0x00},
    {0x3803, 0x00},
    {0x3804, 0x0A},
    {0x3805, 0x3F},
    {0x3806, 0x07},
    {0x3807, 0xA3},
    {0x3811, 0x10},
    {0x3813, 0x06},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3636, 0x06},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x28},
    {0x3A0A, 0x00},
    {0x3A0B, 0xF6},
    {0x3A0D, 0x08},
    {0x3A0E, 0x06},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x04},
    {0x4000, 0x09},
    {0x4837, 0x16},
    {0x4800, 0x24},
    {0x3503, 0x03},
    {0x3820, 0x00},
    {0x3821, 0x02},
    {0x380E, 0x08},
    {0x380F, 0x03},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x13},
    {0x3502, 0x40},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

struct sensor_regs ov5647_mode3[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3034, 0x1A},
    {0x3035, 0x21},
    {0x3036, 0x34},
    {0x303C, 0x11},
    {0x3106, 0xF5},
    {0x3827, 0xEC},
    {0x370C, 0x03},
    {0x3612, 0x5B},
    {0x3618, 0x04},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3016, 0x08},
    {0x3017, 0xE0},
    {0x3018, 0x44},
    {0x301C, 0xF8},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x380C, 0x1F},
    {0x380D, 0x1B},
    {0x3814, 0x11},
    {0x3815, 0x11},
    {0x3708, 0x64},
    {0x3709, 0x12},
    {0x3808, 0x0A},
    {0x3809, 0x20},
    {0x380A, 0x07},
    {0x380B, 0x98},
    {0x3800, 0x00},
    {0x3801, 0x00},
    {0x3802, 0x00},
    {0x3803, 0x00},
    {0x3804, 0x0A},
    {0x3805, 0x3F},
    {0x3806, 0x07},
    {0x3807, 0xA3},
    {0x3811, 0x10},
    {0x3813, 0x06},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3636, 0x06},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x28},
    {0x3A0A, 0x00},
    {0x3A0B, 0xF6},
    {0x3A0D, 0x08},
    {0x3A0E, 0x06},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x04},
    {0x4000, 0x09},
    {0x4837, 0x16},
    {0x4800, 0x24},
    {0x3503, 0x03},
    {0x3820, 0x00},
    {0x3821, 0x02},
    {0x380E, 0x15},
    {0x380F, 0x56},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x03},
    {0x3502, 0x60},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

struct sensor_regs ov5647_mode4[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3034, 0x1A},
    {0x3035, 0x21},
    {0x3036, 0x62},
    {0x303C, 0x11},
    {0x3106, 0xF5},
    {0x3827, 0xEC},
    {0x370C, 0x03},
    {0x3612, 0x59},
    {0x3618, 0x00},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3016, 0x08},
    {0x3017, 0xE0},
    {0x3018, 0x44},
    {0x301C, 0xF8},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x3800, 0x00},
    {0x3801, 0x00},
    {0x3802, 0x00},
    {0x3803, 0x00},
    {0x3804, 0x0A},
    {0x3805, 0x3F},
    {0x3806, 0x07},
    {0x3807, 0xA3},
    {0x3808, 0x05},
    {0x3809, 0x10},
    {0x380A, 0x03},
    {0x380B, 0xCC},
    {0x380C, 0x07},
    {0x380D, 0x68},
    {0x3811, 0x10},
    {0x3813, 0x06},
    {0x3814, 0x31},
    {0x3815, 0x31},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3636, 0x06},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x28},
    {0x3A0A, 0x00},
    {0x3A0B, 0xF6},
    {0x3A0D, 0x08},
    {0x3A0E, 0x06},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x04},
    {0x4000, 0x09},
    {0x4837, 0x16},
    {0x4800, 0x24},
    {0x3503, 0x03},
    {0x3820, 0x41},
    {0x3821, 0x03},
    {0x380E, 0x05},
    {0x380F, 0x9B},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x1A},
    {0x3502, 0xF0},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

struct sensor_regs ov5647_mode5[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3034, 0x1A},
    {0x3035, 0x21},
    {0x3036, 0x62},
    {0x303C, 0x11},
    {0x3106, 0xF5},
    {0x3827, 0xEC},
    {0x370C, 0x03},
    {0x3612, 0x59},
    {0x3618, 0x00},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3016, 0x08},
    {0x3017, 0xE0},
    {0x3018, 0x44},
    {0x301C, 0xF8},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x3800, 0x00},
    {0x3801, 0x00},
    // NB This value IS INCORRECT, but has been incorrect for long enough
    // that changing it will cause complaints due to changing FOV.
    // (It should be (0x3802, 00), (0x3803, F0) to give a symmetric crop).
    // Correct the value so debug_mode isn't set, but the result is the same.
    {0x3802, 0x00},
    {0x3803, 0x00},
    {0x3804, 0x0A},
    {0x3805, 0x3F},
    //For a symmetric crop, use (0x3806, 0x06}, (0x3807,0xB3)
    {0x3806, 0x05},
    {0x3807, 0xbf},
    {0x3808, 0x05},
    {0x3809, 0x10},
    {0x380A, 0x02},
    {0x380B, 0xDA},
    {0x380C, 0x07},
    {0x380D, 0x68},
    {0x3811, 0x10},
    {0x3813, 0x06},
    {0x3814, 0x31},
    {0x3815, 0x31},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3636, 0x06},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x28},
    {0x3A0A, 0x00},
    {0x3A0B, 0xF6},
    {0x3A0D, 0x08},
    {0x3A0E, 0x06},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x04},
    {0x4000, 0x09},
    {0x4837, 0x16},
    {0x4800, 0x24},
    {0x3503, 0x03},
    {0x3820, 0x41},
    {0x3821, 0x03},
    {0x380E, 0x05},
    {0x380F, 0x9B},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x1A},
    {0x3502, 0xF0},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

struct sensor_regs ov5647_mode6[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3036, 0x46},
    {0x303C, 0x11},
    {0x370C, 0x03},
    {0x3612, 0x59},
    {0x3618, 0x00},
    {0x5000, 0x06},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x380C, 0x07},
    {0x380D, 0x3C},
    {0x3814, 0x71},
    {0x3815, 0x71},
    {0x3708, 0x64},
    {0x3709, 0x52},
    {0x3808, 0x02},
    {0x3809, 0x80},
    {0x380A, 0x01},
    {0x380B, 0xE0},
    {0x3800, 0x00},
    {0x3801, 0x10},
    {0x3802, 0x00},
    {0x3803, 0x00},
    {0x3804, 0x0A},
    {0x3805, 0x2F},
    {0x3806, 0x07},
    {0x3807, 0x9F},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x2E},
    {0x3A0A, 0x00},
    {0x3A0B, 0xFB},
    {0x3A0D, 0x02},
    {0x3A0E, 0x01},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x02},
    {0x4000, 0x09},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3017, 0xE0},
    {0x3636, 0x06},
    {0x3016, 0x08},
    {0x3827, 0xEC},
    {0x3018, 0x44},
    {0x3035, 0x21},
    {0x3106, 0xF5},
    {0x3034, 0x1A},
    {0x301C, 0xF8},
    {0x4800, 0x34},
    {0x3503, 0x03},
    {0x3820, 0x41},
    {0x3821, 0x03},
    {0x380E, 0x02},
    {0x380F, 0xEC},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x13},
    {0x3502, 0xB0},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

struct sensor_regs ov5647_mode7[] = {
    {0x0100, 0x00},
    {0x0103, 0x01},
    {0x3034, 0x1A},
    {0x3035, 0x21},
    {0x3036, 0x69},
    {0x303C, 0x11},
    {0x3106, 0xF5},
    {0x3827, 0xEC},
    {0x370C, 0x0F},
    {0x3612, 0x59},
    {0x3618, 0x00},
    {0x5000, 0x06},
    {0x5002, 0x40},
    {0x5003, 0x08},
    {0x5A00, 0x08},
    {0x3000, 0x00},
    {0x3001, 0x00},
    {0x3002, 0x00},
    {0x3016, 0x08},
    {0x3017, 0xE0},
    {0x3018, 0x44},
    {0x301C, 0xF8},
    {0x301D, 0xF0},
    {0x3A18, 0x00},
    {0x3A19, 0xF8},
    {0x3C01, 0x80},
    {0x3B07, 0x0C},
    {0x380C, 0x07},
    {0x380D, 0x3C},
    {0x3814, 0x71},
    {0x3815, 0x35},
    {0x3708, 0x64},
    {0x3709, 0x52},
    {0x3808, 0x02},
    {0x3809, 0x80},
    {0x380A, 0x01},
    {0x380B, 0xE0},
    {0x3800, 0x00},
    {0x3801, 0x10},
    {0x3802, 0x00},
    {0x3803, 0x00},
    {0x3804, 0x0A},
    {0x3805, 0x2F},
    {0x3806, 0x07},
    {0x3807, 0x9F},
    {0x3630, 0x2E},
    {0x3632, 0xE2},
    {0x3633, 0x23},
    {0x3634, 0x44},
    {0x3636, 0x06},
    {0x3620, 0x64},
    {0x3621, 0xE0},
    {0x3600, 0x37},
    {0x3704, 0xA0},
    {0x3703, 0x5A},
    {0x3715, 0x78},
    {0x3717, 0x01},
    {0x3731, 0x02},
    {0x370B, 0x60},
    {0x3705, 0x1A},
    {0x3F05, 0x02},
    {0x3F06, 0x10},
    {0x3F01, 0x0A},
    {0x3A08, 0x01},
    {0x3A09, 0x2E},
    {0x3A0A, 0x00},
    {0x3A0B, 0xFB},
    {0x3A0D, 0x02},
    {0x3A0E, 0x01},
    {0x3A0F, 0x58},
    {0x3A10, 0x50},
    {0x3A1B, 0x58},
    {0x3A1E, 0x50},
    {0x3A11, 0x60},
    {0x3A1F, 0x28},
    {0x4001, 0x02},
    {0x4004, 0x02},
    {0x4000, 0x09},
    {0x4837, 0x17},
    {0x4800, 0x34},
    {0x3503, 0x03},
    {0x3820, 0x41},
    {0x3821, 0x03},
    {0x380E, 0x03},
    {0x380F, 0x12},
    {0x350A, 0x00},
    {0x350B, 0x10},
    {0x3500, 0x00},
    {0x3501, 0x1D},
    {0x3502, 0x80},
    {0x3212, 0xA0},
    {0x0100, 0x01},
};

// clang-format on

struct mode_def ov5647_modes[] = {
   {
      .regs          = ov5647_5MPix,
      .num_regs      = NUM_ELEMENTS(ov5647_5MPix),
      .width         = 2592,
      .height        = 1944,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 1968,
      .line_time_ns  = 32503,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 1,
   },
   {
      .regs          = ov5647_mode1,
      .num_regs      = NUM_ELEMENTS(ov5647_mode1),
      .width         = 1920,
      .height        = 1080,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 1104,
      .line_time_ns  = 29584,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 1,
   },
   {
      .regs          = ov5647_mode2,
      .num_regs      = NUM_ELEMENTS(ov5647_mode2),
      .width         = 2592,
      .height        = 1944,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 1968,
      .line_time_ns  = 32503,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 1,
   },
   {
      .regs          = ov5647_mode3,
      .num_regs      = NUM_ELEMENTS(ov5647_mode3),
      .width         = 2592,
      .height        = 1944,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 1968,
      .line_time_ns  = 183789,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 1,
   },
   {
      .regs          = ov5647_mode4,
      .num_regs      = NUM_ELEMENTS(ov5647_mode4),
      .width         = 1296,
      .height        = 976,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 996,
      .line_time_ns  = 23216,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 2,
   },
   {
      .regs          = ov5647_mode5,
      .num_regs      = NUM_ELEMENTS(ov5647_mode5),
      .width         = 1296,
      .height        = 730,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 754,
      .line_time_ns  = 23216,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 2,
   },
   {
      .regs          = ov5647_mode6,
      .num_regs      = NUM_ELEMENTS(ov5647_mode6),
      .width         = 640,
      .height        = 480,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 484,
      .line_time_ns  = 31749,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 4,
   },
   {
      .regs          = ov5647_mode7,
      .num_regs      = NUM_ELEMENTS(ov5647_mode7),
      .width         = 640,
      .height        = 480,
      .encoding      = 0,
      .order         = BAYER_ORDER_GBRG,
      .native_bit_depth = 10,
      .image_id      = 0x2B,
      .data_lanes    = 2,
      .min_vts       = 484,
      .line_time_ns  = 21165,
      .timing        = {0, 0, 0, 0, 0},
      .term          = {0, 0},
      .black_level   = 16,
      .binning       = 4,
   },
};

struct sensor_regs ov5647_stop[] = {
   { 0x0100, 0x00 },
};

static
int ov5647_set_crop(const struct sensor_def *sensor, struct mode_def *sensor_mode,
                    const struct raspiraw_crop *cfg)
{
   if (cfg->hinc >= 0)
   {
      modReg(sensor_mode, 0x3814, 0, 7, cfg->hinc, EQUAL);
   }

   if (cfg->vinc >= 0)
   {
      modReg(sensor_mode, 0x3815, 0, 7, cfg->vinc, EQUAL);
   }

   if (cfg->width > 0)
   {
      sensor_mode->width = cfg->width;
      modReg(sensor_mode, 0x3808, 0, 3, cfg->width >>8, EQUAL);
      modReg(sensor_mode, 0x3809, 0, 7, cfg->width &0xFF, EQUAL);
   }

   if (cfg->height > 0)
   {
      sensor_mode->height = cfg->height;
      modReg(sensor_mode, 0x380A, 0, 3, cfg->height >>8, EQUAL);
      modReg(sensor_mode, 0x380B, 0, 7, cfg->height &0xFF, EQUAL);
   }

   if (cfg->left > 0)
   {
      int val = cfg->left * sensor_mode->binning;
      modReg(sensor_mode, 0x3800, 0, 3, val >>8, EQUAL);
      modReg(sensor_mode, 0x3801, 0, 7, val &0xFF, EQUAL);
   }

   if (cfg->top > 0)
   {
      int val = cfg->top * sensor_mode->binning;
      modReg(sensor_mode, 0x3802, 0, 3, val >>8, EQUAL);
      modReg(sensor_mode, 0x3803, 0, 7, val &0xFF, EQUAL);
   }

   return 0;
}

// ID register settings taken from http://www.mail-archive.com/linux-kernel@vger.kernel.org/msg1298623.html
struct sensor_def ov5647 = {
   .name =                 "ov5647",
   .modes =                ov5647_modes,
   .num_modes =            NUM_ELEMENTS(ov5647_modes),
   .stop =                 ov5647_stop,
   .num_stop_regs =        NUM_ELEMENTS(ov5647_stop),

   .i2c_addr =             0x36,
   .i2c_addressing =       2,
   .i2c_ident_length =     2,
   .i2c_ident_reg =        0x300A,
   .i2c_ident_value =      0x4756,  //0x5647 byte swapped

   .vflip_reg =            0x3820,
   .vflip_reg_bit =        0,
   .hflip_reg =            0x3821,
   .hflip_reg_bit =        0,

   .exposure_reg =         0x3500,
   .exposure_reg_num_bits = 20,

   .vts_reg =              0x380E,
   .vts_reg_num_bits =     16,      //  total vertical size [15:8] and [7:0] (ov5647 preliminary datasheet is inaccurate)

   .gain_reg =             0x350A,
   .gain_reg_num_bits =    10,

   .set_crop =             ov5647_set_crop,
};

#endif
