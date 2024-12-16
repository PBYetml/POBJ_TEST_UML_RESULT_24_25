#ifndef ConversionBinaire_h
#define ConversionBinaire_h

#include "Conversion.h"


class ConversionBinaire : public Conversion {


 private:

    bool Convertir(signed long int valAConvertir, unsigned char format);
};

#endif // ConversionBinaire_h
