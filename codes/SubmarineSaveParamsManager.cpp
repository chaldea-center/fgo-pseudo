void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_4BD90AC & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13309/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4BD90AC = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13309/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_4BD90AF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13317/*"SubmarineUnreleasedScan"*/);
    byte_4BD90AF = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13317/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_70827888; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4BD90AB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13309/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4BD90AB = 1;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888((System_String_o *)StringLiteral_13309/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_70827888, v2);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_70827888; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4BD90AE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13317/*"SubmarineUnreleasedScan"*/);
    byte_4BD90AE = 1;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888((System_String_o *)StringLiteral_13317/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_70827888, v4);
  if ( result )
  {
    if ( result->fields._EventId_k__BackingField != eventId )
      return 0LL;
  }
  return result;
}


void __fastcall SubmarineSaveParamsManager__SaveClearQuestInfo(
        int32_t questId,
        int32_t phaseCnt,
        bool isQuestClear,
        bool isQuestPhaseClear,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4BD90AA & 1) == 0 )
  {
    sub_1C21E38(&SubmarineQuestSaveInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_13309/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4BD90AA = 1;
  }
  v9 = sub_1C22084(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v10);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13309/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4BD90AD & 1) == 0 )
  {
    sub_1C21E38(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_13317/*"SubmarineUnreleasedScan"*/);
    byte_4BD90AD = 1;
  }
  v5 = sub_1C22084(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = eventId;
  *(_QWORD *)(v5 + 24) = scanIds;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)scanIds, v6, v7, v8, v9, v10, v11);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v5, v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13317/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}