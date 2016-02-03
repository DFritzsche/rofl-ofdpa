#ifndef ROFL_OFDPA_FM_DRIVER_HPP_
#define ROFL_OFDPA_FM_DRIVER_HPP_

#include <list>

#include <rofl/common/crofdpt.h>
#include <rofl/common/caddress.h>

namespace rofl
{

class rofl_ofdpa_fm_driver
{
public:
	rofl_ofdpa_fm_driver(rofl::crofdpt& dptid);
	virtual ~rofl_ofdpa_fm_driver();

	void
	enable_port_pvid_ingress(const std::string &port_name, uint16_t vid);

	void
	enable_port_vid_ingress(const std::string &port_name, uint16_t vid);

	uint32_t
	enable_port_vid_egress(const std::string &port_name, uint16_t vid, bool untagged = false);

	uint32_t
	enable_group_l2_multicast(uint16_t vid, uint16_t id,
			const std::list<uint32_t> &l2_interfaces, bool update = false);

#if 0
	void
	enable_bridging_dlf_vlan(uint16_t vid, uint32_t group_id, bool do_pkt_in);
#endif

	void
	enable_policy_arp(uint16_t vid, uint32_t group_id, bool update = false);

	void
	add_bridging_unicast_vlan(const rofl::cmacaddr& mac, uint16_t vid,
			uint32_t port_no, bool permanent = false);

	void
	remove_bridging_unicast_vlan(const rofl::cmacaddr& mac, uint16_t vid,
			uint32_t port_no);

private:
	const uint16_t default_idle_timeout;

	rofl::crofdpt& dpt;
};

} /* namespace rofl */

#endif /* ROFL_OFDPA_FM_DRIVER_HPP_ */
