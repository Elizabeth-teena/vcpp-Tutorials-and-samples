// ServerSocket.cpp : implementation file
//

#include "stdafx.h"
#include "Server.h"
#include "ServerSocket.h"
#include "ReceivingSocket.h"

// CServerSocket
CServerSocket::CServerSocket()
{
}

CServerSocket::~CServerSocket()
{
}


// CServerSocket member functions

CReceivingSocket m_RecevingSocket;
void CServerSocket::OnAccept(int nErrorCode)
{
	((CServerApp*)AfxGetApp())->m_pServerView->AddMsg("Connection Successfull");
	Accept(m_RecevingSocket);
	CSocket::OnAccept(nErrorCode);
}


void CServerSocket::OnReceive(int nErrorCode)
{
	AfxMessageBox("Data Received");
	CSocket::OnReceive(nErrorCode);
}
