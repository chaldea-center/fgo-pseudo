void __fastcall ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ExcludeMotionMaster_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ExcludeMotionMaster_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4389FC5 & 1) == 0 )
  {
    sub_B775C4(&ExcludeMotionMaster_TypeInfo);
    sub_B775C4(&StringLiteral_23707/*"warId"*/);
    sub_B775C4(&StringLiteral_22071/*"questPhase"*/);
    sub_B775C4(&StringLiteral_22069/*"questId"*/);
    byte_4389FC5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ExcludeMotionMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23707/*"warId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23707/*"warId"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ExcludeMotionMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22069/*"questId"*/;
  v9->QUEST_ID = (struct System_String_o *)StringLiteral_22069/*"questId"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->QUEST_ID, v10, v11, v12, v13, v14, v15, v16);
  v17 = ExcludeMotionMaster_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_22071/*"questPhase"*/;
  v17->QUEST_PHASE = (struct System_String_o *)StringLiteral_22071/*"questPhase"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->QUEST_PHASE, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389FC3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
    byte_4389FC3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    485,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
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

  if ( (byte_4389FC4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
    byte_4389FC4 = 1;
  }
  PK = ExcludeMotionEntity__CreatePK(idx, stateName, weaponGroup, (const MethodInfo *)stateName);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}