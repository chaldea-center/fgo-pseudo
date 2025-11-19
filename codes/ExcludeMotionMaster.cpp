void ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB6523 & 1) == 0 )
  {
    sub_1C6BA08(&ExcludeMotionMaster_TypeInfo);
    sub_1C6BA08(&StringLiteral_6286/*"ExcludeMotionTargetId"*/);
    byte_4CB6523 = 1;
  }
  ExcludeMotionMaster_TypeInfo->static_fields->EXCLUDE_MOTION_TARGET_ID = (struct System_String_o *)StringLiteral_6286/*"ExcludeMotionTargetId"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)ExcludeMotionMaster_TypeInfo->static_fields, StringLiteral_6286/*"ExcludeMotionTargetId"*/, v1, v2);
}


void ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6520 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
    byte_4CB6520 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    493,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
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
  __int64 v15; // x3
  int32_t *v16; // x0
  const MethodInfo *v17; // x7
  TerminalPramsManager_c *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x7
  ExcludeMotionEntity_o *v21; // x23
  TerminalPramsManager_c *v22; // x0
  long double inited; // q0
  System_Int32_array **p_optionIndexes; // x8
  _QWORD *v25; // x19
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v30; // x0
  ExcludeMotionMaster_o *v31; // [xsp+0h] [xbp-50h] BYREF
  ExcludeMotionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4CB6522 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&ExcludeMotionMaster_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    this = (ExcludeMotionMaster_o *)sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB6522 = 1;
  }
  v31 = 0;
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
  if ( !ExcludeMotionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExcludeMotionMaster_TypeInfo);
    v13 = ExcludeMotionMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          v10,
          (Il2CppObject *)v13->static_fields->EXCLUDE_MOTION_TARGET_ID,
          (Il2CppObject **)&v31,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_12;
  this = v31;
  if ( !v31 )
    goto LABEL_46;
  if ( v31->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v16 = (int32_t *)j_il2cpp_object_unbox_0(v31, long_TypeInfo, v14, v15);
    this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                      v8,
                                      &entity,
                                      1,
                                      *v16,
                                      TargetSvtType,
                                      stateName,
                                      weaponGroup,
                                      v17);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_34:
      if ( entity )
      {
        p_optionIndexes = &entity->fields.optionIndexes;
        return *p_optionIndexes;
      }
LABEL_46:
      sub_1C6BC60(this, svtData);
    }
LABEL_12:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB02AF )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB02AF = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    if ( !ExcludeMotionMaster__TryGetEntity(
            v8,
            &entity,
            2,
            v18->static_fields->_QuestId_k__BackingField,
            TargetSvtType,
            stateName,
            weaponGroup,
            v11) )
      goto LABEL_50;
    v21 = entity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CB02AE )
    {
      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
      byte_4CB02AE = 1;
    }
    this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v21 )
      goto LABEL_46;
    this = (ExcludeMotionMaster_o *)ExcludeMotionEntity__IsSatisfyPhaseCond(
                                      v21,
                                      (int32_t)this[2].fields.list->fields._monitor,
                                      v19);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_50:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4CB065F )
      {
        sub_1C6BA08(&TerminalPramsManager_TypeInfo);
        byte_4CB065F = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                        v8,
                                        &entity,
                                        3,
                                        v22->static_fields->_WarId_k__BackingField,
                                        TargetSvtType,
                                        stateName,
                                        weaponGroup,
                                        v20);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v25 = Method_System_Array_Empty_int___;
        v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v26 )
        {
          sub_1C41AF8(Method_System_Array_Empty_int___);
          v26 = v25[7];
        }
        v27 = *(_QWORD *)(v26 + 16);
        if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
          v27 = sub_1C41A9C(inited);
        if ( !*(_DWORD *)(v27 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v27);
        v28 = *(_QWORD *)(v25[7] + 16LL);
        if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
          v28 = sub_1C41A9C(inited);
        p_optionIndexes = *(System_Int32_array ***)(v28 + 184);
        return *p_optionIndexes;
      }
    }
    goto LABEL_34;
  }
  sub_1C6BFFC(v31);
  ExcludeMotionMaster___cctor(v30);
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

  if ( (byte_4CB6521 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
    byte_4CB6521 = 1;
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
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}