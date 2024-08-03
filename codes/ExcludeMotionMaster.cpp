void __fastcall ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FC636 & 1) == 0 )
  {
    sub_1B640C8(&ExcludeMotionMaster_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6226/*"ExcludeMotionTargetId"*/, v4);
    byte_49FC636 = 1;
  }
  ExcludeMotionMaster_TypeInfo->static_fields->EXCLUDE_MOTION_TARGET_ID = (struct System_String_o *)StringLiteral_6226/*"ExcludeMotionTargetId"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ExcludeMotionMaster_TypeInfo->static_fields,
    StringLiteral_6226/*"ExcludeMotionTargetId"*/,
    v2,
    v3);
}


void __fastcall ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC633 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__, method);
    byte_49FC633 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    486,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
}


System_Int32_array *__fastcall ExcludeMotionMaster__GetExcludeOptionIndexes(
        ExcludeMotionMaster_o *this,
        BattleServantData_o *svtData,
        System_String_o *stateName,
        int32_t weaponGroup,
        const MethodInfo *method)
{
  ExcludeMotionMaster_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_Dictionary_object__object__o *enemyScript; // x23
  __int64 v15; // x1
  const MethodInfo *v16; // x7
  int32_t TargetSvtType; // w22
  ExcludeMotionMaster_c *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  int32_t *v21; // x0
  const MethodInfo *v22; // x7
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x7
  ExcludeMotionEntity_o *v27; // x23
  TerminalPramsManager_c *v28; // x0
  System_Int32_array **p_optionIndexes; // x8
  _QWORD *v30; // x19
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v35; // x0
  ExcludeMotionMaster_o *v36; // [xsp+0h] [xbp-50h] BYREF
  ExcludeMotionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_49FC635 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, svtData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v9);
    sub_1B640C8(&ExcludeMotionMaster_TypeInfo, v10);
    sub_1B640C8(&long_TypeInfo, v11);
    this = (ExcludeMotionMaster_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49FC635 = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  if ( !svtData )
    goto LABEL_46;
  deckSvt = svtData->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_46;
  enemyScript = (System_Collections_Generic_Dictionary_object__object__o *)deckSvt->fields.enemyScript;
  TargetSvtType = ExcludeMotionEntity__GetTargetSvtType(svtData, (const MethodInfo *)svtData);
  if ( !enemyScript )
    goto LABEL_12;
  v18 = ExcludeMotionMaster_TypeInfo;
  if ( !ExcludeMotionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExcludeMotionMaster_TypeInfo);
    v18 = ExcludeMotionMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          enemyScript,
          (Il2CppObject *)v18->static_fields->EXCLUDE_MOTION_TARGET_ID,
          (Il2CppObject **)&v36,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_12;
  this = v36;
  if ( !v36 )
    goto LABEL_46;
  if ( v36->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v21 = (int32_t *)j_il2cpp_object_unbox_0(v36, long_TypeInfo, v19, v20);
    this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                      v8,
                                      &entity,
                                      1,
                                      *v21,
                                      TargetSvtType,
                                      stateName,
                                      weaponGroup,
                                      v22);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_34:
      if ( entity )
      {
        p_optionIndexes = &entity->fields.optionIndexes;
        return *p_optionIndexes;
      }
LABEL_46:
      sub_1B64324(this);
    }
LABEL_12:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9045 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v15);
      byte_49F9045 = 1;
    }
    v23 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    if ( !ExcludeMotionMaster__TryGetEntity(
            v8,
            &entity,
            2,
            v23->static_fields->_QuestId_k__BackingField,
            TargetSvtType,
            stateName,
            weaponGroup,
            v16) )
      goto LABEL_50;
    v27 = entity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9050 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v24);
      byte_49F9050 = 1;
    }
    this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v27 )
      goto LABEL_46;
    this = (ExcludeMotionMaster_o *)ExcludeMotionEntity__IsSatisfyPhaseCond(
                                      v27,
                                      HIDWORD(this[2].fields._lookup->fields._buckets),
                                      v25);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_50:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9048 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v24);
        byte_49F9048 = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                        v8,
                                        &entity,
                                        3,
                                        v28->static_fields->_WarId_k__BackingField,
                                        TargetSvtType,
                                        stateName,
                                        weaponGroup,
                                        v26);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v30 = Method_System_Array_Empty_int___;
        v31 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v31 )
        {
          sub_1BB6000(Method_System_Array_Empty_int___);
          v31 = v30[7];
        }
        v32 = *(_QWORD *)(v31 + 16);
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1BB5FA4(v32);
        if ( !*(_DWORD *)(v32 + 224) )
          j_il2cpp_runtime_class_init_0(v32);
        v33 = *(_QWORD *)(v30[7] + 16LL);
        if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
          v33 = sub_1BB5FA4(v33);
        p_optionIndexes = *(System_Int32_array ***)(v33 + 184);
        return *p_optionIndexes;
      }
    }
    goto LABEL_34;
  }
  sub_1B645E4(v36);
  ExcludeMotionMaster___cctor(v35);
  return result;
}


bool __fastcall ExcludeMotionMaster__TryGetEntity(
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

  if ( (byte_49FC634 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__, entity);
    byte_49FC634 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}