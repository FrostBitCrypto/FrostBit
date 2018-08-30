#pragma once

#include <chrono>
#include <cstddef>

namespace rai
{
// Network variants with different genesis blocks and network parameters
enum class fstbt_networks
{
	// Low work parameters, publicly known genesis key, test IP ports
	fstbt_test_network,
	// Normal work parameters, secret beta genesis key, beta IP ports
	fstbt_beta_network,
	// Normal work parameters, secret live key, live IP ports
	fstbt_live_network
};
rai::fstbt_networks const fstbt_network = fstbt_networks::ACTIVE_NETWORK;
std::chrono::milliseconds const transaction_timeout = std::chrono::milliseconds (1000);
}
