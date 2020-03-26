import math
import sys

n = int(sys.stdin.readline())

nrOfDays = 0
nrOfPrintedStatues = 0
nrOfPrinters = 1

while nrOfPrintedStatues < n:
    availableSlots = nrOfPrinters

    while math.ceil(n / nrOfPrinters) > 2 and availableSlots != 0:
        nrOfPrinters += 1
        availableSlots -= 1

    nrOfPrintedStatues += availableSlots
    nrOfDays += 1

print(nrOfDays)
