void SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_4C536C8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13158/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4C536C8 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13158/*"SubmarineMapBeforeQuestInfo"*/, 0);
}


void SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_4C536CB & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13166/*"SubmarineUnreleasedScan"*/);
    byte_4C536CB = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13166/*"SubmarineUnreleasedScan"*/, 0);
}


SubmarineQuestSaveInfo_o *SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_71300376; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4C536C7 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13158/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4C536C7 = 1;
  }
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376((System_String_o *)StringLiteral_13158/*"SubmarineMapBeforeQuestInfo"*/, 0);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_71300376, v2);
}


SubmarineUnreleasedScanSaveInfo_o *SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_71300376; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4C536CA & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13166/*"SubmarineUnreleasedScan"*/);
    byte_4C536CA = 1;
  }
  String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376((System_String_o *)StringLiteral_13166/*"SubmarineUnreleasedScan"*/, 0);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_71300376, v4);
  if ( result )
  {
    if ( result->fields._EventId_k__BackingField != eventId )
      return 0;
  }
  return result;
}


void SubmarineSaveParamsManager__SaveClearQuestInfo(
        int32_t questId,
        int32_t phaseCnt,
        bool isQuestClear,
        bool isQuestPhaseClear,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4C536C6 & 1) == 0 )
  {
    sub_1C3E564(&SubmarineQuestSaveInfo_TypeInfo);
    sub_1C3E564(&StringLiteral_13158/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4C536C6 = 1;
  }
  v9 = sub_1C3E7B0(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v10);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13158/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4C536C9 & 1) == 0 )
  {
    sub_1C3E564(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_1C3E564(&StringLiteral_13166/*"SubmarineUnreleasedScan"*/);
    byte_4C536C9 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = eventId;
  *(_QWORD *)(v5 + 24) = scanIds;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)scanIds, v6, v7);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v5, v8);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13166/*"SubmarineUnreleasedScan"*/, SaveValue, 0);
  UnityEngine_PlayerPrefs__Save(0);
}