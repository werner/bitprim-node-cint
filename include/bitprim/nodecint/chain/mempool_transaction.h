/**
 * Copyright (c) 2011-2018 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BITPRIM_NODECINT_CHAIN_MEMPOOL_TRANSACTION_H_
#define BITPRIM_NODECINT_CHAIN_MEMPOOL_TRANSACTION_H_

#include <stdio.h>
#include <stdint.h>

#include <bitprim/nodecint/visibility.h>
#include <bitprim/nodecint/primitives.h>

#ifdef __cplusplus
extern "C" {
#endif

BITPRIM_EXPORT
char const* chain_mempool_transaction_address(mempool_transaction_t tx);

BITPRIM_EXPORT
char const* chain_mempool_transaction_hash(mempool_transaction_t tx);

BITPRIM_EXPORT
uint64_t chain_mempool_transaction_index(mempool_transaction_t tx);

BITPRIM_EXPORT
char const* chain_mempool_transaction_satoshis(mempool_transaction_t tx);

BITPRIM_EXPORT
uint64_t chain_mempool_transaction_timestamp(mempool_transaction_t tx);

BITPRIM_EXPORT
char const* chain_mempool_transaction_prev_output_id(mempool_transaction_t tx);

BITPRIM_EXPORT
char const* chain_mempool_transaction_prev_output_index(mempool_transaction_t tx);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* BITPRIM_NODECINT_CHAIN_MEMPOOL_TRANSACTION_H_ */
