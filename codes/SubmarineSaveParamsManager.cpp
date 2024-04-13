void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7BA4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13290/*"SubmarineMapBeforeQuestInfo"*/, v1, v2, v3);
    byte_42E7BA4 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13290/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7BA7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13298/*"SubmarineUnreleasedScan"*/, v1, v2, v3);
    byte_42E7BA7 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13298/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  System_String_o *String_35648228; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42E7BA3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13290/*"SubmarineMapBeforeQuestInfo"*/, v1, v2, v3);
    byte_42E7BA3 = 1;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_13290/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_35648228, v5);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *String_35648228; // x0
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_42E7BA6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13298/*"SubmarineUnreleasedScan"*/, (_DWORD)method, v2, v3);
    byte_42E7BA6 = 1;
  }
  String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_13298/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_35648228, 0LL);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  __int64 v12; // x23
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_42E7BA2 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineQuestSaveInfo_TypeInfo, phaseCnt, isQuestClear, isQuestPhaseClear);
    sub_B5D5C4(&StringLiteral_13290/*"SubmarineMapBeforeQuestInfo"*/, v9, v10, v11);
    byte_42E7BA2 = 1;
  }
  v12 = sub_B5D694(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = questId;
  *(_DWORD *)(v12 + 20) = phaseCnt;
  *(_BYTE *)(v12 + 24) = isQuestClear;
  *(_BYTE *)(v12 + 25) = isQuestPhaseClear;
  if ( !v12 )
    sub_B5D69C(v13, v14);
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v12, v14);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13290/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SubmarineUnreleasedScanSaveInfo_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_42E7BA5 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineUnreleasedScanSaveInfo_TypeInfo, (_DWORD)scanIds, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_13298/*"SubmarineUnreleasedScan"*/, v6, v7, v8);
    byte_42E7BA5 = 1;
  }
  v9 = (SubmarineUnreleasedScanSaveInfo_o *)sub_B5D694(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  SubmarineUnreleasedScanSaveInfo___ctor(v9, eventId, scanIds, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue(v9, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13298/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}