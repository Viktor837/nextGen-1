#include "Payment.h"

Payment::Payment(Money cachTendered) {
//����������� ������ Payment
	amount = cachTendered;
//��������� � ��������� ���������� amount 
//����� ��������
}

Money Payment::getAmount() {
	return amount;
}