/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * CEC common helper functions
 *
 * Copyright 2017 Cisco Systems, Inc. and/or its affiliates. All rights reserved.
 */

#ifndef _CEC_INFO_H_
#define _CEC_INFO_H_

#include <linux/cec.h>

#define cec_phys_addr_exp(pa) \
        ((pa) >> 12), ((pa) >> 8) & 0xf, ((pa) >> 4) & 0xf, (pa) & 0xf

const char *la2s(unsigned la);
const char *la_type2s(unsigned type);
const char *prim_type2s(unsigned type);
const char *version2s(unsigned version);
std::string all_dev_types2s(unsigned types);
std::string rc_src_prof2s(unsigned prof, const std::string &prefix);
std::string dev_feat2s(unsigned feat, const std::string &prefix);

void cec_driver_info(const struct cec_caps &caps,
		     const struct cec_log_addrs &laddrs, __u16 phys_addr);

#endif
