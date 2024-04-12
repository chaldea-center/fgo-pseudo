void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_42AEE7D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13231/*"SubmarineMapBeforeQuestInfo"*/);
    byte_42AEE7D = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13231/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_42AEE80 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13239/*"SubmarineUnreleasedScan"*/);
    byte_42AEE80 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13239/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_35644948; // x0
  const MethodInfo *v2; // x1

  if ( (byte_42AEE7C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13231/*"SubmarineMapBeforeQuestInfo"*/);
    byte_42AEE7C = 1;
  }
  String_35644948 = UnityEngine_PlayerPrefs__GetString_35644948((System_String_o *)StringLiteral_13231/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_35644948, v2);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_35644948; // x0
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_42AEE7F & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13239/*"SubmarineUnreleasedScan"*/);
    byte_42AEE7F = 1;
  }
  String_35644948 = UnityEngine_PlayerPrefs__GetString_35644948((System_String_o *)StringLiteral_13239/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_35644948, 0LL);
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

  if ( (byte_42AEE7B & 1) == 0 )
  {
    sub_B52984(&SubmarineQuestSaveInfo_TypeInfo);
    sub_B52984(&StringLiteral_13231/*"SubmarineMapBeforeQuestInfo"*/);
    byte_42AEE7B = 1;
  }
  v9 = sub_B52A54(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  if ( !v9 )
    sub_B52A5C(v10, v11);
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v11);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13231/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
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

  if ( (byte_42AEE7E & 1) == 0 )
  {
    sub_B52984(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_B52984(&StringLiteral_13239/*"SubmarineUnreleasedScan"*/);
    byte_42AEE7E = 1;
  }
  v5 = (SubmarineUnreleasedScanSaveInfo_o *)sub_B52A54(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  SubmarineUnreleasedScanSaveInfo___ctor(v5, eventId, scanIds, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue(v5, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13239/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}