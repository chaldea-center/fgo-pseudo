void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_438A629 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13382/*"SubmarineMapBeforeQuestInfo"*/);
    byte_438A629 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13382/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_438A62C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13390/*"SubmarineUnreleasedScan"*/);
    byte_438A62C = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13390/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_36337972; // x0
  const MethodInfo *v2; // x1

  if ( (byte_438A628 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13382/*"SubmarineMapBeforeQuestInfo"*/);
    byte_438A628 = 1;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972((System_String_o *)StringLiteral_13382/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_36337972, v2);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_36337972; // x0
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_438A62B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13390/*"SubmarineUnreleasedScan"*/);
    byte_438A62B = 1;
  }
  String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972((System_String_o *)StringLiteral_13390/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_36337972, 0LL);
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
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_438A627 & 1) == 0 )
  {
    sub_B775C4(&SubmarineQuestSaveInfo_TypeInfo);
    sub_B775C4(&StringLiteral_13382/*"SubmarineMapBeforeQuestInfo"*/);
    byte_438A627 = 1;
  }
  v9 = sub_B77694(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  if ( !v9 )
    sub_B7769C(v10, v11);
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v11);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13382/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  SubmarineUnreleasedScanSaveInfo_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_438A62A & 1) == 0 )
  {
    sub_B775C4(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_B775C4(&StringLiteral_13390/*"SubmarineUnreleasedScan"*/);
    byte_438A62A = 1;
  }
  v5 = (SubmarineUnreleasedScanSaveInfo_o *)sub_B77694(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  SubmarineUnreleasedScanSaveInfo___ctor(v5, eventId, scanIds, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue(v5, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13390/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}