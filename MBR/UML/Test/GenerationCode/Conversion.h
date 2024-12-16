#ifndef Conversion_h
#define Conversion_h


class Conversion {


 protected:

    virtual int RealiserCodage(int valACoder, unsigned char tailleMots, bool &codageExecute);

 public:
    e_choixCodage choixCode;
    long valeurCodee;

 public:

    /**
     * @element-type e_choixCodage
     */
    e_choixCodage *mye_choixCodage;
};

#endif // Conversion_h
