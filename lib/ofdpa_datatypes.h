#ifndef ROFL_OFDPA_DATATYPES_H_
#define ROFL_OFDPA_DATATYPES_H_

#include <inttypes.h>

#ifdef __cplusplus
extern "C"{
#endif

static const uint32_t OFDPA_EXP_ID = 0x001018;

/* OXM Flow match field types for OpenFlow Experimental */
enum oxm_ofx_match_fields {
  OFPXMT_OFX_VRF	= 1,	/* virtual routing and forwarding */

  /* max value */
  OFPXMT_OFX_MAX,
};

/** Flow Table Id enumerator */
typedef enum
{
  OFDPA_FLOW_TABLE_ID_INGRESS_PORT                      =    0,  /**< Ingress Port Table */
  OFDPA_FLOW_TABLE_ID_PORT_DSCP_TRUST                   =    5,  /**< Port DSCP Trust Table */
  OFDPA_FLOW_TABLE_ID_PORT_PCP_TRUST                    =    6,  /**< Port PCP Trust Table */
  OFDPA_FLOW_TABLE_ID_TUNNEL_DSCP_TRUST                 =    7,  /**< Tunnel DSCP Trust Table */
  OFDPA_FLOW_TABLE_ID_TUNNEL_PCP_TRUST                  =    8,  /**< Tunnel PCP Trust Table */
  OFDPA_FLOW_TABLE_ID_VLAN                              =   10,  /**< VLAN Table */
  OFDPA_FLOW_TABLE_ID_VLAN_1                            =   11,  /**< VLAN 1 Table */
  OFDPA_FLOW_TABLE_ID_MAINTENANCE_POINT                 =   12,  /**< Maintenance Point Flow Table */
  OFDPA_FLOW_TABLE_ID_MPLS_L2_PORT                      =   13,  /**< MPLS L2 Port Table */
  OFDPA_FLOW_TABLE_ID_MPLS_DSCP_TRUST                   =   15,  /**< MPLS QoS DSCP Trust Table */
  OFDPA_FLOW_TABLE_ID_MPLS_PCP_TRUST                    =   16,  /**< MPLS QoS PCP Trust Table */
  OFDPA_FLOW_TABLE_ID_TERMINATION_MAC                   =   20,  /**< Termination MAC Table */
  OFDPA_FLOW_TABLE_ID_MPLS_0                            =   23,  /**< MPLS 0 Table */
  OFDPA_FLOW_TABLE_ID_MPLS_1                            =   24,  /**< MPLS 1 Table */
  OFDPA_FLOW_TABLE_ID_MPLS_2                            =   25,  /**< MPLS 2 Table */
  OFDPA_FLOW_TABLE_ID_MPLS_MAINTENANCE_POINT            =   26,  /**< MPLS-TP Maintenance Point Flow Table */
  OFDPA_FLOW_TABLE_ID_BFD                               =   27,  /**< BFD Table */
  OFDPA_FLOW_TABLE_ID_UNICAST_ROUTING                   =   30,  /**< Unicast Routing Table */
  OFDPA_FLOW_TABLE_ID_MULTICAST_ROUTING                 =   40,  /**< Multicast Routing Table */
  OFDPA_FLOW_TABLE_ID_BRIDGING                          =   50,  /**< Bridging Table */
  OFDPA_FLOW_TABLE_ID_ACL_POLICY                        =   60,  /**< ACL Table */
  OFDPA_FLOW_TABLE_ID_EGRESS_VLAN                       =  210,  /**< Egress VLAN Table */
  OFDPA_FLOW_TABLE_ID_EGRESS_VLAN_1                     =  211,  /**< Egress VLAN 1 Table */
  OFDPA_FLOW_TABLE_ID_EGRESS_MAINTENANCE_POINT          =  226,  /**< Egress Maintenance Point Flow Table */
  OFDPA_FLOW_TABLE_ID_L2_INTF_DSCP_REMARK               =  237,  /**< L2 Interface DSCP Remark Table */
  OFDPA_FLOW_TABLE_ID_L2_INTF_8021P_PRI_REMARK          =  238,  /**< L2 Interface 802.1p PRI Remark Table */
  OFDPA_FLOW_TABLE_ID_MPLS_QOS                          =  239,  /**< MPLS QoS Table */
  OFDPA_FLOW_TABLE_ID_MPLS_VPN_LBL_EXP_REMARK           =  240,  /**< MPLS VPN Label EXP Remark Table */
  OFDPA_FLOW_TABLE_ID_MPLS_VPN_LBL_8021P_PRI_REMARK     =  241,  /**< MPLS VPN Label 802.1p PRI Remark Table */
  OFDPA_FLOW_TABLE_ID_MPLS_TUNNEL_LBL_EXP_REMARK        =  242,  /**< MPLS Tunnel Label EXP Remark Table */
  OFDPA_FLOW_TABLE_ID_MPLS_TUNNEL_LBL_8021P_PRI_REMARK  =  243,  /**< MPLS Tunnel Label 802.1p PRI Remark Table */

} OFDPA_FLOW_TABLE_ID_t;

/** Source MAC Lookup Table */
#define OFDPA_FLOW_TABLE_ID_SA_LOOKUP 254

enum OFDPA_FLOW_TABLE_ID_FMT_INGRESS_PORT {
	OFDPA_FTT_INGRESS_PORT_NORMAL_ETHERNET_IPV4_DSCP,
	OFDPA_FTT_INGRESS_PORT_NORMAL_ETHERNET_IPV6_DSCP,
	OFDPA_FTT_INGRESS_PORT_NORMAL_ETHERNET_PCP,
	OFDPA_FTT_INGRESS_PORT_NORMAL_ETHERNET,
	OFDPA_FTT_INGRESS_PORT_OVERLAY_TUNNEL_IPV4_DSCP,
	OFDPA_FTT_INGRESS_PORT_OVERLAY_TUNNEL_IPV6_DSCP,
	OFDPA_FTT_INGRESS_PORT_OVERLAY_TUNNEL_PCP,
	OFDPA_FTT_INGRESS_PORT_OVERLAY_TUNNEL,
	OFDPA_FTT_INGRESS_PORT_OAM_PDU_INJECTION,
};
enum OFDPA_FLOW_TABLE_ID_FMT_PORT_DSCP_TRUST {
	OFDPA_FTT_PORT_DSCP_TRUST_TRUST_CLASSIFICATION_IPV4,
	OFDPA_FTT_PORT_DSCP_TRUST_TRUST_CLASSIFICATION_IPV6,
};
enum OFDPA_FLOW_TABLE_ID_FMT_PORT_PCP_TRUST {
	OFDPA_FTT_PORT_PCP_TRUST_TRUST_CLASSIFICATION,
};
enum OFDPA_FLOW_TABLE_ID_FMT_TUNNEL_DSCP_TRUST {
	OFDPA_FTT_TUNNEL_DSCP_TRUST_TRUST_CLASSIFICATION,
};
enum OFDPA_FLOW_TABLE_ID_FMT_TUNNEL_PCP_TRUST {
	OFDPA_FTT_TUNNEL_PCP_TRUST_TRUST_CLASSIFICATION,
};
enum OFDPA_FLOW_TABLE_ID_FMT_VLAN {
	OFDPA_FTT_VLAN_VLAN_FILTERING,
	OFDPA_FTT_VLAN_VLAN_ASSIGNMENT,
	OFDPA_FTT_VLAN_VLAN_ALLOW_ALL,
	OFDPA_FTT_VLAN_VLAN_TRANSLATE_SINGLE_TAG_OR_SINGLE_TAG_TO_DOUBLE_TAG,
	OFDPA_FTT_VLAN_VLAN_TRANSLATE_DOUBLE_TAG_TO_SINGLE_TAG,
	OFDPA_FTT_VLAN_MPLS_L2_SINGLE_TAG,
	OFDPA_FTT_VLAN_MPLS_L2_DOUBLE_TAG,
	OFDPA_FTT_VLAN_MPLS_L2_ALL_TRAFFIC_ON_PORT,
	OFDPA_FTT_VLAN_ETHERNET_LINK_OAM,
	OFDPA_FTT_VLAN_ETHERNET_LINK_OAM_LOOPBACK,
};
enum OFDPA_FLOW_TABLE_ID_FMT_VLAN_1 {
	OFDPA_FTT_VLAN_1_STACKED_VLAN_ASSIGNMENT,
	OFDPA_FTT_VLAN_1_MPLS_L2_STACKED_VLAN,
};
enum OFDPA_FLOW_TABLE_ID_FMT_INGRESS_MAINTENANCE_POINT {
	OFDPA_FTT_INGRESS_MAINTENANCE_POINT_MIP_LBM_PROCESS_CLIENT_MDL,
	OFDPA_FTT_INGRESS_MAINTENANCE_POINT_MIP_LTM_PROCESS_CLIENT_MDL,
	OFDPA_FTT_INGRESS_MAINTENANCE_POINT_DOWN_MEP_PDU,
	OFDPA_FTT_INGRESS_MAINTENANCE_POINT_PDU_PASSTHRU_HIGHER_MDL,
	OFDPA_FTT_INGRESS_MAINTENANCE_POINT_PDU_DROP_LOWER_MDL,
	OFDPA_FTT_INGRESS_MAINTENANCE_POINT_MEP_DATA,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLS_L2_PORT {
	OFDPA_FTT_MPLS_L2_PORT_MPLS_V4_DSCP_VPWS,
	OFDPA_FTT_MPLS_L2_PORT_MPLS_V6_DSCP_VPWS,
	OFDPA_FTT_MPLS_L2_PORT_MPLS_PCP_VPWS,
	OFDPA_FTT_MPLS_L2_PORT_VPWS_FORWARD,
	OFDPA_FTT_MPLS_L2_PORT_DEFAULT_DROP,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLS_L2_PORT_DSCP_TRUST {
	OFDPA_FTT_MPLS_L2_PORT_DSCP_TRUST_IPV4_TRUST_CLASSIFICATION_VPWS,
	OFDPA_FTT_MPLS_L2_PORT_DSCP_TRUST_IPV6_TRUST_CLASSIFICATION_VPWS,
	OFDPA_FTT_MPLS_L2_PORT_DSCP_TRUST_IPV4_TRUST_CLASSIFICATION_VPLS,
	OFDPA_FTT_MPLS_L2_PORT_DSCP_TRUST_IPV6_TRUST_CLASSIFICATION_VPLS,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLS_L2_PORT_PCP_TRUST {
	OFDPA_FTT_MPLS_L2_PORT_PCP_TRUST_MPLSTP_TRUST_CLASSIFICATION_VPWS,
	OFDPA_FTT_MPLS_L2_PORT_PCP_TRUST_MPLSTP_TRUST_CLASSIFICATION_VPLS,
};
enum OFDPA_FLOW_TABLE_ID_FMT_TERMINATION_MAC {
	OFDPA_FTT_TERMINATION_MAC_IPV4_UNICAST_MAC,
	OFDPA_FTT_TERMINATION_MAC_IPV6_UNICAST_MAC,
	OFDPA_FTT_TERMINATION_MAC_IPV4_MULTICAST_MAC,
	OFDPA_FTT_TERMINATION_MAC_IPV6_MULTICAST_MAC,
	OFDPA_FTT_TERMINATION_MAC_MPLS,
	OFDPA_FTT_TERMINATION_MAC_IPV4_MULTICAST_IP,
	OFDPA_FTT_TERMINATION_MAC_IPV6_MULTICAST_IP,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLS_0 {
	OFDPA_FTT_MPLS_0_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_NEXT_LABEL,
	OFDPA_FTT_MPLS_0_POP_TUNNEL_LABEL_BHH_AND_FORWARD_BASED_ON_NEXT_LABEL_LSP_OAM_MEP_DATA,
	OFDPA_FTT_MPLS_0_POP_TUNNEL_LABEL_BHH_AND_FORWARD_BASED_ON_NEXT_LABEL_LSP_OAM_MEP_CONTROL,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLS_1 {
	OFDPA_FTT_MPLS_1_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_NEXT_LABEL,
	OFDPA_FTT_MPLS_1_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_THIS_LABEL_PHP,
	OFDPA_FTT_MPLS_1_SWAP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_THIS_LABEL,
	OFDPA_FTT_MPLS_1_SWAP_PW_LABEL_AND_FORWARD_BASED_ON_THIS_LABEL,
	OFDPA_FTT_MPLS_1_POP_TUNNEL_LABEL_BHH_AND_FORWARD_BASED_ON_NEXT_LABEL_LSP_OAM_MEP_DATA,
	OFDPA_FTT_MPLS_1_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_NEXT_LABEL_LSP_OAM_MEP_CONTROL,
	OFDPA_FTT_MPLS_1_SWAP_TUNNEL_LABEL_BHH_LSP_OAM_MIP_CONTROL,
	OFDPA_FTT_MPLS_1_SWAP_PW_LABEL_BHH_MSPW_OAM_MIP_CONTROL,
	OFDPA_FTT_MPLS_1_L2_SWITCH_VPWS_PW_TERMINATE,
	OFDPA_FTT_MPLS_1_L2_SWITCH_VPWS_PW_TERMINATE_MEP_DATA,
	OFDPA_FTT_MPLS_1_PW_BHH_VCCV_4_PW_TERMINATE_MEP_CONTROL,
	OFDPA_FTT_MPLS_1_PW_BHH_VCCV_1_PW_TERMINATE_MEP_CONTROL,
	OFDPA_FTT_MPLS_1_PW_BHH_VCCV_3_MIP_CONTROL,
	OFDPA_FTT_MPLS_1_L3_VPN_ROUTE_IPV4_UNICAST,
	OFDPA_FTT_MPLS_1_L3_VPN_ROUTE_IPV4_MULTICAST,
	OFDPA_FTT_MPLS_1_L3_VPN_ROUTE_IPV6_UNICAST,
	OFDPA_FTT_MPLS_1_L3_VPN_ROUTE_IPV6_MULTICAST,
	OFDPA_FTT_MPLS_1_L3_VPN_FORWARD_IPV4_BASED_ON_THIS_LABEL_PHP,
	OFDPA_FTT_MPLS_1_L3_VPN_FORWARD_IPV6_BASED_ON_THIS_LABEL_PHP,
	OFDPA_FTT_MPLS_1_SECTION_OAM,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLS_2 {
	OFDPA_FTT_MPLS_2_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_NEXT_LABEL,
	OFDPA_FTT_MPLS_2_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_THIS_LABEL_PHP,
	OFDPA_FTT_MPLS_2_SWAP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_THIS_LABEL,
	OFDPA_FTT_MPLS_2_SWAP_PW_LABEL_AND_FORWARD_BASED_ON_THIS_LABEL,
	OFDPA_FTT_MPLS_2_POP_TUNNEL_LABEL_BHH_AND_FORWARD_BASED_ON_NEXT_LABEL_LSP_OAM_MEP_DATA,
	OFDPA_FTT_MPLS_2_POP_TUNNEL_LABEL_AND_FORWARD_BASED_ON_NEXT_LABEL_LSP_OAM_MEP_CONTROL,
	OFDPA_FTT_MPLS_2_SWAP_TUNNEL_LABEL_BHH_LSP_OAM_MIP_CONTROL,
	OFDPA_FTT_MPLS_2_SWAP_PW_LABEL_BHH_MSPW_OAM_MIP_CONTROL,
	OFDPA_FTT_MPLS_2_L2_SWITCH_VPWS_PW_TERMINATE,
	OFDPA_FTT_MPLS_2_L2_SWITCH_VPWS_PW_TERMINATE_MEP_DATA,
	OFDPA_FTT_MPLS_2_PW_BHH_VCCV_4_PW_TERMINATE_MEP_CONTROL,
	OFDPA_FTT_MPLS_2_PW_BHH_VCCV_1_PW_TERMINATE_MEP_CONTROL,
	OFDPA_FTT_MPLS_2_PW_BHH_VCCV_3_MIP_CONTROL,
	OFDPA_FTT_MPLS_2_L3_VPN_ROUTE_IPV4_UNICAST,
	OFDPA_FTT_MPLS_2_L3_VPN_ROUTE_IPV4_MULTICAST,
	OFDPA_FTT_MPLS_2_L3_VPN_ROUTE_IPV6_UNICAST,
	OFDPA_FTT_MPLS_2_L3_VPN_ROUTE_IPV6_MULTICAST,
	OFDPA_FTT_MPLS_2_L3_VPN_FORWARD_IPV4_BASED_ON_THIS_LABEL_PHP,
	OFDPA_FTT_MPLS_2_L3_VPN_FORWARD_IPV6_BASED_ON_THIS_LABEL_PHP,
	OFDPA_FTT_MPLS_2_SECTION_OAM,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MPLSTP_MAINTENANCE_POINT {
	OFDPA_FTT_MPLSTP_MAINTENANCE_POINT_MEP_PDU_PROCESS_G_8113_1,
};
enum OFDPA_FLOW_TABLE_ID_FMT_UNICAST_ROUTING {
	OFDPA_FTT_UNICAST_ROUTING_IPV4_UNICAST_BFD,
	OFDPA_FTT_UNICAST_ROUTING_IPV4_MPLS_BFD,
	OFDPA_FTT_UNICAST_ROUTING_IPV4_UNICAST_HOST,
	OFDPA_FTT_UNICAST_ROUTING_IPV4_UNICAST_LPM,
	OFDPA_FTT_UNICAST_ROUTING_IPV6_UNICAST_BFD,
	OFDPA_FTT_UNICAST_ROUTING_IPV6_MPLS_BFD,
	OFDPA_FTT_UNICAST_ROUTING_IPV6_UNICAST_HOST,
	OFDPA_FTT_UNICAST_ROUTING_IPV6_UNICAST_LPM,
};
enum OFDPA_FLOW_TABLE_ID_FMT_MULTICAST_ROUTING {
	OFDPA_FTT_MULTICAST_ROUTING_IPV4_MULTICAST,
	OFDPA_FTT_MULTICAST_ROUTING_IPV6_MULTICAST,
	OFDPA_FTT_MULTICAST_ROUTING_IPV4_MULTICAST_MPLS_L3_VPN,
	OFDPA_FTT_MULTICAST_ROUTING_IPV6_MULTICAST_MPLS_L3_VPN,
};
enum OFDPA_FLOW_TABLE_ID_FMT_BRIDGING {
	OFDPA_FTT_BRIDGING_UNICAST_VLAN,
	OFDPA_FTT_BRIDGING_MULTICAST_VLAN,
	OFDPA_FTT_BRIDGING_DLF_VLAN,
	OFDPA_FTT_BRIDGING_UNICAST_OVERLAY,
	OFDPA_FTT_BRIDGING_MULTICAST_OVERLAY,
	OFDPA_FTT_BRIDGING_DLF_OVERLAY,
	OFDPA_FTT_BRIDGING_UNICAST_MPLSTP_VPLS_NETWORK,
	OFDPA_FTT_BRIDGING_UNICAST_MPLSTP_VPLS_LOCAL,
	OFDPA_FTT_BRIDGING_MULTICAST_MPLSTP_VPLS_NETWORK,
	OFDPA_FTT_BRIDGING_MULTICAST_MPLSTP_VPLS_LOCAL,
	OFDPA_FTT_BRIDGING_DLF_MPLSTP_VPLS_NETWORK,
	OFDPA_FTT_BRIDGING_DLF_MPLSTP_VPLS_LOCAL,
};
enum OFDPA_FLOW_TABLE_ID_FMT_L2_POLICER {
	OFDPA_FTT_L2_POLICER_MPLS_L2_PORT_METER,
};
enum OFDPA_FLOW_TABLE_ID_FMT_L2_POLICER_ACTIONS {
};
enum OFDPA_FLOW_TABLE_ID_FMT_POLICY_ACL {
	OFDPA_FTT_POLICY_ACL_IPV6_VLAN,
	OFDPA_FTT_POLICY_ACL_IPV6_OVERLAY,
	OFDPA_FTT_POLICY_ACL_IPV6_MPLSTP,
	OFDPA_FTT_POLICY_ACL_IPV4_VLAN,
	OFDPA_FTT_POLICY_ACL_IPV4_OVERLAY,
	OFDPA_FTT_POLICY_ACL_IPV4_MPLSTP,
};
enum OFDPA_FLOW_TABLE_ID_FMT_COLOR_BASED_ACTIONS {
	OFDPA_FTT_COLOR_BASED_ACTIONS_RED_ACTIONS,
	OFDPA_FTT_COLOR_BASED_ACTIONS_YELLOW_ACTIONS,
	OFDPA_FTT_COLOR_BASED_ACTIONS_GREEN_ACTIONS,
};
enum OFDPA_FLOW_TABLE_ID_FMT_EGRESS_VLAN {
	OFDPA_FTT_EGRESS_VLAN_VLAN_TRANSLATE_SINGLE_TAG_OR_SINGLE_TO_DOUBLE,
	OFDPA_FTT_EGRESS_VLAN_VLAN_TRANSLATE_DOUBLE_TAG,
};
enum OFDPA_FLOW_TABLE_ID_FMT_EGRESS_VLAN_1 {
	OFDPA_FTT_EGRESS_VLAN_1_VLAN_ASSIGNMENT,
};
enum OFDPA_FLOW_TABLE_ID_FMT_EGRESS_MAINTENANCE_POINT {
	OFDPA_FTT_EGRESS_MAINTENANCE_POINT_MIP_PDU_PROCESS_LBM,
	OFDPA_FTT_EGRESS_MAINTENANCE_POINT_MIP_PDU_PROCESS_OUR_LTM,
	OFDPA_FTT_EGRESS_MAINTENANCE_POINT_PDU_PROCESS_PROVIDER_UP_OR_DOWN_MEP,
	OFDPA_FTT_EGRESS_MAINTENANCE_POINT_PDU_PASSTHROUGH_HIGHER_CLIENT_MDL,
	OFDPA_FTT_EGRESS_MAINTENANCE_POINT_PDU_DROP_LOWER_MDL,
	OFDPA_FTT_EGRESS_MAINTENANCE_POINT_DATA_PASSTHOUGH_UP_OR_DOWN_MEP,
};

#ifdef __cplusplus
}
#endif

#endif /* ROFL_OFDPA_DATATYPES_H_ */
