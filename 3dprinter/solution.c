#include <math.h>
#include <stdint.h>
#include <stdio.h>

int main()
{   
    uint16_t availableSlots;
    uint16_t n;  // 2^32 - 1 = 65 535

    uint8_t nrOfDays = 0;  // 2^8 - 1 = 255
    uint16_t nrOfPrintedStatues = 0;
    uint16_t nrOfPrinters = 1;

    scanf("%hu", &n);
    
    while (nrOfPrintedStatues < n) {
        availableSlots = nrOfPrinters;

        while (ceil((double)n / (double)nrOfPrinters) > 2 && availableSlots != 0) {
            nrOfPrinters += 1;
            availableSlots -= 1;
        }
        
        nrOfPrintedStatues += availableSlots;
        nrOfDays += 1;
    }

    printf("%hu", nrOfDays);
    return 0;
}
