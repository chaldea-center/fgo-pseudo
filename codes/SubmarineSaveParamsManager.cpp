void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12DDA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13216/*"SubmarineMapBeforeQuestInfo"*/, v1, v2);
    byte_4B12DDA = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13216/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12DDD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13224/*"SubmarineUnreleasedScan"*/, v1, v2);
    byte_4B12DDD = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13224/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  System_String_o *String_70112520; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4B12DD9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13216/*"SubmarineMapBeforeQuestInfo"*/, v1, v2);
    byte_4B12DD9 = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520((System_String_o *)StringLiteral_13216/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_70112520, v4);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *String_70112520; // x0
  const MethodInfo *v5; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4B12DDC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13224/*"SubmarineUnreleasedScan"*/, method, v2);
    byte_4B12DDC = 1;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520((System_String_o *)StringLiteral_13224/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_70112520, v5);
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
  __int64 v10; // x2
  __int64 v11; // x23
  const MethodInfo *v12; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4B12DD8 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt, isQuestClear);
    sub_1BCA7E0(&StringLiteral_13216/*"SubmarineMapBeforeQuestInfo"*/, v9, v10);
    byte_4B12DD8 = 1;
  }
  v11 = sub_1BCAA2C(SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt, isQuestClear, isQuestPhaseClear);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = questId;
  *(_DWORD *)(v11 + 20) = phaseCnt;
  *(_BYTE *)(v11 + 24) = isQuestClear;
  *(_BYTE *)(v11 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v11, v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13216/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4B12DDB & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds, method);
    sub_1BCA7E0(&StringLiteral_13224/*"SubmarineUnreleasedScan"*/, v6, v7);
    byte_4B12DDB = 1;
  }
  v8 = sub_1BCAA2C(SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds, method, v3);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = eventId;
  *(_QWORD *)(v8 + 24) = scanIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)scanIds, v9, v10, v11, v12, v13, v14);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v8, v15);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13224/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}