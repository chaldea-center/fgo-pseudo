void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4213661 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13178/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4213661 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13178/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4213664 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13186/*"SubmarineUnreleasedScan"*/, v1);
    byte_4213664 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13186/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *String_34963268; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4213660 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13178/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4213660 = 1;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268((System_String_o *)StringLiteral_13178/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_34963268, v3);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_34963268; // x0
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4213663 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13186/*"SubmarineUnreleasedScan"*/, method);
    byte_4213663 = 1;
  }
  String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268((System_String_o *)StringLiteral_13186/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_34963268, 0LL);
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
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_421365F & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt);
    sub_B0D8A4(&StringLiteral_13178/*"SubmarineMapBeforeQuestInfo"*/, v9);
    byte_421365F = 1;
  }
  v10 = sub_B0D974(SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt, isQuestClear);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = phaseCnt;
  *(_BYTE *)(v10 + 24) = isQuestClear;
  *(_BYTE *)(v10 + 25) = isQuestPhaseClear;
  if ( !v10 )
    sub_B0D97C(v11);
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v10, v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13178/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineUnreleasedScanSaveInfo_o *v6; // x21
  __int64 v7; // x0
  System_String_o *SaveValue; // x0

  if ( (byte_4213662 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds);
    sub_B0D8A4(&StringLiteral_13186/*"SubmarineUnreleasedScan"*/, v5);
    byte_4213662 = 1;
  }
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)sub_B0D974(SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds, method);
  SubmarineUnreleasedScanSaveInfo___ctor(v6, eventId, scanIds, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue(v6, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13186/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}