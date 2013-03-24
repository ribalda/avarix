/**
 * @file
 * @brief Tools to work with ports and their pins
 */
//@{
#ifndef AVARIX_PORTPIN_H__
#define AVARIX_PORTPIN_H__

#include <avr/io.h>
#include <stdint.h>
#include "intlvl.h"


/// Pin of a port
typedef struct {
  PORT_t *port;
  uint8_t pin;
} portpin_t;


#ifndef DOXYGEN

/// Indirection to Return a port from its letter
#define PORTX_(x)  (PORT##x)

#endif

/// Return a portpin_t for PORTx, pin n.
#define PORTPIN(x,n)  ((portpin_t){ &PORTX_(x), n })

/// Unset \ref portpin_t value (port set to 0)
#define PORTPIN_NONE  ((portpin_t){ 0, 0 })


/** @name Update pin bit of port registers */
//@{

/// Set port pin data direction
static inline void portpin_dirset(const portpin_t *pp) { pp->port->DIRSET = (1 << pp->pin); }
/// Clear port pin data direction
static inline void portpin_dirclr(const portpin_t *pp) { pp->port->DIRCLR = (1 << pp->pin); }
/// Toggle port pin data direction
static inline void portpin_dirtgl(const portpin_t *pp) { pp->port->DIRTGL = (1 << pp->pin); }
/// Set port pin output
static inline void portpin_outset(const portpin_t *pp) { pp->port->OUTSET = (1 << pp->pin); }
/// Clear port pin output
static inline void portpin_outclr(const portpin_t *pp) { pp->port->OUTCLR = (1 << pp->pin); }
/// Toggle port ping output
static inline void portpin_outtgl(const portpin_t *pp) { pp->port->OUTTGL = (1 << pp->pin); }

//@}


/// Get a pointer to the \e PINnCTRL register
#define PORTPIN_CTRL(pp)  ((&(pp)->port->PIN0CTRL)[(pp)->pin])

/// Event Channel multiplexer input selection for the port pin
#define PORTPIN_EVSYS_CHMUX(pp)  (EVSYS_CHMUX_PORTA_PIN0_gc + ((pp)->port-&PORTA) * 8 + (pp)->pin)

/** @brief Enable port pin interrupt
 *
 * @param pp  port pin to use
 * @param n  interrupt number (0 or 1)
 * @param lvl  interrupt level
 */
static inline void portpin_enable_int(const portpin_t *pp, uint8_t n, intlvl_t lvl);
inline void portpin_enable_int(const portpin_t *pp, uint8_t n, intlvl_t lvl)
{
  pp->port->INTFLAGS &= ~(1 << n);
  (&pp->port->INT0MASK)[n] |= (1 << pp->pin);
  pp->port->INTCTRL &= ~(PORT_INT0LVL_gm << 2*n);
  pp->port->INTCTRL |= (lvl << 2*n);
}


#endif
//@}