//#ifdef DS_PCA9536_h
#define DS_PCA9536
#include <Arduino.h>
#include <Wire.h>

#define PCA_ADDRESS 0x41    //Default I2C Address

//Commands
#define INPUT_PORT 0x00     // Input Port register
#define OUTPUT_PORT 0x01    // Output Port register
#define POLARITY_INV 0x02   // Polarity Inversion register
#define CONFIG 0x03         // Configuration register

//Pin Values
#define INPUT 1         // Set pin as an input
#define OUTPUT 0        // Set pin as an output

#define INVERT 1        // Invert pin polarity
#define NORMAL 0        // Normal pin polarity

class PCA9536
{
    public:
        bool begin(void);
        void reset(void);
        bool read(void);
        void write(bool);
        void invert(bool);
        void config(bool);
};

#endif