/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF18456
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set BT_RST aliases
#define BT_RST_TRIS                 TRISAbits.TRISA0
#define BT_RST_LAT                  LATAbits.LATA0
#define BT_RST_PORT                 PORTAbits.RA0
#define BT_RST_WPU                  WPUAbits.WPUA0
#define BT_RST_OD                   ODCONAbits.ODCA0
#define BT_RST_ANS                  ANSELAbits.ANSA0
#define BT_RST_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define BT_RST_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define BT_RST_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define BT_RST_GetValue()           PORTAbits.RA0
#define BT_RST_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define BT_RST_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define BT_RST_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define BT_RST_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define BT_RST_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define BT_RST_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define BT_RST_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define BT_RST_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set GREEN_LED aliases
#define GREEN_LED_TRIS                 TRISAbits.TRISA5
#define GREEN_LED_LAT                  LATAbits.LATA5
#define GREEN_LED_PORT                 PORTAbits.RA5
#define GREEN_LED_WPU                  WPUAbits.WPUA5
#define GREEN_LED_OD                   ODCONAbits.ODCA5
#define GREEN_LED_ANS                  ANSELAbits.ANSA5
#define GREEN_LED_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define GREEN_LED_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define GREEN_LED_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define GREEN_LED_GetValue()           PORTAbits.RA5
#define GREEN_LED_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define GREEN_LED_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define GREEN_LED_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define GREEN_LED_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define GREEN_LED_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define GREEN_LED_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define GREEN_LED_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define GREEN_LED_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set ACC_INT aliases
#define ACC_INT_TRIS                 TRISAbits.TRISA6
#define ACC_INT_LAT                  LATAbits.LATA6
#define ACC_INT_PORT                 PORTAbits.RA6
#define ACC_INT_WPU                  WPUAbits.WPUA6
#define ACC_INT_OD                   ODCONAbits.ODCA6
#define ACC_INT_ANS                  ANSELAbits.ANSA6
#define ACC_INT_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define ACC_INT_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define ACC_INT_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define ACC_INT_GetValue()           PORTAbits.RA6
#define ACC_INT_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define ACC_INT_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define ACC_INT_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define ACC_INT_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define ACC_INT_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define ACC_INT_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define ACC_INT_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define ACC_INT_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set BT_MODE aliases
#define BT_MODE_TRIS                 TRISAbits.TRISA7
#define BT_MODE_LAT                  LATAbits.LATA7
#define BT_MODE_PORT                 PORTAbits.RA7
#define BT_MODE_WPU                  WPUAbits.WPUA7
#define BT_MODE_OD                   ODCONAbits.ODCA7
#define BT_MODE_ANS                  ANSELAbits.ANSA7
#define BT_MODE_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define BT_MODE_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define BT_MODE_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define BT_MODE_GetValue()           PORTAbits.RA7
#define BT_MODE_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define BT_MODE_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define BT_MODE_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define BT_MODE_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define BT_MODE_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define BT_MODE_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define BT_MODE_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define BT_MODE_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SPI_SS_EXT_DEVICE aliases
#define SPI_SS_EXT_DEVICE_TRIS                 TRISCbits.TRISC0
#define SPI_SS_EXT_DEVICE_LAT                  LATCbits.LATC0
#define SPI_SS_EXT_DEVICE_PORT                 PORTCbits.RC0
#define SPI_SS_EXT_DEVICE_WPU                  WPUCbits.WPUC0
#define SPI_SS_EXT_DEVICE_OD                   ODCONCbits.ODCC0
#define SPI_SS_EXT_DEVICE_ANS                  ANSELCbits.ANSC0
#define SPI_SS_EXT_DEVICE_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SPI_SS_EXT_DEVICE_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SPI_SS_EXT_DEVICE_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SPI_SS_EXT_DEVICE_GetValue()           PORTCbits.RC0
#define SPI_SS_EXT_DEVICE_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SPI_SS_EXT_DEVICE_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SPI_SS_EXT_DEVICE_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SPI_SS_EXT_DEVICE_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SPI_SS_EXT_DEVICE_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SPI_SS_EXT_DEVICE_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SPI_SS_EXT_DEVICE_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define SPI_SS_EXT_DEVICE_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetPullup()             do { WPUCbits.WPUC1 = 1; } while(0)
#define RC1_ResetPullup()           do { WPUCbits.WPUC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set BT_RX_IND aliases
#define BT_RX_IND_TRIS                 TRISCbits.TRISC6
#define BT_RX_IND_LAT                  LATCbits.LATC6
#define BT_RX_IND_PORT                 PORTCbits.RC6
#define BT_RX_IND_WPU                  WPUCbits.WPUC6
#define BT_RX_IND_OD                   ODCONCbits.ODCC6
#define BT_RX_IND_ANS                  ANSELCbits.ANSC6
#define BT_RX_IND_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define BT_RX_IND_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define BT_RX_IND_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define BT_RX_IND_GetValue()           PORTCbits.RC6
#define BT_RX_IND_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define BT_RX_IND_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define BT_RX_IND_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define BT_RX_IND_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define BT_RX_IND_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define BT_RX_IND_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define BT_RX_IND_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define BT_RX_IND_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF6 pin functionality
 * @Example
    IOCAF6_ISR();
 */
void IOCAF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_InterruptHandler);

*/
extern void (*IOCAF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_DefaultInterruptHandler);

*/
void IOCAF6_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF7 pin functionality
 * @Example
    IOCAF7_ISR();
 */
void IOCAF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF7_SetInterruptHandler() method.
    This handler is called every time the IOCAF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(IOCAF7_InterruptHandler);

*/
extern void (*IOCAF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF7_SetInterruptHandler() method.
    This handler is called every time the IOCAF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(IOCAF7_DefaultInterruptHandler);

*/
void IOCAF7_DefaultInterruptHandler(void);
typedef union {
    struct {
        unsigned ACC : 1;
        unsigned UNDEFINED : 7;
    };
    uint8_t INTERRUPTbits;
}INTERRUPTbits_t;

volatile INTERRUPTbits_t INTERRUPTbits;


#define ACC_INTERRUPT_SetHigh()         (INTERRUPTbits.ACC = 1) 
#define ACC_INTERRUPT_SetLow()          (INTERRUPTbits.ACC = 0) 
#define ACC_INTERRUPT_Toggle()          (INTERRUPTbits.ACC = ~INTERRUPTbits.ACC)
#define ACC_INTERRUPT_GetValue()        (INTERRUPTbits.ACC)
#define ACC_Interrupt_is_high()         (INTERRUPTbits.ACC == 1)

#endif // PIN_MANAGER_H
/**
 End of File
*/