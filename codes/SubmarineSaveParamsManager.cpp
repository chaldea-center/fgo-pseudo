void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB1263 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13286/*"SubChrCamera"*/, v1);
    byte_4BB1263 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13286/*"SubChrCamera"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB1266 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13294/*"SubmarineEffectScannablePanel"*/, v1);
    byte_4BB1266 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13294/*"SubmarineEffectScannablePanel"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *String_70680264; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4BB1262 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13286/*"SubChrCamera"*/, v1);
    byte_4BB1262 = 1;
  }
  String_70680264 = UnityEngine_PlayerPrefs__GetString_70680264((System_String_o *)StringLiteral_13286/*"SubChrCamera"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_70680264, v3);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_70680264; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4BB1265 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13294/*"SubmarineEffectScannablePanel"*/, method);
    byte_4BB1265 = 1;
  }
  String_70680264 = UnityEngine_PlayerPrefs__GetString_70680264((System_String_o *)StringLiteral_13294/*"SubmarineEffectScannablePanel"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_70680264, v4);
  if ( result )
  {
    if ( result->fields._EventId_k__BackingField != eventId )
      return 0LL;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineSaveParamsManager__SaveClearQuestInfo(
        int32_t questId,
        int32_t phaseCnt,
        bool isQuestClear,
        bool isQuestPhaseClear,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x23
  const MethodInfo *v11; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4BB1261 & 1) == 0 )
  {
    sub_1C13D24(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt);
    sub_1C13D24(&StringLiteral_13286/*"SubChrCamera"*/, v9);
    byte_4BB1261 = 1;
  }
  v10 = sub_1C13F70(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = phaseCnt;
  *(_BYTE *)(v10 + 24) = isQuestClear;
  *(_BYTE *)(v10 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v10, v11);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13286/*"SubChrCamera"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4BB1264 & 1) == 0 )
  {
    sub_1C13D24(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds);
    sub_1C13D24(&StringLiteral_13294/*"SubmarineEffectScannablePanel"*/, v5);
    byte_4BB1264 = 1;
  }
  v6 = sub_1C13F70(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = eventId;
  *(_QWORD *)(v6 + 24) = scanIds;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)scanIds, v7, v8, v9, v10, v11, v12);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v6, v13);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13294/*"SubmarineEffectScannablePanel"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}