#ifndef MONEYOPERATION_H
#define MONEYOPERATION_H

#define REFILL          1       // пополнение счета
#define WITHDRAWAL      2       // снятие со счета

class MoneyOperation {
    private:
        unsigned int _id;       // поле в таблице для осуществления операций crud

        char _type;             // тип операции REFILL/WITHDRAWAL
        double _amount;         // сумма операции
    public:

};

#endif