#ifndef ConversionBinaire_h
#define ConversionBinaire_h

#include "Conversion.h"


class ConversionBinaire : public Conversion {


 private:

    int Convertir(double valAConvertir, unsigned char format, bool &conversionOk);
};

#endif // ConversionBinaire_h
