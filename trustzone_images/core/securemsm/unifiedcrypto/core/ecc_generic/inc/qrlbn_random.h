#ifndef _QRLBN_RANDOM_H
#define _QRLBN_RANDOM_H

/*

  Copyright © 2014 Qualcomm Technologies, Inc. 
  All Rights Reserved.
  Qualcomm Confidential and Proprietary
  
*/


#include "qrlbn_arith_types.h"

#ifdef	__cplusplus
extern "C" {
#endif
#if 0
} /* keep emacs from indenting all the stuff below */
#endif

/*
 * Set all the bits in tgt to random values.  The number of 
 * words set comes from mdp. 
 */
int qrlbn_random_bit_vec(uint32_t *tgt,
			 const qrlbn_modulus_data_t *mdp);


/*
 * Returns a random bignum r, such that minval <= r < modulus.
 * Think of it as an element of the field or group 
 * associated with mdp, except the caller is resposible for the
 * minimum value: 0 for an additive group, 1 for a multiplicative
 * group.
 */ 
int qrlbn_random_element(uint32_t *tgt, uint32_t minval, 
			 const qrlbn_modulus_data_t *mdp);


/*
 * Sets tgt to an unsigned integer between min and max, inclusive.
 * All values are exactly equally likely, up to the quality of the
 * underlying source of randomness.  Returns 0 on success, -1 on
 * failure.  Can fail because of invalid inputs or RNG failure.
 */

int qrlbn_random_range(uint32_t *tgt, uint32_t min, uint32_t max);

#ifdef	__cplusplus
}
#endif


#endif
