/* Implementing hastable in Linear Search (array)
 * This is not a bad strategy if you’ve only got a few items
 */

#pragma once

#include <stdbool.h>
#include <stddef.h>

enum { _CMP_LESS = -1, _CMP_EQUAL = 0, _CMP_GREATER = 1 };

/* Integer comparison */
static inline int map_cmp_int(const void *arg0, const void *arg1) {
    int *a = (int *)arg0, *b = (int *)arg1;
    return (*a < *b) ? _CMP_LESS : (*a > *b) ? _CMP_GREATER : _CMP_EQUAL;
}

/* Unsigned integer comparison */
static inline int map_cmp_uint(const void *arg0, const void *arg1) {
    unsigned int *a = (unsigned int *)arg0, *b = (unsigned int *)arg1;
    return (*a < *b) ? _CMP_LESS : (*a > *b) ? _CMP_GREATER : _CMP_EQUAL;
}

/* Hashtable data element structure */
typedef struct hash_elem_t {
    void* key;
    void* value;
} hash_elem_t;

/* Hashtable structure */
typedef struct hashtable {
    size_t capacity;    	/* Hashtable capacity (in terms of hashed keys) */
    size_t current_size;  	/* Number of element currently stored in the hashtable */
    int mod;
    hash_elem_t *table;
} hashtable_t;

//static unsigned int ht_calc_hash(char* key)

/* Constructor */
hashtable_t* ht_new(size_t);

/* Insert function */
void ht_insert(hashtable_t, void *, void *);

/* Get functions */
void ht_get(hashtable_t, void *, void *);
bool ht_isempty(hashtable_t);

/* Remove functions */
void ht_remove();
void ht_clear();

/* Destructor */
void ht_delete();
