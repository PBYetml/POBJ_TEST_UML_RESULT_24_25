#ifndef ConversionHexadecimale_h
#define ConversionHexadecimale_h

#include "Conversion.h"


class ConversionHexadecimale : public Conversion {


 private:

    int Convertir(long valAConvertir, unsigned char format, bool &conversionOk);
};

#endif // ConversionHexadecimale_h
