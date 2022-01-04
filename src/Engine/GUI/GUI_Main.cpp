#include "GUI_Main.h"
#include "CGuiMain.h"
#include "MT_API.h"
#include "CConfigStorage.h"

CGuiMain *guiMain = NULL;
CConfigStorage *globalConfig = NULL;

void GUI_Init()
{
	MT_GuiPreInit();
	guiMain = new CGuiMain();
}

void GUI_Render()
{
//	LOGD("GUI_Render");

	guiMain->RenderImGui();
	MT_Render();
}

void GUI_PostRenderEndFrame()
{
	guiMain->PostRenderEndFrame();
	MT_PostRenderEndFrame();
}

// TODO me:

void GUI_ShowVirtualKeyboard() {}
void GUI_HideVirtualKeyboard() {}

void GUI_SetPressConsumed(bool isConsumed) {}

void GUI_LockMutex()
{
	VID_LockRenderMutex();
}

void GUI_UnlockMutex()
{
	VID_UnlockRenderMutex();
}
