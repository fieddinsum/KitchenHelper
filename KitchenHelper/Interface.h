#include"DataBase.h"

#include"FrontImage .h"
#include"PlanManager.h"



class Interface{
private:

	FrontImage frontImage;		//ó�� �̹����� ����ϴ� Ŭ����
	DataBase dataBase;			// ������������ ����ִ� Ŭ����
	PlanManager planmanager;		// ��ü ���� ������ ����ִ� Ŭ����

	void showTodayInformation();	//������ ��ȹ(����,�Ĵ�)�� �����ִ� Ŭ����

	void showDayPlan();		// Ư����¥�� ��ȹ�� �����ִ� �żҵ�
	void editDayPlan();		// Ư����¥�� ��ȹ�� �����ϴ� �żҵ�
	void editDayPlan(const char* dishName);	//Ư�� �丮�̸��� �޾�, Ư����¥�� �Ĵ��� �����ϴ� �żҵ� 

public:
	
	Interface(){}		//�������̽� ������ 
	void showFrontMenu();	//ó�� �޴��� �����ִ� �Լ� (1��~8��)


};