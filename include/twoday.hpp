#include "package.hpp"

#ifndef TWODAY_H 
#define TWODAY_H 

class TwoDayPackage: public Package { // class
    private: // access specifier. These attributes can only be accessed within the object itself
        double twoDayFee; // attribute double variable, stores the set twoDayFee

    public: // user can see TwoDayPackage infos and can access them
        TwoDayPackage(Info &s, Info &r, double o, double cpo, double tdf): // constructors
            Package(s, r, o, cpo), twoDayFee(tdf) {}

        void GenInvoice() override; // generates an invoice for user
};
#endif