void ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5970BB6 & 1) == 0 )
  {
    sub_2213A60(&ExcludeMotionMaster_TypeInfo);
    sub_2213A60(&StringLiteral_6566/*"ExcludeMotionTargetId"*/);
    byte_5970BB6 = 1;
  }
  v7 = StringLiteral_6566/*"ExcludeMotionTargetId"*/;
  ExcludeMotionMaster_TypeInfo->static_fields->EXCLUDE_MOTION_TARGET_ID = (struct System_String_o *)StringLiteral_6566/*"ExcludeMotionTargetId"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ExcludeMotionMaster_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970BB3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
    byte_5970BB3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
}


System_Int32_array *ExcludeMotionMaster__GetExcludeOptionIndexes(
        ExcludeMotionMaster_o *this,
        BattleServantData_o *svtData,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  ExcludeMotionMaster_o *v8; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_Dictionary_object__object__o *v10; // x23
  const MethodInfo *v11; // x7
  int32_t TargetSvtType; // w22
  ExcludeMotionMaster_c *v13; // x0
  __int64 v14; // x2
  int32_t *v15; // x0
  const MethodInfo *v16; // x7
  TerminalPramsManager_c *v17; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x7
  ExcludeMotionEntity_o *v20; // x23
  TerminalPramsManager_c *v21; // x0
  long double v22; // q0
  System_Int32_array **p_optionIndexes; // x8
  _QWORD *v24; // x19
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v29; // x0
  ExcludeMotionMaster_o *v30; // [xsp+0h] [xbp-50h] BYREF
  ExcludeMotionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_5970BB5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&ExcludeMotionMaster_TypeInfo);
    this = (ExcludeMotionMaster_o *)sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5970BB5 = 1;
  }
  v30 = 0;
  entity = 0;
  if ( !svtData )
    goto LABEL_46;
  deckSvt = svtData->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_46;
  v10 = *(System_Collections_Generic_Dictionary_object__object__o **)&deckSvt->fields.npcId;
  TargetSvtType = ExcludeMotionEntity__GetTargetSvtType(svtData, (const MethodInfo *)svtData);
  if ( !v10 )
    goto LABEL_12;
  v13 = ExcludeMotionMaster_TypeInfo;
  if ( !*(&ExcludeMotionMaster_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExcludeMotionMaster_TypeInfo, svtData);
    v13 = ExcludeMotionMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v10,
          (Il2CppObject *)v13->static_fields->EXCLUDE_MOTION_TARGET_ID,
          (Il2CppObject **)&v30,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_12;
  this = v30;
  if ( !v30 )
    goto LABEL_46;
  if ( v30->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
  {
    v15 = (int32_t *)j_il2cpp_object_unbox_0(v30, qword_5984368, v14);
    this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                      v8,
                                      &entity,
                                      1,
                                      *v15,
                                      TargetSvtType,
                                      stateName,
                                      weaponGroup,
                                      v16);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_34:
      if ( entity )
      {
        p_optionIndexes = &entity->fields.optionIndexes;
        return *p_optionIndexes;
      }
LABEL_46:
      sub_2213CDC(this, svtData);
    }
LABEL_12:
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( !ExcludeMotionMaster__TryGetEntity(
            v8,
            &entity,
            2,
            v17->static_fields->_QuestId_k__BackingField,
            TargetSvtType,
            stateName,
            weaponGroup,
            v11) )
      goto LABEL_50;
    v20 = entity;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92D = 1;
    }
    this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
      this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v20 )
      goto LABEL_46;
    this = (ExcludeMotionMaster_o *)ExcludeMotionEntity__IsSatisfyPhaseCond(
                                      v20,
                                      (int32_t)this[2].fields.list->fields._monitor,
                                      v18);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_50:
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
      if ( !byte_596A743 )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596A743 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
        v21 = TerminalPramsManager_TypeInfo;
      }
      this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                        v8,
                                        &entity,
                                        3,
                                        v21->static_fields->_WarId_k__BackingField,
                                        TargetSvtType,
                                        stateName,
                                        weaponGroup,
                                        v19);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v24 = Method_System_Array_Empty_int___;
        v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v25 )
        {
          sub_224B964(Method_System_Array_Empty_int___);
          v25 = v24[7];
        }
        v26 = *(_QWORD *)(v25 + 16);
        if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
          v26 = sub_224B908(v22);
        if ( !*(_DWORD *)(v26 + 228) )
          *(__n128 *)&v22 = j_il2cpp_runtime_class_init_0(v26, svtData);
        v27 = *(_QWORD *)(v24[7] + 16LL);
        if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
          v27 = sub_224B908(v22);
        p_optionIndexes = *(System_Int32_array ***)(v27 + 184);
        return *p_optionIndexes;
      }
    }
    goto LABEL_34;
  }
  sub_221405C(v30, qword_5984368, v14);
  ExcludeMotionMaster___cctor(v29);
  return result;
}


bool ExcludeMotionMaster__TryGetEntity(
        ExcludeMotionMaster_o *this,
        ExcludeMotionEntity_o **entity,
        int32_t targetIdType,
        int32_t targetId,
        int32_t targetSvtType,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5970BB4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
    byte_5970BB4 = 1;
  }
  PK = (Il2CppObject *)ExcludeMotionEntity__CreatePK(
                         targetIdType,
                         targetId,
                         targetSvtType,
                         stateName,
                         weaponGroup,
                         (const MethodInfo *)stateName);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}