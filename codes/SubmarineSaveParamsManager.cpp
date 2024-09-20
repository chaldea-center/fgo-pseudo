void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  if ( (byte_4A57E29 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13056/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4A57E29 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13056/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  if ( (byte_4A57E2C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13064/*"SubmarineUnreleasedScan"*/);
    byte_4A57E2C = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13064/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  System_String_o *String_69417656; // x0
  const MethodInfo *v2; // x1

  if ( (byte_4A57E28 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13056/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4A57E28 = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656((System_String_o *)StringLiteral_13056/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_69417656, v2);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_69417656; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_4A57E2B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13064/*"SubmarineUnreleasedScan"*/);
    byte_4A57E2B = 1;
  }
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656((System_String_o *)StringLiteral_13064/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_69417656, v4);
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
  const MethodInfo *v10; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4A57E27 & 1) == 0 )
  {
    sub_1B885B0(&SubmarineQuestSaveInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_13056/*"SubmarineMapBeforeQuestInfo"*/);
    byte_4A57E27 = 1;
  }
  v9 = sub_1B887FC(SubmarineQuestSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phaseCnt;
  *(_BYTE *)(v9 + 24) = isQuestClear;
  *(_BYTE *)(v9 + 25) = isQuestPhaseClear;
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v9, v10);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13056/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_4A57E2A & 1) == 0 )
  {
    sub_1B885B0(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_13064/*"SubmarineUnreleasedScan"*/);
    byte_4A57E2A = 1;
  }
  v5 = sub_1B887FC(SubmarineUnreleasedScanSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = eventId;
  *(_QWORD *)(v5 + 24) = scanIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)scanIds, v6, v7);
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v5, v8);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13064/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}