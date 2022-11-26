/*******************************************************************************
  GPIO PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_gpio.h

  Summary:
    GPIO PLIB Header File

  Description:
    This library provides an interface to control and interact with Parallel
    Input/Output controller (GPIO) module.

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#ifndef PLIB_GPIO_H
#define PLIB_GPIO_H

#include <device.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Data types and constants
// *****************************************************************************
// *****************************************************************************


/*** Macros for PGA1G1A pin ***/
#define PGA1G1A_Set()               (LATESET = (1<<5))
#define PGA1G1A_Clear()             (LATECLR = (1<<5))
#define PGA1G1A_Toggle()            (LATEINV= (1<<5))
#define PGA1G1A_OutputEnable()      (TRISECLR = (1<<5))
#define PGA1G1A_InputEnable()       (TRISESET = (1<<5))
#define PGA1G1A_Get()               ((PORTE >> 5) & 0x1)
#define PGA1G1A_PIN                  GPIO_PIN_RE5

/*** Macros for PGA1G0A pin ***/
#define PGA1G0A_Set()               (LATESET = (1<<6))
#define PGA1G0A_Clear()             (LATECLR = (1<<6))
#define PGA1G0A_Toggle()            (LATEINV= (1<<6))
#define PGA1G0A_OutputEnable()      (TRISECLR = (1<<6))
#define PGA1G0A_InputEnable()       (TRISESET = (1<<6))
#define PGA1G0A_Get()               ((PORTE >> 6) & 0x1)
#define PGA1G0A_PIN                  GPIO_PIN_RE6

/*** Macros for PGA1SHDNB pin ***/
#define PGA1SHDNB_Set()               (LATESET = (1<<7))
#define PGA1SHDNB_Clear()             (LATECLR = (1<<7))
#define PGA1SHDNB_Toggle()            (LATEINV= (1<<7))
#define PGA1SHDNB_OutputEnable()      (TRISECLR = (1<<7))
#define PGA1SHDNB_InputEnable()       (TRISESET = (1<<7))
#define PGA1SHDNB_Get()               ((PORTE >> 7) & 0x1)
#define PGA1SHDNB_PIN                  GPIO_PIN_RE7

/*** Macros for PGA1G2B pin ***/
#define PGA1G2B_Set()               (LATGSET = (1<<6))
#define PGA1G2B_Clear()             (LATGCLR = (1<<6))
#define PGA1G2B_Toggle()            (LATGINV= (1<<6))
#define PGA1G2B_OutputEnable()      (TRISGCLR = (1<<6))
#define PGA1G2B_InputEnable()       (TRISGSET = (1<<6))
#define PGA1G2B_Get()               ((PORTG >> 6) & 0x1)
#define PGA1G2B_PIN                  GPIO_PIN_RG6

/*** Macros for PGA1G1B pin ***/
#define PGA1G1B_Set()               (LATGSET = (1<<7))
#define PGA1G1B_Clear()             (LATGCLR = (1<<7))
#define PGA1G1B_Toggle()            (LATGINV= (1<<7))
#define PGA1G1B_OutputEnable()      (TRISGCLR = (1<<7))
#define PGA1G1B_InputEnable()       (TRISGSET = (1<<7))
#define PGA1G1B_Get()               ((PORTG >> 7) & 0x1)
#define PGA1G1B_PIN                  GPIO_PIN_RG7

/*** Macros for PGA1G0B pin ***/
#define PGA1G0B_Set()               (LATGSET = (1<<8))
#define PGA1G0B_Clear()             (LATGCLR = (1<<8))
#define PGA1G0B_Toggle()            (LATGINV= (1<<8))
#define PGA1G0B_OutputEnable()      (TRISGCLR = (1<<8))
#define PGA1G0B_InputEnable()       (TRISGSET = (1<<8))
#define PGA1G0B_Get()               ((PORTG >> 8) & 0x1)
#define PGA1G0B_PIN                  GPIO_PIN_RG8

/*** Macros for PGA2SHDNA pin ***/
#define PGA2SHDNA_Set()               (LATDSET = (1<<8))
#define PGA2SHDNA_Clear()             (LATDCLR = (1<<8))
#define PGA2SHDNA_Toggle()            (LATDINV= (1<<8))
#define PGA2SHDNA_OutputEnable()      (TRISDCLR = (1<<8))
#define PGA2SHDNA_InputEnable()       (TRISDSET = (1<<8))
#define PGA2SHDNA_Get()               ((PORTD >> 8) & 0x1)
#define PGA2SHDNA_PIN                  GPIO_PIN_RD8

/*** Macros for PGA2G0A pin ***/
#define PGA2G0A_Set()               (LATDSET = (1<<9))
#define PGA2G0A_Clear()             (LATDCLR = (1<<9))
#define PGA2G0A_Toggle()            (LATDINV= (1<<9))
#define PGA2G0A_OutputEnable()      (TRISDCLR = (1<<9))
#define PGA2G0A_InputEnable()       (TRISDSET = (1<<9))
#define PGA2G0A_Get()               ((PORTD >> 9) & 0x1)
#define PGA2G0A_PIN                  GPIO_PIN_RD9

/*** Macros for PGA2G1A pin ***/
#define PGA2G1A_Set()               (LATDSET = (1<<10))
#define PGA2G1A_Clear()             (LATDCLR = (1<<10))
#define PGA2G1A_Toggle()            (LATDINV= (1<<10))
#define PGA2G1A_OutputEnable()      (TRISDCLR = (1<<10))
#define PGA2G1A_InputEnable()       (TRISDSET = (1<<10))
#define PGA2G1A_Get()               ((PORTD >> 10) & 0x1)
#define PGA2G1A_PIN                  GPIO_PIN_RD10

/*** Macros for PGA2G2A pin ***/
#define PGA2G2A_Set()               (LATDSET = (1<<11))
#define PGA2G2A_Clear()             (LATDCLR = (1<<11))
#define PGA2G2A_Toggle()            (LATDINV= (1<<11))
#define PGA2G2A_OutputEnable()      (TRISDCLR = (1<<11))
#define PGA2G2A_InputEnable()       (TRISDSET = (1<<11))
#define PGA2G2A_Get()               ((PORTD >> 11) & 0x1)
#define PGA2G2A_PIN                  GPIO_PIN_RD11

/*** Macros for RESET pin ***/
#define RESET_Set()               (LATDSET = (1<<0))
#define RESET_Clear()             (LATDCLR = (1<<0))
#define RESET_Toggle()            (LATDINV= (1<<0))
#define RESET_OutputEnable()      (TRISDCLR = (1<<0))
#define RESET_InputEnable()       (TRISDSET = (1<<0))
#define RESET_Get()               ((PORTD >> 0) & 0x1)
#define RESET_PIN                  GPIO_PIN_RD0

/*** Macros for BUSY pin ***/
#define BUSY_Set()               (LATDSET = (1<<5))
#define BUSY_Clear()             (LATDCLR = (1<<5))
#define BUSY_Toggle()            (LATDINV= (1<<5))
#define BUSY_OutputEnable()      (TRISDCLR = (1<<5))
#define BUSY_InputEnable()       (TRISDSET = (1<<5))
#define BUSY_Get()               ((PORTD >> 5) & 0x1)
#define BUSY_PIN                  GPIO_PIN_RD5

/*** Macros for RDL pin ***/
#define RDL_Set()               (LATDSET = (1<<6))
#define RDL_Clear()             (LATDCLR = (1<<6))
#define RDL_Toggle()            (LATDINV= (1<<6))
#define RDL_OutputEnable()      (TRISDCLR = (1<<6))
#define RDL_InputEnable()       (TRISDSET = (1<<6))
#define RDL_Get()               ((PORTD >> 6) & 0x1)
#define RDL_PIN                  GPIO_PIN_RD6

/*** Macros for CNV pin ***/
#define CNV_Set()               (LATDSET = (1<<7))
#define CNV_Clear()             (LATDCLR = (1<<7))
#define CNV_Toggle()            (LATDINV= (1<<7))
#define CNV_OutputEnable()      (TRISDCLR = (1<<7))
#define CNV_InputEnable()       (TRISDSET = (1<<7))
#define CNV_Get()               ((PORTD >> 7) & 0x1)
#define CNV_PIN                  GPIO_PIN_RD7

/*** Macros for PGA2SHDNB pin ***/
#define PGA2SHDNB_Set()               (LATFSET = (1<<1))
#define PGA2SHDNB_Clear()             (LATFCLR = (1<<1))
#define PGA2SHDNB_Toggle()            (LATFINV= (1<<1))
#define PGA2SHDNB_OutputEnable()      (TRISFCLR = (1<<1))
#define PGA2SHDNB_InputEnable()       (TRISFSET = (1<<1))
#define PGA2SHDNB_Get()               ((PORTF >> 1) & 0x1)
#define PGA2SHDNB_PIN                  GPIO_PIN_RF1

/*** Macros for PGA2G2B pin ***/
#define PGA2G2B_Set()               (LATESET = (1<<0))
#define PGA2G2B_Clear()             (LATECLR = (1<<0))
#define PGA2G2B_Toggle()            (LATEINV= (1<<0))
#define PGA2G2B_OutputEnable()      (TRISECLR = (1<<0))
#define PGA2G2B_InputEnable()       (TRISESET = (1<<0))
#define PGA2G2B_Get()               ((PORTE >> 0) & 0x1)
#define PGA2G2B_PIN                  GPIO_PIN_RE0

/*** Macros for PGA2G1B pin ***/
#define PGA2G1B_Set()               (LATESET = (1<<1))
#define PGA2G1B_Clear()             (LATECLR = (1<<1))
#define PGA2G1B_Toggle()            (LATEINV= (1<<1))
#define PGA2G1B_OutputEnable()      (TRISECLR = (1<<1))
#define PGA2G1B_InputEnable()       (TRISESET = (1<<1))
#define PGA2G1B_Get()               ((PORTE >> 1) & 0x1)
#define PGA2G1B_PIN                  GPIO_PIN_RE1

/*** Macros for PGA2G0B pin ***/
#define PGA2G0B_Set()               (LATESET = (1<<2))
#define PGA2G0B_Clear()             (LATECLR = (1<<2))
#define PGA2G0B_Toggle()            (LATEINV= (1<<2))
#define PGA2G0B_OutputEnable()      (TRISECLR = (1<<2))
#define PGA2G0B_InputEnable()       (TRISESET = (1<<2))
#define PGA2G0B_Get()               ((PORTE >> 2) & 0x1)
#define PGA2G0B_PIN                  GPIO_PIN_RE2

/*** Macros for PGA1SHDNA pin ***/
#define PGA1SHDNA_Set()               (LATESET = (1<<3))
#define PGA1SHDNA_Clear()             (LATECLR = (1<<3))
#define PGA1SHDNA_Toggle()            (LATEINV= (1<<3))
#define PGA1SHDNA_OutputEnable()      (TRISECLR = (1<<3))
#define PGA1SHDNA_InputEnable()       (TRISESET = (1<<3))
#define PGA1SHDNA_Get()               ((PORTE >> 3) & 0x1)
#define PGA1SHDNA_PIN                  GPIO_PIN_RE3

/*** Macros for PGA1G2A pin ***/
#define PGA1G2A_Set()               (LATESET = (1<<4))
#define PGA1G2A_Clear()             (LATECLR = (1<<4))
#define PGA1G2A_Toggle()            (LATEINV= (1<<4))
#define PGA1G2A_OutputEnable()      (TRISECLR = (1<<4))
#define PGA1G2A_InputEnable()       (TRISESET = (1<<4))
#define PGA1G2A_Get()               ((PORTE >> 4) & 0x1)
#define PGA1G2A_PIN                  GPIO_PIN_RE4


// *****************************************************************************
/* GPIO Port

  Summary:
    Identifies the available GPIO Ports.

  Description:
    This enumeration identifies the available GPIO Ports.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all ports are available on all devices.  Refer to the specific
    device data sheet to determine which ports are supported.
*/

typedef enum
{
    GPIO_PORT_B = 0,
    GPIO_PORT_C = 1,
    GPIO_PORT_D = 2,
    GPIO_PORT_E = 3,
    GPIO_PORT_F = 4,
    GPIO_PORT_G = 5,
} GPIO_PORT;

// *****************************************************************************
/* GPIO Port Pins

  Summary:
    Identifies the available GPIO port pins.

  Description:
    This enumeration identifies the available GPIO port pins.

  Remarks:
    The caller should not rely on the specific numbers assigned to any of
    these values as they may change from one processor to the next.

    Not all pins are available on all devices.  Refer to the specific
    device data sheet to determine which pins are supported.
*/

typedef enum
{
    GPIO_PIN_RB0 = 0,
    GPIO_PIN_RB1 = 1,
    GPIO_PIN_RB2 = 2,
    GPIO_PIN_RB3 = 3,
    GPIO_PIN_RB4 = 4,
    GPIO_PIN_RB5 = 5,
    GPIO_PIN_RB6 = 6,
    GPIO_PIN_RB7 = 7,
    GPIO_PIN_RB8 = 8,
    GPIO_PIN_RB9 = 9,
    GPIO_PIN_RB10 = 10,
    GPIO_PIN_RB11 = 11,
    GPIO_PIN_RB12 = 12,
    GPIO_PIN_RB13 = 13,
    GPIO_PIN_RB14 = 14,
    GPIO_PIN_RB15 = 15,
    GPIO_PIN_RC12 = 28,
    GPIO_PIN_RC13 = 29,
    GPIO_PIN_RC14 = 30,
    GPIO_PIN_RC15 = 31,
    GPIO_PIN_RD0 = 32,
    GPIO_PIN_RD1 = 33,
    GPIO_PIN_RD2 = 34,
    GPIO_PIN_RD3 = 35,
    GPIO_PIN_RD4 = 36,
    GPIO_PIN_RD5 = 37,
    GPIO_PIN_RD6 = 38,
    GPIO_PIN_RD7 = 39,
    GPIO_PIN_RD8 = 40,
    GPIO_PIN_RD9 = 41,
    GPIO_PIN_RD10 = 42,
    GPIO_PIN_RD11 = 43,
    GPIO_PIN_RE0 = 48,
    GPIO_PIN_RE1 = 49,
    GPIO_PIN_RE2 = 50,
    GPIO_PIN_RE3 = 51,
    GPIO_PIN_RE4 = 52,
    GPIO_PIN_RE5 = 53,
    GPIO_PIN_RE6 = 54,
    GPIO_PIN_RE7 = 55,
    GPIO_PIN_RF0 = 64,
    GPIO_PIN_RF1 = 65,
    GPIO_PIN_RF3 = 67,
    GPIO_PIN_RF4 = 68,
    GPIO_PIN_RF5 = 69,
    GPIO_PIN_RG6 = 86,
    GPIO_PIN_RG7 = 87,
    GPIO_PIN_RG8 = 88,
    GPIO_PIN_RG9 = 89,

    /* This element should not be used in any of the GPIO APIs.
       It will be used by other modules or application to denote that none of the GPIO Pin is used */
    GPIO_PIN_NONE = -1

} GPIO_PIN;


void GPIO_Initialize(void);

// *****************************************************************************
// *****************************************************************************
// Section: GPIO Functions which operates on multiple pins of a port
// *****************************************************************************
// *****************************************************************************

uint32_t GPIO_PortRead(GPIO_PORT port);

void GPIO_PortWrite(GPIO_PORT port, uint32_t mask, uint32_t value);

uint32_t GPIO_PortLatchRead ( GPIO_PORT port );

void GPIO_PortSet(GPIO_PORT port, uint32_t mask);

void GPIO_PortClear(GPIO_PORT port, uint32_t mask);

void GPIO_PortToggle(GPIO_PORT port, uint32_t mask);

void GPIO_PortInputEnable(GPIO_PORT port, uint32_t mask);

void GPIO_PortOutputEnable(GPIO_PORT port, uint32_t mask);

// *****************************************************************************
// *****************************************************************************
// Section: GPIO Functions which operates on one pin at a time
// *****************************************************************************
// *****************************************************************************

static inline void GPIO_PinWrite(GPIO_PIN pin, bool value)
{
    GPIO_PortWrite((GPIO_PORT)(pin>>4), (uint32_t)(0x1) << (pin & 0xF), (uint32_t)(value) << (pin & 0xF));
}

static inline bool GPIO_PinRead(GPIO_PIN pin)
{
    return (bool)(((GPIO_PortRead((GPIO_PORT)(pin>>4))) >> (pin & 0xF)) & 0x1);
}

static inline bool GPIO_PinLatchRead(GPIO_PIN pin)
{
    return (bool)((GPIO_PortLatchRead((GPIO_PORT)(pin>>4)) >> (pin & 0xF)) & 0x1);
}

static inline void GPIO_PinToggle(GPIO_PIN pin)
{
    GPIO_PortToggle((GPIO_PORT)(pin>>4), 0x1 << (pin & 0xF));
}

static inline void GPIO_PinSet(GPIO_PIN pin)
{
    GPIO_PortSet((GPIO_PORT)(pin>>4), 0x1 << (pin & 0xF));
}

static inline void GPIO_PinClear(GPIO_PIN pin)
{
    GPIO_PortClear((GPIO_PORT)(pin>>4), 0x1 << (pin & 0xF));
}

static inline void GPIO_PinInputEnable(GPIO_PIN pin)
{
    GPIO_PortInputEnable((GPIO_PORT)(pin>>4), 0x1 << (pin & 0xF));
}

static inline void GPIO_PinOutputEnable(GPIO_PIN pin)
{
    GPIO_PortOutputEnable((GPIO_PORT)(pin>>4), 0x1 << (pin & 0xF));
}


// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif
// DOM-IGNORE-END
#endif // PLIB_GPIO_H
