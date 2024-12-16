#ifndef CodageBCD_h
#define CodageBCD_h

#include "Codage.h"


class CodageBCD : public ::Codage {


 private:

    bool RealiserCodage(signed char valACoder[2], unsigned char tailleMots);
};

#endif // CodageBCD_h
