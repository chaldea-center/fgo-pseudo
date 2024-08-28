void __fastcall ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A1FCFA & 1) == 0 )
  {
    sub_1B715CC(&ExcludeMotionMaster_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_6233/*"ExcludeMotionTargetId"*/, v4);
    byte_4A1FCFA = 1;
  }
  ExcludeMotionMaster_TypeInfo->static_fields->EXCLUDE_MOTION_TARGET_ID = (struct System_String_o *)StringLiteral_6233/*"ExcludeMotionTargetId"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)ExcludeMotionMaster_TypeInfo->static_fields,
    StringLiteral_6233/*"ExcludeMotionTargetId"*/,
    v2,
    v3);
}


void __fastcall ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1FCF7 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__, method);
    byte_4A1FCF7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    486,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
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
  System_Int32_array **p_optionIndexes; // x8
  _QWORD *v28; // x19
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v33; // x0
  ExcludeMotionMaster_o *v34; // [xsp+0h] [xbp-50h] BYREF
  ExcludeMotionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4A1FCF9 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Empty_int___, svtData);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v9);
    sub_1B715CC(&ExcludeMotionMaster_TypeInfo, v10);
    sub_1B715CC(&long_TypeInfo, v11);
    this = (ExcludeMotionMaster_o *)sub_1B715CC(&TerminalPramsManager_TypeInfo, v12);
    byte_4A1FCF9 = 1;
  }
  v34 = 0LL;
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
          (Il2CppObject **)&v34,
          (const MethodInfo_31A051C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_12;
  this = v34;
  if ( !v34 )
    goto LABEL_46;
  if ( v34->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v20 = (int32_t *)j_il2cpp_object_unbox_0(v34, long_TypeInfo, v18, v19);
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
      sub_1B71828(this, svtData);
    }
LABEL_12:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A1C74C )
    {
      sub_1B715CC(&TerminalPramsManager_TypeInfo, svtData);
      byte_4A1C74C = 1;
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
    if ( !byte_4A1C757 )
    {
      sub_1B715CC(&TerminalPramsManager_TypeInfo, svtData);
      byte_4A1C757 = 1;
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
                                      (int32_t)this[2].fields._lookup->fields._entries,
                                      v23);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_50:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A1C74F )
      {
        sub_1B715CC(&TerminalPramsManager_TypeInfo, svtData);
        byte_4A1C74F = 1;
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
        v28 = Method_System_Array_Empty_int___;
        v29 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v29 )
        {
          sub_1BC3504(Method_System_Array_Empty_int___);
          v29 = v28[7];
        }
        v30 = *(_QWORD *)(v29 + 16);
        if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
          v30 = sub_1BC34A8(v30);
        if ( !*(_DWORD *)(v30 + 224) )
          j_il2cpp_runtime_class_init_0(v30);
        v31 = *(_QWORD *)(v28[7] + 16LL);
        if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
          v31 = sub_1BC34A8(v31);
        p_optionIndexes = *(System_Int32_array ***)(v31 + 184);
        return *p_optionIndexes;
      }
    }
    goto LABEL_34;
  }
  sub_1B71AE8(v34);
  ExcludeMotionMaster___cctor(v33);
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

  if ( (byte_4A1FCF8 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__, entity);
    byte_4A1FCF8 = 1;
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
           (const MethodInfo_30F8B08 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}