/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF18456
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "main.h"



/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    //    while (1) {
    //        // Add your application code
    //        if (pushed) {
    //            pushed = false;
    //            sendSpiReadRequest = true;
    //        }
    //        if (sendSpiReadRequest) {
    //            send_spi_read();
    //        }
    //    }
    RN487X_Init();
    LIGHTBLUE_Initialize();
    while (1) {
        if (RN487X_IsConnected() == true) {
            service_acceleremoterInterrupt();
            if (TIMER_FLAG_SET() == true) {
                RESET_TIMER_INTERRUPT_FLAG;

                LIGHTBLUE_TemperatureSensor();
                LIGHTBLUE_AccelSensor();
                LIGHTBLUE_PushButton();
                LIGHTBLUE_LedState();
                LIGHTBLUE_SendProtocolVersion();
            } else {
                while (RN487X_DataReady()) {
                    LIGHTBLUE_ParseIncomingPacket(RN487X_Read());
                }
                while (uart[UART_CDC].DataReady()) {
                    lightBlueSerial[serialIndex] = uart[UART_CDC].Read();
                    if ((lightBlueSerial[serialIndex] == '\r')
                            || (lightBlueSerial[serialIndex] == '\n')
                            || (serialIndex == (sizeof (lightBlueSerial) - 1))) {
                        lightBlueSerial[serialIndex] = '\0';
                        LIGHTBLUE_SendSerialData(lightBlueSerial);
                        serialIndex = 0;
                    } else {
                        serialIndex++;
                    }
                }

            }
        } else {
            while (RN487X_DataReady()) {
                uart[UART_CDC].Write(RN487X_Read());
            }
            while (uart[UART_CDC].DataReady()) {
                RN487X.Write(uart[UART_CDC].Read());
            }
        }
    }
//    return 0;
}

void service_acceleremoterInterrupt(void) {
    if (ACC_Interrupt_is_high()) {
        ACC_INTERRUPT_SetLow();
        accelerometerInterruptBits.FLAT = 1;
        flats++;
        if (flats > 1) {
            LIGHTBLUE_AccState();
            flats = 0;
            accelerometerInterruptBits.FLAT = 0;
        }
    }
}

void send_spi_read(void) {
    static uint8_t data[4];
    SPI_SS_EXT_DEVICE_SetLow();
    if (SPI2_Open(0)) {
        SPI2_ReadBlock(data, 4);
        SPI_SS_EXT_DEVICE_SetHigh();
        SPI2_Close();
        sendSpiReadRequest = false;

    }
}
/**
 End of File
 */