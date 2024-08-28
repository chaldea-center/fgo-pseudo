void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A058EF & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_12998/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4A058EF = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12998/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A058F2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_13006/*"SubmarineUnreleasedScan"*/, v1);
    byte_4A058F2 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13006/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *String_69130092; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4A058EE & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_12998/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4A058EE = 1;
  }
  String_69130092 = UnityEngine_PlayerPrefs__GetString_69130092((System_String_o *)StringLiteral_12998/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_69130092, v3);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_69130092; // x0
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4A058F1 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_13006/*"SubmarineUnreleasedScan"*/, method);
    byte_4A058F1 = 1;
  }
  String_69130092 = UnityEngine_PlayerPrefs__GetString_69130092((System_String_o *)StringLiteral_13006/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_69130092, 0LL);
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

  if ( (byte_4A058ED & 1) == 0 )
  {
    sub_1B686D4(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt);
    sub_1B686D4(&StringLiteral_12998/*"SubmarineMapBeforeQuestInfo"*/, v9);
    byte_4A058ED = 1;
  }
  v10 = sub_1B68920(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = phaseCnt;
  *(_BYTE *)(v10 + 24) = isQuestClear;
  *(_BYTE *)(v10 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v10, v11);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_12998/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
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
  __int64 v8; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4A058F0 & 1) == 0 )
  {
    sub_1B686D4(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds);
    sub_1B686D4(&StringLiteral_13006/*"SubmarineUnreleasedScan"*/, v5);
    byte_4A058F0 = 1;
  }
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)sub_1B68920(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  SubmarineUnreleasedScanSaveInfo___ctor(v6, eventId, scanIds, 0LL);
  if ( !v6 )
    sub_1B68930(v7, v8);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue(v6, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13006/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}