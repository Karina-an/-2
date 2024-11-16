#include <iostream>

int main() { int priceProduc = 2750;
           int delivery = 150;
           int discount =435;
           int result = priceProduc + delivery - discount;
           std::cout << "Стоимость продуктов из магазина составила " << priceProduc << " рублей.Плюс доставка до дома " << delivery << " рублей.\n  Так же мы вычли 15% скидки" "(" << discount << " рублей)" ".Итоговая сумма составила " << result << " рублей.Приятных покупок!\n"; }