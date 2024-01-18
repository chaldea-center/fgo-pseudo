void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4185818 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13134/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4185818 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13134/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418581B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13142/*"SubmarineUnreleasedScan"*/, v1);
    byte_418581B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13142/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *String_35342888; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4185817 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13134/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4185817 = 1;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_13134/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_35342888, v3);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_35342888; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_418581A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13142/*"SubmarineUnreleasedScan"*/, method);
    byte_418581A = 1;
  }
  String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_13142/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_35342888, v4);
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

  if ( (byte_4185816 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt);
    sub_B2C35C(&StringLiteral_13134/*"SubmarineMapBeforeQuestInfo"*/, v9);
    byte_4185816 = 1;
  }
  v10 = sub_B2C42C(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = phaseCnt;
  *(_BYTE *)(v10 + 24) = isQuestClear;
  *(_BYTE *)(v10 + 25) = isQuestPhaseClear;
  if ( !v10 )
    sub_B2C434(v11, v12);
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v10, v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13134/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4185819 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds);
    sub_B2C35C(&StringLiteral_13142/*"SubmarineUnreleasedScan"*/, v5);
    byte_4185819 = 1;
  }
  v6 = sub_B2C42C(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = eventId;
  *(_QWORD *)(v6 + 24) = scanIds;
  sub_B2C2F8(v6 + 24, scanIds);
  if ( !v6 )
    sub_B2C434(v7, v8);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v6, v8);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13142/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}