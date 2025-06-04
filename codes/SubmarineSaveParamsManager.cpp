void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFEA23 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_13022/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4AFEA23 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13022/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFEA26 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_13030/*"SubmarineUnreleasedScan"*/, v1);
    byte_4AFEA26 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13030/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *String_69993112; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4AFEA22 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_13022/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_4AFEA22 = 1;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112((System_String_o *)StringLiteral_13022/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_69993112, v3);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_69993112; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4AFEA25 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_13030/*"SubmarineUnreleasedScan"*/, method);
    byte_4AFEA25 = 1;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112((System_String_o *)StringLiteral_13030/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_69993112, v4);
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

  if ( (byte_4AFEA21 & 1) == 0 )
  {
    sub_1BC3008(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt);
    sub_1BC3008(&StringLiteral_13022/*"SubmarineMapBeforeQuestInfo"*/, v9);
    byte_4AFEA21 = 1;
  }
  v10 = sub_1BC3254(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = phaseCnt;
  *(_BYTE *)(v10 + 24) = isQuestClear;
  *(_BYTE *)(v10 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v10, v11);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13022/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4AFEA24 & 1) == 0 )
  {
    sub_1BC3008(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds);
    sub_1BC3008(&StringLiteral_13030/*"SubmarineUnreleasedScan"*/, v5);
    byte_4AFEA24 = 1;
  }
  v6 = sub_1BC3254(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = eventId;
  *(_QWORD *)(v6 + 24) = scanIds;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)scanIds, v7, v8);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v6, v9);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13030/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}