#include "fstbt/lib/errors.hpp"

std::string rai::error_common_messages::message (int ev) const
{
	switch (static_cast<rai::error_common> (ev))
	{
		case rai::error_common::generic:
			return "Unknown error";
		case rai::error_common::account_exists:
			return "Account already exists";
		case rai::error_common::account_not_found:
			return "Account not found";
		case rai::error_common::account_not_found_wallet:
			return "Account not found in wallet";
		case rai::error_common::bad_account_number:
			return "Bad account number";
		case rai::error_common::bad_private_key:
			return "Bad private key";
		case rai::error_common::bad_public_key:
			return "Bad public key";
		case rai::error_common::bad_seed:
			return "Bad seed";
		case rai::error_common::bad_threshold:
			return "Bad threshold number";
		case rai::error_common::bad_wallet_number:
			return "Bad wallet number";
		case rai::error_common::bad_work_format:
			return "Bad work";
		case rai::error_common::insufficient_balance:
			return "Insufficient balance";
		case rai::error_common::invalid_amount:
			return "Invalid amount number";
		case rai::error_common::invalid_amount_big:
			return "Amount too big";
		case rai::error_common::invalid_count:
			return "Invalid count";
		case rai::error_common::invalid_ip_address:
			return "Invalid IP address";
		case rai::error_common::invalid_port:
			return "Invalid port";
		case rai::error_common::invalid_index:
			return "Invalid index";
		case rai::error_common::invalid_work:
			return "Invalid work";
		case rai::error_common::numeric_conversion:
			return "Numeric conversion error";
		case rai::error_common::wallet_lmdb_max_dbs:
			return "Failed to create wallet. Increase lmdb_max_dbs in node config";
		case rai::error_common::wallet_locked:
			return "Wallet is locked";
		case rai::error_common::wallet_not_found:
			return "Wallet not found";
	}

	return "Invalid error code";
}

std::string rai::error_blocks_messages::message (int ev) const
{
	switch (static_cast<rai::error_blocks> (ev))
	{
		case rai::error_blocks::generic:
			return "Unknown error";
		case rai::error_blocks::bad_hash_number:
			return "Bad hash number";
		case rai::error_blocks::invalid_block:
			return "Block is invalid";
		case rai::error_blocks::invalid_block_hash:
			return "Invalid block hash";
		case rai::error_blocks::invalid_type:
			return "Invalid block type";
		case rai::error_blocks::not_found:
			return "Block not found";
		case rai::error_blocks::work_low:
			return "Block work is less than threshold";
	}

	return "Invalid error code";
}

std::string rai::error_rpc_messages::message (int ev) const
{
	switch (static_cast<rai::error_rpc> (ev))
	{
		case rai::error_rpc::generic:
			return "Unknown error";
		case rai::error_rpc::bad_destination:
			return "Bad destination account";
		case rai::error_rpc::bad_key:
			return "Bad key";
		case rai::error_rpc::bad_link:
			return "Bad link number";
		case rai::error_rpc::bad_previous:
			return "Bad previous";
		case rai::error_rpc::bad_representative_number:
			return "Bad representative number";
		case rai::error_rpc::bad_source:
			return "Bad source";
		case rai::error_rpc::bad_timeout:
			return "Bad timeout number";
		case rai::error_rpc::block_create_balance_mismatch:
			return "Balance mismatch for previous block";
		case rai::error_rpc::block_create_key_required:
			return "Private key or local wallet and account required";
		case rai::error_rpc::block_create_public_key_mismatch:
			return "Incorrect key for given account";
		case rai::error_rpc::block_create_requirements_state:
			return "Previous, representative, final balance and link (source or destination) are required";
		case rai::error_rpc::block_create_requirements_open:
			return "Representative account and source hash required";
		case rai::error_rpc::block_create_requirements_receive:
			return "Previous hash and source hash required";
		case rai::error_rpc::block_create_requirements_change:
			return "Representative account and previous hash required";
		case rai::error_rpc::block_create_requirements_send:
			return "Destination account, previous hash, current balance and amount required";
		case rai::error_rpc::confirmation_not_found:
			return "Active confirmation not found";
		case rai::error_rpc::invalid_balance:
			return "Invalid balance number";
		case rai::error_rpc::invalid_destinations:
			return "Invalid destinations number";
		case rai::error_rpc::invalid_offset:
			return "Invalid offset";
		case rai::error_rpc::invalid_missing_type:
			return "Invalid or missing type argument";
		case rai::error_rpc::invalid_root:
			return "Invalid root hash";
		case rai::error_rpc::invalid_sources:
			return "Invalid sources number";
		case rai::error_rpc::payment_account_balance:
			return "Account has non-zero balance";
		case rai::error_rpc::payment_unable_create_account:
			return "Unable to create transaction account";
		case rai::error_rpc::rpc_control_disabled:
			return "RPC control is disabled";
		case rai::error_rpc::source_not_found:
			return "Source not found";
	}

	return "Invalid error code";
}

std::string rai::error_process_messages::message (int ev) const
{
	switch (static_cast<rai::error_process> (ev))
	{
		case rai::error_process::generic:
			return "Unknown error";
		case rai::error_process::bad_signature:
			return "Bad signature";
		case rai::error_process::old:
			return "Old block";
		case rai::error_process::negative_spend:
			return "Negative spend";
		case rai::error_process::fork:
			return "Fork";
		case rai::error_process::unreceivable:
			return "Unreceivable";
		case rai::error_process::gap_previous:
			return "Gap previous block";
		case rai::error_process::gap_source:
			return "Gap source block";
		case rai::error_process::opened_burn_account:
			return "Burning account";
		case rai::error_process::balance_mismatch:
			return "Balance and amount delta do not match";
		case rai::error_process::block_position:
			return "This block cannot follow the previous block";
		case rai::error_process::other:
			return "Error processing block";
	}

	return "Invalid error code";
}
