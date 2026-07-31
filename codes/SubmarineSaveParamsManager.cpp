void SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_5934E1B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13671/*"SubmarineMapBeforeQuestInfo"*/);
    byte_5934E1B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13671/*"SubmarineMapBeforeQuestInfo"*/, 0);
}


void SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_5934E1E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13679/*"SubmarineUnreleasedScan"*/);
    byte_5934E1E = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13679/*"SubmarineUnreleasedScan"*/, 0);
}


SubmarineQuestSaveInfo_o *SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_83184936; // x0
  const MethodInfo *v2; // x1

  if ( (byte_5934E1A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13671/*"SubmarineMapBeforeQuestInfo"*/);
    byte_5934E1A = 1;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936((System_String_o *)StringLiteral_13671/*"SubmarineMapBeforeQuestInfo"*/, 0);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_83184936, v2);
}


SubmarineUnreleasedScanSaveInfo_o *SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_83184936; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_5934E1D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13679/*"SubmarineUnreleasedScan"*/);
    byte_5934E1D = 1;
  }
  String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936((System_String_o *)StringLiteral_13679/*"SubmarineUnreleasedScan"*/, 0);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_83184936, v4);
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

  if ( (byte_5934E19 & 1) == 0 )
  {
    sub_21FFC50(&SubmarineQuestSaveInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_13671/*"SubmarineMapBeforeQuestInfo"*/);
    byte_5934E19 = 1;
  }
  v9 = sub_21FFEBC(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v10);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13671/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_5934E1C & 1) == 0 )
  {
    sub_21FFC50(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_13679/*"SubmarineUnreleasedScan"*/);
    byte_5934E1C = 1;
  }
  v5 = sub_21FFEBC(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = eventId;
  *(_QWORD *)(v5 + 24) = scanIds;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)scanIds, v6, v7, v8, v9, v10, v11);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v5, v12);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13679/*"SubmarineUnreleasedScan"*/, SaveValue, 0);
  UnityEngine_PlayerPrefs__Save(0);
}