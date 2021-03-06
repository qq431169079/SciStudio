// Borland C++ Builder
// Copyright (c) 1995, 1999 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SynEditKeyCmdsEditor.pas' rev: 5.00

#ifndef SynEditKeyCmdsEditorHPP
#define SynEditKeyCmdsEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <StdCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <SynEditKeyCmds.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Syneditkeycmdseditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSynEditKeystrokesEditorForm;
class PASCALIMPLEMENTATION TSynEditKeystrokesEditorForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Comctrls::TListView* KeyCmdList;
	Stdctrls::TButton* btnAdd;
	Stdctrls::TButton* btnEdit;
	Stdctrls::TButton* btnDelete;
	Stdctrls::TButton* btnOK;
	Stdctrls::TButton* btnCancel;
	Stdctrls::TButton* btnClear;
	Stdctrls::TButton* btnReset;
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall btnAddClick(System::TObject* Sender);
	void __fastcall btnEditClick(System::TObject* Sender);
	void __fastcall btnDeleteClick(System::TObject* Sender);
	void __fastcall btnResetClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall btnClearClick(System::TObject* Sender);
	
private:
	Syneditkeycmds::TSynEditKeyStrokes* FKeystrokes;
	void __fastcall SetKeystrokes(const Syneditkeycmds::TSynEditKeyStrokes* Value);
	void __fastcall UpdateKeystrokesList(void);
	HIDESBASE MESSAGE void __fastcall WMGetMinMaxInfo(Messages::TWMGetMinMaxInfo &Msg);
	
public:
	__fastcall virtual TSynEditKeystrokesEditorForm(Classes::TComponent* AOwner);
	__fastcall virtual ~TSynEditKeystrokesEditorForm(void);
	__property Syneditkeycmds::TSynEditKeyStrokes* Keystrokes = {read=FKeystrokes, write=SetKeystrokes}
		;
public:
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSynEditKeystrokesEditorForm(Classes::TComponent* 
		AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TSynEditKeystrokesEditorForm(HWND ParentWindow) : 
		Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Syneditkeycmdseditor */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Syneditkeycmdseditor;
#endif
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SynEditKeyCmdsEditor
