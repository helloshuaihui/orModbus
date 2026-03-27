// orSend.cpp: 定义应用程序的入口点。
//
#include "orSend.h"
using namespace std;
using namespace TCP;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	ModbusTcp modbusTcp;
	ModbusTcpInfo a("127.0.0.1", 502);
	//读写案例
	RegisterBuf msg1(500, BuffType::D_UINT16, ByteSequence::CDAB);
	RegisterBuf msg2(502, BuffType::D_UINT16, ByteSequence::CDAB);
	modbusTcp.readRegister(a,msg1);
	modbusTcp.readRegister(a, msg2);
	cout << msg1.uint16Buf << endl;
	return 0;
}