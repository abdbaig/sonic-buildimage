/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) bcm56780_a0_dna_6_5_31_7_0_sf_match_id_info.yml
 * for device bcm56780_a0 and variant dna_6_5_31_7_0.
 * Edits to this file will be lost when it is regenerated.
 *
 * $Id: $
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 *
 ****************************************************************/

#ifndef BCM56780_A0_DNA_6_5_31_7_0_BCMPKT_RXPMD_MATCH_ID_DEFS_H
#define BCM56780_A0_DNA_6_5_31_7_0_BCMPKT_RXPMD_MATCH_ID_DEFS_H

#include <bcmpkt/bcmpkt_rxpmd_match_id.h>

/*!
 * \brief Get the Match ID DataBase information.
 *
 * \retval bcmpkt_rxpmd_match_id_db_info_t Match ID DataBase information.
*/
extern bcmpkt_rxpmd_match_id_db_info_t *
    bcm56780_a0_dna_6_5_31_7_0_rxpmd_match_id_db_info_get(void);

/*!
 * \brief Get the Match ID Mapping information.
 *
 * \retval bcmpkt_rxpmd_match_id_map_info_t Match ID Mapping information.
*/
extern bcmpkt_rxpmd_match_id_map_info_t *
    bcm56780_a0_dna_6_5_31_7_0_rxpmd_match_id_map_info_get(void);

/*!
  \name RXPMD Match IDs
*/
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ETAG  0
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_HG3_BASE  1
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_HG3_EXT_0  2
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ITAG  3
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_L2  4
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_NONE  5
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_OTAG  6
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_SNAP_OR_LLC  7
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_SVTAG  8
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_VNTAG  9
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ARP  10
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_1  11
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_2  12
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_BFD  13
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ESP_EXT  14
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE  15
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_1  16
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_2  17
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GPE  18
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE  19
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_CHKSUM  20
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_KEY  21
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_ROUT  22
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_SEQ  23
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ICMP  24
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IFA_METADATA  25
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IGMP  26
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV4  27
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV6  28
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS0  29
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS1  30
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS2  31
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS3  32
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS4  33
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS5  34
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS6  35
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_ACH  36
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_CW  37
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_NONE  38
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_P_1588  39
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_RARP  40
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES  41
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES  42
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UDP  43
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3  44
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4  45
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5  46
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_VXLAN  47
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_EP_NIH  48
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_LOOPBACK  49
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_NONE  50
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ETAG  51
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_HG3_BASE  52
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_HG3_EXT_0  53
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ITAG  54
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_L2  55
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_NONE  56
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_OTAG  57
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_SNAP_OR_LLC  58
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_SVTAG  59
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_VNTAG  60
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP  61
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_1  62
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_2  63
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_BFD  64
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ESP_EXT  65
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE  66
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_1  67
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_2  68
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GPE  69
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE  70
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_CHKSUM  71
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_KEY  72
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_ROUT  73
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_SEQ  74
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP  75
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IFA_METADATA  76
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IGMP  77
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4  78
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6  79
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS0  80
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS1  81
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS2  82
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS3  83
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS4  84
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS5  85
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS6  86
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_ACH  87
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_CW  88
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE  89
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_P_1588  90
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP  91
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES  92
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES  93
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP  94
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3  95
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4  96
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5  97
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN  98
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ETAG  99
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ITAG  100
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_L2  101
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_NONE  102
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_OTAG  103
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC  104
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_VNTAG  105
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ARP  106
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1  107
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2  108
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_BFD  109
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT  110
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE  111
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1  112
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2  113
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ICMP  114
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IFA_METADATA  115
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IGMP  116
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV4  117
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV6  118
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_NONE  119
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_P_1588  120
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_RARP  121
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES  122
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES  123
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UDP  124
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3  125
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4  126
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5  127
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ETAG  128
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_HG3_BASE  129
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_HG3_EXT_0  130
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ITAG  131
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_L2  132
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_NONE  133
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_OTAG  134
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC  135
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_SVTAG  136
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_VNTAG  137
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ARP  138
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1  139
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2  140
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_BFD  141
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT  142
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE  143
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1  144
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2  145
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GPE  146
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE  147
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM  148
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY  149
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT  150
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ  151
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ICMP  152
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA  153
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IGMP  154
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV4  155
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV6  156
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0  157
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1  158
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2  159
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3  160
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4  161
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5  162
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6  163
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH  164
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW  165
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_NONE  166
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_P_1588  167
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_RARP  168
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES  169
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES  170
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UDP  171
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3  172
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4  173
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5  174
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN  175
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_EP_NIH  176
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_LOOPBACK  177
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_NONE  178
#define BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_COUNT  179

#define BCM56780_A0_DNA_6_5_31_7_0_BCMPKT_RXPMD_MATCH_ID_FIELD_NAME_MAP_INIT \
    {"EGRESS_PKT_FWD_L2_HDR_ETAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ETAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_HG3_BASE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_HG3_BASE}, \
    {"EGRESS_PKT_FWD_L2_HDR_HG3_EXT_0", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_HG3_EXT_0}, \
    {"EGRESS_PKT_FWD_L2_HDR_ITAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_ITAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_L2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_L2}, \
    {"EGRESS_PKT_FWD_L2_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_NONE}, \
    {"EGRESS_PKT_FWD_L2_HDR_OTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_OTAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_SNAP_OR_LLC", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_SNAP_OR_LLC}, \
    {"EGRESS_PKT_FWD_L2_HDR_SVTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_SVTAG}, \
    {"EGRESS_PKT_FWD_L2_HDR_VNTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L2_HDR_VNTAG}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ARP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_1}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_AUTH_EXT_2}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_BFD", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_BFD}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ESP_EXT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ESP_EXT}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ETHERTYPE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_1}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_FRAG_EXT_2}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GPE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_CHKSUM", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_CHKSUM}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_KEY", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_KEY}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_ROUT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_ROUT}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_GRE_SEQ", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_GRE_SEQ}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_ICMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_ICMP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IFA_METADATA", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IFA_METADATA}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IGMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IGMP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IPV4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV4}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_IPV6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_IPV6}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS0", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS0}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS1}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS2}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS3}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS4}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS5}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS6}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS_ACH", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_ACH}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_MPLS_CW", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_MPLS_CW}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_NONE}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_P_1588", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_P_1588}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_RARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_RARP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UDP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UDP}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L3}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L4}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_UNKNOWN_L5}, \
    {"EGRESS_PKT_FWD_L3_L4_HDR_VXLAN", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_FWD_L3_L4_HDR_VXLAN}, \
    {"EGRESS_PKT_SYS_HDR_EP_NIH", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_EP_NIH}, \
    {"EGRESS_PKT_SYS_HDR_LOOPBACK", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_LOOPBACK}, \
    {"EGRESS_PKT_SYS_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_SYS_HDR_NONE}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_ETAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ETAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_HG3_BASE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_HG3_BASE}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_HG3_EXT_0", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_HG3_EXT_0}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_ITAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_ITAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_L2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_L2}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_NONE}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_OTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_OTAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_SNAP_OR_LLC", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_SNAP_OR_LLC}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_SVTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_SVTAG}, \
    {"EGRESS_PKT_TUNNEL_L2_HDR_VNTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L2_HDR_VNTAG}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ARP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_1}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_AUTH_EXT_2}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_BFD", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_BFD}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ESP_EXT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ESP_EXT}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ETHERTYPE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_1}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_FRAG_EXT_2}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GPE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_CHKSUM", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_CHKSUM}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_KEY", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_KEY}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_ROUT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_ROUT}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_SEQ", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_GRE_SEQ}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_ICMP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IFA_METADATA", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IFA_METADATA}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IGMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IGMP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV4}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_IPV6}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS0", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS0}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS1}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS2}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS3}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS4}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS5}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS6}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_ACH", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_ACH}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_CW", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_MPLS_CW}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_NONE}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_P_1588", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_P_1588}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_RARP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UDP}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L3}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L4}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_UNKNOWN_L5}, \
    {"EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_EGRESS_PKT_TUNNEL_L3_L4_HDR_VXLAN}, \
    {"INGRESS_PKT_INNER_L2_HDR_ETAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ETAG}, \
    {"INGRESS_PKT_INNER_L2_HDR_ITAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_ITAG}, \
    {"INGRESS_PKT_INNER_L2_HDR_L2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_L2}, \
    {"INGRESS_PKT_INNER_L2_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_NONE}, \
    {"INGRESS_PKT_INNER_L2_HDR_OTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_OTAG}, \
    {"INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_SNAP_OR_LLC}, \
    {"INGRESS_PKT_INNER_L2_HDR_VNTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L2_HDR_VNTAG}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ARP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_1}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_AUTH_EXT_2}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_BFD", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_BFD}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ESP_EXT}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ETHERTYPE}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_1}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_FRAG_EXT_2}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_ICMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_ICMP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IFA_METADATA", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IFA_METADATA}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IGMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IGMP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IPV4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV4}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_IPV6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_IPV6}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_NONE}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_P_1588", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_P_1588}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_RARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_RARP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UDP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UDP}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L3}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L4}, \
    {"INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_INNER_L3_L4_HDR_UNKNOWN_L5}, \
    {"INGRESS_PKT_OUTER_L2_HDR_ETAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ETAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_HG3_BASE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_HG3_BASE}, \
    {"INGRESS_PKT_OUTER_L2_HDR_HG3_EXT_0", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_HG3_EXT_0}, \
    {"INGRESS_PKT_OUTER_L2_HDR_ITAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_ITAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_L2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_L2}, \
    {"INGRESS_PKT_OUTER_L2_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_NONE}, \
    {"INGRESS_PKT_OUTER_L2_HDR_OTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_OTAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_SNAP_OR_LLC}, \
    {"INGRESS_PKT_OUTER_L2_HDR_SVTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_SVTAG}, \
    {"INGRESS_PKT_OUTER_L2_HDR_VNTAG", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L2_HDR_VNTAG}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ARP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_1}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_AUTH_EXT_2}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_BFD", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_BFD}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ESP_EXT}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ETHERTYPE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_1}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_FRAG_EXT_2}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GPE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GPE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_CHKSUM}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_KEY}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_ROUT}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_GRE_SEQ}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_ICMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_ICMP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IFA_METADATA}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IGMP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IGMP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IPV4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV4}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_IPV6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_IPV6}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS0}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS1}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS2}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS3}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS4}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS5}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS6}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_ACH}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_MPLS_CW}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_NONE}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_P_1588", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_P_1588}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_RARP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_RARP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_FIRST_4BYTES}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_TCP_LAST_16BYTES}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UDP", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UDP}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L3}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L4}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_UNKNOWN_L5}, \
    {"INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_OUTER_L3_L4_HDR_VXLAN}, \
    {"INGRESS_PKT_SYS_HDR_EP_NIH", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_EP_NIH}, \
    {"INGRESS_PKT_SYS_HDR_LOOPBACK", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_LOOPBACK}, \
    {"INGRESS_PKT_SYS_HDR_NONE", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_INGRESS_PKT_SYS_HDR_NONE}, \
    {"rxpmd_match_id_count", BCM56780_A0_DNA_6_5_31_7_0_RXPMD_MATCH_ID_COUNT}

#endif /*! BCM56780_A0_DNA_6_5_31_7_0_BCMPKT_RXPMD_MATCH_ID_DEFS_H */
