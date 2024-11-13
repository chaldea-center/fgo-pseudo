void __fastcall ExcludeMotionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B1641A & 1) == 0 )
  {
    sub_1BCA7E0(&ExcludeMotionMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6377/*"ExcludeMotionTargetId"*/, v8, v9);
    byte_4B1641A = 1;
  }
  ExcludeMotionMaster_TypeInfo->static_fields->EXCLUDE_MOTION_TARGET_ID = (struct System_String_o *)StringLiteral_6377/*"ExcludeMotionTargetId"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ExcludeMotionMaster_TypeInfo->static_fields,
    StringLiteral_6377/*"ExcludeMotionTargetId"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ExcludeMotionMaster___ctor(ExcludeMotionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16417 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__, method, v2);
    byte_4B16417 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    486,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string___ctor__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_Dictionary_object__object__o *enemyScript; // x23
  __int64 v19; // x2
  const MethodInfo *v20; // x7
  int32_t TargetSvtType; // w22
  ExcludeMotionMaster_c *v22; // x0
  __int64 v23; // x3
  int32_t *v24; // x0
  const MethodInfo *v25; // x7
  TerminalPramsManager_c *v26; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x7
  ExcludeMotionEntity_o *v29; // x23
  TerminalPramsManager_c *v30; // x0
  long double inited; // q0
  System_Int32_array **p_optionIndexes; // x8
  _QWORD *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  System_Int32_array *result; // x0
  const MethodInfo *v38; // x0
  ExcludeMotionMaster_o *v39; // [xsp+0h] [xbp-50h] BYREF
  ExcludeMotionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B16419 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, svtData, stateName);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v9, v10);
    sub_1BCA7E0(&ExcludeMotionMaster_TypeInfo, v11, v12);
    sub_1BCA7E0(&long_TypeInfo, v13, v14);
    this = (ExcludeMotionMaster_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v15, v16);
    byte_4B16419 = 1;
  }
  v39 = 0LL;
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
  v22 = ExcludeMotionMaster_TypeInfo;
  if ( !ExcludeMotionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ExcludeMotionMaster_TypeInfo, svtData);
    v22 = ExcludeMotionMaster_TypeInfo;
  }
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          enemyScript,
          (Il2CppObject *)v22->static_fields->EXCLUDE_MOTION_TARGET_ID,
          (Il2CppObject **)&v39,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_12;
  this = v39;
  if ( !v39 )
    goto LABEL_46;
  if ( v39->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v24 = (int32_t *)j_il2cpp_object_unbox_0(v39, long_TypeInfo, v19, v23);
    this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                      v8,
                                      &entity,
                                      1,
                                      *v24,
                                      TargetSvtType,
                                      stateName,
                                      weaponGroup,
                                      v25);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_34:
      if ( entity )
      {
        p_optionIndexes = &entity->fields.optionIndexes;
        return *p_optionIndexes;
      }
LABEL_46:
      sub_1BCAA3C(this, svtData);
    }
LABEL_12:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
    if ( !byte_4B12DC3 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, svtData, v19);
      byte_4B12DC3 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
      v26 = TerminalPramsManager_TypeInfo;
    }
    if ( !ExcludeMotionMaster__TryGetEntity(
            v8,
            &entity,
            2,
            v26->static_fields->_QuestId_k__BackingField,
            TargetSvtType,
            stateName,
            weaponGroup,
            v20) )
      goto LABEL_50;
    v29 = entity;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
    if ( !byte_4B12DCE )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, svtData, v27);
      byte_4B12DCE = 1;
    }
    this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
      this = (ExcludeMotionMaster_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v29 )
      goto LABEL_46;
    this = (ExcludeMotionMaster_o *)ExcludeMotionEntity__IsSatisfyPhaseCond(
                                      v29,
                                      (int32_t)this[2].fields._lookup->fields._entries,
                                      v27);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_50:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
      if ( !byte_4B12DC6 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, svtData, v27);
        byte_4B12DC6 = 1;
      }
      v30 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, svtData);
        v30 = TerminalPramsManager_TypeInfo;
      }
      this = (ExcludeMotionMaster_o *)ExcludeMotionMaster__TryGetEntity(
                                        v8,
                                        &entity,
                                        3,
                                        v30->static_fields->_WarId_k__BackingField,
                                        TargetSvtType,
                                        stateName,
                                        weaponGroup,
                                        v28);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v33 = Method_System_Array_Empty_int___;
        v34 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v34 )
        {
          sub_1C1C718(Method_System_Array_Empty_int___, svtData);
          v34 = v33[7];
        }
        v35 = *(_QWORD *)(v34 + 16);
        if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
          v35 = sub_1C1C6BC(inited);
        if ( !*(_DWORD *)(v35 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v35, svtData);
        v36 = *(_QWORD *)(v33[7] + 16LL);
        if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
          v36 = sub_1C1C6BC(inited);
        p_optionIndexes = *(System_Int32_array ***)(v36 + 184);
        return *p_optionIndexes;
      }
    }
    goto LABEL_34;
  }
  sub_1BCACFC(v39);
  ExcludeMotionMaster___cctor(v38);
  return result;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B16418 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&targetIdType);
    byte_4B16418 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ExcludeMotionMaster__ExcludeMotionEntity__string__TryGetEntity__);
}