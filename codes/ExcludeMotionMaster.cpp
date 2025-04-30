void __fastcall ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4A4E6D0 & 1) == 0 )
  {
    sub_1B863B8(&ExcludeMotionMaster_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_6225/*"ExcludeMotionTargetId"*/, v4);
    byte_4A4E6D0 = 1;
  }
  ExcludeMotionMaster_TypeInfo->static_fields->EXCLUDE_MOTION_TARGET_ID = (struct System_String_o *)StringLiteral_6225/*"ExcludeMotionTargetId"*/;
  sub_1B8635C((CGThumbnailListItem_o *)ExcludeMotionMaster_TypeInfo->static_fields, StringLiteral_6225/*"ExcludeMotionTargetId"*/, v2, v3);
}


void __fastcall ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4E6CD & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__, method);
    byte_4A4E6CD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    493,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
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
  const MethodInfo *v15; // x7
  int32_t TargetSvtType; // w22
  ExcludeMotionMaster_c *v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  int32_t *v20; // x0
  const MethodInfo *v21; // x7
  TerminalPramsManager_c *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x7
  ExcludeMotionEntity_o *v25; // x23
  TerminalPramsManager_c *v26; // x0
  long double inited; // q0
  System_Int32_array **p_optionIndexes; // x8
  _QWORD *v29; // x19
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v34; // x0
  ExcludeMotionMaster_o *v35; // [xsp+0h] [xbp-50h] BYREF
  ExcludeMotionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4A4E6CF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_int___, svtData);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v9);
    sub_1B863B8(&ExcludeMotionMaster_TypeInfo, v10);
    sub_1B863B8(&long_TypeInfo, v11);
    this = (ExcludeMotionMaster_o *)sub_1B863B8(&TerminalPramsManager_TypeInfo, v12);
    byte_4A4E6CF = 1;
  }
  v35 = 0LL;
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
  v17 = ExcludeMotionMaster_TypeInfo;
  if ( !ExcludeMotionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExcludeMotionMaster_TypeInfo);
    v17 = ExcludeMotionMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          enemyScript,
          (Il2CppObject *)v17->static_fields->EXCLUDE_MOTION_TARGET_ID,
          (Il2CppObject **)&v35,
          (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_12;
  this = v35;
  if ( !v35 )
    goto LABEL_46;
  if ( v35->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v20 = (int32_t *)j_il2cpp_object_unbox_0(v35, long_TypeInfo, v18, v19);
    this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                      v8,
                                      &entity,
                                      1,
                                      *v20,
                                      TargetSvtType,
                                      stateName,
                                      weaponGroup,
                                      v21);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_34:
      if ( entity )
      {
        p_optionIndexes = &entity->fields.optionIndexes;
        return *p_optionIndexes;
      }
LABEL_46:
      sub_1B86614(this, svtData);
    }
LABEL_12:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E97 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, svtData);
      byte_4A48E97 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    if ( !ExcludeMotionMaster__TryGetEntity(
            v8,
            &entity,
            2,
            v22->static_fields->_QuestId_k__BackingField,
            TargetSvtType,
            stateName,
            weaponGroup,
            v15) )
      goto LABEL_50;
    v25 = entity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A48E96 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, svtData);
      byte_4A48E96 = 1;
    }
    this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v25 )
      goto LABEL_46;
    this = (ExcludeMotionMaster_o *)ExcludeMotionEntity__IsSatisfyPhaseCond(
                                      v25,
                                      (int32_t)this[2].fields.list->fields._monitor,
                                      v23);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_50:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4AE79 )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, svtData);
        byte_4A4AE79 = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                        v8,
                                        &entity,
                                        3,
                                        v26->static_fields->_WarId_k__BackingField,
                                        TargetSvtType,
                                        stateName,
                                        weaponGroup,
                                        v24);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v29 = Method_System_Array_Empty_int___;
        v30 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v30 )
        {
          sub_1BD6AA4(Method_System_Array_Empty_int___);
          v30 = v29[7];
        }
        v31 = *(_QWORD *)(v30 + 16);
        if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
          v31 = sub_1BD6A48(inited);
        if ( !*(_DWORD *)(v31 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v31);
        v32 = *(_QWORD *)(v29[7] + 16LL);
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1BD6A48(inited);
        p_optionIndexes = *(System_Int32_array ***)(v32 + 184);
        return *p_optionIndexes;
      }
    }
    goto LABEL_34;
  }
  sub_1B868D4(v35);
  ExcludeMotionMaster___cctor(v34);
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

  if ( (byte_4A4E6CE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__, entity);
    byte_4A4E6CE = 1;
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
           (const MethodInfo_3218D84 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}