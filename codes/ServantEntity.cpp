void ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593900B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593900B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_5938FC6 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5938FC6 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v6, 0);
}


System_String_o *ServantEntity__GetAddCardIdsKey(int32_t commandType, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **v4; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_5939003 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    sub_21FFC50(&StringLiteral_2254/*"AddQuickCardIds"*/);
    sub_21FFC50(&StringLiteral_2260/*"AddWeakCardIds"*/);
    sub_21FFC50(&StringLiteral_2244/*"AddArtsCardIds"*/);
    sub_21FFC50(&StringLiteral_2246/*"AddBusterCardIds"*/);
    sub_21FFC50(&StringLiteral_2257/*"AddStrengthCardIds"*/);
    byte_5939003 = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  if ( BattleCommand__isARTS(commandType, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_2244/*"AddArtsCardIds"*/;
  }
  else
  {
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v3);
    if ( BattleCommand__isBUSTER(commandType, 0) )
    {
      v4 = (System_String_o **)&StringLiteral_2246/*"AddBusterCardIds"*/;
    }
    else
    {
      if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v5);
      if ( BattleCommand__isQUICK(commandType, 0) )
      {
        v4 = (System_String_o **)&StringLiteral_2254/*"AddQuickCardIds"*/;
      }
      else
      {
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v6);
        if ( BattleCommand__IsWEAK(commandType, 0) )
        {
          v4 = (System_String_o **)&StringLiteral_2260/*"AddWeakCardIds"*/;
        }
        else
        {
          if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v7);
          if ( BattleCommand__IsSTRENGTH(commandType, 0) )
            v4 = (System_String_o **)&StringLiteral_2257/*"AddStrengthCardIds"*/;
          else
            v4 = *(System_String_o ***)(qword_594C0B8 + 184);
        }
      }
    }
  }
  return *v4;
}


System_String_o *ServantEntity__GetAddCardWeightsKey(int32_t commandType, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **v4; // x8
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1

  if ( (byte_5939004 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    sub_21FFC50(&StringLiteral_2245/*"AddArtsCardWeights"*/);
    sub_21FFC50(&StringLiteral_2247/*"AddBusterCardWeights"*/);
    sub_21FFC50(&StringLiteral_2261/*"AddWeakCardWeights"*/);
    sub_21FFC50(&StringLiteral_2255/*"AddQuickCardWeights"*/);
    sub_21FFC50(&StringLiteral_2258/*"AddStrengthCardWeights"*/);
    byte_5939004 = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
  if ( BattleCommand__isARTS(commandType, 0) )
  {
    v4 = (System_String_o **)&StringLiteral_2245/*"AddArtsCardWeights"*/;
  }
  else
  {
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v3);
    if ( BattleCommand__isBUSTER(commandType, 0) )
    {
      v4 = (System_String_o **)&StringLiteral_2247/*"AddBusterCardWeights"*/;
    }
    else
    {
      if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v5);
      if ( BattleCommand__isQUICK(commandType, 0) )
      {
        v4 = (System_String_o **)&StringLiteral_2255/*"AddQuickCardWeights"*/;
      }
      else
      {
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v6);
        if ( BattleCommand__IsWEAK(commandType, 0) )
        {
          v4 = (System_String_o **)&StringLiteral_2261/*"AddWeakCardWeights"*/;
        }
        else
        {
          if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v7);
          if ( BattleCommand__IsSTRENGTH(commandType, 0) )
            v4 = (System_String_o **)&StringLiteral_2258/*"AddStrengthCardWeights"*/;
          else
            v4 = *(System_String_o ***)(qword_594C0B8 + 184);
        }
      }
    }
  }
  return *v4;
}


System_Int32_array *ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938FF8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17601/*"assumedEffectId"*/);
    byte_5938FF8 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17601/*"assumedEffectId"*/, 0);
}


System_Int32_array *ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  unsigned __int64 v10; // x27
  SkillInfo_o *v11; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v13; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x24
  unsigned __int64 v16; // x28
  int32_t *p_revision; // x21
  unsigned __int64 max_length_low; // x9
  DataVals_o *v19; // x25
  int32_t v20; // w1
  int32_t Param; // w26
  int32_t v22; // w1
  int32_t v23; // w0
  System_Collections_Generic_HashSet_int__o *v24; // x19
  _BOOL8 v25; // x0
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 count; // x1
  System_Int32_array *v30; // x20
  System_Collections_Generic_HashSet_int__o *v32; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v33; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v34; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v36; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5938FFB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    byte_5938FFB = 1;
  }
  v36 = 0;
  entity = 0;
  v34 = 0;
  memset(&v35, 0, sizeof(v35));
  v32 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v32,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  max_length = enableSkillInfoList->max_length;
  v9 = DataValsList;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)max_length )
LABEL_55:
        sub_21FFED4(DataValsList);
      v11 = enableSkillInfoList->m_Items[v10];
      if ( v11 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v11->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v11->fields.lv;
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
              v13 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v32;
                if ( !v32 )
                  goto LABEL_54;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v32,
                  id,
                  (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getDataValsList(v13, 0);
                funcId = v13->fields.funcId;
                if ( !funcId )
                  goto LABEL_54;
                v15 = DataValsList;
                v16 = 0;
                p_revision = &DataValsList->fields.revision;
                while ( 1 )
                {
                  max_length_low = LODWORD(funcId->max_length);
                  if ( (__int64)v16 >= (int)max_length_low )
                    break;
                  if ( v16 >= max_length_low )
                    goto LABEL_55;
                  if ( !v9 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v9,
                                                                                 &entity,
                                                                                 funcId->m_Items[v16],
                                                                                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_54;
                    DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)FuncList__isAddState(
                                                                                   (int32_t)entity[1].monitor,
                                                                                   0);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v15 )
                        goto LABEL_54;
                      if ( v16 >= LODWORD(v15->fields._MasterName_k__BackingField) )
                        goto LABEL_55;
                      if ( !entity )
                        goto LABEL_54;
                      v19 = *(DataVals_o **)&p_revision[2 * v16];
                      if ( !v19 )
                        goto LABEL_54;
                      DataVals__SetTempType(
                        *(DataVals_o **)&p_revision[2 * v16],
                        (FunctionMaster_o *)v9,
                        (int32_t)entity[1].monitor,
                        0);
                      if ( DataVals__isParam(v19, 28, 0) )
                        v20 = 28;
                      else
                        v20 = 3;
                      Param = DataVals__GetParam(v19, v20, 0, 0);
                      if ( DataVals__isParam(v19, 29, 0) )
                        v22 = 29;
                      else
                        v22 = 4;
                      v23 = DataVals__GetParam(v19, v22, 0, 0);
                      DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__TryGetEntity(
                                                                                     (SkillLvMaster_o *)Master_object,
                                                                                     &v36,
                                                                                     Param,
                                                                                     v23,
                                                                                     0);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v36 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v36->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v32,
                            id,
                            (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v13->fields.funcId;
                  ++v16;
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
    while ( (__int64)++v10 < (int)max_length );
  }
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v32;
  if ( !v32 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v33,
    v32,
    (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v35 = v33;
  v33.fields._set = 0;
  *(_QWORD *)&v33.fields._index = &v35;
  while ( 1 )
  {
    v25 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v35,
            (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v25 )
      break;
    if ( !v9 )
      sub_21FFECC(v25, v26);
    v27 = DataMasterBase_object__object__int___TryGetEntity(
            v9,
            &v34,
            (int32_t)v35.fields._current,
            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v27 )
    {
      if ( !v34 )
        sub_21FFECC(v27, v28);
      if ( !v24 )
        sub_21FFECC(v27, v28);
      System_Collections_Generic_HashSet_int___Add(
        v24,
        HIDWORD(v34[4].monitor),
        (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v35,
    (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v24 )
LABEL_54:
    sub_21FFECC(DataValsList, id);
  count = (unsigned int)v24->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v30 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_69736372(
    v24,
    v30,
    (const MethodInfo_42817B4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v30;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isPlayableBeastToBase,
        bool isGrandServant,
        const MethodInfo *method)
{
  BalanceConfig_c *v7; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t v14; // t1
  int32_t result; // w0

  if ( (byte_5938FFC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5938FFC = 1;
  }
  if ( isPlayableBeastToBase )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isPlayableBeastToBase);
      v7 = BalanceConfig_TypeInfo;
    }
    classId = this->fields.classId;
    p_classId = &this->fields.classId;
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->PlayableBeastClassIds,
           classId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        v11 = BalanceConfig_TypeInfo;
      }
      p_classId = &v11->static_fields->PlayableBeastBaseClassId;
    }
    return *p_classId;
  }
  if ( !isGrandServant )
  {
    p_classId = &this->fields.classId;
    return *p_classId;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isPlayableBeastToBase);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v13);
  v14 = this->fields.classId;
  p_classId = &this->fields.classId;
  result = GrandGraphDetailMaster__GetGrandClassId((GrandGraphDetailMaster_o *)Master_object, v14, 0);
  if ( result < 1 )
    return *p_classId;
  return result;
}


System_String_o *ServantEntity__GetCommonName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_5939008 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18946/*"commonName"*/);
    byte_5939008 = 1;
  }
  result = (System_String_o *)ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_18946/*"commonName"*/, v2);
  if ( result )
  {
    if ( result->klass != (System_String_c *)qword_594C0B8 )
      return 0;
  }
  return result;
}


System_String_o *ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  LocalizationManager_c *v4; // x0
  __int64 *v5; // x19
  bool IsServantEquip; // w8

  if ( (byte_5938FD6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12497/*"SERVANT_UNIT"*/);
    sub_21FFC50(&StringLiteral_5969/*"EXCEPT_SERVANT_UNIT"*/);
    sub_21FFC50(&StringLiteral_12120/*"SERVANT_EQUIP_UNIT"*/);
    byte_5938FD6 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0) || SvtType__IsSvtMaterialTd(this->fields.type, 0) )
  {
    v4 = LocalizationManager_TypeInfo;
    v5 = &StringLiteral_12497/*"SERVANT_UNIT"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_6:
      j_il2cpp_runtime_class_init_0(v4, v3);
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0);
    v4 = LocalizationManager_TypeInfo;
    if ( IsServantEquip )
      v5 = &StringLiteral_12120/*"SERVANT_EQUIP_UNIT"*/;
    else
      v5 = &StringLiteral_5969/*"EXCEPT_SERVANT_UNIT"*/;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      goto LABEL_6;
  }
  return LocalizationManager__Get((System_String_o *)*v5, 0);
}


int32_t ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938FF7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19333/*"defaultDeadType"*/);
    byte_5938FF7 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_49624364(this, (System_String_o *)StringLiteral_19333/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


System_String_o *ServantEntity__GetDetailName(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o *OriginName; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0

  if ( (byte_5938FD8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23637/*"overwriteDetailName"*/);
    byte_5938FD8 = 1;
  }
  OriginName = ServantEntity__GetOriginName(this, method);
  if ( !SvtType__IsServantEquip(this->fields.type, 0) )
    return OriginName;
  Script = ServantEntity__GetScript(this, v4);
  return EntityScriptUtil__GetStringValue(Script, (System_String_o *)StringLiteral_23637/*"overwriteDetailName"*/, OriginName, 0);
}


int32_t ServantEntity__GetDispLimitCountFromUserServantCollection(
        ServantEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1
  unsigned int max_length; // w8
  System_Int32_array *v8; // x20
  unsigned int v10; // w9
  unsigned int v11; // w24
  int32_t v12; // w25
  int32_t v13; // w21
  int32_t v14; // w22

  if ( (byte_5938FEE & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&StringLiteral_19061/*"costumeCondInMaxLimitCount"*/);
    byte_5938FEE = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19061/*"costumeCondInMaxLimitCount"*/, method);
  if ( ScriptIntArrayParam )
  {
    max_length = ScriptIntArrayParam->max_length;
    v8 = ScriptIntArrayParam;
    if ( -1431655765 * max_length + 715827882 <= 0x55555554 && (int)max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length || v10 + 1 >= max_length || (v11 = v10 + 2, v10 + 2 >= max_length) )
          sub_21FFED4(ScriptIntArrayParam);
        v12 = v8->m_Items[v10];
        v13 = v8->m_Items[v10 + 1];
        v14 = v8->m_Items[v10 + 2];
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
        ScriptIntArrayParam = (System_Int32_array *)CondType__IsQuestPhaseClear_47317140(v13, v14, -1, 0, 0);
        if ( ((unsigned __int8)ScriptIntArrayParam & 1) != 0 )
          break;
        max_length = v8->max_length;
        v10 = v11 + 1;
        if ( (int)(v11 + 1) >= (int)max_length )
          return defVal;
      }
      return v12;
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
  __int64 v11; // x21
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938FE5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938FE5 = 1;
  }
  name = 0;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventServantMaster___);
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
        if ( (unsigned int)v11 >= max_length )
          sub_21FFED4(Instance);
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
      sub_21FFECC(Instance, v6);
    }
  }
  return 0;
}


int32_t ServantEntity__GetEventNameServantId(ServantEntity_o *this, const MethodInfo *method)
{
  bool v3; // zf
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x20
  __int64 v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_5938FE8 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5938FE8 = 1;
  }
  v3 = !SvtType__IsSvtMaterialTd(this->fields.type, 0);
  v5 = 40;
  if ( v3 )
    v5 = 24;
  if ( v3 )
    v6 = 16;
  else
    v6 = 32;
  v7 = *(__int64 *)((char *)&this->klass + v6);
  v8 = *(__int64 *)((char *)&this->klass + v5);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v10, 0);
}


System_String_o *ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v5; // x8

  if ( (byte_5938FEB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7632/*"HideInAnimNode"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938FEB = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7632/*"HideInAnimNode"*/, v2);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass == (Il2CppClass *)qword_594C0B8 )
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

  if ( (byte_5938FE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE9 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0) )
    goto LABEL_18;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0
    || (v5 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0)) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  max_length = Instance->max_length;
  if ( max_length )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    v7 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      v7 = NetworkManager_TypeInfo;
    }
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    userIdNumber = v7->static_fields->userIdNumber;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
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
  bool v10; // w26
  UserServantEntity_o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5938FE7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE7 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0) || SvtType__IsSvtMaterialTd(this->fields.type, 0) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_21FFED4(Instance);
        v11 = v8->m_Items[v9];
        if ( !v11 )
          break;
        v12 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
        *(_QWORD *)&v15.fields.currentCryptoKey = v12;
        *(_QWORD *)&v15.fields.fakeValue = v13;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
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
      sub_21FFECC(Instance, v6);
    }
  }
  return 0;
}


bool ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5938FE6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_21FFECC(Instance, v3);
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
  __int64 v6; // x1
  int32_t v7; // w21
  int32_t v8; // w20
  int32_t v9; // w22

  if ( (byte_5938FED & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&StringLiteral_22410/*"lvLimitUpCondMaterial"*/);
    byte_5938FED = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22410/*"lvLimitUpCondMaterial"*/, method);
  if ( ScriptIntArrayParam && LODWORD(ScriptIntArrayParam->max_length) == 3 )
  {
    v7 = ScriptIntArrayParam->m_Items[2];
    v9 = ScriptIntArrayParam->m_Items[0];
    v8 = ScriptIntArrayParam->m_Items[1];
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
    if ( CondType__IsQuestPhaseClear_47317140(v8, v7, -1, 0, 0) )
      return v9;
  }
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
  __int64 v12; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v15; // x1
  int v16; // w8
  void *v17; // x21
  __int64 v18; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v19; // x0
  const MethodInfo *v20; // x2
  System_String_o *OverwriteServantDetailName; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v24; // x21
  int v25; // w8
  System_String_o *v26; // x0
  __int64 v27; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x19
  __int64 v33; // x1
  Il2CppObject *v34; // x23
  __int64 v35; // x24
  __int64 v36; // x25
  __int64 v37; // x1
  Il2CppObject *v38; // x22
  NetworkManager_c *v39; // x0
  __int64 v40; // x24
  __int64 v41; // x25
  int64_t userIdNumber; // x23
  ServantLimitAddEntity_o *v43; // [xsp+0h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_5938FE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938FE3 = 1;
  }
  name = 0;
  v43 = 0;
  entity = 0;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v11) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v15);
  if ( !MasterData_object )
    goto LABEL_62;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_62;
  v16 = *((_DWORD *)Instance + 6);
  v17 = Instance;
  if ( v16 < 1 )
  {
LABEL_15:
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      OverwriteServantDetailName = ServantEntity__GetOverwriteServantDetailName(this, imageLimitCount, v20);
LABEL_19:
      v23 = OverwriteServantDetailName;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22);
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v23, 0);
LABEL_22:
      v25 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1);
      if ( useName )
      {
        if ( !v25 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v24, 0);
        if ( !System_String__IsNullOrEmpty(v26, 0) )
          return v24;
        nameSave = this->fields.nameSave;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v27);
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(nameSave, 0);
        if ( System_String__IsNullOrEmpty(v29, 0) )
          return this->fields.name;
      }
      else
      {
        if ( !v25 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v24, 0);
        if ( !System_String__IsNullOrEmpty(v30, 0) )
          return v24;
      }
      return this->fields.nameSave;
    }
    v24 = v19;
    if ( maxLimitCount == -1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      v38 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      v39 = NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
        v39 = NetworkManager_TypeInfo;
      }
      v40 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v41 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      userIdNumber = v39->static_fields->userIdNumber;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
      *(_QWORD *)&v47.fields.currentCryptoKey = v40;
      *(_QWORD *)&v47.fields.fakeValue = v41;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v47, 0);
      if ( !v38 )
        goto LABEL_62;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)v38,
              &entity,
              userIdNumber,
              (int32_t)Instance,
              0) )
        goto LABEL_22;
      Instance = entity;
      if ( !entity )
        goto LABEL_62;
      Instance = (void *)UserServantCollectionEntity__IsGet(entity, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_22;
      if ( !entity )
        goto LABEL_62;
      maxLimitCount = entity->fields.maxLimitCount;
      if ( maxLimitCount < 0 )
        goto LABEL_22;
    }
    else if ( maxLimitCount < 0 )
    {
      goto LABEL_22;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      v34 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v35 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v36 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v43 = 0;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
      *(_QWORD *)&v46.fields.currentCryptoKey = v35;
      *(_QWORD *)&v46.fields.fakeValue = v36;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v46, 0);
      if ( v34 )
      {
        ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v34, &v43, (int32_t)Instance, maxLimitCount, 0);
        if ( !v43 )
          goto LABEL_22;
        OverwriteServantDetailName = ServantLimitAddEntity__GetOverwriteServantName(v43, 0);
        goto LABEL_19;
      }
    }
LABEL_62:
    sub_21FFECC(Instance, v12);
  }
  v18 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v18 >= v16 )
      sub_21FFED4(Instance);
    Instance = (void *)*((_QWORD *)v17 + v18 + 4);
    if ( !Instance )
      goto LABEL_62;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v16 = *((_DWORD *)v17 + 6);
    if ( (int)++v18 >= v16 )
      goto LABEL_15;
  }
  v31 = name;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v31, 0);
}


int32_t ServantEntity__GetNotSamePartyKey(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5939000 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23391/*"notSamePartyKey"*/);
    byte_5939000 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_49624364(this, (System_String_o *)StringLiteral_23391/*"notSamePartyKey"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *ServantEntity__GetOriginName(ServantEntity_o *this, const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x19

  if ( (byte_5938FD7 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_5938FD7 = 1;
  }
  nameSave = this->fields.nameSave;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(nameSave, 0);
}


int32_t ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *scriptValue; // [xsp+0h] [xbp-30h] BYREF
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938FD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
    sub_21FFC50(&StringLiteral_4654/*"ClassImageId"*/);
    sub_21FFC50(&StringLiteral_23628/*"overwriteClassImageId"*/);
    byte_5938FD3 = 1;
  }
  param = 0;
  scriptValue = 0;
  if ( ServantEntity__checkScript_49624364(this, (System_String_o *)StringLiteral_4654/*"ClassImageId"*/, &param, v2) )
  {
    LODWORD(Script) = param;
  }
  else
  {
    Script = ServantEntity__GetScript(this, v4);
    if ( Script )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)Script,
             (Il2CppObject *)StringLiteral_23628/*"overwriteClassImageId"*/,
             &scriptValue,
             (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DesignCardManager__get_Instance__);
        if ( !Instance )
          sub_21FFECC(0, v7);
        LODWORD(Script) = DesignCardManager__GetEnableOverwriteClassImageId(
                            (DesignCardManager_o *)Instance,
                            scriptValue,
                            0);
      }
      else
      {
        LODWORD(Script) = 0;
      }
    }
  }
  return (int)Script;
}


System_String_o *ServantEntity__GetOverwriteProfileName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0

  if ( (byte_5939007 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23671/*"overwriteProfileName"*/);
    byte_5939007 = 1;
  }
  result = (System_String_o *)ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_23671/*"overwriteProfileName"*/, v2);
  if ( result )
  {
    if ( result->klass != (System_String_c *)qword_594C0B8 )
      return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantEntity__GetOverwriteServantDetailName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x22
  __int64 v9; // x23
  ServantLimitAddMaster_o *v10; // x21
  ServantLimitAddEntity_o *v11; // x0
  __int64 v12; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_5939009 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5939009 = 1;
  }
  entity = 0;
  v5 = **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantLimitAddMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v11 = (ServantLimitAddEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0);
  if ( !v10 )
    goto LABEL_12;
  if ( ServantLimitAddMaster__TryGetEntity(v10, &entity, (int32_t)v11, limitCount, 0) )
  {
    v11 = entity;
    if ( entity )
      return ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0);
LABEL_12:
    sub_21FFECC(v11, v12);
  }
  return v5;
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
  System_Int32_array **m_Items; // x24
  System_Int32_array *v10; // x21
  __int64 v11; // x1

  if ( (byte_5938FEA & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_int____91487608);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_ServantEntity_GetScriptMultiArray_int___);
    sub_21FFC50(&StringLiteral_13416/*"SkillRankUp"*/);
    byte_5938FEA = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_13416/*"SkillRankUp"*/,
                           (const MethodInfo_39525F8 *)Method_ServantEntity_GetScriptMultiArray_int___);
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
                                                             (const MethodInfo_37E1834 *)Method_BasicHelper_IndexValue_int____91487608);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v10;
        LODWORD(max_length) = v7->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          goto LABEL_9;
      }
LABEL_13:
      sub_21FFED4(ScriptMultiArray_int);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !ScriptMultiArray_int )
    sub_21FFECC(0, v11);
  v10 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !LODWORD(ScriptMultiArray_int->max_length) )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v10;
}


System_String_o *ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o *Ruby; // x20
  const MethodInfo *v4; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  EventServantMaster_o *v11; // x21
  int max_length; // w8
  EventServantEntity_array *v13; // x21
  __int64 v14; // x23
  EventServantEntity_o *v15; // x22
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x19
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5938FE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE4 = 1;
  }
  name = 0;
  Ruby = **(System_String_o ***)(qword_594C0B8 + 184);
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v4) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v11 = (EventServantMaster_o *)MasterData_object;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    *(_QWORD *)&v20.fields.currentCryptoKey = v9;
    *(_QWORD *)&v20.fields.fakeValue = v10;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v20, 0);
    if ( !v11 || (Instance = EventServantMaster__GetEntities(v11, (int32_t)Instance, 0)) == 0 )
LABEL_23:
      sub_21FFECC(Instance, v6);
    max_length = Instance->max_length;
    v13 = Instance;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v14 >= max_length )
          sub_21FFED4(Instance);
        v15 = v13->m_Items[v14];
        if ( !v15 )
          goto LABEL_23;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(v13->m_Items[v14], &name, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_18;
      }
      Ruby = EventServantEntity__GetRuby(v15, 0);
    }
  }
LABEL_18:
  if ( System_String__IsNullOrEmpty(Ruby, 0) )
  {
    v17 = this->fields.ruby;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v17, 0);
  }
  return Ruby;
}


System_Collections_Generic_Dictionary_string__object__o *ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  MissionNaviTransitionBoardItem_o *p_mergedScript; // x19
  __int64 v5; // x1
  Il2CppObject *Master_object; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  Il2CppClass *klass; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x22
  System_Collections_Generic_Dictionary_object__object__o *v18; // x23
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  System_Action_T__o *v27; // x23
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_object__object__o *v29; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_5938FCD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_KeyValuePair_string__object___TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_KeyValuePair_string__object____);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_ServantEntity___c__DisplayClass103_0__GetScript_b__0__);
    sub_21FFC50(&ServantEntity___c__DisplayClass103_0_TypeInfo);
    byte_5938FCD = 1;
  }
  entity = 0;
  p_mergedScript = (MissionNaviTransitionBoardItem_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  memset(&v30, 0, sizeof(v30));
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    *(_QWORD *)&v32.fields.currentCryptoKey = v7;
    *(_QWORD *)&v32.fields.fakeValue = v8;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v32, 0);
    if ( Master_object )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &entity,
              (int32_t)klass,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v29 = *p_script;
        p_mergedScript->klass = (MissionNaviTransitionBoardItem_c *)*p_script;
        sub_21FFBF4(p_mergedScript, (int32_t)v29, v11, v12, v13, v14, v15, v16);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v17 = sub_21FFEBC(ServantEntity___c__DisplayClass103_0_TypeInfo);
      ServantEntity___c__DisplayClass103_0___ctor((ServantEntity___c__DisplayClass103_0_o *)v17, 0);
      v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v18,
        (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 16) = v18;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v17 + 16);
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)v18, v19, v20, v21, v22, v23, v24);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v27 = (System_Action_T__o *)sub_21FFEBC(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_object__object_____ctor(
          v27,
          (Il2CppObject *)v17,
          Method_ServantEntity___c__DisplayClass103_0__GetScript_b__0__,
          0);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v27,
          (const MethodInfo_37DE394 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v30,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v30,
                      (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_21FFECC(0, v28);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v30.fields._current.fields.key,
                v30.fields._current.fields.value,
                (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v30,
              (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_21FFECC(klass, v10);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_39526B4 *method)
{
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20
  __int64 v8; // x1
  long double v9; // q0

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass == (Il2CppClass *)qword_594C0B8 )
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
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *)((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *(__fastcall *)(MethodInfo **__return_ptr, System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                                                               &method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_,
                                                                               v7,
                                                                               v9);
}


System_Int32_array_array *ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_39525F8 *method)
{
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20
  __int64 v8; // x1

  if ( !method->rgctx_data )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    if ( !method->rgctx_data )
      sub_2237B54();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass == (Il2CppClass *)qword_594C0B8 )
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
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  return JsonManager__DeserializeMultiArray_int_(
           (Il2CppObject *)v7,
           (const MethodInfo_38A0638 *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *ServantEntity__GetScriptValue(ServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938FCE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938FCE = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int32_t type; // w0
  const MethodInfo *v6; // x3
  bool IsServant; // w8
  System_Int32_array *result; // x0
  ServantEntity_o *v9; // x0
  const MethodInfo *v10; // x2
  SkillInfo_array *skillInfoList; // [xsp+8h] [xbp-18h] BYREF

  type = this->fields.type;
  skillInfoList = 0;
  IsServant = SvtType__IsServant(type, 0);
  result = 0;
  if ( IsServant )
  {
    ServantEntity__GetSkillInfo(this, &skillInfoList, skillListNum, v6);
    if ( skillInfoList )
      return ServantEntity__GetCategoryIdList(v9, skillInfoList, v10);
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
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v9; // x0
  SkillInfo_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  unsigned __int64 v17; // x25
  __int64 v18; // x28
  __int64 v19; // x29
  SkillInfo_o *v20; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v22; // x1
  int32_t type; // w0
  __int64 v24; // x23
  __int64 v25; // x24
  unsigned int *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5938FFA & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&SkillInfo___TypeInfo);
    sub_21FFC50(&SkillInfo_TypeInfo);
    byte_5938FFA = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillInfoList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      v9 = BalanceConfig_TypeInfo;
    }
    skillListNum = v9->static_fields->SvtSkillListMax;
  }
  v10 = (SkillInfo_array *)sub_21FFD10(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)skillInfoList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( skillListNum >= 1 )
  {
    v17 = 0;
    v18 = (unsigned int)skillListNum;
    v19 = 8;
    do
    {
      v20 = (SkillInfo_o *)sub_21FFEBC(SkillInfo_TypeInfo);
      SkillInfo___ctor(v20, 0);
      if ( !v20 )
LABEL_23:
        sub_21FFECC(IsServantEquip, v22);
      type = this->fields.type;
      v20->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(type, 0);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v24 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v25 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
        *(_QWORD *)&v36.fields.currentCryptoKey = v24;
        *(_QWORD *)&v36.fields.fakeValue = v25;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                   v36,
                                                   0);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v17 + 1,
                           0);
        if ( IsServantEquip )
        {
          v20->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v20->fields.title,
            &v20->fields.explanation,
            0);
        }
      }
      v26 = (unsigned int *)*skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v27 = sub_21FFDA4(v20, *(_QWORD *)(*(_QWORD *)v26 + 64LL));
      if ( !v27 )
      {
        v35 = sub_21FFEF0(0, v28);
        sub_21FFD90(v35, 0);
      }
      if ( v17 >= v26[6] )
        sub_21FFED4(v27);
      *(_QWORD *)&v26[2 * v17 + 8] = v20;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26[v19], (int32_t)v20, v29, v30, v31, v32, v33, v34);
      ++v17;
      v19 += 2;
    }
    while ( v18 != v17 );
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
  char v14; // w9
  char v15; // w26
  unsigned __int64 v16; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10

  if ( (byte_5938FC8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_AttriMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5938FC8 = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, individualityArray);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v9 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)Master_object, this->fields.attri, 0);
  v11 = AttriMaster__GetIndividualityFromValue(v9, servantLimitAddEntity->fields.attri, 0);
  v12 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  max_length = individualityArray->max_length;
  v14 = v11 < 1;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_21FFED4(Master_object);
      v8 = (unsigned int)individualityArray->m_Items[v16];
      if ( (_DWORD)v8 == IndividualityFromValue )
      {
        if ( v11 >= 1 )
        {
          if ( !v12 )
            goto LABEL_36;
          items = v12->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v11,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            v15 = 1;
          }
          else
          {
            v15 = 1;
            v12->fields._size = size + 1;
            items->m_Items[size] = v11;
          }
        }
      }
      else
      {
        if ( !v12 )
          goto LABEL_36;
        v20 = v12->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v12->fields._version;
        if ( !v20 )
          goto LABEL_36;
        v22 = v12->fields._size;
        if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v8,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v22 + 1;
          v20->m_Items[v22] = v8;
        }
      }
      LODWORD(max_length) = individualityArray->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)max_length );
    v14 = v15 | (v11 < 1);
  }
  if ( (v14 & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_36;
    return System_Collections_Generic_List_int___ToArray(
             v12,
             (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  if ( !v12
    || (v24 = v12->fields._items, v25 = Method_System_Collections_Generic_List_int__Add__, ++v12->fields._version, !v24) )
  {
LABEL_36:
    sub_21FFECC(Master_object, v8);
  }
  v26 = v12->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v12,
      v11,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v26 + 1;
    v24->m_Items[v26] = v11;
  }
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


ServantEntity_TransformInfo_o *ServantEntity__GetTransformInfo(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantEntity_TransformInfo_o *result; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19

  if ( (byte_5938FD0 & 1) == 0 )
  {
    sub_21FFC50(&Method_JsonManager_Deserialize_ServantEntity_TransformInfo___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25431/*"transformInfo"*/);
    byte_5938FD0 = 1;
  }
  result = (ServantEntity_TransformInfo_o *)ServantEntity__GetScriptValue(
                                              this,
                                              (System_String_o *)StringLiteral_25431/*"transformInfo"*/,
                                              v2);
  if ( result )
  {
    v6 = (Il2CppObject *)result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
    return (ServantEntity_TransformInfo_o *)JsonManager__Deserialize_object_(
                                              v6,
                                              (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_ServantEntity_TransformInfo___);
  }
  return result;
}


System_Int32_array *ServantEntity__GetTreasureDeviceCategoryIdList(ServantEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  __int64 v7; // x21
  ServantTreasureDvcMaster_o *v8; // x19
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x1
  __int64 v11; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v13; // x20
  TreasureDvcLvEntity_o *v14; // x0
  __int64 v15; // x1
  TreasureDvcLvEntity_o *v16; // x21
  Il2CppObject *v17; // x19
  Il2CppObject *v18; // x23
  System_Collections_Generic_HashSet_int__o *v19; // x22
  const MethodInfo_42814B4 **v20; // x27
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v23; // x24
  unsigned __int64 v24; // x29
  unsigned __int64 max_length_low; // x9
  DataVals_o *v26; // x25
  int32_t v27; // w1
  int32_t Param; // w26
  int32_t v29; // w1
  System_Collections_Generic_IEnumerable_T__o *v30; // x1
  System_Collections_Generic_HashSet_int__o *v31; // x20
  const MethodInfo_42814B4 **v32; // x22
  int32_t v33; // w26
  int32_t v34; // w27
  void *v35; // x8
  System_Collections_Generic_HashSet_int__o *v36; // x20
  _BOOL8 v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v43; // [xsp+0h] [xbp-D0h]
  DataVals_o **v44; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v45; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v46; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v48; // [xsp+50h] [xbp-80h] BYREF
  TreasureDvcLvEntity_o *v49; // [xsp+58h] [xbp-78h] BYREF
  SkillLvEntity_o *v50; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_5938FF9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5938FF9 = 1;
  }
  v50 = 0;
  entity = 0;
  v48 = 0;
  v49 = 0;
  memset(&v47, 0, sizeof(v47));
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v46 = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v52.fields.currentCryptoKey = v6;
  *(_QWORD *)&v52.fields.fakeValue = v7;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v52, 0);
  if ( !v8 )
    goto LABEL_51;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v8,
                                                (int32_t)DataValsList,
                                                1,
                                                0);
  if ( EntityFromSvtIdOnly )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v13 = (TreasureDvcLvMaster_o *)DataValsList;
    v14 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[0], 1, 0);
    if ( !v14 )
      return 0;
    v16 = v14;
    if ( !v14->fields.funcId )
      return 0;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    v43 = v13;
    v17 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
    v18 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v19 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v19,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v19 )
      goto LABEL_51;
    v20 = (const MethodInfo_42814B4 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v16->fields.funcId,
      (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v16, 100, 0);
    funcId = v16->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v23 = DataValsList;
    v24 = 0;
    v44 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(funcId->max_length);
      if ( (__int64)v24 >= (int)max_length_low )
      {
        v36 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v36,
          (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v45,
          v19,
          (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v47 = v45;
        v45.fields._set = 0;
        *(_QWORD *)&v45.fields._index = &v47;
        while ( 1 )
        {
          v37 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v47,
                  (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v37 )
            break;
          if ( !v17 )
            sub_21FFECC(v37, v38);
          v39 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                  &v46,
                  (int32_t)v47.fields._current,
                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v39 )
          {
            if ( !v46 )
              sub_21FFECC(v39, v40);
            if ( !v36 )
              sub_21FFECC(v39, v40);
            System_Collections_Generic_HashSet_int___Add(
              v36,
              HIDWORD(v46[4].monitor),
              (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v47,
          (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v36 )
        {
          count = (unsigned int)v36->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_21FFD10(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_69736372(
              v36,
              EntityFromSvtIdOnly,
              (const MethodInfo_42817B4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0;
        }
LABEL_51:
        sub_21FFECC(DataValsList, v10);
      }
      if ( v24 >= max_length_low )
        goto LABEL_64;
      if ( !v17 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v17,
                                         &entity,
                                         funcId->m_Items[v24],
                                         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_51;
          if ( v24 >= LODWORD(v23->max_length) )
LABEL_64:
            sub_21FFED4(DataValsList);
          if ( !entity )
            goto LABEL_51;
          v26 = m_Items[v24];
          if ( !v26 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v24], (FunctionMaster_o *)v17, (int32_t)entity[1].monitor, 0);
          v27 = DataVals__isParam(v26, 28, 0) ? 28 : 3;
          Param = DataVals__GetParam(v26, v27, 0, 0);
          v29 = DataVals__isParam(v26, 29, 0) ? 29 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v26, v29, 0, 0);
          if ( !v18 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v18,
                                             &v50,
                                             Param,
                                             (int32_t)DataValsList,
                                             0);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v50 )
              goto LABEL_51;
            v30 = (System_Collections_Generic_IEnumerable_T__o *)v50->fields.funcId;
            if ( v30 )
              System_Collections_Generic_HashSet_int___UnionWith(v19, v30, *v20);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v26, 96, 0);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v26, 97, 0);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v31 = v19;
              v32 = v20;
              v33 = DataVals__GetParam(v26, 96, 0, 0);
              v34 = DataVals__GetParam(v26, 97, 0, 0);
              if ( DataVals__isParam(v26, 99, 0) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v43, &v49, v33, v34, 0);
                v20 = v32;
                v19 = v31;
                m_Items = v44;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v35 = v49;
                  if ( !v49 )
                    goto LABEL_51;
LABEL_48:
                  v10 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v35 + 4);
                  if ( v10 )
                    System_Collections_Generic_HashSet_int___UnionWith(v19, v10, *v20);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v18, &v48, v33, v34, 0);
                v20 = v32;
                v19 = v31;
                m_Items = v44;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v35 = v48;
                  if ( !v48 )
                    goto LABEL_51;
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
      funcId = v16->fields.funcId;
      ++v24;
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

  if ( (byte_5938FE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE2 = 1;
  }
  v3 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v14.fields.currentCryptoKey = v3;
  *(_QWORD *)&v14.fields.fakeValue = v4;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v10 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v15.fields.currentCryptoKey = v9,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v15, 0),
        !v10) )
  {
    sub_21FFECC(Instance, v7);
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
  int32_t *m_Items; // x8
  int v9; // t1

  if ( (byte_5938FEC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17340/*"additionExpandImage"*/);
    byte_5938FEC = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17340/*"additionExpandImage"*/, method);
  if ( ScriptIntArrayParam )
  {
    max_length = ScriptIntArrayParam->max_length;
    if ( max_length && (v7 = max_length - 1, (int)max_length >= 1) )
    {
      m_Items = ScriptIntArrayParam->m_Items;
      do
      {
        v9 = *m_Items++;
        LOBYTE(ScriptIntArrayParam) = v9 == limitCount;
        if ( v9 == limitCount )
          break;
      }
      while ( v7-- );
    }
    else
    {
      LOBYTE(ScriptIntArrayParam) = 0;
    }
  }
  return (char)ScriptIntArrayParam;
}


bool ServantEntity__IsBeastNotPlayable(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20

  if ( (byte_5938FF6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A);
    byte_5938FF6 = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 5);
  v4.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  return System_Linq_Enumerable__Contains_int_(
           v5,
           this->fields.classId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5938FF0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18800/*"coinRoomCheck"*/);
    byte_5938FF0 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_18800/*"coinRoomCheck"*/, v2);
}


bool ServantEntity__IsContainOverwriteGrandGraphImageLimitCount(
        ServantEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *v6; // x1
  bool v7; // w0
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5939001 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23650/*"overwriteGrandGraphImageLimitCount"*/);
    byte_5939001 = 1;
  }
  v6 = (System_String_o *)StringLiteral_23650/*"overwriteGrandGraphImageLimitCount"*/;
  param = 0;
  *value = 0;
  v7 = ServantEntity__checkScript_49624364(this, v6, &param, v3);
  if ( v7 )
    *value = param;
  return v7;
}


bool ServantEntity__IsEnableSupportLimitCountToDispLimitCount(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593900A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25071/*"supportLimitCountToDispLimitCount"*/);
    byte_593900A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25071/*"supportLimitCountToDispLimitCount"*/, 0, 0) > 0;
}


bool ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20

  if ( (byte_5938FF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913);
    byte_5938FF4 = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 4);
  v4.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  return System_Linq_Enumerable__Contains_int_(
           v5,
           this->fields.classId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_5938FF5 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572);
    byte_5938FF5 = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = System_Linq_Enumerable__Concat_int_(
         v5,
         (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->PlayableBeastClassIds,
         (const MethodInfo_3842AD4 *)Method_System_Linq_Enumerable_Concat_int___);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                              v8,
                                                              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v9,
           this->fields.classId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeastNotPlayable(this, v10);
}


bool ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20

  if ( (byte_5938FF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE);
    byte_5938FF3 = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 8);
  v4.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  return System_Linq_Enumerable__Contains_int_(
           v5,
           this->fields.classId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity__IsIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t individuality,
        const MethodInfo *method)
{
  int v9; // w8
  int32_t LimitCountByDispLimit; // w0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x23
  int32_t v14; // w22
  __int64 v15; // x1
  int32_t v16; // w21
  __int64 v17; // x1
  System_Int32_array *IndividualityList; // x21
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x24
  __int64 v22; // x25
  ServantLimitAddMaster_o *v23; // x23
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  AttriMaster_o *v26; // x22
  int32_t IndividualityFromValue; // w0
  bool result; // w0
  int32_t v29; // w0
  int max_length; // w8
  int32_t *m_Items; // x9
  int v32; // w10
  int v33; // t1
  struct System_Int32_array *v34; // x8
  int v35; // w9
  bool v36; // vf
  int v37; // w9
  int32_t *v38; // x8
  int v39; // t1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_5938FCA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_AttriMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5938FCA = 1;
  }
  v9 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = LimitCountByDispLimit;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v42.fields.currentCryptoKey = v12;
  *(_QWORD *)&v42.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v42, 0);
  if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v15);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v16, v14, 0);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantLimitAddMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v43.fields.currentCryptoKey = v21;
  *(_QWORD *)&v43.fields.fakeValue = v22;
  v24 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v43, 0);
  if ( !v23 )
    goto LABEL_43;
  v24 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v23, &entity, (int32_t)v24, v14, 0);
  if ( ((unsigned __int8)v24 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_43;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v29 = -1;
    if ( !IndividualityList )
      goto LABEL_34;
    goto LABEL_27;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  v24 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v26 = (AttriMaster_o *)v24) == 0 )
LABEL_43:
    sub_21FFECC(v24, v25);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v24, entity->fields.attri, 0);
  if ( IndividualityFromValue >= 1 && IndividualityFromValue == individuality )
    return 1;
  v29 = AttriMaster__GetIndividualityFromValue(v26, this->fields.attri, 0);
  if ( IndividualityList )
  {
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      m_Items = IndividualityList->m_Items;
      do
      {
        v33 = *m_Items++;
        v32 = v33;
        if ( v33 != v29 && v32 == individuality )
          return 1;
      }
      while ( --max_length );
    }
  }
LABEL_34:
  if ( !entity )
    return 0;
  v34 = entity->fields.individuality;
  if ( !v34 )
    return 0;
  v35 = v34->max_length;
  v36 = __OFSUB__(v35, 1);
  v37 = v35 - 1;
  if ( v37 < 0 != v36 )
    return 0;
  v38 = v34->m_Items;
  do
  {
    v39 = *v38++;
    result = v39 == individuality;
    if ( v39 == individuality )
      break;
  }
  while ( v37-- );
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity__IsIndividuality_49621712(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t LimitCountByDispLimit; // w22
  __int64 v11; // x21
  __int64 v12; // x23
  __int64 v13; // x1
  int32_t v14; // w21
  __int64 v15; // x1
  System_Int32_array *individuality; // x21
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x24
  __int64 v20; // x25
  ServantLimitAddMaster_o *v21; // x23
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  AttriMaster_o *v24; // x22
  int32_t IndividualityFromValue; // w0
  int max_length; // w8
  int32_t *m_Items; // x9
  int v28; // t1
  int32_t v29; // w0
  __int64 v30; // x8
  int32_t v31; // w11
  int v32; // w12
  int32_t *v33; // x13
  int v34; // t1
  struct System_Int32_array *v35; // x8
  __int64 v36; // x9
  int v37; // w14
  int32_t *v38; // x15
  int v39; // t1
  bool result; // w0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_5938FCB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_AttriMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5938FCB = 1;
  }
  entity = 0;
  if ( !individualityList || !individualityList->max_length )
    return 1;
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v42.fields.currentCryptoKey = v11;
  *(_QWORD *)&v42.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v42, 0);
  if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v13);
  individuality = ServantIndividualityMaster__GetIndividualityList(v14, LimitCountByDispLimit, 0);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantLimitAddMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v43.fields.currentCryptoKey = v19;
  *(_QWORD *)&v43.fields.fakeValue = v20;
  v22 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v43, 0);
  if ( !v21 )
    goto LABEL_53;
  v22 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v21, &entity, (int32_t)v22, LimitCountByDispLimit, 0);
  if ( ((unsigned __int8)v22 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_53;
    if ( entity->fields.attri != -1 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
      v22 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v24 = (AttriMaster_o *)v22;
        if ( v22 )
        {
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v22, entity->fields.attri, 0);
          if ( IndividualityFromValue >= 1 )
          {
            max_length = individualityList->max_length;
            if ( max_length >= 1 )
            {
              m_Items = individualityList->m_Items;
              do
              {
                v28 = *m_Items++;
                if ( IndividualityFromValue == v28 )
                  return 1;
              }
              while ( --max_length );
            }
          }
          v29 = AttriMaster__GetIndividualityFromValue(v24, this->fields.attri, 0);
          if ( !individuality )
            goto LABEL_41;
          goto LABEL_33;
        }
      }
LABEL_53:
      sub_21FFECC(v22, v23);
    }
  }
  v29 = -1;
  if ( !individuality )
    goto LABEL_41;
LABEL_33:
  if ( (int)individuality->max_length >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      v31 = individuality->m_Items[v30];
      if ( v31 != v29 )
      {
        v32 = individualityList->max_length;
        if ( v32 >= 1 )
          break;
      }
LABEL_40:
      if ( ++v30 == (unsigned int)individuality->max_length )
        goto LABEL_41;
    }
    v33 = individualityList->m_Items;
    while ( 1 )
    {
      v34 = *v33++;
      if ( v31 == v34 )
        return 1;
      if ( !--v32 )
        goto LABEL_40;
    }
  }
LABEL_41:
  if ( entity )
  {
    v35 = entity->fields.individuality;
    if ( v35 )
    {
      if ( (int)v35->max_length >= 1 )
      {
        v36 = 0;
        while ( SLODWORD(individualityList->max_length) < 1 )
        {
LABEL_49:
          ++v36;
          result = 0;
          if ( v36 == (unsigned int)v35->max_length )
            return result;
        }
        v37 = individualityList->max_length;
        v38 = individualityList->m_Items;
        while ( 1 )
        {
          v39 = *v38++;
          if ( v35->m_Items[v36] == v39 )
            return 1;
          if ( !--v37 )
            goto LABEL_49;
        }
      }
    }
  }
  return 0;
}


bool ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  ServantChangeEntity_array *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_5938FE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE1 = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0);
  if ( !v9 || (Instance = ServantChangeMaster__GetEntityList(v9, (int32_t)Instance, v10)) == 0 )
LABEL_9:
    sub_21FFECC(Instance, v4);
  return Instance->max_length != 0;
}


bool ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  const MethodInfo *v10; // x2
  ServantChangeEntity_o *v11; // x0
  _BOOL4 v12; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_5938FDF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FDF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v14, 0);
  if ( !v9 )
LABEL_10:
    sub_21FFECC(Instance, v4);
  v11 = ServantChangeMaster__GetEnableEntity(v9, (int32_t)Instance, v10);
  if ( v11 )
    return (LOBYTE(v11->fields.flag) >> 3) & 1;
  else
    LOBYTE(v12) = 1;
  return v12;
}


bool ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  ServantChangeMaster_o *v9; // x20
  const MethodInfo *v10; // x2
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  ServantChangeEntity_o *v13; // x20
  _BOOL4 v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5938FE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FE0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v16.fields.currentCryptoKey = v7;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
  if ( !v9 )
LABEL_11:
    sub_21FFECC(Instance, v4);
  v11 = ServantChangeMaster__TrueNameEntity(v9, (int32_t)Instance, v10);
  if ( v11 && (v13 = v11, ServantChangeEntity__IsEnable(v11, v12)) )
    return (LOBYTE(v13->fields.flag) >> 3) & 1;
  else
    LOBYTE(v14) = ServantEntity__IsNameTrue(this, v12);
  return v14;
}


bool ServantEntity__IsNotSameParty(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5938FFF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23391/*"notSamePartyKey"*/);
    byte_5938FFF = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_23391/*"notSamePartyKey"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity__IsPeriodLimitedServantByGachaId(ServantEntity_o *this, int32_t gachaId, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *v8; // x20
  System_Func_int__bool__o *v9; // x21
  System_Collections_Generic_List_int__o *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938FFD & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__157_0__);
    byte_5938FFD = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  svtIdList = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gachaId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v7);
  if ( GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
         (GachaBaseCollateralMaster_o *)Master_object,
         &svtIdList,
         gachaId,
         0) )
  {
    v8 = (System_Collections_Generic_List_T__o *)svtIdList;
    v9 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__157_0__,
      0);
    return BasicHelper__Any_int_(
             v8,
             (System_Func_T__bool__o *)v9,
             (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity__IsPeriodLimitedServantEquipByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        int64_t summonSceenInTime,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  GachaSubEntity_o *OpenEntity_49281092; // x0
  __int64 v11; // x1
  GachaSubEntity_o *v12; // x20
  System_Collections_Generic_List_T__o *v13; // x20
  System_Func_int__bool__o *v14; // x21
  System_Collections_Generic_List_int__o *svtEquipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938FFE & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaAdjustAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaSubMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__158_0__);
    byte_5938FFE = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  svtEquipIdList = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gachaId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaSubMaster___);
  if ( !Master_object )
    goto LABEL_14;
  OpenEntity_49281092 = GachaSubMaster__GetOpenEntity_49281092(
                          (GachaSubMaster_o *)Master_object,
                          gachaId,
                          summonSceenInTime,
                          0);
  if ( !OpenEntity_49281092 )
    return (unsigned __int8)OpenEntity_49281092 & 1;
  v12 = OpenEntity_49281092;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaAdjustAddMaster___);
  if ( !Master_object )
LABEL_14:
    sub_21FFECC(Master_object, v9);
  if ( GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
         (GachaAdjustAddMaster_o *)Master_object,
         &svtEquipIdList,
         v12->fields.adjustAddId,
         0) )
  {
    v13 = (System_Collections_Generic_List_T__o *)svtEquipIdList;
    v14 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__158_0__,
      0);
    LOBYTE(OpenEntity_49281092) = BasicHelper__Any_int_(
                                    v13,
                                    (System_Func_T__bool__o *)v14,
                                    (const MethodInfo_37DC704 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    LOBYTE(OpenEntity_49281092) = 0;
  }
  return (unsigned __int8)OpenEntity_49281092 & 1;
}


bool ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5938FF1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25082/*"svtBuffTurnExtend"*/);
    byte_5938FF1 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_25082/*"svtBuffTurnExtend"*/, v2);
}


bool ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20

  if ( (byte_5938FF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA);
    byte_5938FF2 = 1;
  }
  v3 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 6);
  v4.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v3, v4, 0);
  return System_Linq_Enumerable__Contains_int_(
           v5,
           this->fields.classId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


void ServantEntity__SetName(
        ServantEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.nameSave = name;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameSave,
    (int32_t)name,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  long double v19; // q0
  _QWORD *v20; // x21
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0
  System_Int32_array **v24; // x8
  System_Int32_array *v25; // x1
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  long double v33; // q0
  _QWORD *v34; // x20
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  System_Int32_array **v38; // x8
  System_Int32_array *v39; // x1
  _QWORD *v41; // x25
  System_Collections_Generic_Dictionary_string__object__o *script; // x24
  __int64 v43; // x8
  __int64 v44; // x0
  __int64 v45; // x0
  System_Int32_array *IntArray; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  __int64 v53; // x1
  long double v54; // q0
  _QWORD *v55; // x23
  System_Collections_Generic_Dictionary_string__object__o *v56; // x22
  __int64 v57; // x8
  __int64 v58; // x0
  __int64 v59; // x0
  System_Int32_array *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  __int64 v67; // x0
  __int64 v68; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v70; // x9

  if ( (byte_5939005 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_5939005 = 1;
  }
  AddCardIdsKey = ServantEntity__GetAddCardIdsKey(commandType, *(const MethodInfo **)&commandType);
  AddCardWeightsKey = ServantEntity__GetAddCardWeightsKey(commandType, v10);
  if ( System_String__IsNullOrEmpty(AddCardIdsKey, 0) || System_String__IsNullOrEmpty(AddCardWeightsKey, 0) )
  {
    v20 = Method_System_Array_Empty_int___;
    v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v21 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_WORD *)(v22 + 309) & 1) == 0 )
      v22 = sub_2237AF8(v19);
    if ( !*(_DWORD *)(v22 + 228) )
      *(__n128 *)&v19 = j_il2cpp_runtime_class_init_0(v22, v12);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
      v23 = sub_2237AF8(v19);
    v24 = *(System_Int32_array ***)(v23 + 184);
    v25 = *v24;
    *weights = *v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)weights, (int32_t)v25, v13, v14, v15, v16, v17, v18);
    v34 = Method_System_Array_Empty_int___;
    v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v35 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v35 = v34[7];
    }
    v36 = *(_QWORD *)(v35 + 16);
    if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
      v36 = sub_2237AF8(v33);
    if ( !*(_DWORD *)(v36 + 228) )
      *(__n128 *)&v33 = j_il2cpp_runtime_class_init_0(v36, v26);
    v37 = *(_QWORD *)(v34[7] + 16LL);
    if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
      v37 = sub_2237AF8(v33);
    v38 = *(System_Int32_array ***)(v37 + 184);
    v39 = *v38;
    *ids = *v38;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ids, (int32_t)v39, v27, v28, v29, v30, v31, v32);
    return 0;
  }
  v41 = Method_System_Array_Empty_int___;
  script = this->fields.script;
  v43 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v43 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v43 = v41[7];
  }
  v44 = *(_QWORD *)(v43 + 16);
  if ( (*(_WORD *)(v44 + 309) & 1) == 0 )
    v44 = sub_2237AF8(v19);
  if ( !*(_DWORD *)(v44 + 228) )
    *(__n128 *)&v19 = j_il2cpp_runtime_class_init_0(v44, v12);
  v45 = *(_QWORD *)(v41[7] + 16LL);
  if ( (*(_WORD *)(v45 + 309) & 1) == 0 )
    v45 = sub_2237AF8(v19);
  IntArray = EntityScriptUtil__GetIntArray(script, AddCardIdsKey, **(System_Int32_array ***)(v45 + 184), 0);
  *ids = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ids, (int32_t)IntArray, v47, v48, v49, v50, v51, v52);
  v55 = Method_System_Array_Empty_int___;
  v56 = this->fields.script;
  v57 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v57 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v57 = v55[7];
  }
  v58 = *(_QWORD *)(v57 + 16);
  if ( (*(_WORD *)(v58 + 309) & 1) == 0 )
    v58 = sub_2237AF8(v54);
  if ( !*(_DWORD *)(v58 + 228) )
    *(__n128 *)&v54 = j_il2cpp_runtime_class_init_0(v58, v53);
  v59 = *(_QWORD *)(v55[7] + 16LL);
  if ( (*(_WORD *)(v59 + 309) & 1) == 0 )
    v59 = sub_2237AF8(v54);
  v60 = EntityScriptUtil__GetIntArray(v56, AddCardWeightsKey, **(System_Int32_array ***)(v59 + 184), 0);
  *weights = v60;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)weights, (int32_t)v60, v61, v62, v63, v64, v65, v66);
  if ( !*ids )
LABEL_46:
    sub_21FFECC(v67, v68);
  max_length = (*ids)->max_length;
  v70 = *weights;
  if ( max_length )
  {
    if ( !v70 )
      goto LABEL_46;
  }
  else
  {
    if ( !v70 )
      goto LABEL_46;
    if ( !v70->max_length )
      return 0;
  }
  return (_DWORD)max_length == LODWORD(v70->max_length);
}


bool ServantEntity__TryGetOverwriteGrandGraphImage(
        ServantEntity_o *this,
        int32_t stage,
        int32_t *overwrite,
        const MethodInfo *method)
{
  System_String_o *v7; // x1
  const MethodInfo_39525F8 *v8; // x2
  System_Int32_array_array *ScriptMultiArray_int; // x0
  __int64 v10; // x1
  System_Int32_array_array *v11; // x21
  Il2CppObject *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  CommonReleaseMaster_o *v14; // x22
  unsigned __int64 v15; // x23
  System_Int32_array *v16; // x25
  il2cpp_array_size_t v17; // x8
  __int64 v18; // x1
  int32_t v19; // w8

  if ( (byte_5939002 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_ServantEntity_GetScriptMultiArray_int___);
    sub_21FFC50(&StringLiteral_23649/*"overwriteGrandGraphImage"*/);
    byte_5939002 = 1;
  }
  v7 = (System_String_o *)StringLiteral_23649/*"overwriteGrandGraphImage"*/;
  v8 = (const MethodInfo_39525F8 *)Method_ServantEntity_GetScriptMultiArray_int___;
  *overwrite = stage;
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(this, v7, v8);
  if ( ScriptMultiArray_int )
  {
    v11 = ScriptMultiArray_int;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    max_length = v11->max_length;
    if ( (int)max_length < 1 )
    {
LABEL_17:
      LOBYTE(ScriptMultiArray_int) = 0;
    }
    else
    {
      v14 = (CommonReleaseMaster_o *)Master_object;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)max_length )
          goto LABEL_22;
        v16 = v11->m_Items[v15];
        if ( v16 )
        {
          if ( LODWORD(v16->max_length) == 3 )
          {
            Master_object = (Il2CppObject *)LimitCountUtility__ConvertLimitCountToStage(v16->m_Items[0], 1, 0);
            if ( (_DWORD)Master_object == stage )
            {
              v17 = v16->max_length;
              if ( (unsigned int)v17 <= 2 )
                goto LABEL_22;
              v18 = (unsigned int)v16->m_Items[2];
              if ( !(_DWORD)v18 )
                goto LABEL_20;
              if ( !v14 )
                sub_21FFECC(Master_object, v18);
              Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v14, v18, 0, 0, 0);
              if ( ((unsigned __int8)Master_object & 1) != 0 )
                break;
            }
          }
        }
        LODWORD(max_length) = v11->max_length;
        if ( (__int64)++v15 >= (int)max_length )
          goto LABEL_17;
      }
      v17 = v16->max_length;
LABEL_20:
      if ( (v17 & 0xFFFFFFFE) == 0 )
LABEL_22:
        sub_21FFED4(Master_object);
      v19 = LimitCountUtility__ConvertLimitCountToStage(v16->m_Items[1], 0, 0);
      LOBYTE(ScriptMultiArray_int) = 1;
      *overwrite = v19;
    }
  }
  return (char)ScriptMultiArray_int;
}


bool ServantEntity__TryGetServantRecordName(
        ServantEntity_o *this,
        System_String_o **name,
        System_String_o **ruby,
        const MethodInfo *method)
{
  int v7; // w8
  Il2CppObject *Master_object; // x0
  int32_t v9; // w1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x23
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w1
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *rubya; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *namea; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_5938FDD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938FDD = 1;
  }
  entity = 0;
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  rubya = 0;
  namea = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, name);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantAddMaster___);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *name = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)name, v9, v11, v12, v13, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  *ruby = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ruby, v17, v18, v19, v20, v21, v22, v23);
  v26 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v25 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v48.fields.currentCryptoKey = v26;
  *(_QWORD *)&v48.fields.fakeValue = v25;
  v27 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v48, 0);
  if ( !v10 )
    goto LABEL_14;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v10,
          &entity,
          (int32_t)v27,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
    return 0;
  v27 = entity;
  if ( !entity )
LABEL_14:
    sub_21FFECC(v27, v28);
  if ( ServantAddEntity__TryGetOverwriteServantRecordNameAndRuby((ServantAddEntity_o *)entity, &namea, &rubya, v29) )
  {
    v36 = (int)namea;
    *name = namea;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)name, v36, v30, v31, v32, v33, v34, v35);
    v37 = (int)rubya;
    *ruby = rubya;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ruby, v37, v38, v39, v40, v41, v42, v43);
    return 1;
  }
  return 0;
}


bool ServantEntity__TryGetTdSeqUnitCondArray(
        ServantEntity_o *this,
        System_Int32_array **commonReleaseIds,
        const MethodInfo *method)
{
  long double v3; // q0
  _QWORD *v6; // x21
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Int32_array *IntArray; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_5939006 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&StringLiteral_25243/*"tdSeqUnitCond"*/);
    byte_5939006 = 1;
  }
  v6 = Method_System_Array_Empty_int___;
  script = this->fields.script;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v8 = v6[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v3);
  if ( !*(_DWORD *)(v9 + 228) )
    *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v9, commonReleaseIds);
  v10 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v3);
  IntArray = EntityScriptUtil__GetIntArray(
               script,
               (System_String_o *)StringLiteral_25243/*"tdSeqUnitCond"*/,
               **(System_Int32_array ***)(v10 + 184),
               0);
  *commonReleaseIds = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)commonReleaseIds, (int32_t)IntArray, v12, v13, v14, v15, v16, v17);
  if ( !*commonReleaseIds )
    sub_21FFECC(v18, v19);
  return LODWORD((*commonReleaseIds)->max_length) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity___IsPeriodLimitedServantByGachaId_b__157_0(
        ServantEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_593900C & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593900C = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0) == svtId;
}


// local variable allocation has failed, the output may be wrong!
bool ServantEntity___IsPeriodLimitedServantEquipByGachaId_b__158_0(
        ServantEntity_o *this,
        int32_t svtEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_593900D & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593900D = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtEquipId);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v8, 0) == svtEquipId;
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

  if ( (byte_5938FCF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_5938FCF = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool ServantEntity__checkScript_49624364(
        ServantEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  int32_t v8; // w8
  ServantEntity_o *v10; // x0
  System_String_o *v11; // x1
  float *v12; // x2
  const MethodInfo *v13; // x3
  long double v14; // q0

  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  v7 = ScriptValue;
  if ( !ScriptValue )
  {
    v8 = 0;
    goto LABEL_5;
  }
  if ( ScriptValue->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
  {
    v8 = *(_DWORD *)j_il2cpp_object_unbox_0(ScriptValue, qword_594C090, v6);
LABEL_5:
    *param = v8;
    return v7 != 0;
  }
  v14 = sub_220024C(ScriptValue, qword_594C090, v6);
  return ServantEntity__checkScript_49624472(v10, v11, v12, *(float *)&v14, v13);
}


bool ServantEntity__checkScript_49624472(
        ServantEntity_o *this,
        System_String_o *key,
        float *param,
        float denominator,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  float v10; // s0
  ServantEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  v9 = ScriptValue;
  if ( !ScriptValue )
  {
    v10 = 0.0;
    goto LABEL_5;
  }
  if ( ScriptValue->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
  {
    v10 = (float)*(__int64 *)j_il2cpp_object_unbox_0(ScriptValue, qword_594C090, v8) / denominator;
LABEL_5:
    *param = v10;
    return v9 != 0;
  }
  sub_220024C(ScriptValue, qword_594C090, v8);
  return (unsigned __int8)ServantEntity__GetTransformInfo(v12, v13);
}


bool ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938FD4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17768/*"battleHeight"*/);
    byte_5938FD4 = 1;
  }
  return ServantEntity__checkScript_49624472(this, (System_String_o *)StringLiteral_17768/*"battleHeight"*/, height, 1000.0, v3);
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
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x24
  EventServantMaster_o *v14; // x22
  int max_length; // w8
  EventServantEntity_array *v16; // x22
  __int64 v17; // x23
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 v21; // x23
  ServantChangeMaster_o *v22; // x21
  const MethodInfo *v23; // x2
  ServantChangeEntity_o *v24; // x0
  ServantChangeEntity_o *v25; // x21
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  __int64 v29; // x22
  __int64 v30; // x23
  __int64 v31; // x1
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v33; // x20
  System_String_o *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x21
  __int64 v39; // x22
  ServantChangeMaster_o *v40; // x20
  const MethodInfo *v41; // x2
  ServantChangeEntity_o *v42; // x0
  ServantLimitAddEntity_o *v43; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_5938FDE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938FDE = 1;
  }
  battleName = 0;
  v43 = 0;
  entity = 0;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v7) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (EventServantMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v46.fields.currentCryptoKey = v12;
  *(_QWORD *)&v46.fields.fakeValue = v13;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v46, 0);
  if ( !v14 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v14, (int32_t)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v16 = Instance;
  if ( max_length < 1 )
  {
LABEL_16:
    if ( !isTrueNameForce )
      goto LABEL_27;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v18 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v22 = (ServantChangeMaster_o *)v18;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    *(_QWORD *)&v47.fields.currentCryptoKey = v20;
    *(_QWORD *)&v47.fields.fakeValue = v21;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v47, 0);
    if ( !v22 )
      goto LABEL_48;
    v24 = ServantChangeMaster__TrueNameEntity(v22, (int32_t)Instance, v23);
    if ( !v24 )
      goto LABEL_27;
    v25 = v24;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v25->fields.svtId,
                                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v28 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v43 = 0;
        v29 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v30 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
        *(_QWORD *)&v48.fields.currentCryptoKey = v29;
        *(_QWORD *)&v48.fields.fakeValue = v30;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                 v48,
                                                 0);
        if ( !v28 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v28, &v43, (int32_t)Instance, limitCount, 0);
        if ( v43 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v43, 0);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v31);
          v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0);
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v33, 0);
          if ( !System_String__IsNullOrEmpty(v34, 0) )
          {
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v35);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v33, 0);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v36 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v38 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v39 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v40 = (ServantChangeMaster_o *)v36;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
        *(_QWORD *)&v49.fields.currentCryptoKey = v38;
        *(_QWORD *)&v49.fields.fakeValue = v39;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                 v49,
                                                 0);
        if ( v40 )
        {
          v42 = ServantChangeMaster__GetEnableEntity(v40, (int32_t)Instance, v41);
          if ( v42 )
            return v42->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_21FFECC(Instance, v9);
  }
  v17 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= max_length )
      sub_21FFED4(Instance);
    Instance = (EventServantEntity_array *)v16->m_Items[v17];
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(
                                             (EventServantEntity_o *)Instance,
                                             &battleName,
                                             0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    max_length = v16->max_length;
    if ( (int)++v17 >= max_length )
      goto LABEL_16;
  }
}


int32_t ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938FD2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18448/*"cameraActionId"*/);
    byte_5938FD2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_49624364(this, (System_String_o *)StringLiteral_18448/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w0
  System_String_o **p_monitor; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5938FC7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938FC7 = 1;
  }
  type = this->fields.type;
  entity = 0;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(type, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0 )
    {
      sub_21FFECC(Instance, v6);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  int v12; // w8
  System_Int32_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_array *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_array *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  DataManager_o *Instance; // x0
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x26
  __int64 v40; // x27
  struct System_Int32_array *classPassive; // x24
  ServantLimitAddMaster_o *v42; // x25
  unsigned __int64 v43; // x25
  __int64 max_length; // x27
  __int64 v45; // x29
  int32_t v46; // w23
  System_Int32_array *v47; // x8
  char *v48; // x9
  System_String_array *v49; // x8
  System_String_array *v50; // x9
  SkillEntity_o *v51; // [xsp+0h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_5938FCC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    byte_5938FCC = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  v12 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  v51 = 0;
  entity = 0;
  if ( !v12 )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, idList);
    v11 = BalanceConfig_TypeInfo;
  }
  v13 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)v11->static_fields->SvtPassiveSkillListMax);
  *idList = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)idList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_String_array *)sub_21FFD10(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)titleList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_String_array *)sub_21FFD10(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)explanationList, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  v37 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v39 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  classPassive = this->fields.classPassive;
  v42 = (ServantLimitAddMaster_o *)v37;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
  *(_QWORD *)&v53.fields.currentCryptoKey = v39;
  *(_QWORD *)&v53.fields.fakeValue = v40;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v53, 0);
  if ( !v42 )
    goto LABEL_31;
  Instance = (DataManager_o *)ServantLimitAddMaster__TryGetEntity(v42, &entity, (int32_t)Instance, dispLimitCount, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_31;
    Instance = (DataManager_o *)ServantLimitAddEntity__HasKeyOverwriteClassPassive(entity, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( entity )
      {
        Instance = (DataManager_o *)ServantLimitAddEntity__GetOverwriteClassPassive(entity, classPassive, 0);
        classPassive = (struct System_Int32_array *)Instance;
        goto LABEL_15;
      }
LABEL_31:
      sub_21FFECC(Instance, v35);
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
                                    (Il2CppObject **)&v51,
                                    v46,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        v47 = *idList;
        if ( !*idList )
          goto LABEL_31;
        if ( v43 >= LODWORD(v47->max_length) )
          break;
        v48 = (char *)v47 + 4 * v43;
        v49 = *titleList;
        *((_DWORD *)v48 + 8) = v46;
        if ( !v49 )
          goto LABEL_31;
        v50 = *explanationList;
        if ( !*explanationList )
          goto LABEL_31;
        Instance = (DataManager_o *)v51;
        if ( !v51 )
          goto LABEL_31;
        if ( v43 >= LODWORD(v49->max_length) || v43 >= LODWORD(v50->max_length) )
          break;
        SkillEntity__getSkillMessageInfo(
          v51,
          (System_String_o **)((char *)v49 + v45),
          (System_String_o **)((char *)v50 + v45),
          0,
          0);
      }
      ++v43;
      v45 += 8;
      if ( max_length == v43 )
        return;
    }
    sub_21FFED4(Instance);
  }
}


int32_t ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5938FD1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25244/*"tdTransform"*/);
    byte_5938FD1 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_49624364(this, (System_String_o *)StringLiteral_25244/*"tdTransform"*/, &param, v2) )
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
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  ServantChangeMaster_o *v11; // x21
  const MethodInfo *v12; // x2
  ServantChangeEntity_o *v13; // x0
  const MethodInfo *v14; // x5
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_5938FDB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FDB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v11 = (ServantChangeMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  if ( !v11 )
LABEL_12:
    sub_21FFECC(Instance, v6);
  v13 = ServantChangeMaster__GetHiddenEntity(v11, (int32_t)Instance, v12);
  if ( v13 )
    return v13->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v14);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(Name, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v7; // w8
  int32_t LimitCountByDispLimit; // w0
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x22
  int32_t v12; // w21
  __int64 v13; // x1
  int32_t v14; // w20
  __int64 v15; // x1
  System_Int32_array *IndividualityList; // x20
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x23
  __int64 v20; // x24
  ServantLimitAddMaster_o *v21; // x22
  struct System_Int32_array *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  ServantLimitAddEntity_o *v25; // x2
  struct System_Int32_array *individuality; // x1
  il2cpp_array_size_t max_length; // x8
  il2cpp_array_size_t v28; // x9
  System_Array_o *v29; // x21
  ServantEntity_o *v30; // x0
  struct System_Int32_array *v32; // x0
  struct System_Int32_array **p_individuality; // x19
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_5938FC9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantIndividualityMaster_TypeInfo);
    byte_5938FC9 = 1;
  }
  v7 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  v10 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
  *(_QWORD *)&v41.fields.currentCryptoKey = v10;
  *(_QWORD *)&v41.fields.fakeValue = v11;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v41, 0);
  if ( !*(&ServantIndividualityMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v13);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v14, v12, 0);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantLimitAddMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v42.fields.currentCryptoKey = v19;
  *(_QWORD *)&v42.fields.fakeValue = v20;
  v22 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v42, 0);
  if ( !v21 )
    goto LABEL_30;
  v22 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v21, &entity, (int32_t)v22, v12, 0);
  if ( ((unsigned __int8)v22 & 1) != 0 )
  {
    v25 = entity;
    if ( !entity )
      goto LABEL_30;
    individuality = entity->fields.individuality;
    if ( individuality )
    {
      max_length = individuality->max_length;
      if ( max_length )
      {
        if ( !IndividualityList || (v28 = IndividualityList->max_length) == 0 )
        {
          v30 = this;
          return ServantEntity__GetSubAttrReplacedIndividualityArray(v30, individuality, v25, v24);
        }
        v29 = (System_Array_o *)sub_21FFD10(int___TypeInfo, (unsigned int)(v28 + max_length));
        System_Array__CopyTo((System_Array_o *)IndividualityList, v29, 0, 0);
        if ( entity )
        {
          v22 = entity->fields.individuality;
          if ( v22 )
          {
            System_Array__CopyTo((System_Array_o *)v22, v29, IndividualityList->max_length, 0);
            v25 = entity;
            v30 = this;
            individuality = (struct System_Int32_array *)v29;
            return ServantEntity__GetSubAttrReplacedIndividualityArray(v30, individuality, v25, v24);
          }
        }
LABEL_30:
        sub_21FFECC(v22, v23);
      }
    }
  }
  if ( IndividualityList )
  {
    v25 = entity;
    v30 = this;
    individuality = IndividualityList;
    return ServantEntity__GetSubAttrReplacedIndividualityArray(v30, individuality, v25, v24);
  }
  v32 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.individuality = v32;
  p_individuality = &this->fields.individuality;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_individuality, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  return *p_individuality;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ServantEntity__getName(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t imageLimitCount,
        bool addIdentify,
        bool isCommonName,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x25
  __int64 v14; // x26
  ServantChangeMaster_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  ServantChangeEntity_o *v19; // x0
  System_String_o *name; // x24
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x5
  __int64 v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x21
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x20
  __int64 v30; // x21
  ServantAddMaster_o *v31; // x19
  const MethodInfo *v32; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_5938FD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantChangeMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_5938FD9 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = (ServantChangeMaster_o *)Master_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v34.fields.currentCryptoKey = v13;
  *(_QWORD *)&v34.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v34, 0);
  if ( !v15 )
    goto LABEL_29;
  v19 = ServantChangeMaster__GetEnableEntity(v15, v16, v18);
  if ( v19 )
    name = v19->fields.name;
  else
    name = 0;
  if ( System_String__IsNullOrEmpty(name, 0) )
  {
    if ( isCommonName )
    {
      if ( (imageLimitCount & 0x80000000) == 0 )
        name = ServantEntity__GetOverwriteServantDetailName(this, imageLimitCount, v22);
      if ( System_String__IsNullOrEmpty(name, 0) )
        name = ServantEntity__GetCommonName(this, v23);
    }
    if ( System_String__IsNullOrEmpty(name, 0) )
    {
      v26 = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, 0, v24);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v25);
      name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(v26, 0);
    }
  }
  if ( addIdentify )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    v27 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v29 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v30 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v31 = (ServantAddMaster_o *)v27;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    *(_QWORD *)&v35.fields.currentCryptoKey = v29;
    *(_QWORD *)&v35.fields.fakeValue = v30;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v35, 0);
    if ( v31 )
      return ServantAddMaster__AddIdentifyText(v31, v16, name, v32);
LABEL_29:
    sub_21FFECC(v16, v17);
  }
  return name;
}


System_String_o *ServantEntity__getName_49627680(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x24
  ServantChangeMaster_o *v13; // x22
  const MethodInfo *v14; // x2
  ServantChangeEntity_o *v15; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x1
  ServantChangeEntity_o *v24; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x5
  __int64 v34; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5938FDC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938FDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (ServantChangeMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v36.fields.currentCryptoKey = v11;
  *(_QWORD *)&v36.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v36, 0);
  if ( !v13 )
LABEL_12:
    sub_21FFECC(Instance, v8);
  v15 = ServantChangeMaster__GetEnableEntity(v13, (int32_t)Instance, v14);
  if ( v15 )
  {
    v23 = v15->fields.ruby;
    v24 = v15;
    *ruby = v23;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ruby, (int32_t)v23, v17, v18, v19, v20, v21, v22);
    return v24->fields.name;
  }
  else
  {
    v26 = ServantEntity__GetRuby(this, v16);
    *ruby = v26;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)ruby, (int32_t)v26, v27, v28, v29, v30, v31, v32);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v33);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v34);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(Name, 0);
  }
}


System_Int32_array *ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_object__c *v8; // x1
  __int64 naturalAligment; // x9
  ServantEntity___c_c *v10; // x0
  struct ServantEntity___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__142_0; // x20
  Il2CppObject *v13; // x21
  struct ServantEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_5938FEF & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_ServantEntity___c__getScriptIntArrayParam_b__142_0__);
    sub_21FFC50(&ServantEntity___c_TypeInfo);
    byte_5938FEF = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v7 = (System_Collections_Generic_List_object__o *)result;
    v8 = System_Collections_Generic_List_object__TypeInfo;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->obj.klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v10 = ServantEntity___c_TypeInfo;
      if ( !*(&ServantEntity___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo, System_Collections_Generic_List_object__TypeInfo);
        v10 = ServantEntity___c_TypeInfo;
      }
      static_fields = v10->static_fields;
      _9__142_0 = static_fields->__9__142_0;
      if ( !_9__142_0 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v10, v8);
          static_fields = ServantEntity___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__142_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__142_0,
          v13,
          Method_ServantEntity___c__getScriptIntArrayParam_b__142_0__,
          0);
        v14 = ServantEntity___c_TypeInfo->static_fields;
        v14->__9__142_0 = _9__142_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v14->__9__142_0,
          (int32_t)_9__142_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v7,
                                                        (System_Converter_T__TOutput__o *)_9__142_0,
                                                        (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v21 )
        return System_Collections_Generic_List_int___ToArray(
                 v21,
                 (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_220024C(result, System_Collections_Generic_List_object__TypeInfo, v6);
    }
    sub_21FFECC(v21, v22);
  }
  return result;
}


System_String_o *ServantEntity__getTrueName(ServantEntity_o *this, int32_t limitCount, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_5938FDA & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_5938FDA = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v3);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(Name, 0);
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

  if ( (byte_5938FD5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21836/*"invalidSkillShift"*/);
    byte_5938FD5 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_21836/*"invalidSkillShift"*/, v2);
}


void ServantEntity_TransformInfo___ctor(ServantEntity_TransformInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Color_o ServantEntity_TransformInfo__GetCondLabelColor(
        ServantEntity_TransformInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *condLabelColor; // x19
  UnityEngine_Color_o DefaultCondTitleLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  condLabelColor = this->fields.condLabelColor;
  DefaultCondTitleLabelColor = TransformHelper__get_DefaultCondTitleLabelColor(0);
  return ColorHelper__ParseColorCode_51093332(condLabelColor, DefaultCondTitleLabelColor, 0);
}


UnityEngine_Color_o ServantEntity_TransformInfo__GetCondSpriteColor(
        ServantEntity_TransformInfo_o *this,
        const MethodInfo *method)
{
  System_String_o *condSpriteColor; // x19
  UnityEngine_Color_o DefaultCondTitleSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  condSpriteColor = this->fields.condSpriteColor;
  DefaultCondTitleSpriteColor = TransformHelper__get_DefaultCondTitleSpriteColor(0);
  return ColorHelper__ParseColorCode_51093332(condSpriteColor, DefaultCondTitleSpriteColor, 0);
}


bool ServantEntity_TransformInfo__IsNotClassSkillChange(ServantEntity_TransformInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotClassSkillChange != 0;
}


bool ServantEntity_TransformInfo__IsNotProfileParameterChange(
        ServantEntity_TransformInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotProfileParameterChange != 0;
}


bool ServantEntity_TransformInfo__IsNotSkillChange(ServantEntity_TransformInfo_o *this, const MethodInfo *method)
{
  return this->fields.isNotSkillChange != 0;
}


void ServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593900F & 1) == 0 )
  {
    sub_21FFC50(&ServantEntity___c_TypeInfo);
    byte_593900F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantEntity___c_TypeInfo->static_fields,
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


int32_t ServantEntity___c___getScriptIntArrayParam_b__142_0(
        ServantEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_21FFECC(this, 0);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                            x,
                            x->klass->vtable[3].method,
                            method);
  return System_Int32__Parse(v3, 0);
}


void ServantEntity___c__DisplayClass103_0___ctor(
        ServantEntity___c__DisplayClass103_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantEntity___c__DisplayClass103_0___GetScript_b__0(
        ServantEntity___c__DisplayClass103_0_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = (Il2CppObject *)x.fields.key;
  if ( (byte_5939010 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_5939010 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_21FFECC(0, x.fields.key);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}