#include "package.hpp"

#ifndef TWODAY_H
#define TWODAY_H

class TwoDayPackage: public Package {
    private: // access specifier. These attributes can only be accessed within the object itself
        double twoDayFee; // attribute double variable, stores the set twoDayFee

    public:
        TwoDayPackage(Info &s, Info &r, double o, double cpo, double tdf):
            Package(s, r, o, cpo), twoDayFee(tdf) {}

        void GenInvoice() override;
};

#endif