
// MFCLabeler.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCLabelerApp: 
// �йش����ʵ�֣������ MFCLabeler.cpp
//

class CMFCLabelerApp : public CWinApp
{
public:
	CMFCLabelerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCLabelerApp theApp;