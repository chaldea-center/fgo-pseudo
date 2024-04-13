void __fastcall ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct ExcludeMotionMaster_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ExcludeMotionMaster_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E7A03 & 1) == 0 )
  {
    sub_B5D5C4(&ExcludeMotionMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23533/*"warId"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_21905/*"questPhase"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v14, v15, v16);
    byte_42E7A03 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ExcludeMotionMaster_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23533/*"warId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23533/*"warId"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = ExcludeMotionMaster_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_21903/*"questId"*/;
  v19->QUEST_ID = (struct System_String_o *)StringLiteral_21903/*"questId"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->QUEST_ID, v20, v21, v22, v23, v24, v25, v26);
  v27 = ExcludeMotionMaster_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_21905/*"questPhase"*/;
  v27->QUEST_PHASE = (struct System_String_o *)StringLiteral_21905/*"questPhase"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->QUEST_PHASE, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7A01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7A01 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    485,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
}


bool __fastcall ExcludeMotionMaster__TryGetEntity(
        ExcludeMotionMaster_o *this,
        ExcludeMotionEntity_o **entity,
        int32_t idx,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E7A02 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      idx,
      stateName);
    byte_42E7A02 = 1;
  }
  PK = ExcludeMotionEntity__CreatePK(idx, stateName, weaponGroup, (const MethodInfo *)stateName);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}