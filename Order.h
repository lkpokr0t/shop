#pragma once
#include <string>
#include <iostream>

// Класс Order: отвечает за жизненный цикл заказа, оплату и смену статусов
class Order {
public:
    int orderId;
    double totalPrice;
    std::string status;

    Order(int id, double total)
        : orderId(id), totalPrice(total), status("Новый") {
    }

    bool pay() {
        status = "Оплачен";
        std::cout << "Заказ #" << orderId << " на сумму " << (int)totalPrice << " руб. успешно оплачен покупателем.\n";
        return true;
    }

    void cancel() {
        status = "Отменен";
    }

    void changeStatus(const std::string& newStatus) {
        status = newStatus;
    }
};