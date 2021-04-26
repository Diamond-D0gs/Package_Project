#include "package.hpp"

#ifndef OVERNIGHT_H
#define OVERNIGHT_H

class OvernightPackage: public Package {
    private:
        double overnightFee;

    public:
        OvernightPackage(Info &s, Info &r, double o, double cpo, double onf):
            Package(s, r, o, cpo), overnightFee(onf) {}

        void GenInvoice() override;
};

#endif