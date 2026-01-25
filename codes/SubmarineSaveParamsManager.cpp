void SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_4CEAECF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13204/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4CEAECF = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13204/*"SubmarineMapBeforeQuestInfo"*/, 0);
}


void SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_4CEAED2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13212/*"SubmarineUnreleasedScan"*/);
    byte_4CEAED2 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13212/*"SubmarineUnreleasedScan"*/, 0);
}


SubmarineQuestSaveInfo_o *SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_71828452; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4CEAECE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13204/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4CEAECE = 1;
  }
  String_71828452 = UnityEngine_PlayerPrefs__GetString_71828452((System_String_o *)StringLiteral_13204/*"SubmarineMapBeforeQuestInfo"*/, 0);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_71828452, v2);
}


SubmarineUnreleasedScanSaveInfo_o *SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_71828452; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4CEAED1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13212/*"SubmarineUnreleasedScan"*/);
    byte_4CEAED1 = 1;
  }
  String_71828452 = UnityEngine_PlayerPrefs__GetString_71828452((System_String_o *)StringLiteral_13212/*"SubmarineUnreleasedScan"*/, 0);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_71828452, v4);
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

  if ( (byte_4CEAECD & 1) == 0 )
  {
    sub_1C7BAE8(&SubmarineQuestSaveInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13204/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4CEAECD = 1;
  }
  v9 = sub_1C7BD34(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v10);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13204/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4CEAED0 & 1) == 0 )
  {
    sub_1C7BAE8(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13212/*"SubmarineUnreleasedScan"*/);
    byte_4CEAED0 = 1;
  }
  v5 = sub_1C7BD34(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = eventId;
  *(_QWORD *)(v5 + 24) = scanIds;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)scanIds, v6, v7, v8, v9, v10, v11);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v5, v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13212/*"SubmarineUnreleasedScan"*/, SaveValue, 0);
  UnityEngine_PlayerPrefs__Save(0);
}