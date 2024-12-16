#ifndef CodageBCD_h
#define CodageBCD_h

#include "Conversion.h"


class CodageBCD : public Conversion {


 private:

    int RealiserCodage(int valACoder, unsigned char tailleMots, bool &codageExecute);
};

#endif // CodageBCD_h
