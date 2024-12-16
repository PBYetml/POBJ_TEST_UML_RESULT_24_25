#ifndef Conversion_h
#define Conversion_h

#include "Codage.h"


class Conversion {

 public:

    virtual void AfficherResultat();

    virtual void RetournerValeur(e_ChoixCodage choixUtilisateur);

 protected:

    virtual bool Convertir(signed short int valAConvertir, unsigned char format);

 public:
    unsigned char tailleMotAConvenir;
    signed short int valeurAConvertir;
    bool codage;

 public:

    /**
     * @element-type Codage
     */
    ::Codage &myCodage;

    /**
     * @element-type Codage
     */
    ::Codage &myCodage;
};

#endif // Conversion_h
