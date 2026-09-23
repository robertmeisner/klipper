#ifndef __TRIGGER_ANALOG_H
#define __TRIGGER_ANALOG_H

#include <stdint.h> // uint8_t
#include "autoconf.h" // CONFIG_WANT_TRIGGER_ANALOG

#if 0 // hc32f460: trigger_analog disabled (crash workaround)

struct trigger_analog *trigger_analog_oid_lookup(uint8_t oid);
void trigger_analog_note_error(struct trigger_analog *ta, uint8_t sensor_code);
void trigger_analog_update(struct trigger_analog *ta, int32_t sample);

#else
// Dummy versions of code to avoid compile errors when not using trigger_analog

struct trigger_analog; // forward declaration for pointer fields

static inline struct trigger_analog *trigger_analog_oid_lookup(uint8_t oid) {
    return NULL;
}
static inline void
trigger_analog_note_error(struct trigger_analog *ta, uint8_t sensor_code) { }
static inline void
trigger_analog_update(struct trigger_analog *ta, int32_t sample) { }

#endif

#endif // trigger_analog.h
