void ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31302 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D31302 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D312C1 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D312C1 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v6, 0);
}


System_String_o *ServantEntity__GetAddCardIdsKey(int32_t commandType, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8

  if ( (byte_4D312FE & 1) == 0 )
  {
    sub_1C93AD4(&BattleCommand_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_2165/*"AddQuickCardIds"*/);
    sub_1C93AD4(&StringLiteral_2171/*"AddWeakCardIds"*/);
    sub_1C93AD4(&StringLiteral_2155/*"AddArtsCardIds"*/);
    sub_1C93AD4(&StringLiteral_2157/*"AddBusterCardIds"*/);
    sub_1C93AD4(&StringLiteral_2168/*"AddStrengthCardIds"*/);
    byte_4D312FE = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isARTS(commandType, 0) )
  {
    static_fields = (struct System_String_StaticFields *)&StringLiteral_2155/*"AddArtsCardIds"*/;
  }
  else
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER(commandType, 0) )
    {
      static_fields = (struct System_String_StaticFields *)&StringLiteral_2157/*"AddBusterCardIds"*/;
    }
    else
    {
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK(commandType, 0) )
      {
        static_fields = (struct System_String_StaticFields *)&StringLiteral_2165/*"AddQuickCardIds"*/;
      }
      else
      {
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        if ( BattleCommand__IsWEAK(commandType, 0) )
        {
          static_fields = (struct System_String_StaticFields *)&StringLiteral_2171/*"AddWeakCardIds"*/;
        }
        else
        {
          if ( !BattleCommand_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
          if ( BattleCommand__IsSTRENGTH(commandType, 0) )
            static_fields = (struct System_String_StaticFields *)&StringLiteral_2168/*"AddStrengthCardIds"*/;
          else
            static_fields = string_TypeInfo->static_fields;
        }
      }
    }
  }
  return static_fields->Empty;
}


System_String_o *ServantEntity__GetAddCardWeightsKey(int32_t commandType, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8

  if ( (byte_4D312FF & 1) == 0 )
  {
    sub_1C93AD4(&BattleCommand_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_2156/*"AddArtsCardWeights"*/);
    sub_1C93AD4(&StringLiteral_2158/*"AddBusterCardWeights"*/);
    sub_1C93AD4(&StringLiteral_2172/*"AddWeakCardWeights"*/);
    sub_1C93AD4(&StringLiteral_2166/*"AddQuickCardWeights"*/);
    sub_1C93AD4(&StringLiteral_2169/*"AddStrengthCardWeights"*/);
    byte_4D312FF = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( BattleCommand__isARTS(commandType, 0) )
  {
    static_fields = (struct System_String_StaticFields *)&StringLiteral_2156/*"AddArtsCardWeights"*/;
  }
  else
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER(commandType, 0) )
    {
      static_fields = (struct System_String_StaticFields *)&StringLiteral_2158/*"AddBusterCardWeights"*/;
    }
    else
    {
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK(commandType, 0) )
      {
        static_fields = (struct System_String_StaticFields *)&StringLiteral_2166/*"AddQuickCardWeights"*/;
      }
      else
      {
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        if ( BattleCommand__IsWEAK(commandType, 0) )
        {
          static_fields = (struct System_String_StaticFields *)&StringLiteral_2172/*"AddWeakCardWeights"*/;
        }
        else
        {
          if ( !BattleCommand_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
          if ( BattleCommand__IsSTRENGTH(commandType, 0) )
            static_fields = (struct System_String_StaticFields *)&StringLiteral_2169/*"AddStrengthCardWeights"*/;
          else
            static_fields = string_TypeInfo->static_fields;
        }
      }
    }
  }
  return static_fields->Empty;
}


System_Int32_array *ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D312F3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17044/*"assumedEffectId"*/);
    byte_4D312F3 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17044/*"assumedEffectId"*/, 0);
}


System_Int32_array *ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned __int64 v9; // x27
  SkillInfo_o *v10; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v12; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  unsigned __int64 v15; // x28
  int32_t *p_revision; // x21
  unsigned __int64 max_length_low; // x9
  DataVals_o *v18; // x25
  int32_t v19; // w1
  int32_t Param; // w26
  int32_t v21; // w1
  int32_t v22; // w0
  System_Collections_Generic_HashSet_int__o *v23; // x19
  _BOOL8 v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 count; // x1
  System_Int32_array *v29; // x20
  System_Collections_Generic_HashSet_int__o *v31; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v32; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v33; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v35; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4D312F6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D312F6 = 1;
  }
  v35 = 0;
  entity = 0;
  memset(&v34, 0, sizeof(v34));
  v33 = 0;
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  max_length = enableSkillInfoList->max_length;
  v8 = DataValsList;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)max_length )
LABEL_55:
        sub_1C93D34(DataValsList);
      v10 = enableSkillInfoList->m_Items[v9];
      if ( v10 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v10->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v10->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_object )
              goto LABEL_54;
            DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__GetEntity(
                                                                           (SkillLvMaster_o *)Master_object,
                                                                           (int32_t)id,
                                                                           lv,
                                                                           0);
            if ( DataValsList )
            {
              id = *(System_Collections_Generic_IEnumerable_T__o **)&DataValsList->fields.revision;
              v12 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v31;
                if ( !v31 )
                  goto LABEL_54;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v31,
                  id,
                  (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getDataValsList(v12, 0);
                funcId = v12->fields.funcId;
                if ( !funcId )
                  goto LABEL_54;
                v14 = DataValsList;
                v15 = 0;
                p_revision = &DataValsList->fields.revision;
                while ( 1 )
                {
                  max_length_low = LODWORD(funcId->max_length);
                  if ( (__int64)v15 >= (int)max_length_low )
                    break;
                  if ( v15 >= max_length_low )
                    goto LABEL_55;
                  if ( !v8 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v8,
                                                                                 &entity,
                                                                                 funcId->m_Items[v15],
                                                                                 (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_54;
                    DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)FuncList__isAddState(
                                                                                   (int32_t)entity[1].monitor,
                                                                                   0);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v14 )
                        goto LABEL_54;
                      if ( v15 >= LODWORD(v14->fields._MasterName_k__BackingField) )
                        goto LABEL_55;
                      if ( !entity )
                        goto LABEL_54;
                      v18 = *(DataVals_o **)&p_revision[2 * v15];
                      if ( !v18 )
                        goto LABEL_54;
                      DataVals__SetTempType(
                        *(DataVals_o **)&p_revision[2 * v15],
                        (FunctionMaster_o *)v8,
                        (int32_t)entity[1].monitor,
                        0);
                      if ( DataVals__isParam(v18, 28, 0) )
                        v19 = 28;
                      else
                        v19 = 3;
                      Param = DataVals__GetParam(v18, v19, 0, 0);
                      if ( DataVals__isParam(v18, 29, 0) )
                        v21 = 29;
                      else
                        v21 = 4;
                      v22 = DataVals__GetParam(v18, v21, 0, 0);
                      DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__TryGetEntity(
                                                                                     (SkillLvMaster_o *)Master_object,
                                                                                     &v35,
                                                                                     Param,
                                                                                     v22,
                                                                                     0);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v35 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v35->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v31,
                            id,
                            (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v12->fields.funcId;
                  ++v15;
                  if ( !funcId )
                    goto LABEL_54;
                }
              }
            }
          }
        }
      }
      LODWORD(max_length) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v9 < (int)max_length );
  }
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v31;
  if ( !v31 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v32,
    v31,
    (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v34 = v32;
  while ( 1 )
  {
    v24 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v24 )
      break;
    if ( !v8 )
      sub_1C93D2C(v24, v25);
    v26 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &v33,
            (int32_t)v34.fields._current,
            (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v26 )
    {
      if ( !v33 )
        sub_1C93D2C(v26, v27);
      if ( !v23 )
        sub_1C93D2C(v26, v27);
      System_Collections_Generic_HashSet_int___Add(
        v23,
        HIDWORD(v33[4].monitor),
        (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v23 )
LABEL_54:
    sub_1C93D2C(DataValsList, id);
  count = (unsigned int)v23->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v29 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_57829604(
    v23,
    v29,
    (const MethodInfo_37268E4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v29;
}


int32_t ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  BalanceConfig_c *v10; // x0
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int32_t v13; // t1
  int32_t result; // w0

  if ( (byte_4D312F7 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D312F7 = 1;
  }
  if ( isPlayableBeastToBase )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    classId = this->fields.classId;
    p_classId = &this->fields.classId;
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->PlayableBeastClassIds,
           classId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v10 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v10 = BalanceConfig_TypeInfo;
      }
      p_classId = &v10->static_fields->PlayableBeastBaseClassId;
    }
    return *p_classId;
  }
  if ( !isGrandServant )
  {
    p_classId = &this->fields.classId;
    return *p_classId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v12);
  v13 = this->fields.classId;
  p_classId = &this->fields.classId;
  result = GrandGraphDetailMaster__GetGrandClassId((GrandGraphDetailMaster_o *)Master_object, v13, 0);
  if ( result < 1 )
    return *p_classId;
  return result;
}


System_String_o *ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 *v3; // x8
  bool IsServantEquip; // w19

  if ( (byte_4D312D2 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_12095/*"SERVANT_UNIT"*/);
    sub_1C93AD4(&StringLiteral_5776/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C93AD4(&StringLiteral_11722/*"SERVANT_EQUIP_UNIT"*/);
    byte_4D312D2 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0) || SvtType__IsSvtMaterialTd(this->fields.type, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = &StringLiteral_12095/*"SERVANT_UNIT"*/;
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = &StringLiteral_5776/*"EXCEPT_SERVANT_UNIT"*/;
    if ( IsServantEquip )
      v3 = &StringLiteral_11722/*"SERVANT_EQUIP_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v3, 0);
}


int32_t ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D312F2 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18695/*"defaultDeadType"*/);
    byte_4D312F2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_43379524(this, (System_String_o *)StringLiteral_18695/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


System_String_o *ServantEntity__GetDetailName(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o *OriginName; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0

  if ( (byte_4D312D4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22818/*"overwriteDetailName"*/);
    byte_4D312D4 = 1;
  }
  OriginName = ServantEntity__GetOriginName(this, method);
  if ( !SvtType__IsServantEquip(this->fields.type, 0) )
    return OriginName;
  Script = ServantEntity__GetScript(this, v4);
  return EntityScriptUtil__GetStringValue(Script, (System_String_o *)StringLiteral_22818/*"overwriteDetailName"*/, OriginName, 0);
}


int32_t ServantEntity__GetDispLimitCountFromUserServantCollection(
        ServantEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  int max_length; // w8
  System_Int32_array *v7; // x20
  unsigned int v8; // w9
  unsigned int v9; // w24
  int32_t v10; // w25
  int32_t v11; // w21
  int32_t v12; // w22

  if ( (byte_4D312E9 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&StringLiteral_18433/*"costumeCondInMaxLimitCount"*/);
    byte_4D312E9 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18433/*"costumeCondInMaxLimitCount"*/, method);
  if ( ScriptIntArrayParam )
  {
    max_length = ScriptIntArrayParam->max_length;
    v7 = ScriptIntArrayParam;
    if ( (unsigned int)(-1431655765 * max_length + 715827882) <= 0x55555554 && max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length || v8 + 1 >= max_length || (v9 = v8 + 2, v8 + 2 >= max_length) )
          sub_1C93D34(ScriptIntArrayParam);
        v10 = v7->m_Items[v8];
        v11 = v7->m_Items[v8 + 1];
        v12 = v7->m_Items[v8 + 2];
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        ScriptIntArrayParam = (System_Int32_array *)CondType__IsQuestPhaseClear_41100720(v11, v12, -1, 0, 0);
        if ( ((unsigned __int8)ScriptIntArrayParam & 1) != 0 )
          break;
        max_length = v7->max_length;
        v8 = v9 + 1;
        if ( (int)(v9 + 1) >= max_length )
          return defVal;
      }
      return v10;
    }
  }
  return defVal;
}


int32_t ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t EventNameServantId; // w19
  EventServantEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  int max_length; // w8
  EventServantEntity_array *v10; // x20
  unsigned int v11; // w21
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D312E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D312E0 = 1;
  }
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (EventServantEntity_array *)ServantEntity__GetEventNameServantId(this, v8);
    if ( !MasterData_object )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0);
    if ( !Instance )
      goto LABEL_16;
    max_length = Instance->max_length;
    v10 = Instance;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1C93D34(Instance);
        Instance = (EventServantEntity_array *)v10->m_Items[v11];
        if ( !Instance )
          break;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)Instance,
                                                 &name,
                                                 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return 0;
      }
LABEL_16:
      sub_1C93D2C(Instance, v6);
    }
  }
  return 0;
}


int32_t ServantEntity__GetEventNameServantId(ServantEntity_o *this, const MethodInfo *method)
{
  bool v3; // zf
  ServantEntity_Fields *p_baseSvtId; // x8
  int32_t *p_fakeValue; // x9
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D312E3 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D312E3 = 1;
  }
  v3 = !SvtType__IsSvtMaterialTd(this->fields.type, 0);
  p_baseSvtId = (ServantEntity_Fields *)&this->fields.baseSvtId;
  p_fakeValue = &this->fields.baseSvtId.fields.fakeValue;
  if ( v3 )
    p_fakeValue = &this->fields.id.fields.fakeValue;
  if ( v3 )
    p_baseSvtId = &this->fields;
  v6 = *(_QWORD *)&p_baseSvtId->id.fields.currentCryptoKey;
  v7 = *(_QWORD *)p_fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v9, 0);
}


System_String_o *ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v5; // x8

  if ( (byte_4D312E6 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_7376/*"HideInAnimNode"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D312E6 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7376/*"HideInAnimNode"*/, v2);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v5 = (System_String_o *)ScriptValue;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 )
    return v5;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *ServantEntity__GetIndividuality(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


bool ServantEntity__GetIsCollectionStatusNotGet(ServantEntity_o *this, const MethodInfo *method)
{
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v4; // x1
  UserServantCollectionMaster_o *v5; // x20
  il2cpp_array_size_t max_length; // x8
  NetworkManager_c *v7; // x0
  __int64 v8; // x19
  __int64 v9; // x22
  int64_t userIdNumber; // x21
  int32_t v11; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4D312E4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312E4 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0) )
    goto LABEL_18;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0
    || (v5 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0)) == 0) )
  {
    sub_1C93D2C(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( max_length )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v7 = NetworkManager_TypeInfo;
    }
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    userIdNumber = v7->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v5, userIdNumber, v11, 0);
    if ( EntityDefinitely )
    {
      LOBYTE(max_length) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0);
      return max_length & 1;
    }
LABEL_18:
    LOBYTE(max_length) = 0;
  }
  return max_length & 1;
}


bool ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t EventNameServantId; // w19
  UserServantEntity_array *Instance; // x0
  __int64 v6; // x1
  int max_length; // w8
  UserServantEntity_array *v8; // x20
  unsigned int v9; // w24
  bool v10; // w25
  UserServantEntity_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D312E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312E2 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0) || SvtType__IsSvtMaterialTd(this->fields.type, 0) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_21;
    max_length = Instance->max_length;
    v8 = Instance;
    if ( max_length >= 1 )
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C93D34(Instance);
        v11 = v8->m_Items[v9];
        if ( !v11 )
          break;
        v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v13;
        *(_QWORD *)&v15.fields.fakeValue = v12;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                v15,
                                                0);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsEventJoin(v11, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          v10 = 1;
        }
        max_length = v8->max_length;
        if ( (int)++v9 >= max_length )
          return v10;
      }
LABEL_21:
      sub_1C93D2C(Instance, v6);
    }
  }
  return 0;
}


bool ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D312E1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312E1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                      (UserServantCollectionMaster_o *)Instance,
                                      2,
                                      0);
        if ( Instance )
          return Instance->fields.m_CancellationTokenSource != 0;
      }
    }
LABEL_12:
    sub_1C93D2C(Instance, v3);
  }
  return 0;
}


bool ServantEntity__GetIsNeedToCheckEventJoinName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3);
}


int32_t ServantEntity__GetLvLimitUpCondMaterial(ServantEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v6; // w20
  int32_t v7; // w22
  int32_t v8; // w21

  if ( (byte_4D312E8 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&StringLiteral_21635/*"lvLimitUpCondMaterial"*/);
    byte_4D312E8 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21635/*"lvLimitUpCondMaterial"*/, method);
  if ( !ScriptIntArrayParam || LODWORD(ScriptIntArrayParam->max_length) != 3 )
    return defVal;
  v7 = ScriptIntArrayParam->m_Items[0];
  v6 = ScriptIntArrayParam->m_Items[1];
  v8 = ScriptIntArrayParam->m_Items[2];
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsQuestPhaseClear_41100720(v6, v8, -1, 0, 0) )
    return v7;
  else
    return defVal;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ServantEntity__GetName(
        ServantEntity_o *this,
        int32_t limitCount,
        bool isForceNeedToCheckEventJoinName,
        int32_t imageLimitCount,
        bool useName,
        const MethodInfo *method)
{
  int32_t maxLimitCount; // w22
  const MethodInfo *v11; // x1
  void *Instance; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v15; // x1
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x21
  Il2CppObject *Master_object; // x0
  __int64 v21; // x24
  __int64 v22; // x25
  ServantLimitAddMaster_o *v23; // x22
  const MethodInfo *v24; // x4
  System_String_o *OverwriteServantName; // x0
  System_String_o *v26; // x19
  Il2CppObject *v27; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  ServantLimitAddMaster_o *v30; // x23
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x1
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  bool IsNullOrEmpty; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x20
  System_String_o *v37; // x0
  Il2CppObject *v39; // x22
  NetworkManager_c *v40; // x0
  __int64 v41; // x24
  __int64 v42; // x25
  int64_t userIdNumber; // x23
  ServantLimitAddEntity_o *v44; // [xsp+0h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v45; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4D312DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D312DE = 1;
  }
  entity = 0;
  name = 0;
  v44 = 0;
  v45 = 0;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v11) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v15);
  if ( !MasterData_object )
    goto LABEL_67;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_67;
  v16 = *((_DWORD *)Instance + 6);
  v17 = Instance;
  if ( v16 < 1 )
  {
LABEL_15:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0);
    if ( imageLimitCount < 0 )
    {
      if ( maxLimitCount == -1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        v39 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        v40 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v40 = NetworkManager_TypeInfo;
        }
        v42 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v41 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        userIdNumber = v40->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v50.fields.currentCryptoKey = v42;
        *(_QWORD *)&v50.fields.fakeValue = v41;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v50, 0);
        if ( !v39 )
          goto LABEL_67;
        if ( !UserServantCollectionMaster__TryGetEntity(
                (UserServantCollectionMaster_o *)v39,
                &v45,
                userIdNumber,
                (int32_t)Instance,
                0) )
          goto LABEL_40;
        Instance = v45;
        if ( !v45 )
          goto LABEL_67;
        Instance = (void *)UserServantCollectionEntity__IsGet(v45, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_40;
        if ( !v45 )
          goto LABEL_67;
        maxLimitCount = v45->fields.maxLimitCount;
        if ( maxLimitCount < 0 )
          goto LABEL_40;
      }
      else if ( maxLimitCount < 0 )
      {
        goto LABEL_40;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v27 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v44 = 0;
        v29 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v28 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v30 = (ServantLimitAddMaster_o *)v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v49.fields.currentCryptoKey = v29;
        *(_QWORD *)&v49.fields.fakeValue = v28;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v49, 0);
        if ( v30 )
        {
          ServantLimitAddMaster__TryGetEntity(v30, &v44, (int32_t)Instance, maxLimitCount, v31);
          if ( !v44 )
            goto LABEL_40;
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteServantName(v44, v32);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v23 = (ServantLimitAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v48.fields.currentCryptoKey = v22;
      *(_QWORD *)&v48.fields.fakeValue = v21;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v48, 0);
      if ( v23 )
      {
        if ( !ServantLimitAddMaster__TryGetEntity(v23, &entity, (int32_t)Instance, imageLimitCount, v24) )
          goto LABEL_40;
        Instance = entity;
        if ( entity )
        {
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, v13);
LABEL_37:
          v33 = OverwriteServantName;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v33, 0);
LABEL_40:
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(v19, 0);
          IsNullOrEmpty = System_String__IsNullOrEmpty(v34, 0);
          if ( useName )
          {
            if ( !IsNullOrEmpty )
              return v19;
            nameSave = this->fields.nameSave;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(nameSave, 0);
            if ( System_String__IsNullOrEmpty(v37, 0) )
              return this->fields.name;
          }
          else if ( !IsNullOrEmpty )
          {
            return v19;
          }
          return this->fields.nameSave;
        }
      }
    }
LABEL_67:
    sub_1C93D2C(Instance, v13);
  }
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= v16 )
      sub_1C93D34(Instance);
    Instance = (void *)*((_QWORD *)v17 + (int)v18 + 4);
    if ( !Instance )
      goto LABEL_67;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v16 = *((_DWORD *)v17 + 6);
    if ( (int)++v18 >= v16 )
      goto LABEL_15;
  }
  v26 = name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v26, 0);
}


int32_t ServantEntity__GetNotSamePartyKey(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D312FB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22578/*"notSamePartyKey"*/);
    byte_4D312FB = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_43379524(this, (System_String_o *)StringLiteral_22578/*"notSamePartyKey"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *ServantEntity__GetOriginName(ServantEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x19

  if ( (byte_4D312D3 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D312D3 = 1;
  }
  nameSave = this->fields.nameSave;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(nameSave, 0);
}


int32_t ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D312CF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4509/*"ClassImageId"*/);
    byte_4D312CF = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_43379524(this, (System_String_o *)StringLiteral_4509/*"ClassImageId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_Int32_array *ServantEntity__GetRankUpSkillIds(
        ServantEntity_o *this,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  System_Int32_array_array *ScriptMultiArray_int; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array_array *v7; // x20
  unsigned __int64 v8; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v10; // x21
  __int64 v11; // x1

  if ( (byte_4D312E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_IndexValue_int____79063232);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_ServantEntity_GetScriptMultiArray_int___);
    sub_1C93AD4(&StringLiteral_12994/*"SkillRankUp"*/);
    byte_4D312E5 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12994/*"SkillRankUp"*/,
                           (const MethodInfo_324BDE8 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    max_length = ScriptMultiArray_int->max_length;
    v7 = ScriptMultiArray_int;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v8 < (unsigned int)max_length )
      {
        v10 = m_Items[v8];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v10,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_3192C94 *)Method_BasicHelper_IndexValue_int____79063232);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v10;
        LODWORD(max_length) = v7->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          goto LABEL_9;
      }
LABEL_13:
      sub_1C93D34(ScriptMultiArray_int);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_1C93B7C(int___TypeInfo, 1);
  if ( !ScriptMultiArray_int )
    sub_1C93D2C(0, v11);
  v10 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !LODWORD(ScriptMultiArray_int->max_length) )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v10;
}


System_String_o *ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o *Empty; // x20
  const MethodInfo *v4; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  EventServantMaster_o *v10; // x21
  int max_length; // w8
  EventServantEntity_array *v12; // x21
  unsigned int v13; // w23
  Il2CppClass **v14; // x8
  EventServantEntity_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4D312DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D312DF = 1;
  }
  name = 0;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v4) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventServantMaster___);
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v10 = (EventServantMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v9;
    *(_QWORD *)&v19.fields.fakeValue = v8;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v19, 0);
    if ( !v10 || (Instance = EventServantMaster__GetEntities(v10, (int32_t)Instance, 0)) == 0 )
LABEL_23:
      sub_1C93D2C(Instance, v6);
    max_length = Instance->max_length;
    v12 = Instance;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1C93D34(Instance);
        v14 = &v12->obj.klass + (int)v13;
        v15 = (EventServantEntity_o *)v14[4];
        if ( !v15 )
          goto LABEL_23;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName((EventServantEntity_o *)v14[4], &name, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_18;
      }
      Empty = EventServantEntity__GetRuby(v15, 0);
    }
  }
LABEL_18:
  if ( System_String__IsNullOrEmpty(Empty, 0) )
  {
    ruby = this->fields.ruby;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(ruby, 0);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  GrandQuestFolderBoardItem_o *p_mergedScript; // x19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  Il2CppClass *klass; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x22
  System_Collections_Generic_Dictionary_object__object__o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  System_Action_T__o *v27; // x23
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_object__object__o *v29; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4D312C8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_KeyValuePair_string__object___TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_KeyValuePair_string__object____);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__);
    sub_1C93AD4(&ServantEntity___c__DisplayClass102_0_TypeInfo);
    byte_4D312C8 = 1;
  }
  entity = 0;
  memset(&v30, 0, sizeof(v30));
  p_mergedScript = (GrandQuestFolderBoardItem_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v7;
    *(_QWORD *)&v32.fields.fakeValue = v6;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v32, 0);
    if ( v8 )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v8,
              &entity,
              (int32_t)klass,
              (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v29 = *p_script;
        p_mergedScript->klass = (GrandQuestFolderBoardItem_c *)*p_script;
        sub_1C93A78(p_mergedScript, (int32_t)v29, v11, v12, v13, v14, v15, v16);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v17 = sub_1C93D20(ServantEntity___c__DisplayClass102_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v18,
        (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 16) = v18;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v17 + 16);
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)v18, v19, v20, v21, v22, v23, v24);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v27 = (System_Action_T__o *)sub_1C93D20(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_object__object_____ctor(
          v27,
          (Il2CppObject *)v17,
          Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__,
          0);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v27,
          (const MethodInfo_318F550 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v30,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v30,
                      (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_1C93D2C(0, v28);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v30.fields._current.fields.key,
                v30.fields._current.fields.value,
                (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v30,
              (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_1C93D2C(klass, v10);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_324BEB0 *method)
{
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20
  long double inited; // q0

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v7 = (System_String_o *)ScriptValue;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( System_String__IsNullOrEmpty(v7, 0) )
    return 0;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *)((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *(__fastcall *)(MethodInfo **__return_ptr, System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                                                               &method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_,
                                                                               v7,
                                                                               inited);
}


System_Int32_array_array *ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_324BDE8 *method)
{
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v7 = (System_String_o *)ScriptValue;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( System_String__IsNullOrEmpty(v7, 0) )
    return 0;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_int_(
           (Il2CppObject *)v7,
           (const MethodInfo_321403C *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *ServantEntity__GetScriptValue(ServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D312C9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D312C9 = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Int32_array *ServantEntity__GetSkillCategoryIdList(
        ServantEntity_o *this,
        int32_t skillListNum,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  bool IsServant; // w8
  System_Int32_array *result; // x0
  ServantEntity_o *v8; // x0
  const MethodInfo *v9; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-18h] BYREF

  skillInfoList = 0;
  IsServant = SvtType__IsServant(this->fields.type, 0);
  result = 0;
  if ( IsServant )
  {
    ServantEntity__GetSkillInfo(this, &skillInfoList, skillListNum, v5);
    if ( skillInfoList )
      return ServantEntity__GetCategoryIdList(v8, skillInfoList, v9);
    else
      return 0;
  }
  return result;
}


void ServantEntity__GetSkillInfo(
        ServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t skillListNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  unsigned __int64 v16; // x25
  __int64 v17; // x28
  __int64 v18; // x29
  SkillInfo_o *v19; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v21; // x1
  __int64 v22; // x23
  __int64 v23; // x24
  unsigned int *v24; // x23
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4D312F5 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&SkillInfo___TypeInfo);
    sub_1C93AD4(&SkillInfo_TypeInfo);
    byte_4D312F5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    skillListNum = v8->static_fields->SvtSkillListMax;
  }
  v9 = (SkillInfo_array *)sub_1C93B7C(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)skillInfoList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  if ( skillListNum >= 1 )
  {
    v16 = 0;
    v17 = (unsigned int)skillListNum;
    v18 = 8;
    do
    {
      v19 = (SkillInfo_o *)sub_1C93D20(SkillInfo_TypeInfo);
      SkillInfo___ctor(v19, 0);
      if ( !v19 )
LABEL_23:
        sub_1C93D2C(IsServantEquip, v21);
      v19->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v33.fields.currentCryptoKey = v23;
        *(_QWORD *)&v33.fields.fakeValue = v22;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                   v33,
                                                   0);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v16 + 1,
                           0);
        if ( IsServantEquip )
        {
          v19->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v19->fields.title,
            &v19->fields.explanation,
            0);
        }
      }
      v24 = (unsigned int *)*skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v25 = sub_1C93C10(v19, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !v25 )
      {
        v32 = sub_1C93D50(0);
        sub_1C93BFC(v32, 0);
      }
      if ( v16 >= v24[6] )
        sub_1C93D34(v25);
      *(_QWORD *)&v24[2 * v16 + 8] = v19;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24[v18], (int32_t)v19, v26, v27, v28, v29, v30, v31);
      ++v16;
      v18 += 2;
    }
    while ( v17 != v16 );
  }
}


System_Int32_array *ServantEntity__GetSubAttrReplacedIndividualityArray(
        ServantEntity_o *this,
        System_Int32_array *individualityArray,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  AttriMaster_o *v9; // x23
  int32_t IndividualityFromValue; // w22
  int v11; // w21
  System_Collections_Generic_List_int__o *v12; // x20
  il2cpp_array_size_t max_length; // x8
  char v14; // w26
  unsigned __int64 v15; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10

  if ( (byte_4D312C3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D312C3 = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v9 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)Master_object, this->fields.attri, 0);
  v11 = AttriMaster__GetIndividualityFromValue(v9, servantLimitAddEntity->fields.attri, 0);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  max_length = individualityArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C93D34(Master_object);
      v8 = (unsigned int)individualityArray->m_Items[v15];
      if ( (_DWORD)v8 == IndividualityFromValue )
      {
        if ( v11 >= 1 )
        {
          if ( !v12 )
            goto LABEL_36;
          items = v12->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v11,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size] = v11;
          }
          v14 = 1;
        }
      }
      else
      {
        if ( !v12 )
          goto LABEL_36;
        v19 = v12->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !v19 )
          goto LABEL_36;
        v21 = v12->fields._size;
        if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v8,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v21 + 1;
          v19->m_Items[v21] = v8;
        }
      }
      LODWORD(max_length) = individualityArray->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_29;
    }
  }
  v14 = 0;
LABEL_29:
  if ( v11 >= 1 && (v14 & 1) == 0 )
  {
    if ( v12 )
    {
      v23 = v12->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( v23 )
      {
        v25 = v12->fields._size;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v11,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v25 + 1;
          v23->m_Items[v25] = v11;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_36:
    sub_1C93D2C(Master_object, v8);
  }
  if ( !v12 )
    goto LABEL_36;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *ServantEntity__GetTreasureDeviceCategoryIdList(ServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  ServantTreasureDvcMaster_o *v6; // x19
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v10; // x20
  TreasureDvcLvEntity_o *v11; // x0
  TreasureDvcLvEntity_o *v12; // x21
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x23
  System_Collections_Generic_HashSet_int__o *v15; // x22
  const MethodInfo_37265BC **v16; // x27
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v19; // x24
  unsigned __int64 v20; // x29
  unsigned __int64 max_length_low; // x9
  DataVals_o *v22; // x25
  int32_t v23; // w1
  int32_t Param; // w26
  int32_t v25; // w1
  System_Collections_Generic_IEnumerable_T__o *v26; // x1
  System_Collections_Generic_HashSet_int__o *v27; // x20
  const MethodInfo_37265BC **v28; // x22
  int32_t v29; // w26
  int32_t v30; // w27
  void *v31; // x8
  System_Collections_Generic_HashSet_int__o *v32; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v39; // [xsp+0h] [xbp-D0h]
  DataVals_o **v40; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v41; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v42; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v43; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v44; // [xsp+50h] [xbp-80h] BYREF
  TreasureDvcLvEntity_o *v45; // [xsp+58h] [xbp-78h] BYREF
  SkillLvEntity_o *v46; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4D312F4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D312F4 = 1;
  }
  v46 = 0;
  entity = 0;
  v44 = 0;
  v45 = 0;
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v5 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v6 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v5;
  *(_QWORD *)&v48.fields.fakeValue = v4;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v48, 0);
  if ( !v6 )
    goto LABEL_51;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v6,
                                                (int32_t)DataValsList,
                                                1,
                                                0);
  if ( EntityFromSvtIdOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v10 = (TreasureDvcLvMaster_o *)DataValsList;
    v11 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[0], 1, 0);
    if ( !v11 )
      return 0;
    v12 = v11;
    if ( !v11->fields.funcId )
      return 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = v10;
    v13 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
    v14 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v15 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v15,
      (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v15 )
      goto LABEL_51;
    v16 = (const MethodInfo_37265BC **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)v12->fields.funcId,
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v12, 100, 0);
    funcId = v12->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v19 = DataValsList;
    v20 = 0;
    v40 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(funcId->max_length);
      if ( (__int64)v20 >= (int)max_length_low )
      {
        v32 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v32,
          (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v41,
          v15,
          (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v43 = v41;
        while ( 1 )
        {
          v33 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v33 )
            break;
          if ( !v13 )
            sub_1C93D2C(v33, v34);
          v35 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                  &v42,
                  (int32_t)v43.fields._current,
                  (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v35 )
          {
            if ( !v42 )
              sub_1C93D2C(v35, v36);
            if ( !v32 )
              sub_1C93D2C(v35, v36);
            System_Collections_Generic_HashSet_int___Add(
              v32,
              HIDWORD(v42[4].monitor),
              (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v32 )
        {
          count = (unsigned int)v32->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_57829604(
              v32,
              EntityFromSvtIdOnly,
              (const MethodInfo_37268E4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0;
        }
LABEL_51:
        sub_1C93D2C(DataValsList, v8);
      }
      if ( v20 >= max_length_low )
        goto LABEL_64;
      if ( !v13 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                         &entity,
                                         funcId->m_Items[v20],
                                         (const MethodInfo_34632C0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_51;
          if ( v20 >= LODWORD(v19->max_length) )
LABEL_64:
            sub_1C93D34(DataValsList);
          if ( !entity )
            goto LABEL_51;
          v22 = m_Items[v20];
          if ( !v22 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v20], (FunctionMaster_o *)v13, (int32_t)entity[1].monitor, 0);
          v23 = DataVals__isParam(v22, 28, 0) ? 28 : 3;
          Param = DataVals__GetParam(v22, v23, 0, 0);
          v25 = DataVals__isParam(v22, 29, 0) ? 29 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v22, v25, 0, 0);
          if ( !v14 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v14,
                                             &v46,
                                             Param,
                                             (int32_t)DataValsList,
                                             0);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v46 )
              goto LABEL_51;
            v26 = (System_Collections_Generic_IEnumerable_T__o *)v46->fields.funcId;
            if ( v26 )
              System_Collections_Generic_HashSet_int___UnionWith(v15, v26, *v16);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v22, 95, 0);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v22, 96, 0);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v27 = v15;
              v28 = v16;
              v29 = DataVals__GetParam(v22, 95, 0, 0);
              v30 = DataVals__GetParam(v22, 96, 0, 0);
              if ( DataVals__isParam(v22, 98, 0) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v39, &v45, v29, v30, 0);
                v16 = v28;
                v15 = v27;
                m_Items = v40;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v31 = v45;
                  if ( !v45 )
                    goto LABEL_51;
LABEL_48:
                  v8 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v31 + 4);
                  if ( v8 )
                    System_Collections_Generic_HashSet_int___UnionWith(v15, v8, *v16);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v14, &v44, v29, v30, 0);
                v16 = v28;
                v15 = v27;
                m_Items = v40;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v31 = v44;
                  if ( !v44 )
                    goto LABEL_51;
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
      funcId = v12->fields.funcId;
      ++v20;
      if ( !funcId )
        goto LABEL_51;
    }
  }
  return EntityFromSvtIdOnly;
}


int32_t ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x8
  ServantChangeMaster_o *v10; // x19
  const MethodInfo *v11; // x2
  ServantChangeEntity_o *v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D312DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312DD = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v4;
  *(_QWORD *)&v14.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v14, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v10 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v15.fields.currentCryptoKey = v9,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0),
        !v10) )
  {
    sub_1C93D2C(Instance, v7);
  }
  v12 = ServantChangeMaster__TrueNameEntity(v10, (int32_t)Instance, v11);
  if ( v12 )
    return v12->fields.svtId;
  return v5;
}


bool ServantEntity__IsAdditionExpandImage(ServantEntity_o *this, int32_t limitCount, const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  il2cpp_array_size_t max_length; // x8
  int v7; // w9
  int v8; // w10

  if ( (byte_4D312E7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16803/*"additionExpandImage"*/);
    byte_4D312E7 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16803/*"additionExpandImage"*/, method);
  if ( !ScriptIntArrayParam )
    goto LABEL_11;
  max_length = ScriptIntArrayParam->max_length;
  if ( !max_length )
    return max_length;
  v7 = max_length - 1;
  if ( (int)max_length < 1 )
  {
LABEL_11:
    LOBYTE(max_length) = 0;
    return max_length;
  }
  v8 = 0;
  do
  {
    LOBYTE(max_length) = ScriptIntArrayParam->m_Items[v8] == limitCount;
    if ( ScriptIntArrayParam->m_Items[v8] == limitCount )
      break;
  }
  while ( v7 != v8++ );
  return max_length;
}


bool ServantEntity__IsBeastNotPlayable(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20

  if ( (byte_4D312F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A);
    byte_4D312F1 = 1;
  }
  v3 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 5);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
    0);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D312EB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18183/*"coinRoomCheck"*/);
    byte_4D312EB = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_18183/*"coinRoomCheck"*/, v2);
}


bool ServantEntity__IsContainOverwriteGrandGraphImageLimitCount(
        ServantEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  bool v6; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D312FC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22831/*"overwriteGrandGraphImageLimitCount"*/);
    byte_4D312FC = 1;
  }
  param = 0;
  *value = 0;
  v6 = ServantEntity__checkScript_43379524(this, (System_String_o *)StringLiteral_22831/*"overwriteGrandGraphImageLimitCount"*/, &param, v3);
  if ( v6 )
    *value = param;
  return v6;
}


bool ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20

  if ( (byte_4D312EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913);
    byte_4D312EF = 1;
  }
  v3 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
    0);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  BalanceConfig_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4D312F0 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572);
    byte_4D312F0 = 1;
  }
  v3 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572,
    0);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = System_Linq_Enumerable__Concat_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->PlayableBeastClassIds,
         (const MethodInfo_31C09E4 *)Method_System_Linq_Enumerable_Concat_int___);
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                              v5,
                                                              (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeastNotPlayable(this, v7);
}


bool ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20

  if ( (byte_4D312EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE);
    byte_4D312EE = 1;
  }
  v3 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
    0);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool ServantEntity__IsIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t individuality,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w0
  __int64 v10; // x21
  __int64 v11; // x23
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  int32_t v14; // w21
  System_Int32_array *IndividualityList; // x21
  Il2CppObject *Master_object; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  ServantLimitAddMaster_o *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  AttriMaster_o *v23; // x22
  int32_t IndividualityFromValue; // w0
  __int64 v25; // x0
  int max_length; // w8
  __int64 v27; // x9
  int32_t v28; // w11
  struct System_Int32_array *v29; // x10
  int v30; // w8
  __int64 v31; // x9
  int32_t *m_Items; // x10
  int32_t v33; // w11
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4D312C5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D312C5 = 1;
  }
  entity = 0;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v11;
  *(_QWORD *)&v36.fields.fakeValue = v10;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v36, 0);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v14, v12, v13);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v18 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v19 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v18;
  *(_QWORD *)&v37.fields.fakeValue = v17;
  v20 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v37, 0);
  if ( !v19 )
    goto LABEL_46;
  v20 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v19, &entity, (int32_t)v20, v12, v22);
  if ( ((unsigned __int8)v20 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_46;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v25 = 0xFFFFFFFFLL;
    if ( !IndividualityList )
      goto LABEL_35;
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( (unsigned int)v27 < max_length )
      {
        v28 = IndividualityList->m_Items[v27];
        if ( v28 != (_DWORD)v25 && v28 == individuality )
          goto LABEL_25;
        if ( (int)++v27 >= max_length )
          goto LABEL_35;
      }
      goto LABEL_45;
    }
LABEL_35:
    if ( !entity || (v29 = entity->fields.individuality) == 0 || (v30 = v29->max_length, v30 < 1) )
    {
      LOBYTE(v25) = 0;
      return v25;
    }
    v31 = 0;
    m_Items = v29->m_Items;
    while ( (unsigned int)v31 < v30 )
    {
      v33 = m_Items[v31++];
      v25 = v33 == individuality;
      if ( (int)v31 >= v30 || v33 == individuality )
        return v25;
    }
LABEL_45:
    sub_1C93D34(v25);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v20 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v23 = (AttriMaster_o *)v20) == 0 )
LABEL_46:
    sub_1C93D2C(v20, v21);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v20, entity->fields.attri, 0);
  if ( IndividualityFromValue < 1 || IndividualityFromValue != individuality )
  {
    v25 = AttriMaster__GetIndividualityFromValue(v23, this->fields.attri, 0);
    if ( !IndividualityList )
      goto LABEL_35;
    goto LABEL_27;
  }
LABEL_25:
  LOBYTE(v25) = 1;
  return v25;
}


bool ServantEntity__IsIndividuality_43376636(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w0
  __int64 v10; // x21
  __int64 v11; // x23
  int32_t v12; // w22
  const MethodInfo *v13; // x2
  int32_t v14; // w21
  System_Int32_array *individuality; // x21
  Il2CppObject *Master_object; // x0
  __int64 v17; // x24
  __int64 v18; // x25
  ServantLimitAddMaster_o *v19; // x23
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  AttriMaster_o *v23; // x22
  __int64 IndividualityFromValue; // x0
  int max_length; // w8
  __int64 v26; // x9
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x8
  int32_t v29; // w12
  int v30; // w13
  __int64 v31; // x14
  struct System_Int32_array *v32; // x8
  unsigned __int64 v33; // x10
  unsigned __int64 v34; // x9
  int v35; // w13
  __int64 v36; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4D312C6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D312C6 = 1;
  }
  entity = 0;
  if ( !individualityList || !individualityList->max_length )
  {
LABEL_56:
    LOBYTE(IndividualityFromValue) = 1;
    return IndividualityFromValue;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v11;
  *(_QWORD *)&v39.fields.fakeValue = v10;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v39, 0);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  individuality = ServantIndividualityMaster__GetIndividualityList(v14, v12, v13);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v18 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v19 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v18;
  *(_QWORD *)&v40.fields.fakeValue = v17;
  v20 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v40, 0);
  if ( !v19 )
    goto LABEL_59;
  v20 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v19, &entity, (int32_t)v20, v12, v22);
  if ( ((unsigned __int8)v20 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_59;
    if ( entity->fields.attri != -1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v20 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v23 = (AttriMaster_o *)v20;
        if ( v20 )
        {
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v20, entity->fields.attri, 0);
          if ( (int)IndividualityFromValue >= 1 )
          {
            max_length = individualityList->max_length;
            if ( max_length >= 1 )
            {
              v26 = 0;
              while ( (unsigned int)v26 < max_length )
              {
                if ( (_DWORD)IndividualityFromValue == individualityList->m_Items[v26] )
                  goto LABEL_56;
                if ( (int)++v26 >= max_length )
                  goto LABEL_31;
              }
LABEL_58:
              sub_1C93D34(IndividualityFromValue);
            }
          }
LABEL_31:
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(v23, this->fields.attri, 0);
          if ( !individuality )
            goto LABEL_44;
          goto LABEL_34;
        }
      }
LABEL_59:
      sub_1C93D2C(v20, v21);
    }
  }
  IndividualityFromValue = 0xFFFFFFFFLL;
  if ( individuality )
  {
LABEL_34:
    if ( (int)individuality->max_length >= 1 )
    {
      v27 = (unsigned int)individuality->max_length;
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= v27 )
          goto LABEL_58;
        v29 = individuality->m_Items[v28];
        if ( v29 != (_DWORD)IndividualityFromValue )
        {
          v30 = individualityList->max_length;
          if ( v30 >= 1 )
            break;
        }
LABEL_43:
        if ( (__int64)++v28 >= (int)v27 )
          goto LABEL_44;
      }
      v31 = 0;
      while ( (unsigned int)v31 < v30 )
      {
        if ( v29 == individualityList->m_Items[v31] )
          goto LABEL_56;
        if ( (int)++v31 >= v30 )
          goto LABEL_43;
      }
      goto LABEL_58;
    }
  }
LABEL_44:
  if ( entity )
  {
    v32 = entity->fields.individuality;
    if ( v32 )
    {
      if ( (int)v32->max_length >= 1 )
      {
        v33 = (unsigned int)v32->max_length;
        v34 = 0;
        while ( 1 )
        {
          if ( v34 >= v33 )
            goto LABEL_58;
          v35 = individualityList->max_length;
          if ( v35 >= 1 )
            break;
LABEL_54:
          ++v34;
          IndividualityFromValue = 0;
          if ( (__int64)v34 >= (int)v33 )
            return IndividualityFromValue;
        }
        v36 = 0;
        while ( (unsigned int)v36 < v35 )
        {
          if ( v32->m_Items[v34] == individualityList->m_Items[v36] )
            goto LABEL_56;
          if ( (int)++v36 >= v35 )
            goto LABEL_54;
        }
        goto LABEL_58;
      }
    }
  }
  LOBYTE(IndividualityFromValue) = 0;
  return IndividualityFromValue;
}


bool ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  ServantChangeEntity_array *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  ServantChangeMaster_o *v8; // x19
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4D312DC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312DC = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v11, 0);
  if ( !v8 || (Instance = ServantChangeMaster__GetEntityList(v8, (int32_t)Instance, v9)) == 0 )
LABEL_9:
    sub_1C93D2C(Instance, v4);
  return Instance->max_length != 0;
}


bool ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  ServantChangeMaster_o *v8; // x19
  const MethodInfo *v9; // x2
  ServantChangeEntity_o *v10; // x0
  _BOOL4 v11; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D312DA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312DA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
  if ( !v8 )
LABEL_10:
    sub_1C93D2C(Instance, v4);
  v10 = ServantChangeMaster__GetEnableEntity(v8, (int32_t)Instance, v9);
  if ( v10 )
    return (LOBYTE(v10->fields.flag) >> 3) & 1;
  else
    LOBYTE(v11) = 1;
  return v11;
}


bool ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantChangeMaster_o *v8; // x20
  const MethodInfo *v9; // x2
  ServantChangeEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  ServantChangeEntity_o *v12; // x20
  _BOOL4 v13; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D312DB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  if ( !v8 )
LABEL_11:
    sub_1C93D2C(Instance, v4);
  v10 = ServantChangeMaster__TrueNameEntity(v8, (int32_t)Instance, v9);
  if ( v10 && (v12 = v10, ServantChangeEntity__IsEnable(v10, v11)) )
    return (LOBYTE(v12->fields.flag) >> 3) & 1;
  else
    LOBYTE(v13) = ServantEntity__IsNameTrue(this, v11);
  return v13;
}


bool ServantEntity__IsNotSameParty(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D312FA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22578/*"notSamePartyKey"*/);
    byte_4D312FA = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22578/*"notSamePartyKey"*/, v2);
}


bool ServantEntity__IsPeriodLimitedServantByGachaId(ServantEntity_o *this, int32_t gachaId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  System_Func_int__bool__o *v8; // x21
  System_Collections_Generic_List_int__o *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D312F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__154_0__);
    byte_4D312F8 = 1;
  }
  svtIdList = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v6);
  if ( GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
         (GachaBaseCollateralMaster_o *)Master_object,
         &svtIdList,
         gachaId,
         0) )
  {
    v7 = (System_Collections_Generic_List_T__o *)svtIdList;
    v8 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__154_0__,
      0);
    return BasicHelper__Any_int_(
             v7,
             (System_Func_T__bool__o *)v8,
             (const MethodInfo_318D84C *)Method_BasicHelper_Any_int___);
  }
  else
  {
    return 0;
  }
}


bool ServantEntity__IsPeriodLimitedServantEquipByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        int64_t summonSceenInTime,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  GachaSubEntity_o *OpenEntity_43043384; // x0
  GachaSubEntity_o *v10; // x20
  System_Collections_Generic_List_T__o *v11; // x20
  System_Func_int__bool__o *v12; // x21
  System_Collections_Generic_List_int__o *svtEquipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D312F9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaAdjustAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaSubMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__155_0__);
    byte_4D312F9 = 1;
  }
  svtEquipIdList = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaSubMaster___);
  if ( !Master_object )
    goto LABEL_14;
  OpenEntity_43043384 = GachaSubMaster__GetOpenEntity_43043384(
                          (GachaSubMaster_o *)Master_object,
                          gachaId,
                          summonSceenInTime,
                          0);
  if ( !OpenEntity_43043384 )
    return (unsigned __int8)OpenEntity_43043384 & 1;
  v10 = OpenEntity_43043384;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaAdjustAddMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C93D2C(Master_object, v8);
  if ( GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
         (GachaAdjustAddMaster_o *)Master_object,
         &svtEquipIdList,
         v10->fields.adjustAddId,
         0) )
  {
    v11 = (System_Collections_Generic_List_T__o *)svtEquipIdList;
    v12 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__155_0__,
      0);
    LOBYTE(OpenEntity_43043384) = BasicHelper__Any_int_(
                                    v11,
                                    (System_Func_T__bool__o *)v12,
                                    (const MethodInfo_318D84C *)Method_BasicHelper_Any_int___);
  }
  else
  {
    LOBYTE(OpenEntity_43043384) = 0;
  }
  return (unsigned __int8)OpenEntity_43043384 & 1;
}


bool ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D312EC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24157/*"svtBuffTurnExtend"*/);
    byte_4D312EC = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_24157/*"svtBuffTurnExtend"*/, v2);
}


bool ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20

  if ( (byte_4D312ED & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA);
    byte_4D312ED = 1;
  }
  v3 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, 6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
    0);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


void ServantEntity__SetName(
        ServantEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.nameSave = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.nameSave, (int32_t)name, (int32_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity__TryGetAddCardSetting(
        ServantEntity_o *this,
        int32_t commandType,
        System_Int32_array **ids,
        System_Int32_array **weights,
        const MethodInfo *method)
{
  System_String_o *AddCardIdsKey; // x23
  const MethodInfo *v10; // x1
  System_String_o *AddCardWeightsKey; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  long double inited; // q0
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  System_Int32_array **v23; // x8
  System_Int32_array *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  long double v31; // q0
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  System_Int32_array **v36; // x8
  System_Int32_array *v37; // x1
  _QWORD *v39; // x25
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  __int64 v41; // x8
  __int64 v42; // x0
  __int64 v43; // x0
  System_Int32_array *IntArray; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  long double v51; // q0
  _QWORD *v52; // x23
  System_Collections_Generic_Dictionary_string__object__o *v53; // x22
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  System_Int32_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v67; // x9

  if ( (byte_4D31300 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    byte_4D31300 = 1;
  }
  AddCardIdsKey = ServantEntity__GetAddCardIdsKey(commandType, *(const MethodInfo **)&commandType);
  AddCardWeightsKey = ServantEntity__GetAddCardWeightsKey(commandType, v10);
  if ( System_String__IsNullOrEmpty(AddCardIdsKey, 0) || System_String__IsNullOrEmpty(AddCardWeightsKey, 0) )
  {
    v19 = Method_System_Array_Empty_int___;
    v20 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v20 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v21 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v21);
    v22 = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C69B68(inited);
    v23 = *(System_Int32_array ***)(v22 + 184);
    v24 = *v23;
    *weights = *v23;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)weights, (int32_t)v24, v12, v13, v14, v15, v16, v17);
    v32 = Method_System_Array_Empty_int___;
    v33 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v33 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C69B68(v31);
    if ( !*(_DWORD *)(v34 + 224) )
      v31 = j_il2cpp_runtime_class_init_0(v34);
    v35 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C69B68(v31);
    v36 = *(System_Int32_array ***)(v35 + 184);
    v37 = *v36;
    *ids = *v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)ids, (int32_t)v37, v25, v26, v27, v28, v29, v30);
    return 0;
  }
  v39 = Method_System_Array_Empty_int___;
  script = this->fields.script;
  v41 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v41 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v41 = v39[7];
  }
  v42 = *(_QWORD *)(v41 + 16);
  if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
    v42 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v42 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v42);
  v43 = *(_QWORD *)(v39[7] + 16LL);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C69B68(inited);
  IntArray = EntityScriptUtil__GetIntArray(script, AddCardIdsKey, **(System_Int32_array ***)(v43 + 184), 0);
  *ids = IntArray;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)ids, (int32_t)IntArray, v45, v46, v47, v48, v49, v50);
  v52 = Method_System_Array_Empty_int___;
  v53 = this->fields.script;
  v54 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v54 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v54 = v52[7];
  }
  v55 = *(_QWORD *)(v54 + 16);
  if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
    v55 = sub_1C69B68(v51);
  if ( !*(_DWORD *)(v55 + 224) )
    v51 = j_il2cpp_runtime_class_init_0(v55);
  v56 = *(_QWORD *)(v52[7] + 16LL);
  if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
    v56 = sub_1C69B68(v51);
  v57 = EntityScriptUtil__GetIntArray(v53, AddCardWeightsKey, **(System_Int32_array ***)(v56 + 184), 0);
  *weights = v57;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)weights, (int32_t)v57, v58, v59, v60, v61, v62, v63);
  if ( !*ids )
LABEL_46:
    sub_1C93D2C(v64, v65);
  max_length = (*ids)->max_length;
  v67 = *weights;
  if ( max_length )
  {
    if ( !v67 )
      goto LABEL_46;
  }
  else
  {
    if ( !v67 )
      goto LABEL_46;
    if ( !v67->max_length )
      return 0;
  }
  return (_DWORD)max_length == LODWORD(v67->max_length);
}


bool ServantEntity__TryGetOverwriteGrandGraphImage(
        ServantEntity_o *this,
        int32_t stage,
        int32_t *overwrite,
        const MethodInfo *method)
{
  System_Int32_array_array *ScriptMultiArray_int; // x0
  System_Int32_array_array *v8; // x21
  Il2CppObject *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  CommonReleaseMaster_o *v11; // x22
  unsigned __int64 v12; // x23
  System_Int32_array *v13; // x25
  __int64 v14; // x1

  if ( (byte_4D312FD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_ServantEntity_GetScriptMultiArray_int___);
    sub_1C93AD4(&StringLiteral_22830/*"overwriteGrandGraphImage"*/);
    byte_4D312FD = 1;
  }
  *overwrite = stage;
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_22830/*"overwriteGrandGraphImage"*/,
                           (const MethodInfo_324BDE8 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v8 = ScriptMultiArray_int;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    max_length = v8->max_length;
    if ( (int)max_length < 1 )
    {
LABEL_17:
      LOBYTE(ScriptMultiArray_int) = 0;
    }
    else
    {
      v11 = (CommonReleaseMaster_o *)Master_object;
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
          goto LABEL_21;
        v13 = v8->m_Items[v12];
        if ( v13 )
        {
          if ( LODWORD(v13->max_length) == 3 )
          {
            Master_object = (Il2CppObject *)LimitCountUtility__ConvertLimitCountToStage(v13->m_Items[0], 1, 0);
            if ( (_DWORD)Master_object == stage )
            {
              if ( LODWORD(v13->max_length) <= 2 )
                goto LABEL_21;
              v14 = (unsigned int)v13->m_Items[2];
              if ( !(_DWORD)v14 )
                goto LABEL_20;
              if ( !v11 )
                sub_1C93D2C(Master_object, v14);
              Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v11, v14, 0, 0, 0);
              if ( ((unsigned __int8)Master_object & 1) != 0 )
                break;
            }
          }
        }
        LODWORD(max_length) = v8->max_length;
        if ( (__int64)++v12 >= (int)max_length )
          goto LABEL_17;
      }
      if ( LODWORD(v13->max_length) <= 1 )
LABEL_21:
        sub_1C93D34(Master_object);
LABEL_20:
      *overwrite = LimitCountUtility__ConvertLimitCountToStage(v13->m_Items[1], 0, 0);
      LOBYTE(ScriptMultiArray_int) = 1;
    }
  }
  return (char)ScriptMultiArray_int;
}


bool ServantEntity__TryGetTdSeqUnitCondArray(
        ServantEntity_o *this,
        System_Int32_array **commonReleaseIds,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v6; // x21
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array *IntArray; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4D31301 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&StringLiteral_24316/*"tdSeqUnitCond"*/);
    byte_4D31301 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  script = this->fields.script;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v8 = v6[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C69B68(inited);
  IntArray = EntityScriptUtil__GetIntArray(
               script,
               (System_String_o *)StringLiteral_24316/*"tdSeqUnitCond"*/,
               **(System_Int32_array ***)(v10 + 184),
               0);
  *commonReleaseIds = IntArray;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)commonReleaseIds, (int32_t)IntArray, v12, v13, v14, v15, v16, v17);
  if ( !*commonReleaseIds )
    sub_1C93D2C(v18, v19);
  return LODWORD((*commonReleaseIds)->max_length) != 0;
}


bool ServantEntity___IsPeriodLimitedServantByGachaId_b__154_0(
        ServantEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4D31303 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31303 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v8, 0) == svtId;
}


bool ServantEntity___IsPeriodLimitedServantEquipByGachaId_b__155_0(
        ServantEntity_o *this,
        int32_t svtEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4D31304 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D31304 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v8, 0) == svtEquipId;
}


bool ServantEntity__checkFlag(ServantEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool ServantEntity__checkIsCombineMaterialSvt(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool ServantEntity__checkIsHeroineSvt(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool ServantEntity__checkScript(ServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0

  if ( (byte_4D312CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4D312CA = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool ServantEntity__checkScript_43379524(
        ServantEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *v10; // x20
  int32_t v11; // w8
  ServantEntity_o *v13; // x0
  System_String_o *v14; // x1
  float *v15; // x2
  const MethodInfo *v16; // x3
  long double v17; // q0

  if ( (byte_4D312CB & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D312CB = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  v10 = ScriptValue;
  if ( !ScriptValue )
  {
    v11 = 0;
    goto LABEL_7;
  }
  if ( ScriptValue->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v11 = *(_DWORD *)j_il2cpp_object_unbox_0(ScriptValue, long_TypeInfo, v8, v9);
LABEL_7:
    *param = v11;
    return v10 != 0;
  }
  v17 = sub_1C940C8(ScriptValue);
  return ServantEntity__checkScript_43379688(v13, v14, v15, *(float *)&v17, v16);
}


bool ServantEntity__checkScript_43379688(
        ServantEntity_o *this,
        System_String_o *key,
        float *param,
        float denominator,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  Il2CppObject *v12; // x20
  float v13; // s0
  ServantEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4D312CC & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D312CC = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  v12 = ScriptValue;
  if ( !ScriptValue )
  {
    v13 = 0.0;
    goto LABEL_7;
  }
  if ( ScriptValue->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v13 = (float)*(__int64 *)j_il2cpp_object_unbox_0(ScriptValue, long_TypeInfo, v10, v11) / denominator;
LABEL_7:
    *param = v13;
    return v12 != 0;
  }
  sub_1C940C8(ScriptValue);
  return ServantEntity__getDressId(v15, v16);
}


bool ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4D312D0 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17202/*"battleHeight"*/);
    byte_4D312D0 = 1;
  }
  return ServantEntity__checkScript_43379688(this, (System_String_o *)StringLiteral_17202/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantEntity__getBattleName(
        ServantEntity_o *this,
        bool isTrueNameForce,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  EventServantMaster_o *v13; // x22
  int max_length; // w8
  EventServantEntity_array *v15; // x22
  unsigned int v16; // w23
  Il2CppObject *v17; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantChangeMaster_o *v20; // x21
  const MethodInfo *v21; // x2
  ServantChangeEntity_o *v22; // x0
  ServantChangeEntity_o *v23; // x21
  Il2CppObject *v25; // x0
  __int64 v26; // x22
  __int64 v27; // x23
  ServantLimitAddMaster_o *v28; // x21
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x1
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v32; // x20
  System_String_o *v33; // x0
  Il2CppObject *v34; // x0
  __int64 v35; // x21
  __int64 v36; // x22
  ServantChangeMaster_o *v37; // x20
  const MethodInfo *v38; // x2
  ServantChangeEntity_o *v39; // x0
  ServantLimitAddEntity_o *v40; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4D312D9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D312D9 = 1;
  }
  battleName = 0;
  v40 = 0;
  entity = 0;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v7) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventServantMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (EventServantMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v12;
  *(_QWORD *)&v43.fields.fakeValue = v11;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v43, 0);
  if ( !v13 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v13, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v15 = Instance;
  if ( max_length < 1 )
  {
LABEL_16:
    if ( !isTrueNameForce )
      goto LABEL_27;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v17 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v20 = (ServantChangeMaster_o *)v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v44.fields.currentCryptoKey = v19;
    *(_QWORD *)&v44.fields.fakeValue = v18;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v44, 0);
    if ( !v20 )
      goto LABEL_48;
    v22 = ServantChangeMaster__TrueNameEntity(v20, (int32_t)Instance, v21);
    if ( !v22 )
      goto LABEL_27;
    v23 = v22;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v23->fields.svtId,
                                             (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[4].monitor;
    }
    else
    {
LABEL_27:
      if ( (limitCount & 0x80000000) == 0 )
      {
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v25 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v40 = 0;
        v27 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v26 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v28 = (ServantLimitAddMaster_o *)v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v45.fields.currentCryptoKey = v27;
        *(_QWORD *)&v45.fields.fakeValue = v26;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v45,
                                                 0);
        if ( !v28 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity(v28, &v40, (int32_t)Instance, limitCount, v29);
        if ( v40 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v40, v30);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0);
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(v32, 0);
          if ( !System_String__IsNullOrEmpty(v33, 0) )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(v32, 0);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v34 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v36 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v35 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v37 = (ServantChangeMaster_o *)v34;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v36;
        *(_QWORD *)&v46.fields.fakeValue = v35;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v46,
                                                 0);
        if ( v37 )
        {
          v39 = ServantChangeMaster__GetEnableEntity(v37, (int32_t)Instance, v38);
          if ( v39 )
            return v39->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_1C93D2C(Instance, v9);
  }
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
      sub_1C93D34(Instance);
    Instance = (EventServantEntity_array *)v15->m_Items[v16];
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(
                                             (EventServantEntity_o *)Instance,
                                             &battleName,
                                             0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    max_length = v15->max_length;
    if ( (int)++v16 >= max_length )
      goto LABEL_16;
  }
}


int32_t ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D312CE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17843/*"cameraActionId"*/);
    byte_4D312CE = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_43379524(this, (System_String_o *)StringLiteral_17843/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o **p_monitor; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D312C2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D312C2 = 1;
  }
  entity = 0;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
    {
      sub_1C93D2C(Instance, v5);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( entity )
      p_monitor = (System_String_o **)&entity[1].monitor;
  }
  return *p_monitor;
}


System_Int32_array *ServantEntity__getClassPassive(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.classPassive;
}


void ServantEntity__getClassSkillInfo(
        ServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  System_Int32_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_String_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_array *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v34; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v36; // x0
  struct System_Int32_array *classPassive; // x24
  __int64 v38; // x26
  __int64 v39; // x27
  ServantLimitAddMaster_o *v40; // x25
  const MethodInfo *v41; // x4
  const MethodInfo *v42; // x2
  unsigned __int64 v43; // x25
  __int64 max_length; // x26
  __int64 v45; // x28
  int32_t v46; // w23
  System_Int32_array *v47; // x8
  System_String_array *v48; // x8
  System_String_array *v49; // x9
  SkillEntity_o *v50; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4D312C7 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    byte_4D312C7 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  v50 = 0;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, (unsigned int)v11->static_fields->SvtPassiveSkillListMax);
  *idList = v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)idList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_String_array *)sub_1C93B7C(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)titleList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_String_array *)sub_1C93B7C(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)explanationList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v36 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  classPassive = this->fields.classPassive;
  v39 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v40 = (ServantLimitAddMaster_o *)v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v52.fields.currentCryptoKey = v39;
  *(_QWORD *)&v52.fields.fakeValue = v38;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v52, 0);
  if ( !v40 )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantLimitAddMaster__TryGetEntity(v40, &entity, (int32_t)Instance, dispLimitCount, v41);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantLimitAddEntity__HasKeyOverwriteClassPassive(entity, v34);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)ServantLimitAddEntity__GetOverwriteClassPassive(entity, classPassive, v42);
        classPassive = (struct System_Int32_array *)Instance;
        goto LABEL_15;
      }
LABEL_31:
      sub_1C93D2C(Instance, v34);
    }
  }
LABEL_15:
  if ( classPassive && (int)classPassive->max_length >= 1 )
  {
    v43 = 0;
    max_length = (unsigned int)classPassive->max_length;
    v45 = 32;
    while ( v43 < LODWORD(classPassive->max_length) )
    {
      if ( !MasterData_object )
        goto LABEL_31;
      v46 = classPassive->m_Items[v43];
      Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                    (Il2CppObject **)&v50,
                                    v46,
                                    (const MethodInfo_34632C0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v47 = *idList;
        if ( !*idList )
          goto LABEL_31;
        if ( v43 >= LODWORD(v47->max_length) )
          break;
        v47->m_Items[v43] = v46;
        v48 = *titleList;
        if ( !*titleList )
          goto LABEL_31;
        v49 = *explanationList;
        if ( !*explanationList )
          goto LABEL_31;
        Instance = (DataManager_o *)v50;
        if ( !v50 )
          goto LABEL_31;
        if ( v43 >= LODWORD(v48->max_length) || v43 >= LODWORD(v49->max_length) )
          break;
        SkillEntity__getSkillMessageInfo(
          v50,
          (System_String_o **)((char *)v48 + v45),
          (System_String_o **)((char *)v49 + v45),
          0,
          0);
      }
      ++v43;
      v45 += 8;
      if ( max_length == v43 )
        return;
    }
    sub_1C93D34(Instance);
  }
}


int32_t ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D312CD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24317/*"tdTransform"*/);
    byte_4D312CD = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_43379524(this, (System_String_o *)StringLiteral_24317/*"tdTransform"*/, &param, v2) )
    return param;
  else
    return 0;
}


float ServantEntity__getHeadUpY(ServantEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.hpGaugeY / 1000.0;
}


System_String_o *ServantEntity__getHiddenName(ServantEntity_o *this, int32_t limitCount, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  ServantChangeMaster_o *v10; // x21
  const MethodInfo *v11; // x2
  ServantChangeEntity_o *v12; // x0
  const MethodInfo *v13; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4D312D7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v16, 0);
  if ( !v10 )
LABEL_12:
    sub_1C93D2C(Instance, v6);
  v12 = ServantChangeMaster__GetHiddenEntity(v10, (int32_t)Instance, v11);
  if ( v12 )
    return v12->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v13);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(Name, 0);
}


System_Int32_array *ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w0
  __int64 v8; // x20
  __int64 v9; // x22
  int32_t v10; // w21
  const MethodInfo *v11; // x2
  int32_t v12; // w20
  System_Int32_array *IndividualityList; // x20
  Il2CppObject *Master_object; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitAddMaster_o *v17; // x22
  struct System_Int32_array *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x3
  ServantLimitAddEntity_o *v22; // x2
  struct System_Int32_array *individuality; // x1
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v25; // x9
  System_Array_o *v26; // x21
  ServantEntity_o *v27; // x0
  struct System_Int32_array *v29; // x0
  struct System_Int32_array **p_individuality; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4D312C4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantIndividualityMaster_TypeInfo);
    byte_4D312C4 = 1;
  }
  entity = 0;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v9;
  *(_QWORD *)&v38.fields.fakeValue = v8;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v38, 0);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v12, v10, v11);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v16;
  *(_QWORD *)&v39.fields.fakeValue = v15;
  v18 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v39, 0);
  if ( !v17 )
    goto LABEL_30;
  v18 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v17, &entity, (int32_t)v18, v10, v20);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v22 = entity;
    if ( !entity )
      goto LABEL_30;
    individuality = entity->fields.individuality;
    if ( individuality )
    {
      max_length = individuality->max_length;
      if ( max_length )
      {
        if ( !IndividualityList || (v25 = IndividualityList->max_length) == 0 )
        {
          v27 = this;
          return ServantEntity__GetSubAttrReplacedIndividualityArray(v27, individuality, v22, v21);
        }
        v26 = (System_Array_o *)sub_1C93B7C(int___TypeInfo, (unsigned int)(v25 + max_length));
        System_Array__CopyTo((System_Array_o *)IndividualityList, v26, 0, 0);
        if ( entity )
        {
          v18 = entity->fields.individuality;
          if ( v18 )
          {
            System_Array__CopyTo((System_Array_o *)v18, v26, IndividualityList->max_length, 0);
            v22 = entity;
            v27 = this;
            individuality = (struct System_Int32_array *)v26;
            return ServantEntity__GetSubAttrReplacedIndividualityArray(v27, individuality, v22, v21);
          }
        }
LABEL_30:
        sub_1C93D2C(v18, v19);
      }
    }
  }
  if ( IndividualityList )
  {
    v22 = entity;
    v27 = this;
    individuality = IndividualityList;
    return ServantEntity__GetSubAttrReplacedIndividualityArray(v27, individuality, v22, v21);
  }
  v29 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.individuality = v29;
  p_individuality = &this->fields.individuality;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_individuality, (int32_t)v29, v31, v32, v33, v34, v35, v36);
  return *p_individuality;
}


System_String_o *ServantEntity__getName(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t imageLimitCount,
        bool addIdentify,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  ServantChangeMaster_o *v14; // x23
  const MethodInfo *v15; // x2
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x5
  System_String_o *name; // x21
  Il2CppObject *Master_object; // x0
  __int64 v20; // x20
  __int64 v21; // x22
  ServantAddMaster_o *v22; // x19
  const MethodInfo *v23; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4D312D5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v13;
  *(_QWORD *)&v26.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v26, 0);
  if ( !v14 )
    goto LABEL_19;
  v16 = ServantChangeMaster__GetEnableEntity(v14, (int32_t)Instance, v15);
  if ( v16 )
  {
    name = v16->fields.name;
    if ( addIdentify )
      goto LABEL_9;
  }
  else
  {
    v25 = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, 0, v17);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(v25, 0);
    if ( addIdentify )
    {
LABEL_9:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantAddMaster___);
      v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v22 = (ServantAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = v21;
      *(_QWORD *)&v27.fields.fakeValue = v20;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v27, 0);
      if ( v22 )
        return ServantAddMaster__AddIdentifyText(v22, (int32_t)Instance, name, v23);
LABEL_19:
      sub_1C93D2C(Instance, v10);
    }
  }
  return name;
}


System_String_o *ServantEntity__getName_43382388(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantChangeMaster_o *v12; // x22
  const MethodInfo *v13; // x2
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x1
  ServantChangeEntity_o *v23; // x22
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  const MethodInfo *v32; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4D312D8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D312D8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v11;
  *(_QWORD *)&v34.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v34, 0);
  if ( !v12 )
LABEL_12:
    sub_1C93D2C(Instance, v8);
  v14 = ServantChangeMaster__GetEnableEntity(v12, (int32_t)Instance, v13);
  if ( v14 )
  {
    v22 = v14->fields.ruby;
    v23 = v14;
    *ruby = v22;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)ruby, (int32_t)v22, v16, v17, v18, v19, v20, v21);
    return v23->fields.name;
  }
  else
  {
    v25 = ServantEntity__GetRuby(this, v15);
    *ruby = v25;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)ruby, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v32);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(Name, 0);
  }
}


System_Int32_array *ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 naturalAligment; // x9
  ServantEntity___c_c *v8; // x0
  System_Converter_object__int__o *_9__139_0; // x20
  Il2CppObject *v10; // x21
  struct ServantEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x0
  __int64 v19; // x1

  if ( (byte_4D312EA & 1) == 0 )
  {
    sub_1C93AD4(&System_Converter_object__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&Method_ServantEntity___c__getScriptIntArrayParam_b__139_0__);
    sub_1C93AD4(&ServantEntity___c_TypeInfo);
    byte_4D312EA = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v6 = (System_Collections_Generic_List_object__o *)result;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->obj.klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v8 = ServantEntity___c_TypeInfo;
      if ( !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v8 = ServantEntity___c_TypeInfo;
      }
      _9__139_0 = v8->static_fields->__9__139_0;
      if ( !_9__139_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = ServantEntity___c_TypeInfo;
        }
        v10 = (Il2CppObject *)v8->static_fields->__9;
        _9__139_0 = (System_Converter_object__int__o *)sub_1C93D20(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__139_0,
          v10,
          Method_ServantEntity___c__getScriptIntArrayParam_b__139_0__,
          0);
        static_fields = ServantEntity___c_TypeInfo->static_fields;
        static_fields->__9__139_0 = _9__139_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__139_0,
          (int32_t)_9__139_0,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      v18 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v6,
                                                        (System_Converter_T__TOutput__o *)_9__139_0,
                                                        (const MethodInfo_30C8494 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v18 )
        return System_Collections_Generic_List_int___ToArray(
                 v18,
                 (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1C940C8(result);
    }
    sub_1C93D2C(v18, v19);
  }
  return result;
}


System_String_o *ServantEntity__getTrueName(ServantEntity_o *this, int32_t limitCount, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4D312D6 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D312D6 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(Name, 0);
}


bool ServantEntity__get_IsAllClass(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsAll(this->fields.classId, 0);
}


bool ServantEntity__get_IsCampaignSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.flag) & 1;
}


bool ServantEntity__get_IsChocolateSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool ServantEntity__get_IsCombineMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsCombineMaterial(this->fields.type, 0);
}


bool ServantEntity__get_IsEnemy(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemy(this->fields.type, 0);
}


bool ServantEntity__get_IsEnemyCollection(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemyCollection(this->fields.type, 0);
}


bool ServantEntity__get_IsEnemyCollectionDetail(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemyCollectionDetail(this->fields.type, 0);
}


bool ServantEntity__get_IsEventRewardSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 2) & 1;
}


bool ServantEntity__get_IsEventSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 1) & 1;
}


bool ServantEntity__get_IsExpUp(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsExpUp(this->fields.type, 0);
}


bool ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool ServantEntity__get_IsIgnoreCombineLimitSpecial(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool ServantEntity__get_IsKeepServant(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsKeepServant(this->fields.type, 0);
}


bool ServantEntity__get_IsKeepServantEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsKeepServantEquip(this->fields.type, 0);
}


bool ServantEntity__get_IsManaExchangeSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool ServantEntity__get_IsOrganization(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsOrganization(this->fields.type, 0);
}


bool ServantEntity__get_IsServant(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServant(this->fields.type, 0);
}


bool ServantEntity__get_IsServantCollection(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServantCollection(this->fields.type, 0);
}


bool ServantEntity__get_IsServantEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServantEquip(this->fields.type, 0);
}


bool ServantEntity__get_IsServantEquipMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtEqMaterial(this->fields.type, 0);
}


bool ServantEntity__get_IsServantMaterialTd(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtMaterialTd(this->fields.type, 0);
}


bool ServantEntity__get_IsStatusUp(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsStatusUp(this->fields.type, 0);
}


bool ServantEntity__get_IsSvtEquipExp(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool ServantEntity__get_IsSvtEquipRarityLevelNumMission(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 3) & 1;
}


bool ServantEntity__get_IsUsableOnlyNpcSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool ServantEntity__isInvalidSkillShift(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D312D1 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21107/*"invalidSkillShift"*/);
    byte_4D312D1 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_21107/*"invalidSkillShift"*/, v2);
}


void ServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31305 & 1) == 0 )
  {
    sub_1C93AD4(&ServantEntity___c_TypeInfo);
    byte_4D31305 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantEntity___c___ctor(ServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantEntity___c___getScriptIntArrayParam_b__139_0(
        ServantEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_1C93D2C(this, 0);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                            x,
                            x->klass->vtable[3].method,
                            method);
  return System_Int32__Parse(v3, 0);
}


void ServantEntity___c__DisplayClass102_0___ctor(
        ServantEntity___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantEntity___c__DisplayClass102_0___GetScript_b__0(
        ServantEntity___c__DisplayClass102_0_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = (Il2CppObject *)x.fields.key;
  if ( (byte_4D31306 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4D31306 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_1C93D2C(0, x.fields.key);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}