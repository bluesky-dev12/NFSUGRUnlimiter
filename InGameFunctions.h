#pragma once

#include "stdio.h"
#include <windows.h>
#include "GlobalVariables.h"

unsigned int(__thiscall* CustomizeCategoryScreen_AddCustomOption)(void* TheThis, const char* Package, unsigned int TextureHash, unsigned int LanguageHash, unsigned int BrandID) = (unsigned int(__thiscall*)(void*, const char*, unsigned int, unsigned int, unsigned int))0x7BB560;
unsigned int(__thiscall* IconScrollerMenu_AddOption)(void* TheThis, DWORD* IconOption) = (unsigned int(__thiscall*)(void*, DWORD*))0x573960;
char(*CustomizeIsInBackRoom)() = (char(*)())0x575B00;
int(*CarCustomizeManager_IsCareerMode)() = (int(*)())0x7A56C0;
int(*GetCurrentLanguage)() = (int(*)())0x56BB20;
bool(*CustomizeSetInParts)(bool IsInParts) = (bool(*)(bool))0x575B50;
bool(*CustomizeSetInPerformance)(bool IsInPerformance) = (bool(*)(bool))0x575B30;
void* (*j_malloc)(size_t) = (void* (*)(size_t))0x652AD0;
unsigned int(__thiscall* IconOption_Create)(void* MenuItemPtr, DWORD IconTextureHash, DWORD NameStringHash, DWORD unknown) = (unsigned int(__thiscall*)(void*, DWORD, DWORD, DWORD))0x586FA0;
unsigned int(*bStringHash)(char* StringToHash) = (unsigned int(*)(char*))0x460BF0;
unsigned int(*bStringHash2)(char* StringToHash, unsigned int HashToStart) = (unsigned int(*)(char*, unsigned int))0x460C20;
unsigned int(*FEngHashString)(const char* format, ...) = (unsigned int(*)(const char*, ...))0x573140;
char* (*GetCarTypeName)(int CarTypeID) = (char* (*)(int))0x668370;
int(__thiscall* FECarRecord_GetType)(void* FECarRecord) = (int(__thiscall*)(void*))0x5816B0;
bool(__thiscall* CarPart_HasAppliedAttribute)(void* CarPart, unsigned int AttributeHash) = (bool(__thiscall*)(void*, unsigned int))0x747A50;
void*(__thiscall* CarPart_GetAttribute)(void* CarPart, unsigned int AttributeHash, void* Previous) = (void*(__thiscall*)(void*, unsigned int, void*))0x739730;
unsigned int(__thiscall* CarPart_GetAppliedAttributeIParam)(void* CarPart, unsigned int AttributeHash, int ValueIfNotFound) = (unsigned int(__thiscall*)(void*, unsigned int, int))0x747AC0;
unsigned int(__thiscall* CarPart_GetAppliedAttributeUParam)(void* CarPart, unsigned int AttributeHash, int ValueIfNotFound) = (unsigned int(__thiscall*)(void*, unsigned int, int))0x747AE0;
//int(__thiscall* CustomizeSub_SetupPerformance)(void* CustomizeSub) = (int(__thiscall*)(void*))0x7BBFD0;
//int(__thiscall* CustomizeSub_SetupDecalPositions)(void* CustomizeSub) = (int(__thiscall*)(void*))0x7BCBB0;
int(__thiscall* CustomizeSub_SetupRimBrands_Game)(void* CustomizeSub) = (int(__thiscall*)(void*))0x7BC3C0;
int(__thiscall* CustomizeSub_SetupVinylGroups_Game)(void* CustomizeSub) = (int(__thiscall*)(void*))0x7BC730;
//int(__thiscall* CustomizeSub_SetupDecalLocations)(void* CustomizeSub) = (int(__thiscall*)(void*))0x7BCA60;
int(__thiscall* CustomizeSub_GetRimBrandIndex_Game)(void* CustomizeSub, DWORD WheelManufacturerHash) = (int(__thiscall*)(void*, DWORD))0x7A6490;
int(__thiscall* CustomizeSub_RefreshHeader)(void* CustomizeSub) = (int(__thiscall*)(void*))0x7B1070;
unsigned int(__thiscall* CarPartDatabase_NewGetCarPart)(DWORD* CarPartDB, int CarTypeID, int CarSlotID, int CarPartNameHash, int PreviousPart, int UpgradeLevel) = (unsigned int(__thiscall*)(DWORD*, int, int, int, int, int))0x747C40;
unsigned int(__thiscall* CarPartDatabase_NewGetNumCarParts)(DWORD* CarPartDB, int CarTypeID, int CarSlotID, int CarPartNameHash, int UpgradeLevel) = (unsigned int(__thiscall*)(DWORD*, int, int, int, int))0x751670;
int(__thiscall* CarPartDatabase_GetCarType)(DWORD* CarPartDB, unsigned int CarTypeNameHash) = (int(__thiscall*)(DWORD*, unsigned int))0x7398D0;
WORD(__thiscall* CarPartDatabase_GetPartIndex)(DWORD* CarPartDB, DWORD* CarPart) = (WORD(__thiscall*)(DWORD*, DWORD*))0x747BB0;
void(__thiscall* RideInfo_Init)(DWORD* RideInfo, int CarType, int CarRenderUsage, int unk1, int unk2) = (void(__thiscall*)(DWORD*, int, int, int, int))0x739A70;
bool(__thiscall* RideInfo_UpdatePartsEnabled)(DWORD* RideInfo) = (bool(__thiscall*)(DWORD*))0x7517D0;
int(__thiscall* Attrib_Instance_dtInstance)(DWORD* Attrib) = (int(__thiscall*)(DWORD*))0x45A430;
int(__thiscall* RideInfo_SetStockParts_Game)(void* RideInfo) = (int(__thiscall*)(void*))0x7594A0;
int(__thiscall* RideInfo_SetUpgradePart)(DWORD* RideInfo, int CarSlotID, int UpgradeLevel) = (int(__thiscall*)(DWORD*, int, int))0x759470;
int(__thiscall* PursuitBoard_SetNumCopsDestroyed_Game)(DWORD* PursuitBoard, int NumberOfCopsDestroyed, unsigned int PVehicleHash, int ComboMultiplier, int BountyAward) = (int(__thiscall*)(DWORD*, int, unsigned int, int, int))0x595AF0;
unsigned int(*stringhash32)(char* StringToHash) = (unsigned int(*)(char*))0x5CC240;
char* (*GetLocalizedString)(unsigned int StringHash) = (char* (*)(unsigned int))0x56BC10;
DWORD*(__thiscall* LocalPlayer_GetHud)(DWORD* LocalPlayer) = (DWORD*(__thiscall*)(DWORD*))0x6F8F10;
int(*IGenericMessage_IHandle)() = (int(*)())0x5650B0;
DWORD* (__thiscall* UTL_COM_Object__IList_Find)(DWORD* LocalPlayer, void*) = (DWORD * (__thiscall*)(DWORD*, void*))0x5D59F0;
int(__thiscall* GenericMessage_RequestGenericMessage)(DWORD*, const char* MessageString, char Unkc, int Unk1, int IconTextureHash, int Type, int Priority) = (int(__thiscall*)(DWORD*, const char*, char, int, int, int, int))0x568030;
int(__cdecl* bSNPrintf)(char*, int, char const*, ...) = (int(__cdecl*)(char*, int, char const*, ...))0x4647E0;
int(*bRandom)(int Max) = (int(*)(int))0x45DA30;
bool(*DoesStringExist)(unsigned int StringHash) = (bool(*)(unsigned int))0x56BC00;
int(__cdecl* bStrCmp)(char*, char*) = (int(__cdecl*)(char*,char*))0x460D20;
int(__cdecl* bStrICmp)(char*, char*) = (int(__cdecl*)(char*,char*))0x460DD0;
int(__thiscall* CarPartModelTable_GetModelNameHash)(DWORD* _this, int model_num, int a4, int LOD) = (int(__thiscall*)(DWORD*, int, int, int))0x7397D0;
int(__thiscall* CarPart_GetBrandName)(DWORD* CarPart) = (int(__thiscall*)(DWORD*))0x74D070;
int(__thiscall* CarPart_GetCarTypeNameHash)(DWORD* CarPart) = (int(__thiscall*)(DWORD*))0x739860;
DWORD* (*GetCarTypeInfoFromHash)(int CarTypeNameHash) = (DWORD* (*)(int))0x739940;
int(*UsedCarTextureAddToTable)(DWORD* UsedCarTextureInfo, int NumTextures, int MaxTextures, int TextureHash) = (int(*)(DWORD*, int, int, int))0x739E90;
int(__thiscall* CarPart_GetTextureNameHash)(DWORD* CarPart) = (int(__thiscall*)(DWORD*))0x74D0D0;
bool(__thiscall* EasterEggs_IsEasterEggUnlocked)(DWORD* EasterEggs, int EasterEggID) = (bool(__thiscall*)(DWORD*, int))0x6530A0;
DWORD*(__thiscall* CarCustomizeManager_GetStockCarPart)(DWORD* CarCustomizeManager, int CarSlotID) = (DWORD*(__thiscall*)(DWORD*, int))0x7A4B10;
DWORD*(__thiscall* CarCustomizeManager_GetActivePartFromSlot)(DWORD* CarCustomizeManager, int CarSlotID) = (DWORD*(__thiscall*)(DWORD*, int))0x7AED20;
DWORD*(__thiscall* CarCustomizeManager_GetCarPartList)(DWORD* CarCustomizeManager, int CarSlotID, DWORD* PartList, DWORD unk) = (DWORD*(__thiscall*)(DWORD*, int, DWORD*, DWORD))0x7AF4F0;
DWORD*(__thiscall* CarCustomizeManager_GetPerformancePartsList)(DWORD* CarCustomizeManager, int PhysicsUpgradeType, DWORD* PartList) = (DWORD*(__thiscall*)(DWORD*, int, DWORD*))0x7AF8D0;
DWORD(__thiscall* CarCustomizeManager_GetUnlockHash)(DWORD* CarCustomizeManager, int MenuID, int unk) = (DWORD(__thiscall*)(DWORD*, int, int))0x7B5EF0;
float(__thiscall* CarCustomizeManager_GetPerformanceRating)(DWORD* CarCustomizeManager, int ePerformanceRatingType, bool unk) = (float(__thiscall*)(DWORD*, int, bool))0x7AF220;
int(__thiscall* CarCustomizeManager_GetMaxPackages)(DWORD* CarCustomizeManager, int PhysicsUpgradeType) = (int(__thiscall*)(DWORD*, int))0x7A4D40;
bool(__thiscall* CarCustomizeManager_IsPartInstalled)(DWORD* CarCustomizeManager, DWORD* SelectablePart) = (bool(__thiscall*)(DWORD*, DWORD*))0x7A4DF0;
bool(__thiscall* CarCustomizeManager_IsJunkmanInstalled)(DWORD* CarCustomizeManager, int PhysicsUpgradeType) = (bool(__thiscall*)(DWORD*, int))0x7A4CD0;
bool(__thiscall* CarCustomizeManager_IsPartLocked)(DWORD* CarCustomizeManager, DWORD* SelectablePart, int Unk) = (bool(__thiscall*)(DWORD*, DWORD*, int))0x7A4E50;
int(__thiscall* CarCustomizeManager_IsPartInCart)(DWORD* CarCustomizeManager, DWORD* SelectablePart) = (int(__thiscall*)(DWORD*, DWORD*))0x7AECA0;
int(__thiscall* CarCustomizeManager_IsPartTypeInCart)(DWORD* CarCustomizeManager, DWORD* SelectablePart) = (int(__thiscall*)(DWORD*, DWORD*))0x7AEB90;
int(__thiscall* CarCustomizeManager_IsPartTypeInCart_ID)(DWORD* CarCustomizeManager, int CarSlotID) = (int(__thiscall*)(DWORD*, int))0x7AEC00;
DWORD*(__thiscall* CarCustomizeManager_GetInstalledCarPart)(DWORD* CarCustomizeManager, int CarSlotID) = (DWORD*(__thiscall*)(DWORD*, int))0x7A4B80;
void(__thiscall* CarCustomizeManager_AddToCart)(DWORD* CarCustomizeManager, DWORD* SelectablePart) = (void(__thiscall*)(DWORD*, DWORD*))0x7B5870;
void(__thiscall* CarCustomizeManager_RemoveFromCart)(DWORD* CarCustomizeManager, DWORD* SelectablePart) = (void(__thiscall*)(DWORD*, DWORD*))0x7AEB60;
DWORD* (__thiscall* FEPlayerCarDB_GetCustomizationRecordByHandle)(DWORD* FEPlayerCarDB, BYTE FECarRecordID) = (DWORD * (__thiscall*)(DWORD*, BYTE))0x56F100;
DWORD*(__thiscall* FECustomizationRecord_GetInstalledPart)(DWORD* FECustomizationRecord, int FECarType, int CarSlotID) = (DWORD * (__thiscall*)(DWORD*, int, int))0x56F250;
void(__thiscall* FECustomizationRecord_BecomePreset)(DWORD* FECustomizationRecord, BYTE* PresetCar) = (void (__thiscall*)(DWORD*, BYTE*))0x56F340;
int(__thiscall* IconScrollerMenu_SetInitialOption)(DWORD* IconScrollerMenu, int Option) = (int(__thiscall*)(DWORD*, int))0x50E7F0;
unsigned int(__thiscall* cFEng_QueuePackageMessage)(void* TheThis, unsigned int Message, const char* Package, unsigned int FEObject) = (unsigned int(__thiscall*)(void*, unsigned int, const char*, unsigned int))0x516C90;
void(__thiscall* cFEng_QueuePackageSwitch)(DWORD* cFEng, char const* Package, DWORD Arg1, DWORD Arg2, bool bUnk) = (void(__thiscall*)(DWORD*, const char*, DWORD, DWORD, bool))0x525940;
bool(__thiscall* FEPackage_Startup)(DWORD* FEPackage, DWORD* FEGameInterface) = (bool(__thiscall*)(DWORD*, DWORD*))0x5BC4D0;
DWORD*(__thiscall* FEPackage_FindObjectByHash)(DWORD* FEPackage, unsigned int ObjectHash) = (DWORD*(__thiscall*)(DWORD*, unsigned int))0x5B8550;
DWORD*(__thiscall* FEObject_Clone)(DWORD* FEObject, bool) = (DWORD*(__thiscall*)(DWORD*, bool))0x5C3470;
DWORD*(__thiscall* FEGroup_Clone)(DWORD* FEGroup, bool) = (DWORD*(__thiscall*)(DWORD*, bool))0x5C49C0;
void(__thiscall* FEMinList_AddNode)(DWORD* FEMinList, DWORD* FEMinNode, DWORD* FEObject) = (void(__thiscall*)(DWORD*, DWORD*, DWORD*))0x5B2160;
int(__cdecl* FEPrintf)(const char* pkg_name, unsigned int obj_hash, const char* format, ...) = (int(__cdecl*)(const char*, unsigned int, const char*, ...))0x5252D0;
int(__cdecl* FEPrintf_obj)(DWORD* obj, const char* format, ...) = (int(__cdecl*)(DWORD*, const char*, ...))0x515D70;
DWORD* (__cdecl* FEngFindObject)(const char* pkg_name, unsigned int obj_hash) = (DWORD * (__cdecl*)(const char*, unsigned int))0x524850;
DWORD* (__cdecl* FEngFindImage)(const char* pkg_name, unsigned int obj_hash) = (DWORD * (__cdecl*)(const char*, unsigned int))0x5251A0;
DWORD* (__cdecl* FEngFindString)(const char* pkg_name, unsigned int obj_hash) = (DWORD * (__cdecl*)(const char*, unsigned int))0x5251E0;
DWORD* (__cdecl* FEngSetInvisible)(DWORD* obj) = (DWORD * (__cdecl*)(DWORD*))0x514C70;
DWORD* (__cdecl* FEngSetVisible)(DWORD* obj) = (DWORD * (__cdecl*)(DWORD*))0x514CC0;
void(__thiscall* CustomizationScreen_RefreshHeader)(DWORD* CustomizationScreen) = (void(__thiscall*)(DWORD*))0x7B1620;
void(__thiscall* CustomizationScreen_PlayLocked)(DWORD* CustomizationScreen) = (void(__thiscall*)(DWORD*))0x7AA320;
int(__thiscall* bList_TraversebList)(DWORD* bList, DWORD* bNode) = (int(__thiscall*)(DWORD*, DWORD*))0x45D3A0;
void(__thiscall* CarCustomizeManager_PreviewPart)(DWORD* CarCustomizeManager, int CarSlotID, DWORD* CarPart) = (void(__thiscall*)(DWORD*, int, DWORD*))0x7AF110;
void(__thiscall* CarCustomizeManager_PreviewPerfPkg)(DWORD* CarCustomizeManager, int PackageType, int PackageLevel) = (void(__thiscall*)(DWORD*, int, int))0x7A4BC0;
char* (__thiscall* CarPart_GetName)(DWORD* CarPart) = (char*(__thiscall*)(DWORD*))0x739850;
void (__cdecl* FEngSetLanguageHash)(const char* pkg_name, unsigned int obj_hash, unsigned int LanguageHash) = (void (__cdecl*)(const char*, unsigned int, unsigned int))0x525220;
void (__cdecl* FEngSetLanguageHash_obj)(DWORD* FEString, unsigned int LanguageHash) = (void (__cdecl*)(DWORD*, unsigned int))0x515C00;
void(__thiscall* FEPackage_BuildMouseObjectStateList)(DWORD*) = (void(__thiscall*)(DWORD*))0x5B88F0;
void(__thiscall* FEPackage_ConnectObjectResources)(DWORD*) = (void(__thiscall*)(DWORD*))0x5B87E0;
void(__thiscall* RideInfo_SetRandomParts_Game)(DWORD* RideInfo) = (void(__thiscall*)(DWORD*))0x75B220;
void(__thiscall* RideInfo_SetRandomPart)(DWORD* RideInfo, int CarSlotID, int upgrade_level) = (void(__thiscall*)(DWORD*, int, int))0x7596E0;
int(__cdecl* Physics_Upgrades_GetMaxLevel)(DWORD* PVehicle, int UpgradeType) = (int(__cdecl*)(DWORD*, int))0x672E80;
int(__cdecl* Physics_Upgrades_CanInstallJunkman)(DWORD* PVehicle, int UpgradeType) = (int(__cdecl*)(DWORD*, int))0x677FE0;
//DWORD(__thiscall* FEShoppingCartItem_GetPerfPkgLevelHash_Game)(DWORD* FEShoppingCartItem, int UpgradeLevel) = (DWORD(__thiscall*)(DWORD*, int))0x7A5EE0;
//DWORD(__thiscall* FEShoppingCartItem_GetPerfPkgCatHash_Game)(DWORD* FEShoppingCartItem, int PartType) = (DWORD(__thiscall*)(DWORD*, int))0x7AFFF0;
void(__thiscall* CustomizeMain_SwitchRooms)(DWORD* CustomizeMain) = (void(__thiscall*)(DWORD*))0x7BFC50;
void(__thiscall* CarCustomizeManager_RelinquishControl)(DWORD* CarCustomizeManager) = (void(__thiscall*)(DWORD*))0x7AEB10;
bool(__thiscall* CarCustomizeManager_IsTurbo)(DWORD* CarCustomizeManager) = (bool(__thiscall*)(DWORD*))0x7AFAE0;
void(__thiscall* CarCustomizeManager_ClearTempColoredPart)(DWORD* CarCustomizeManager) = (void(__thiscall*)(DWORD*))0x7A4AF0;
void(__thiscall* CarCustomizeManager_SetTempColoredPart)(DWORD* CarCustomizeManager, DWORD* SelectablePart) = (void(__thiscall*)(DWORD*, DWORD*))0x7A4AC0;
void(__thiscall* CustomizationScreenHelper_DrawTitle)(DWORD* CustomizationScreenHelper) = (void(__thiscall*)(DWORD*))0x7A6770;
void(__thiscall* CustomizationScreenHelper_SetCareerStuff)(DWORD* CustomizationScreenHelper, DWORD* SelectablePart, int Category, int TradeInCost) = (void(__thiscall*)(DWORD*, DWORD*, int, int))0x7B13C0;
void(__thiscall* CustomizationScreenHelper_SetPartStatus)(DWORD* CustomizationScreenHelper, DWORD* SelectablePart, unsigned int UnlockData, int SelectedItemID, int LastItemID) = (void(__thiscall*)(DWORD*, DWORD*, unsigned int, int, int))0x7A6A40;
void(__thiscall* CustomizationScreen_AddPartOption)(DWORD* CustomizationScreen, DWORD* SelectablePart, DWORD IconHash, DWORD NameHash, DWORD Unk, DWORD UnlockHash, bool IsLocked) = (void(__thiscall*)(DWORD*, DWORD*, DWORD, DWORD, DWORD, DWORD, bool))0x7B1740;
void(__cdecl* FEngSetColor_obj)(DWORD* obj, unsigned int argb) = (void(__cdecl*)(DWORD*, unsigned int))0x5157E0;
void(__cdecl* FEngSetTextureHash_obj)(DWORD* obj, unsigned int TextureHash) = (void(__cdecl*)(DWORD*, unsigned int))0x515B90;
void(__cdecl* FEngSetButtonTexture)(DWORD* feimage, unsigned int TextureHash) = (void(__cdecl*)(DWORD*, unsigned int))0x515BB0;
DWORD*(__thiscall* ArrayScroller_GetSlotAt)(DWORD* ArrayScroller, int SlotIndex) = (DWORD*(__thiscall*)(DWORD*, int))0x588220;
DWORD*(__thiscall* ArrayScroller_GetDatumAt)(DWORD* ArrayScroller, int SlotIndex) = (DWORD*(__thiscall*)(DWORD*, int))0x588250;
DWORD* (__cdecl* FEngFindScreen)(const char* pkg_name) = (DWORD*(__cdecl*)(const char*))0x591E90;
void(__cdecl* FEngMapJoyParamToJoyport)(int prm) = (void(__cdecl*)(int))0x572FF0;
void(__thiscall* cFrontendDatabase_SetPlayersJoystickPort)(DWORD* FEDatabase, int Player, int Port) = (void(__thiscall*)(DWORD*, int, int))0x56DBA0;
unsigned int(*FEHashUpper)(char* StringToHash) = (unsigned int(*)(char*))0x5AF1C0;
DWORD*(*FindFEPresetCar)(unsigned int PresetNameHash) = (DWORD*(*)(unsigned int))0x748130;
DWORD* (__thiscall* FEPlayerCarDB_CreateNewPresetCar)(DWORD* FEPlayerCarDB, char const* PresetName) = (DWORD * (__thiscall*)(DWORD*, char const*))0x590A20;
void(* Physics_Upgrades_Flush)() = (void(*)())0x66B910;
bool(* UnlockSystem_IsCarUnlocked)(int eUnlockFilters, unsigned int CarPresetHash, int Unk) = (bool(*)(int, unsigned int, int))0x58A9F0;
void(__thiscall* UIQRCarSelect_SetupForPlayer)(DWORD* UIQRCarSelect, int Unk) = (void(__thiscall*)(DWORD*, int))0x7B4E20;
bool(*CompareCompositeParams)(DWORD* SkinCompositeParams1, DWORD* SkinCompositeParams2) = (bool(*)(DWORD*, DWORD*))0x73AB90;
int(__thiscall* Attrib_Private_GetLength)(WORD* Attrib_Private) = (int(__thiscall*)(WORD*))0x452940;
void*(* Attrib_DefaultDataArea)() = (void*(*)())0x6269B0;
DWORD*(__thiscall* RideInfo_GetPart)(DWORD* RideInfo, int CarSlotID) = (DWORD*(__thiscall*)(DWORD*, int))0x739C70;
bool(*UnlockSystem_IsBonusCarCEOnly_Game)(unsigned int PresetNameHash) = (bool(*)(unsigned int))0x576AD0;
DWORD* (__thiscall* FEPlayerCarDB_GetCarRecordByHandle)(DWORD* FEPlayerCarDB, unsigned int CarRecordID) = (DWORD * (__thiscall*)(DWORD*, unsigned int))0x56ECC0;
void(__thiscall* Attrib_Gen_frontend_frontend)(DWORD* AttribGenFrontend, unsigned int CollectionKey, unsigned int msgPort, unsigned int Unk) = (void(__thiscall*)(DWORD*, unsigned int, unsigned int, unsigned int))0x51E1A0;
unsigned int(__thiscall* UIQRCarSelect_GetBonusUnlockText_Game)(DWORD* UIQRCarSelect, DWORD* FECarRecord) = (unsigned int(__thiscall*)(DWORD*, DWORD*))0x7A3C00;
int(__thiscall* UIQRCarSelect_GetBonusUnlockBinNumber_Game)(DWORD* UIQRCarSelect, DWORD* FECarRecord) = (int(__thiscall*)(DWORD*, DWORD*))0x7A3C70;
bool(*QuickRaceUnlocker_IsCarUnlocked_Game)(int eUnlockFilters, unsigned int Handle, int a3) = (bool(*)(int, unsigned int, int))0x58A0D0;
void(*j_bThreadYield)(int dwMilliseconds) = (void(*)(int))0x64CF00;
DWORD(__thiscall* Attrib_Instance_GetParent)(DWORD* Attrib) = (DWORD(__thiscall*)(DWORD*))0x4546A0;
void*(__thiscall* Attrib_Instance_GetAttributePointer)(DWORD* Attrib, unsigned int attribkey, unsigned int index) = (void*(__thiscall*)(DWORD*, unsigned int, unsigned int))0x454810;
void(* DialogInterface_ShowOk)(char const* PackageName, char const* DialogType, int eDialogTitle, unsigned int LanguageHash, ...) = (void(*)(char const*, char const*, int, unsigned int, ...))0x598700;
void(* DialogInterface_ShowOneButton)(char const* PackageName, char const* DialogType, int eDialogTitle, unsigned int Button1LanguageHash, unsigned int Button1Message, unsigned int LanguageHash, ...) = (void(*)(char const*, char const*, int, unsigned int, unsigned int, unsigned int, ...))0x598A60;
void(* DialogInterface_ShowTwoButtons)(char const* PackageName, char const* DialogType, int eDialogTitle, unsigned int Button1LanguageHash, unsigned int Button2LanguageHash, unsigned int Button1Message, unsigned int Button2Message, unsigned int DefaultButton, unsigned int LanguageHash, ...) = (void(*)(char const*, char const*, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, ...))0x598DD0;
void(* DialogInterface_ShowThreeButtons)(char const* PackageName, char const* DialogType, int eDialogTitle, unsigned int Button1LanguageHash, unsigned int Button2LanguageHash, unsigned int Button3LanguageHash, unsigned int Button1Message, unsigned int Button2Message, unsigned int Button3Message, unsigned int CancelMessage, unsigned int DefaultButton, unsigned int LanguageHash, ...) = (void(*)(char const*, char const*, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, ...))0x598FA0;
void(__thiscall* bTList_SelectablePart_dtor)(void*) = (void(__thiscall*)(void*))0x7B3F00;
void(__thiscall* CustomizeParts_ShowHudObjects)(DWORD* CustomizeParts) = (void(__thiscall*)(DWORD*))0x7A6D80;
void(__thiscall* CustomizeParts_LoadHudTextures)(DWORD* CustomizeParts) = (void(__thiscall*)(DWORD*))0x7B7670;
void(__thiscall* CustomizeParts_SetHUDTextures)(DWORD* CustomizeParts) = (void(__thiscall*)(DWORD*))0x7B1970;
void(__thiscall* CustomizeParts_SetHUDColors)(DWORD* CustomizeParts) = (void(__thiscall*)(DWORD*))0x7B1AB0;
void(__thiscall* CustomizeParts_dtor)(DWORD* CustomizeParts) = (void(__thiscall*)(DWORD*))0x7BCFF0;
double(__thiscall *CarRenderInfo_DrawAmbientShadow_Game)(DWORD* _CarRenderInfo, int eView, float* bV3, float flt, float* bM41, float* bM42, float* bM43) = (double(__thiscall*)(DWORD*, int, float*, float, float*, float*, float*))0x743EA0;
void(__thiscall *CarRenderInfo_RenderTextureHeadlights)(DWORD* _CarRenderInfo, DWORD* View, float* l_w, unsigned int Accurate) = (void(__thiscall*)(DWORD*, DWORD*, float*, unsigned int))0x738180;
DWORD* (* GetTextureInfo)(DWORD TextureHash, int return_default_texture_if_not_found, int include_unloaded_textures) = (DWORD* (*)(DWORD, int, int))0x503400;
bool(*IsPaused)() = (bool(*)())0x468390;
void(__thiscall* CarRenderInfo_RenderFlaresOnCar)(DWORD* CarRenderInfo, DWORD* view, float* position, float* body_matrix, int force_light_state, int reflection, int renderFlareFlags) = (void(__thiscall*)(DWORD*, DWORD*, float*, float*, int, int, int))0x742950;
void(*eRenderLightFlare)(DWORD* view, DWORD* light_flare, float* local_world, float intensity_scale, int a5, int a6, float a7, DWORD ColourOverRide, float sizescale) = (void(*)(DWORD*, DWORD*, float*, float, int, int, float, DWORD, float))0x505380;
void(__thiscall* CustomizationScreen_NotificationMessage)(DWORD* _CustomizationScreen, DWORD MessageHash, DWORD* FEObject, DWORD param1, DWORD param2) = (void(__thiscall*)(DWORD*, DWORD, DWORD*, DWORD, DWORD))0x7B7080;
void(__thiscall* SelectablePart_copy)(DWORD* SelectablePart, DWORD* CopyFrom) = (void(__thiscall*)(DWORD*, DWORD*))0x7A9E60;
int(*CompositeWheel)(DWORD* ride_info, DWORD dest_namehash, DWORD src_namehash, DWORD mask_namehash, int paint_slot) = (int(*)(DWORD*, DWORD, DWORD, DWORD, int))0x749A00;
DWORD(*GetVinylLayerHash)(DWORD* RideInfo, int VinylLayer) = (DWORD(*)(DWORD*, int))0x73B440;
DWORD(*GetVinylLayerMaskHash)(DWORD* RideInfo, int VinylLayer) = (DWORD(*)(DWORD*, int))0x749460;
DWORD(*GetSpinnerTextureHash)(DWORD* RideInfo) = (DWORD(*)(DWORD*))0x749310;
DWORD(*GetSpinnerTextureMaskHash)(DWORD* RideInfo) = (DWORD(*)(DWORD*))0x749350;
DWORD*(__thiscall *eModel_GetPositionMarker)(DWORD* eModel, DWORD MarkerHash) = (DWORD*(__thiscall*)(DWORD*, DWORD))0x5016D0;
void(__thiscall* eModel_ReplaceLightMaterial_Game)(DWORD* eModel, int NameHash, int LightMaterial) = (void(__thiscall*)(DWORD*, int, int))0x501640;
void(__thiscall* TireState_DoSkids_Game)(DWORD* _TireState, float intensity, float* delta_pos, float* tireWorldMatrix, int Unk, float SkidWidth) = (void(__thiscall*)(DWORD *, float, float*, float*, int, float))0x745580;
void(__thiscall* CarRenderConn_UpdateTires_Game)(DWORD* _CarRenderConn, float dT, float carspeed, DWORD* data) = (void(__thiscall*)(DWORD*, float, float, DWORD*))0x746750;
void(__thiscall* TwoStageSlider_Init)(DWORD* TwoStageSlider, const char* pkg_name, const char* name, float min, float max, float inc, float cur, float preview, float preview_offset) = (void(__thiscall*)(DWORD*, const char*, const char*, float, float, float, float, float, float))0x56CE30;
int(*bReleasePrintf)(const char* format, ...) = (int(*)(const char*, ...))0x464780;
DWORD(*FindScreenInfo_Game)(char const* ScreenName, int MenuID) = (DWORD(*)(char const*, int))0x7A8C70;
DWORD(*FindScreenCameraInfo_Game)(DWORD ScreenInfo) = (DWORD(*)(DWORD))0x7A8FE0;
DWORD(*Attrib_StringToLowerCaseKey)(char const* str) = (DWORD(*)(char const*))0x4549B0;
void(__thiscall* cSlider_SetValue)(DWORD* cSlider, float val) = (void(__thiscall*)(DWORD*, float))0x56CD20;
void(__thiscall* TwoStageSlider_Draw)(DWORD* TwoStageSlider) = (void(__thiscall*)(DWORD*))0x56CF40;
DWORD*(__thiscall* CustomizationScreen_GetSelectedPart)(DWORD* CustomizationScreen) = (DWORD*(__thiscall*)(DWORD*))0x7BCF70;
void(__cdecl* Physics_Info_EstimatePerformance)(DWORD* PVehicle, float* Performance) = (void(__cdecl*)(DWORD*, float*))0x67C570;
DWORD(__thiscall* CustomizePerformance_GetPerfPkgBrand_Game)(DWORD* CustomizePerformance, int PackageType, int PackageLevel, int PartInPackage) = (DWORD(__thiscall*)(DWORD*, int, int, int))0x7B2BD0;
void(__cdecl* CustomizeShoppingCart_ExitShoppingCart)() = (void(__cdecl*)())0x7A60E0;
int(__cdecl* CarCustomizeManager_GetUnlockFilter)() = (int(__cdecl*)())0x7A4DB0;
void(__thiscall* CarCustomizeManager_MaxOutPerformance)(DWORD* CarCustomizeManager) = (void(__thiscall*)(DWORD*))0x7B5BB0;
DWORD* (__thiscall* IconPanel_GetOption)(DWORD* IconPanel, int Option) = (DWORD * (__thiscall*)(DWORD*, int))0x5870F0;
int(__thiscall* sub_50E780)(DWORD* dis) = (int(__thiscall*)(DWORD*))0x50E780;
void(__thiscall* CustomizeCategoryScreen_NotificationMessage)(DWORD* _CustomizeCategoryScreen, DWORD MessageHash, DWORD* FEObject, DWORD param1, DWORD param2) = (void(__thiscall*)(DWORD*, DWORD, DWORD*, DWORD, DWORD))0x7BB680;
int(*UnlockSystem_GetPerfPackageCost_Game)(int UnlockFilter, int PackageType, int PackageLevel, int Unk) = (int(*)(int, int, int, int))0x58ACD0;
int(*UnlockSystem_GetCarPartCost_Game)(int UnlockFilter, int CarSlotID, DWORD* CarPart, int Unk) = (int(*)(int, int, DWORD*, int))0x58AD10;
void(__thiscall* CustomizeRims_ScrollRimSizes)(DWORD* CustomizeRims, int Direction) = (void(__thiscall*)(DWORD*, int))0x7BDAE0;
BYTE(__thiscall* CarCustomizeManager_GetMinInnerRadius)(DWORD* CarCustomizeManager) = (BYTE(__thiscall*)(DWORD*))0x7A5660;
BYTE(__thiscall* CarCustomizeManager_GetMaxInnerRadius)(DWORD* CarCustomizeManager) = (BYTE(__thiscall*)(DWORD*))0x7A5680;
int(__thiscall* CarCustomizeManager_GetCartTotal)(DWORD* CarCustomizeManager, int Unk) = (int(__thiscall*)(DWORD*, int))0x7AED80;
void(__thiscall* CustomizeRims_BuildRimsList_Game)(DWORD* CustomizeRims, int unk) = (void(__thiscall*)(DWORD*, int))0x7B7DD0;
int(*MapCarPartToUnlockable)(int CarSlotID) = (int(*)(int))0x5768A0;
DWORD*(*LookupFEPartInfo)(int UnlockableEntity, int UpgradeLevel) = (DWORD*(*)(int, int))0x58AAB0;
void(__thiscall* FECareerRecord_AdjustHeatOnDecalApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x582030;
void(__thiscall* FECareerRecord_AdjustHeatOnPaintApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x5820C0;
void(__thiscall* FECareerRecord_AdjustHeatOnVinylApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x582150;
void(__thiscall* FECareerRecord_AdjustHeatOnBodyKitApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x5821E0;
void(__thiscall* FECareerRecord_AdjustHeatOnHoodApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x582270;
void(__thiscall* FECareerRecord_AdjustHeatOnRimApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x582390;
void(__thiscall* FECareerRecord_AdjustHeatOnRimPaintApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x582420;
void(__thiscall* FECareerRecord_AdjustHeatOnRoofScoopApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x5824B0;
void(__thiscall* FECareerRecord_AdjustHeatOnSpoilerApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x582540;
void(__thiscall* FECareerRecord_AdjustHeatOnWindowTintApplied)(DWORD* FECareerRecord, float Multiplier) = (void(__thiscall*)(DWORD*, float))0x5825D0;