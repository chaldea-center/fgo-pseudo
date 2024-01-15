void __fastcall SubmarineSaveParamsManager___ctor(SubmarineSaveParamsManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteSavedQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F7CAC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13078/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_40F7CAC = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13078/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
}


void __fastcall SubmarineSaveParamsManager__DeleteUnreleasedScanInfo(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F7CAF & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13086/*"SubmarineUnreleasedScan"*/, v1);
    byte_40F7CAF = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13086/*"SubmarineUnreleasedScan"*/, 0LL);
}


SubmarineQuestSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadBeforeQuestInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *String_34837456; // x0
  const MethodInfo *v3; // x1

  if ( (byte_40F7CAB & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13078/*"SubmarineMapBeforeQuestInfo"*/, v1);
    byte_40F7CAB = 1;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456((System_String_o *)StringLiteral_13078/*"SubmarineMapBeforeQuestInfo"*/, 0LL);
  return SubmarineQuestSaveInfo__CreateBySaveValue(String_34837456, v3);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineSaveParamsManager__LoadUnreleasedScanInfo(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *String_34837456; // x0
  const MethodInfo *v4; // x1
  SubmarineUnreleasedScanSaveInfo_o *result; // x0

  if ( (byte_40F7CAE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13086/*"SubmarineUnreleasedScan"*/, method);
    byte_40F7CAE = 1;
  }
  String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456((System_String_o *)StringLiteral_13086/*"SubmarineUnreleasedScan"*/, 0LL);
  result = SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(String_34837456, v4);
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

  if ( (byte_40F7CAA & 1) == 0 )
  {
    sub_B16FFC(&SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt);
    sub_B16FFC(&StringLiteral_13078/*"SubmarineMapBeforeQuestInfo"*/, v9);
    byte_40F7CAA = 1;
  }
  v10 = sub_B170CC(SubmarineQuestSaveInfo_TypeInfo, *(_QWORD *)&phaseCnt, isQuestClear, isQuestPhaseClear, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = questId;
  *(_DWORD *)(v10 + 20) = phaseCnt;
  *(_BYTE *)(v10 + 24) = isQuestClear;
  *(_BYTE *)(v10 + 25) = isQuestPhaseClear;
  if ( !v10 )
    sub_B170D4();
  SaveValue = SubmarineQuestSaveInfo__GetSaveValue((SubmarineQuestSaveInfo_o *)v10, v11);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13078/*"SubmarineMapBeforeQuestInfo"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall SubmarineSaveParamsManager__SaveUnreleasedScanInfo(
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  System_String_o *SaveValue; // x0

  if ( (byte_40F7CAD & 1) == 0 )
  {
    sub_B16FFC(&SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds);
    sub_B16FFC(&StringLiteral_13086/*"SubmarineUnreleasedScan"*/, v7);
    byte_40F7CAD = 1;
  }
  v8 = sub_B170CC(SubmarineUnreleasedScanSaveInfo_TypeInfo, scanIds, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = eventId;
  *(_QWORD *)(v8 + 24) = scanIds;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)scanIds, v9, v10, v11, v12, v13, v14);
  if ( !v8 )
    sub_B170D4();
  SaveValue = SubmarineUnreleasedScanSaveInfo__GetSaveValue((SubmarineUnreleasedScanSaveInfo_o *)v8, v15);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13086/*"SubmarineUnreleasedScan"*/, SaveValue, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}