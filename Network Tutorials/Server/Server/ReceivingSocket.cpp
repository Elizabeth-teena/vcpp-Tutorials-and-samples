// ReceivingSocket.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "ReceivingSocket.h"


// CReceivingSocket

CReceivingSocket::CReceivingSocket()
{
}

CReceivingSocket::~CReceivingSocket()
{
}


// CReceivingSocket member functions


void CReceivingSocket::OnReceive(int nErrorCode)
{
	char strRec[256] = "";
	Receive(strRec, 256);
	((CServerApp*)AfxGetApp())->m_pServerView->AddMsg(strRec);
	CSocket::OnReceive(nErrorCode);
}
