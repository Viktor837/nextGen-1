#pragma once

#include "Money.h"

class Payment
{
private:
	Money amount; //��������� ����������
public:
	Payment(Money cachTendered); //��������� 
//� ����������(����������) cachTendered ���� Money
	Money getAmount();
	// ������� getAmount ���������� ��������� ���� Money
};

