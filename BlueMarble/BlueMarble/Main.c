#include <stdio.h>
#include "Framework/App.h"

int main(void) {
	// 1. ���α׷� �ʱ�ȭ
	if (false == App_Init()) {
		puts("�� �ʱ�ȭ�� �����߽��ϴ�.");

		return 1;
	}

	// 2. ���α׷� ����
	return App_Run();
}