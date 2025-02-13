void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCCA3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_int___ctor__);
    byte_4BDCCA3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32598E4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4BDCC6B & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDCC6B = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCC9A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17228/*"assumedEffectId"*/);
    byte_4BDCC9A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17228/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  unsigned __int64 v9; // x27
  SkillInfo_o *v10; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v12; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  unsigned __int64 v15; // x28
  int32_t *p_revision; // x21
  unsigned __int64 max_length; // x9
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

  if ( (byte_4BDCC9D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BDCC9D = 1;
  }
  v35 = 0LL;
  entity = 0LL;
  memset(&v34, 0, sizeof(v34));
  v33 = 0LL;
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  v7 = *(_QWORD *)&enableSkillInfoList->max_length;
  v8 = DataValsList;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
LABEL_55:
        sub_1C2209C(DataValsList, id);
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
                                                                           0LL);
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
                  (const MethodInfo_3503994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getDataValsList(v12, 0LL);
                funcId = v12->fields.funcId;
                if ( !funcId )
                  goto LABEL_54;
                v14 = DataValsList;
                v15 = 0LL;
                p_revision = &DataValsList->fields.revision;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v15 >= (int)max_length )
                    break;
                  if ( v15 >= max_length )
                    goto LABEL_55;
                  if ( !v8 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v8,
                                                                                 &entity,
                                                                                 funcId->m_Items[v15 + 1],
                                                                                 (const MethodInfo_325BE14 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_54;
                    DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)FuncList__isAddState(
                                                                                   (int32_t)entity[1].monitor,
                                                                                   0LL);
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
                        0LL);
                      if ( DataVals__isParam(v18, 26, 0LL) )
                        v19 = 26;
                      else
                        v19 = 3;
                      Param = DataVals__GetParam(v18, v19, 0, 0LL);
                      if ( DataVals__isParam(v18, 27, 0LL) )
                        v21 = 27;
                      else
                        v21 = 4;
                      v22 = DataVals__GetParam(v18, v21, 0, 0LL);
                      DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__TryGetEntity(
                                                                                     (SkillLvMaster_o *)Master_object,
                                                                                     &v35,
                                                                                     Param,
                                                                                     v22,
                                                                                     0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v35 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v35->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v31,
                            id,
                            (const MethodInfo_3503994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
      LODWORD(v7) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v9 < (int)v7 );
  }
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v31;
  if ( !v31 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v32,
    v31,
    (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v34 = v32;
  while ( 1 )
  {
    v24 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v24 )
      break;
    if ( !v8 )
      sub_1C22094(v24, v25);
    v26 = DataMasterBase_object__object__int___TryGetEntity(
            v8,
            &v33,
            (int32_t)v34.fields._current,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v26 )
    {
      if ( !v33 )
        sub_1C22094(v26, v27);
      if ( !v23 )
        sub_1C22094(v26, v27);
      System_Collections_Generic_HashSet_int___Add(
        v23,
        HIDWORD(v33[4].monitor),
        (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v23 )
LABEL_54:
    sub_1C22094(DataValsList, id);
  count = (unsigned int)v23->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v29 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_55590076(
    v23,
    v29,
    (const MethodInfo_3503CBC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v29;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDCC8E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18116/*"changeLimitVoiceInFriendshipLv"*/);
    byte_4BDCC8E = 1;
  }
  param = 0;
  ServantEntity__checkScript_40919708(this, (System_String_o *)StringLiteral_18116/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


int32_t __fastcall ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isPlayableBeastToBase,
        const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  BalanceConfig_c *v8; // x0

  if ( (byte_4BDCC9E & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4BDCC9E = 1;
  }
  if ( isPlayableBeastToBase )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    classId = this->fields.classId;
    p_classId = &this->fields.classId;
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5->static_fields->PlayableBeastClassIds,
           classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v8 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      p_classId = &v8->static_fields->PlayableBeastBaseClassId;
    }
  }
  else
  {
    p_classId = &this->fields.classId;
  }
  return *p_classId;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 *v3; // x8
  bool IsServantEquip; // w19

  if ( (byte_4BDCC7C & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12169/*"SERVANT_UNIT"*/);
    sub_1C21E38(&StringLiteral_5872/*"EXCEPT_SERVANT_UNIT"*/);
    sub_1C21E38(&StringLiteral_11820/*"SERVANT_EQUIP_UNIT"*/);
    byte_4BDCC7C = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = &StringLiteral_12169/*"SERVANT_UNIT"*/;
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = &StringLiteral_5872/*"EXCEPT_SERVANT_UNIT"*/;
    if ( IsServantEquip )
      v3 = &StringLiteral_11820/*"SERVANT_EQUIP_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v3, 0LL);
}


int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDCC99 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18850/*"defaultDeadType"*/);
    byte_4BDCC99 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40919708(this, (System_String_o *)StringLiteral_18850/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


int32_t __fastcall ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDCC88 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCC88 = 1;
  }
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (EventServantEntity_array *)ServantEntity__GetEventNameServantId(this, v8);
    if ( !MasterData_object )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
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
          sub_1C2209C(Instance, v6);
        Instance = (EventServantEntity_array *)v10->m_Items[v11];
        if ( !Instance )
          break;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)Instance,
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return 0;
      }
LABEL_16:
      sub_1C22094(Instance, v6);
    }
  }
  return 0;
}


int32_t __fastcall ServantEntity__GetEventNameServantId(ServantEntity_o *this, const MethodInfo *method)
{
  bool v3; // zf
  ServantEntity_Fields *p_baseSvtId; // x8
  int32_t *p_fakeValue; // x9
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4BDCC8B & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDCC8B = 1;
  }
  v3 = !SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v5; // x8

  if ( (byte_4BDCC8F & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_7421/*"HideInAnimNode"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCC8F = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7421/*"HideInAnimNode"*/, v2);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v5 = (System_String_o *)ScriptValue;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    return v5;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantEntity__GetIndividuality(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


bool __fastcall ServantEntity__GetIsCollectionStatusNotGet(ServantEntity_o *this, const MethodInfo *method)
{
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v4; // x1
  UserServantCollectionMaster_o *v5; // x20
  __int64 v6; // x8
  NetworkManager_c *v7; // x0
  __int64 v8; // x19
  __int64 v9; // x22
  int64_t userIdNumber; // x21
  int32_t v11; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4BDCC8C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC8C = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_18;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v5 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0LL)) == 0LL) )
  {
    sub_1C22094(Instance, v4);
  }
  v6 = *(_QWORD *)&Instance->max_length;
  if ( v6 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
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
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v5, userIdNumber, v11, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(v6) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return v6 & 1;
    }
LABEL_18:
    LOBYTE(v6) = 0;
  }
  return v6 & 1;
}


bool __fastcall ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDCC8A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC8A = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
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
          sub_1C2209C(Instance, v6);
        v11 = v8->m_Items[v9];
        if ( !v11 )
          break;
        v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
        v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v15.fields.currentCryptoKey = v13;
        *(_QWORD *)&v15.fields.fakeValue = v12;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                v15,
                                                0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsEventJoin(v11, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          v10 = 1;
        }
        max_length = v8->max_length;
        if ( (int)++v9 >= max_length )
          return v10;
      }
LABEL_21:
      sub_1C22094(Instance, v6);
    }
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDCC89 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC89 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                      (UserServantCollectionMaster_o *)Instance,
                                      2,
                                      0LL);
        if ( Instance )
          return Instance->fields.m_CancellationTokenSource != 0LL;
      }
    }
LABEL_12:
    sub_1C22094(Instance, v3);
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsNeedToCheckEventJoinName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3);
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *__fastcall ServantEntity__GetName(
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
  __int64 v13; // x1
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
  System_String_o *OverwriteServantName; // x0
  System_String_o *v25; // x19
  Il2CppObject *v26; // x0
  __int64 v27; // x24
  __int64 v28; // x25
  ServantLimitAddMaster_o *v29; // x23
  System_String_o *v30; // x21
  System_String_o *v31; // x0
  bool IsNullOrEmpty; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x20
  System_String_o *v34; // x0
  Il2CppObject *v36; // x22
  NetworkManager_c *v37; // x0
  __int64 v38; // x24
  __int64 v39; // x25
  int64_t userIdNumber; // x23
  ServantLimitAddEntity_o *v41; // [xsp+0h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v42; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4BDCC86 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCC86 = 1;
  }
  entity = 0LL;
  name = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v11) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v15);
  if ( !MasterData_object )
    goto LABEL_67;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  v16 = *((_DWORD *)Instance + 6);
  v17 = Instance;
  if ( v16 < 1 )
  {
LABEL_15:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) != 0 )
    {
      if ( maxLimitCount == -1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        v36 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        v37 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v37 = NetworkManager_TypeInfo;
        }
        v39 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v38 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        userIdNumber = v37->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v47.fields.currentCryptoKey = v39;
        *(_QWORD *)&v47.fields.fakeValue = v38;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v47, 0LL);
        if ( !v36 )
          goto LABEL_67;
        if ( !UserServantCollectionMaster__TryGetEntity(
                (UserServantCollectionMaster_o *)v36,
                &v42,
                userIdNumber,
                (int32_t)Instance,
                0LL) )
          goto LABEL_40;
        Instance = v42;
        if ( !v42 )
          goto LABEL_67;
        Instance = (void *)UserServantCollectionEntity__IsGet(v42, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_40;
        if ( !v42 )
          goto LABEL_67;
        maxLimitCount = v42->fields.maxLimitCount;
        if ( (maxLimitCount & 0x80000000) != 0 )
          goto LABEL_40;
      }
      else if ( (maxLimitCount & 0x80000000) != 0 )
      {
        goto LABEL_40;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v26 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v41 = 0LL;
        v28 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v27 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v29 = (ServantLimitAddMaster_o *)v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v46.fields.currentCryptoKey = v28;
        *(_QWORD *)&v46.fields.fakeValue = v27;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v46, 0LL);
        if ( v29 )
        {
          ServantLimitAddMaster__TryGetEntity(v29, &v41, (int32_t)Instance, maxLimitCount, 0LL);
          if ( !v41 )
            goto LABEL_40;
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteServantName(v41, 0LL);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v23 = (ServantLimitAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v45.fields.currentCryptoKey = v22;
      *(_QWORD *)&v45.fields.fakeValue = v21;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v45, 0LL);
      if ( v23 )
      {
        if ( !ServantLimitAddMaster__TryGetEntity(v23, &entity, (int32_t)Instance, imageLimitCount, 0LL) )
          goto LABEL_40;
        Instance = entity;
        if ( entity )
        {
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
LABEL_37:
          v30 = OverwriteServantName;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v30, 0LL);
LABEL_40:
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(v19, 0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(v31, 0LL);
          if ( useName )
          {
            if ( !IsNullOrEmpty )
              return v19;
            nameSave = this->fields.nameSave;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(nameSave, 0LL);
            if ( System_String__IsNullOrEmpty(v34, 0LL) )
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
    sub_1C22094(Instance, v13);
  }
  v18 = 0;
  while ( 1 )
  {
    if ( v18 >= v16 )
      sub_1C2209C(Instance, v13);
    Instance = (void *)*((_QWORD *)v17 + (int)v18 + 4);
    if ( !Instance )
      goto LABEL_67;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v16 = *((_DWORD *)v17 + 6);
    if ( (int)++v18 >= v16 )
      goto LABEL_15;
  }
  v25 = name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v25, 0LL);
}


int32_t __fastcall ServantEntity__GetNotSamePartyKey(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDCCA2 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22553/*"notSamePartyKey"*/);
    byte_4BDCCA2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40919708(this, (System_String_o *)StringLiteral_22553/*"notSamePartyKey"*/, &param, v2) )
    return param;
  else
    return 0;
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDCC79 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4613/*"ClassImageId"*/);
    byte_4BDCC79 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40919708(this, (System_String_o *)StringLiteral_4613/*"ClassImageId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_Int32_array *__fastcall ServantEntity__GetRankUpSkillIds(
        ServantEntity_o *this,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  System_Int32_array_array *ScriptMultiArray_int; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  System_Int32_array_array *v8; // x20
  unsigned __int64 v9; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v11; // x21

  if ( (byte_4BDCC8D & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_int____77631832);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_ServantEntity_GetScriptMultiArray_int___);
    sub_1C21E38(&StringLiteral_13045/*"SkillRankUp"*/);
    byte_4BDCC8D = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_13045/*"SkillRankUp"*/,
                           (const MethodInfo_304F6D4 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v7 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v8 = ScriptMultiArray_int;
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v9 < (unsigned int)v7 )
      {
        v11 = m_Items[v9];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v11,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_2F9E8E8 *)Method_BasicHelper_IndexValue_int____77631832);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v11;
        LODWORD(v7) = v8->max_length;
        if ( (__int64)++v9 >= (int)v7 )
          goto LABEL_9;
      }
LABEL_13:
      sub_1C2209C(ScriptMultiArray_int, v6);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_1C22094(0LL, v6);
  v11 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v11;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDCC87 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    byte_4BDCC87 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v4) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v10 = (EventServantMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v9;
    *(_QWORD *)&v19.fields.fakeValue = v8;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v19, 0LL);
    if ( !v10 || (Instance = EventServantMaster__GetEntities(v10, (int32_t)Instance, 0LL)) == 0LL )
LABEL_23:
      sub_1C22094(Instance, v6);
    max_length = Instance->max_length;
    v12 = Instance;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1C2209C(Instance, v6);
        v14 = &v12->obj.klass + (int)v13;
        v15 = (EventServantEntity_o *)v14[4];
        if ( !v15 )
          goto LABEL_23;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)v14[4],
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          goto LABEL_18;
      }
      Empty = EventServantEntity__GetRuby(v15, 0LL);
    }
  }
LABEL_18:
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    ruby = this->fields.ruby;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(ruby, 0LL);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  PartyOrganizationUtility_o *p_mergedScript; // x19
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  Il2CppClass *klass; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x22
  System_Collections_Generic_Dictionary_object__object__o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  System_Action_T__o *v27; // x23
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_object__object__o *v29; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4BDCC72 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_KeyValuePair_string__object___TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_KeyValuePair_string__object____);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__);
    sub_1C21E38(&ServantEntity___c__DisplayClass102_0_TypeInfo);
    byte_4BDCC72 = 1;
  }
  entity = 0LL;
  memset(&v30, 0, sizeof(v30));
  p_mergedScript = (PartyOrganizationUtility_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v7;
    *(_QWORD *)&v32.fields.fakeValue = v6;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v32, 0LL);
    if ( v8 )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v8,
              &entity,
              (int32_t)klass,
              (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v29 = *p_script;
        p_mergedScript->klass = (PartyOrganizationUtility_c *)*p_script;
        sub_1C21DDC(p_mergedScript, (int64_t)v29, v11, v12, v13, v14, v15, v16);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v17 = sub_1C22084(ServantEntity___c__DisplayClass102_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0LL);
      v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v18,
        (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 16) = v18;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v17 + 16);
        sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v27 = (System_Action_T__o *)sub_1C22084(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_object__object_____ctor(
          v27,
          (Il2CppObject *)v17,
          Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__,
          0LL);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v27,
          (const MethodInfo_2F9C13C *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v30,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v30,
                      (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_1C22094(0LL, v28);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v30.fields._current.fields.key,
                v30.fields._current.fields.value,
                (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v30,
              (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_1C22094(klass, v10);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *__fastcall ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_304F79C *method)
{
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20
  long double inited; // q0

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v7 = (System_String_o *)ScriptValue;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v7, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                                                               v7,
                                                                               inited);
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_304F6D4 *method)
{
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20

  if ( !method->rgctx_data )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v7 = (System_String_o *)ScriptValue;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v7, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_int_(
           (Il2CppObject *)v7,
           (const MethodInfo_30178D0 *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDCC73 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4BDCC73 = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Int32_array *__fastcall ServantEntity__GetSkillCategoryIdList(
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

  skillInfoList = 0LL;
  IsServant = SvtType__IsServant(this->fields.type, 0LL);
  result = 0LL;
  if ( IsServant )
  {
    ServantEntity__GetSkillInfo(this, &skillInfoList, skillListNum, v5);
    if ( skillInfoList )
      return ServantEntity__GetCategoryIdList(v8, skillInfoList, v9);
    else
      return 0LL;
  }
  return result;
}


void __fastcall ServantEntity__GetSkillInfo(
        ServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t skillListNum,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  unsigned __int64 v16; // x25
  __int64 v17; // x28
  __int64 v18; // x29
  SkillInfo_o *v19; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v21; // x1
  __int64 v22; // x23
  __int64 v23; // x24
  SkillInfo_array *v24; // x23
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4BDCC9C & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&SkillInfo___TypeInfo);
    sub_1C21E38(&SkillInfo_TypeInfo);
    byte_4BDCC9C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantSkillMaster___);
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
  v9 = (SkillInfo_array *)sub_1C21EE0(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  if ( skillListNum >= 1 )
  {
    v16 = 0LL;
    v17 = (unsigned int)skillListNum;
    v18 = 32LL;
    do
    {
      v19 = (SkillInfo_o *)sub_1C22084(SkillInfo_TypeInfo);
      SkillInfo___ctor(v19, 0LL);
      if ( !v19 )
LABEL_23:
        sub_1C22094(IsServantEquip, v21);
      v19->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v23;
        *(_QWORD *)&v34.fields.fakeValue = v22;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                   v34,
                                                   0LL);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v16 + 1,
                           0LL);
        if ( IsServantEquip )
        {
          v19->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v19->fields.title,
            &v19->fields.explanation,
            0LL);
        }
      }
      v24 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v25 = sub_1C21F74(v19, v24->obj.klass->_1.element_class);
      if ( !v25 )
      {
        v33 = sub_1C220B8(0LL);
        sub_1C21F60(v33, 0LL);
      }
      if ( v16 >= v24->max_length )
        sub_1C2209C(v25, v26);
      v24->m_Items[v16] = v19;
      sub_1C21DDC((PartyOrganizationUtility_o *)((char *)v24 + v18), (int64_t)v19, v27, v28, v29, v30, v31, v32);
      ++v16;
      v18 += 8LL;
    }
    while ( v17 != v16 );
  }
}


System_Int32_array *__fastcall ServantEntity__GetSubAttrReplacedIndividualityArray(
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
  __int64 v13; // x8
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

  if ( (byte_4BDCC6D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDCC6D = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v9 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                             (AttriMaster_o *)Master_object,
                             this->fields.attri,
                             0LL);
  v11 = AttriMaster__GetIndividualityFromValue(v9, servantLimitAddEntity->fields.attri, 0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  v13 = *(_QWORD *)&individualityArray->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1C2209C(Master_object, v8);
      v8 = (unsigned int)individualityArray->m_Items[v15 + 1];
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v11,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = v11;
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
        if ( (unsigned int)v21 >= v19->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v8,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v21 + 1;
          v19->m_Items[v21 + 1] = v8;
        }
      }
      LODWORD(v13) = individualityArray->max_length;
      if ( (__int64)++v15 >= (int)v13 )
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
        if ( (unsigned int)v25 >= v23->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            v11,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = v25 + 1;
          v23->m_Items[v25 + 1] = v11;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_36:
    sub_1C22094(Master_object, v8);
  }
  if ( !v12 )
    goto LABEL_36;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ServantEntity__GetTreasureDeviceCategoryIdList(
        ServantEntity_o *this,
        const MethodInfo *method)
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
  const MethodInfo_3503994 **v16; // x27
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v19; // x24
  unsigned __int64 v20; // x29
  unsigned __int64 max_length; // x9
  DataVals_o *v22; // x25
  int32_t v23; // w1
  int32_t Param; // w26
  int32_t v25; // w1
  System_Collections_Generic_IEnumerable_T__o *v26; // x1
  System_Collections_Generic_HashSet_int__o *v27; // x20
  const MethodInfo_3503994 **v28; // x22
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

  if ( (byte_4BDCC9B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDCC9B = 1;
  }
  v46 = 0LL;
  entity = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(&v43, 0, sizeof(v43));
  v42 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v5 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v6 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v48.fields.currentCryptoKey = v5;
  *(_QWORD *)&v48.fields.fakeValue = v4;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v48, 0LL);
  if ( !v6 )
    goto LABEL_51;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v6,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v10 = (TreasureDvcLvMaster_o *)DataValsList;
    v11 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v11 )
      return 0LL;
    v12 = v11;
    if ( !v11->fields.funcId )
      return 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v39 = v10;
    v13 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
    v14 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v15 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v15,
      (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v15 )
      goto LABEL_51;
    v16 = (const MethodInfo_3503994 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)v12->fields.funcId,
      (const MethodInfo_3503994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v12, 100, 0LL);
    funcId = v12->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v19 = DataValsList;
    v20 = 0LL;
    v40 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v20 >= (int)max_length )
      {
        v32 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v32,
          (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v41,
          v15,
          (const MethodInfo_3503308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v43 = v41;
        while ( 1 )
        {
          v33 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v43,
                  (const MethodInfo_33DCF68 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v33 )
            break;
          if ( !v13 )
            sub_1C22094(v33, v34);
          v35 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                  &v42,
                  (int32_t)v43.fields._current,
                  (const MethodInfo_325BE14 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v35 )
          {
            if ( !v42 )
              sub_1C22094(v35, v36);
            if ( !v32 )
              sub_1C22094(v35, v36);
            System_Collections_Generic_HashSet_int___Add(
              v32,
              HIDWORD(v42[4].monitor),
              (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v43,
          (const MethodInfo_33DCF64 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v32 )
        {
          count = (unsigned int)v32->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_55590076(
              v32,
              EntityFromSvtIdOnly,
              (const MethodInfo_3503CBC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_51:
        sub_1C22094(DataValsList, v8);
      }
      if ( v20 >= max_length )
        goto LABEL_64;
      if ( !v13 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
                                         &entity,
                                         funcId->m_Items[v20 + 1],
                                         (const MethodInfo_325BE14 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v19 )
            goto LABEL_51;
          if ( v20 >= v19->max_length )
LABEL_64:
            sub_1C2209C(DataValsList, v8);
          if ( !entity )
            goto LABEL_51;
          v22 = m_Items[v20];
          if ( !v22 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v20], (FunctionMaster_o *)v13, (int32_t)entity[1].monitor, 0LL);
          v23 = DataVals__isParam(v22, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v22, v23, 0, 0LL);
          v25 = DataVals__isParam(v22, 27, 0LL) ? 27 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v22, v25, 0, 0LL);
          if ( !v14 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v14,
                                             &v46,
                                             Param,
                                             (int32_t)DataValsList,
                                             0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v46 )
              goto LABEL_51;
            v26 = (System_Collections_Generic_IEnumerable_T__o *)v46->fields.funcId;
            if ( v26 )
              System_Collections_Generic_HashSet_int___UnionWith(v15, v26, *v16);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v22, 93, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v22, 94, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v27 = v15;
              v28 = v16;
              v29 = DataVals__GetParam(v22, 93, 0, 0LL);
              v30 = DataVals__GetParam(v22, 94, 0, 0LL);
              if ( DataVals__isParam(v22, 96, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v39, &v45, v29, v30, 0LL);
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
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                   (SkillLvMaster_o *)v14,
                                                   &v44,
                                                   v29,
                                                   v30,
                                                   0LL);
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


int32_t __fastcall ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDCC85 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC85 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v4;
  *(_QWORD *)&v14.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v14, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v10 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v15.fields.currentCryptoKey = v9,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL),
        !v10) )
  {
    sub_1C22094(Instance, v7);
  }
  v12 = ServantChangeMaster__TrueNameEntity(v10, (int32_t)Instance, v11);
  if ( v12 )
    return v12->fields.svtId;
  return v5;
}


bool __fastcall ServantEntity__IsAdditionExpandImage(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x8
  int v7; // w9
  int v8; // w10

  if ( (byte_4BDCC90 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16959/*"additionExpandImage"*/);
    byte_4BDCC90 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16959/*"additionExpandImage"*/, method);
  if ( !ScriptIntArrayParam )
    goto LABEL_11;
  v6 = *(_QWORD *)&ScriptIntArrayParam->max_length;
  if ( !v6 )
    return v6;
  v7 = v6 - 1;
  if ( (int)v6 < 1 )
  {
LABEL_11:
    LOBYTE(v6) = 0;
    return v6;
  }
  v8 = 0;
  do
  {
    LOBYTE(v6) = ScriptIntArrayParam->m_Items[v8 + 1] == limitCount;
    if ( ScriptIntArrayParam->m_Items[v8 + 1] == limitCount )
      break;
  }
  while ( v7 != v8++ );
  return v6;
}


bool __fastcall ServantEntity__IsBeastNotPlayable(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4BDCC98 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A);
    byte_4BDCC98 = 1;
  }
  v3 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 5LL);
  v6.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v6, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v4,
           this->fields.classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BDCC92 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18348/*"coinRoomCheck"*/);
    byte_4BDCC92 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_18348/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4BDCC96 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913);
    byte_4BDCC96 = 1;
  }
  v3 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 4LL);
  v6.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v6, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v4,
           this->fields.classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  BalanceConfig_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  const MethodInfo *v8; // x1
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_4BDCC97 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572);
    byte_4BDCC97 = 1;
  }
  v3 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 3LL);
  v10.fields.value = Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v10, 0LL);
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = System_Linq_Enumerable__Concat_int_(
         v4,
         (System_Collections_Generic_IEnumerable_TSource__o *)v5->static_fields->PlayableBeastClassIds,
         (const MethodInfo_2FC7870 *)Method_System_Linq_Enumerable_Concat_int___);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                              v6,
                                                              (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v7,
           this->fields.classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeastNotPlayable(this, v8);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4BDCC95 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE);
    byte_4BDCC95 = 1;
  }
  v3 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 8LL);
  v6.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v6, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v4,
           this->fields.classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsIndividuality(
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
  int32_t v13; // w21
  System_Int32_array *IndividualityList; // x21
  Il2CppObject *Master_object; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  ServantLimitAddMaster_o *v18; // x23
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  AttriMaster_o *v21; // x22
  int32_t IndividualityFromValue; // w0
  __int64 v23; // x0
  int max_length; // w8
  __int64 v25; // x9
  int32_t v26; // w11
  struct System_Int32_array *v27; // x10
  int v28; // w8
  __int64 v29; // x9
  int32_t *v30; // x10
  int32_t v31; // w11
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4BDCC6F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantIndividualityMaster_TypeInfo);
    byte_4BDCC6F = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v11;
  *(_QWORD *)&v34.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v34, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v13, v12, 0LL);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v17 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v18 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v17;
  *(_QWORD *)&v35.fields.fakeValue = v16;
  v19 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v35, 0LL);
  if ( !v18 )
    goto LABEL_46;
  v19 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v18, &entity, (int32_t)v19, v12, 0LL);
  if ( ((unsigned __int8)v19 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_46;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v23 = 0xFFFFFFFFLL;
    if ( !IndividualityList )
      goto LABEL_35;
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0LL;
      while ( (unsigned int)v25 < max_length )
      {
        v26 = IndividualityList->m_Items[v25 + 1];
        if ( v26 != (_DWORD)v23 && v26 == individuality )
          goto LABEL_25;
        if ( (int)++v25 >= max_length )
          goto LABEL_35;
      }
      goto LABEL_45;
    }
LABEL_35:
    if ( !entity || (v27 = entity->fields.individuality) == 0LL || (v28 = v27->max_length, v28 < 1) )
    {
      LOBYTE(v23) = 0;
      return v23;
    }
    v29 = 0LL;
    v30 = &v27->m_Items[1];
    while ( (unsigned int)v29 < v28 )
    {
      v31 = v30[v29++];
      v23 = v31 == individuality;
      if ( (int)v29 >= v28 || v31 == individuality )
        return v23;
    }
LABEL_45:
    sub_1C2209C(v23, v20);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v21 = (AttriMaster_o *)v19) == 0LL )
LABEL_46:
    sub_1C22094(v19, v20);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v19, entity->fields.attri, 0LL);
  if ( IndividualityFromValue < 1 || IndividualityFromValue != individuality )
  {
    v23 = AttriMaster__GetIndividualityFromValue(v21, this->fields.attri, 0LL);
    if ( !IndividualityList )
      goto LABEL_35;
    goto LABEL_27;
  }
LABEL_25:
  LOBYTE(v23) = 1;
  return v23;
}


bool __fastcall ServantEntity__IsIndividuality_40917168(
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
  int32_t v13; // w21
  System_Int32_array *individuality; // x21
  Il2CppObject *Master_object; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  ServantLimitAddMaster_o *v18; // x23
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  AttriMaster_o *v21; // x22
  __int64 IndividualityFromValue; // x0
  signed int max_length; // w8
  __int64 v24; // x9
  unsigned __int64 v25; // x9
  unsigned __int64 v26; // x8
  int32_t v27; // w12
  signed int v28; // w13
  __int64 v29; // x14
  struct System_Int32_array *v30; // x8
  unsigned __int64 v31; // x10
  unsigned __int64 v32; // x9
  signed int v33; // w13
  __int64 v34; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4BDCC70 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantIndividualityMaster_TypeInfo);
    byte_4BDCC70 = 1;
  }
  entity = 0LL;
  if ( !individualityList || !*(_QWORD *)&individualityList->max_length )
  {
LABEL_56:
    LOBYTE(IndividualityFromValue) = 1;
    return IndividualityFromValue;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v11;
  *(_QWORD *)&v37.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v37, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  individuality = ServantIndividualityMaster__GetIndividualityList(v13, v12, 0LL);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v17 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v18 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v17;
  *(_QWORD *)&v38.fields.fakeValue = v16;
  v19 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v38, 0LL);
  if ( !v18 )
    goto LABEL_59;
  v19 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v18, &entity, (int32_t)v19, v12, 0LL);
  if ( ((unsigned __int8)v19 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_59;
    if ( entity->fields.attri != -1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v19 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v21 = (AttriMaster_o *)v19;
        if ( v19 )
        {
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                                     (AttriMaster_o *)v19,
                                     entity->fields.attri,
                                     0LL);
          if ( (int)IndividualityFromValue >= 1 )
          {
            max_length = individualityList->max_length;
            if ( max_length >= 1 )
            {
              v24 = 0LL;
              while ( (unsigned int)v24 < max_length )
              {
                if ( (_DWORD)IndividualityFromValue == individualityList->m_Items[v24 + 1] )
                  goto LABEL_56;
                if ( (int)++v24 >= max_length )
                  goto LABEL_31;
              }
LABEL_58:
              sub_1C2209C(IndividualityFromValue, v20);
            }
          }
LABEL_31:
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(v21, this->fields.attri, 0LL);
          if ( !individuality )
            goto LABEL_44;
          goto LABEL_34;
        }
      }
LABEL_59:
      sub_1C22094(v19, v20);
    }
  }
  IndividualityFromValue = 0xFFFFFFFFLL;
  if ( individuality )
  {
LABEL_34:
    if ( (int)*(_QWORD *)&individuality->max_length >= 1 )
    {
      v25 = (unsigned int)*(_QWORD *)&individuality->max_length;
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 >= v25 )
          goto LABEL_58;
        v27 = individuality->m_Items[v26 + 1];
        if ( v27 != (_DWORD)IndividualityFromValue )
        {
          v28 = individualityList->max_length;
          if ( v28 >= 1 )
            break;
        }
LABEL_43:
        if ( (__int64)++v26 >= (int)v25 )
          goto LABEL_44;
      }
      v29 = 0LL;
      while ( (unsigned int)v29 < v28 )
      {
        if ( v27 == individualityList->m_Items[v29 + 1] )
          goto LABEL_56;
        if ( (int)++v29 >= v28 )
          goto LABEL_43;
      }
      goto LABEL_58;
    }
  }
LABEL_44:
  if ( entity )
  {
    v30 = entity->fields.individuality;
    if ( v30 )
    {
      if ( (int)*(_QWORD *)&v30->max_length >= 1 )
      {
        v31 = (unsigned int)*(_QWORD *)&v30->max_length;
        v32 = 0LL;
        while ( 1 )
        {
          if ( v32 >= v31 )
            goto LABEL_58;
          v33 = individualityList->max_length;
          if ( v33 >= 1 )
            break;
LABEL_54:
          ++v32;
          IndividualityFromValue = 0LL;
          if ( (__int64)v32 >= (int)v31 )
            return IndividualityFromValue;
        }
        v34 = 0LL;
        while ( (unsigned int)v34 < v33 )
        {
          if ( v30->m_Items[v32 + 1] == individualityList->m_Items[v34 + 1] )
            goto LABEL_56;
          if ( (int)++v34 >= v33 )
            goto LABEL_54;
        }
        goto LABEL_58;
      }
    }
  }
  LOBYTE(IndividualityFromValue) = 0;
  return IndividualityFromValue;
}


bool __fastcall ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  ServantChangeEntity_array *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  ServantChangeMaster_o *v8; // x19
  const MethodInfo *v9; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4BDCC84 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC84 = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v11, 0LL);
  if ( !v8 || (Instance = ServantChangeMaster__GetEntityList(v8, (int32_t)Instance, v9)) == 0LL )
LABEL_9:
    sub_1C22094(Instance, v4);
  return *(_QWORD *)&Instance->max_length != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDCC82 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC82 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v13, 0LL);
  if ( !v8 )
LABEL_10:
    sub_1C22094(Instance, v4);
  v10 = ServantChangeMaster__GetEnableEntity(v8, (int32_t)Instance, v9);
  if ( v10 )
    return (LOBYTE(v10->fields.flag) >> 3) & 1;
  else
    LOBYTE(v11) = 1;
  return v11;
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
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

  if ( (byte_4BDCC83 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v15, 0LL);
  if ( !v8 )
LABEL_11:
    sub_1C22094(Instance, v4);
  v10 = ServantChangeMaster__TrueNameEntity(v8, (int32_t)Instance, v9);
  if ( v10 && (v12 = v10, ServantChangeEntity__IsEnable(v10, v11)) )
    return (LOBYTE(v12->fields.flag) >> 3) & 1;
  else
    LOBYTE(v13) = ServantEntity__IsNameTrue(this, v11);
  return v13;
}


bool __fastcall ServantEntity__IsNotSameParty(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BDCCA1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22553/*"notSamePartyKey"*/);
    byte_4BDCCA1 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22553/*"notSamePartyKey"*/, v2);
}


bool __fastcall ServantEntity__IsPeriodLimitedServantByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x20
  System_Func_int__bool__o *v8; // x21
  System_Collections_Generic_List_int__o *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDCC9F & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__151_0__);
    byte_4BDCC9F = 1;
  }
  svtIdList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
  if ( !Master_object )
    sub_1C22094(0LL, v6);
  if ( GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
         (GachaBaseCollateralMaster_o *)Master_object,
         &svtIdList,
         gachaId,
         0LL) )
  {
    v7 = (System_Collections_Generic_List_T__o *)svtIdList;
    v8 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__151_0__,
      0LL);
    return BasicHelper__Any_int_(
             v7,
             (System_Func_T__bool__o *)v8,
             (const MethodInfo_2F9AA44 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    return 0;
  }
}


bool __fastcall ServantEntity__IsPeriodLimitedServantEquipByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        int64_t summonSceenInTime,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  GachaSubEntity_o *OpenEntity_40616848; // x0
  GachaSubEntity_o *v10; // x20
  System_Collections_Generic_List_T__o *v11; // x20
  System_Func_int__bool__o *v12; // x21
  System_Collections_Generic_List_int__o *svtEquipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDCCA0 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaAdjustAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaSubMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__152_0__);
    byte_4BDCCA0 = 1;
  }
  svtEquipIdList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaSubMaster___);
  if ( !Master_object )
    goto LABEL_14;
  OpenEntity_40616848 = GachaSubMaster__GetOpenEntity_40616848(
                          (GachaSubMaster_o *)Master_object,
                          gachaId,
                          summonSceenInTime,
                          0LL);
  if ( !OpenEntity_40616848 )
    return (unsigned __int8)OpenEntity_40616848 & 1;
  v10 = OpenEntity_40616848;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaAdjustAddMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C22094(Master_object, v8);
  if ( GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
         (GachaAdjustAddMaster_o *)Master_object,
         &svtEquipIdList,
         v10->fields.adjustAddId,
         0LL) )
  {
    v11 = (System_Collections_Generic_List_T__o *)svtEquipIdList;
    v12 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__152_0__,
      0LL);
    LOBYTE(OpenEntity_40616848) = BasicHelper__Any_int_(
                                    v11,
                                    (System_Func_T__bool__o *)v12,
                                    (const MethodInfo_2F9AA44 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    LOBYTE(OpenEntity_40616848) = 0;
  }
  return (unsigned __int8)OpenEntity_40616848 & 1;
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BDCC93 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24127/*"svtBuffTurnExtend"*/);
    byte_4BDCC93 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_24127/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x20
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_4BDCC94 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA);
    byte_4BDCC94 = 1;
  }
  v3 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, 6LL);
  v6.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v3, v6, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v4,
           this->fields.classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall ServantEntity__SetName(
        ServantEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.nameSave = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.nameSave, (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
}


bool __fastcall ServantEntity___IsPeriodLimitedServantByGachaId_b__151_0(
        ServantEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4BDCCA4 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDCCA4 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v8, 0LL) == svtId;
}


bool __fastcall ServantEntity___IsPeriodLimitedServantEquipByGachaId_b__152_0(
        ServantEntity_o *this,
        int32_t svtEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4BDCCA5 & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDCCA5 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v8, 0LL) == svtEquipId;
}


bool __fastcall ServantEntity__checkFlag(ServantEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall ServantEntity__checkIsCombineMaterialSvt(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool __fastcall ServantEntity__checkIsHeroineSvt(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


bool __fastcall ServantEntity__checkScript(ServantEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0

  if ( (byte_4BDCC74 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4BDCC74 = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_40919708(
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

  if ( (byte_4BDCC75 & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    byte_4BDCC75 = 1;
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
    return v10 != 0LL;
  }
  v17 = sub_1C22354(ScriptValue);
  return ServantEntity__checkScript_40919872(v13, v14, v15, *(float *)&v17, v16);
}


bool __fastcall ServantEntity__checkScript_40919872(
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

  if ( (byte_4BDCC76 & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    byte_4BDCC76 = 1;
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
    return v12 != 0LL;
  }
  sub_1C22354(ScriptValue);
  return ServantEntity__getDressId(v15, v16);
}


bool __fastcall ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BDCC7A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17400/*"battleHeight"*/);
    byte_4BDCC7A = 1;
  }
  return ServantEntity__checkScript_40919872(this, (System_String_o *)StringLiteral_17400/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getBattleName(
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
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x20
  System_String_o *v31; // x0
  Il2CppObject *v32; // x0
  __int64 v33; // x21
  __int64 v34; // x22
  ServantChangeMaster_o *v35; // x20
  const MethodInfo *v36; // x2
  ServantChangeEntity_o *v37; // x0
  ServantLimitAddEntity_o *v38; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4BDCC81 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCC81 = 1;
  }
  battleName = 0LL;
  v38 = 0LL;
  entity = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v7) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (EventServantMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v12;
  *(_QWORD *)&v41.fields.fakeValue = v11;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v41, 0LL);
  if ( !v13 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v13, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v15 = Instance;
  if ( max_length < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_27;
LABEL_16:
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v17 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v20 = (ServantChangeMaster_o *)v17;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v19;
    *(_QWORD *)&v42.fields.fakeValue = v18;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v42, 0LL);
    if ( !v20 )
      goto LABEL_48;
    v22 = ServantChangeMaster__TrueNameEntity(v20, (int32_t)Instance, v21);
    if ( !v22 )
      goto LABEL_27;
    v23 = v22;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v23->fields.svtId,
                                             (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v25 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v38 = 0LL;
        v27 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v26 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v28 = (ServantLimitAddMaster_o *)v25;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v43.fields.currentCryptoKey = v27;
        *(_QWORD *)&v43.fields.fakeValue = v26;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                 v43,
                                                 0LL);
        if ( !v28 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity(v28, &v38, (int32_t)Instance, limitCount, 0LL);
        if ( v38 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v38, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(v30, 0LL);
          if ( !System_String__IsNullOrEmpty(v31, 0LL) )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(v30, 0LL);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v32 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v34 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v33 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v35 = (ServantChangeMaster_o *)v32;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v44.fields.currentCryptoKey = v34;
        *(_QWORD *)&v44.fields.fakeValue = v33;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                 v44,
                                                 0LL);
        if ( v35 )
        {
          v37 = ServantChangeMaster__GetEnableEntity(v35, (int32_t)Instance, v36);
          if ( v37 )
            return v37->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_1C22094(Instance, v9);
  }
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
      sub_1C2209C(Instance, v9);
    Instance = (EventServantEntity_array *)v15->m_Items[v16];
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(
                                             (EventServantEntity_o *)Instance,
                                             &battleName,
                                             0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    max_length = v15->max_length;
    if ( (int)++v16 >= max_length )
      goto LABEL_16;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDCC78 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_18008/*"cameraActionId"*/);
    byte_4BDCC78 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40919708(this, (System_String_o *)StringLiteral_18008/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o **p_monitor; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BDCC6C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDCC6C = 1;
  }
  entity = 0LL;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_1C22094(Instance, v5);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( entity )
      p_monitor = (System_String_o **)&entity[1].monitor;
  }
  return *p_monitor;
}


System_Int32_array *__fastcall ServantEntity__getClassPassive(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.classPassive;
}


void __fastcall ServantEntity__getClassSkillInfo(
        ServantEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  struct System_Int32_array *classPassive; // x8
  int max_length; // w24
  BalanceConfig_c *v11; // x0
  System_Int32_array *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_array *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x23
  unsigned __int64 v36; // x25
  __int64 v37; // x27
  __int64 i; // x28
  struct System_Int32_array *v39; // x8
  int32_t v40; // w24
  System_Int32_array *v41; // x8
  System_String_array *v42; // x8
  System_String_array *v43; // x9

  if ( (byte_4BDCC71 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDCC71 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( classPassive )
    max_length = classPassive->max_length;
  else
    max_length = 0;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v11->static_fields->SvtPassiveSkillListMax);
  *idList = v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)idList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_String_array *)sub_1C21EE0(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v19;
  sub_1C21DDC((PartyOrganizationUtility_o *)titleList, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_String_array *)sub_1C21EE0(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)explanationList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v36 = 0LL;
    v37 = (unsigned int)max_length;
    for ( i = 32LL; ; i += 8LL )
    {
      v39 = this->fields.classPassive;
      if ( !v39 )
        break;
      if ( v36 >= v39->max_length )
        goto LABEL_25;
      if ( !v35 )
        break;
      v40 = v39->m_Items[v36 + 1];
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v35,
                   v40,
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v41 = *idList;
      if ( !*idList )
        break;
      if ( v36 >= v41->max_length )
        goto LABEL_25;
      v41->m_Items[v36 + 1] = v40;
      if ( Instance )
      {
        v42 = *titleList;
        if ( !*titleList )
          break;
        v43 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v36 >= v42->max_length || v36 >= v43->max_length )
LABEL_25:
          sub_1C2209C(Instance, v34);
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v42 + i),
          (System_String_o **)((char *)v43 + i),
          0,
          0LL);
      }
      if ( v37 == ++v36 )
        return;
    }
LABEL_24:
    sub_1C22094(Instance, v34);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDCC77 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24300/*"tdTransform"*/);
    byte_4BDCC77 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40919708(this, (System_String_o *)StringLiteral_24300/*"tdTransform"*/, &param, v2) )
    return param;
  else
    return 0;
}


float __fastcall ServantEntity__getHeadUpY(ServantEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.hpGaugeY / 1000.0;
}


System_String_o *__fastcall ServantEntity__getHiddenName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
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

  if ( (byte_4BDCC7F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v9;
  *(_QWORD *)&v16.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v16, 0LL);
  if ( !v10 )
LABEL_12:
    sub_1C22094(Instance, v6);
  v12 = ServantChangeMaster__GetHiddenEntity(v10, (int32_t)Instance, v11);
  if ( v12 )
    return v12->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v13);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(Name, 0LL);
}


System_Int32_array *__fastcall ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w0
  __int64 v8; // x20
  __int64 v9; // x22
  int32_t v10; // w21
  int32_t v11; // w20
  System_Int32_array *IndividualityList; // x20
  Il2CppObject *Master_object; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitAddMaster_o *v16; // x22
  struct System_Int32_array *v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  ServantLimitAddEntity_o *v20; // x2
  struct System_Int32_array *individuality; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  System_Array_o *v24; // x21
  ServantEntity_o *v25; // x0
  struct System_Int32_array *v27; // x0
  struct System_Int32_array **p_individuality; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4BDCC6E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&ServantIndividualityMaster_TypeInfo);
    byte_4BDCC6E = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v9;
  *(_QWORD *)&v36.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v36, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v11, v10, 0LL);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v15;
  *(_QWORD *)&v37.fields.fakeValue = v14;
  v17 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v37, 0LL);
  if ( !v16 )
    goto LABEL_30;
  v17 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v16, &entity, (int32_t)v17, v10, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    v20 = entity;
    if ( !entity )
      goto LABEL_30;
    individuality = entity->fields.individuality;
    if ( individuality )
    {
      v22 = *(_QWORD *)&individuality->max_length;
      if ( v22 )
      {
        if ( !IndividualityList || (v23 = *(_QWORD *)&IndividualityList->max_length) == 0 )
        {
          v25 = this;
          return ServantEntity__GetSubAttrReplacedIndividualityArray(v25, individuality, v20, v19);
        }
        v24 = (System_Array_o *)sub_1C21EE0(int___TypeInfo, (unsigned int)(v23 + v22));
        System_Array__CopyTo((System_Array_o *)IndividualityList, v24, 0, 0LL);
        if ( entity )
        {
          v17 = entity->fields.individuality;
          if ( v17 )
          {
            System_Array__CopyTo((System_Array_o *)v17, v24, IndividualityList->max_length, 0LL);
            v20 = entity;
            v25 = this;
            individuality = (struct System_Int32_array *)v24;
            return ServantEntity__GetSubAttrReplacedIndividualityArray(v25, individuality, v20, v19);
          }
        }
LABEL_30:
        sub_1C22094(v17, v18);
      }
    }
  }
  if ( IndividualityList )
  {
    v20 = entity;
    v25 = this;
    individuality = IndividualityList;
    return ServantEntity__GetSubAttrReplacedIndividualityArray(v25, individuality, v20, v19);
  }
  v27 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.individuality = v27;
  p_individuality = &this->fields.individuality;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_individuality, (int64_t)v27, v29, v30, v31, v32, v33, v34);
  return *p_individuality;
}


System_String_o *__fastcall ServantEntity__getName(
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

  if ( (byte_4BDCC7D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC7D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v13;
  *(_QWORD *)&v26.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v26, 0LL);
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
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(v25, 0LL);
    if ( addIdentify )
    {
LABEL_9:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantAddMaster___);
      v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v22 = (ServantAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = v21;
      *(_QWORD *)&v27.fields.fakeValue = v20;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v27, 0LL);
      if ( v22 )
        return ServantAddMaster__AddIdentifyText(v22, (int32_t)Instance, name, v23);
LABEL_19:
      sub_1C22094(Instance, v10);
    }
  }
  return name;
}


System_String_o *__fastcall ServantEntity__getName_40922364(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_String_o *v22; // x1
  ServantChangeEntity_o *v23; // x22
  System_String_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4BDCC80 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCC80 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v11;
  *(_QWORD *)&v34.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v34, 0LL);
  if ( !v12 )
LABEL_12:
    sub_1C22094(Instance, v8);
  v14 = ServantChangeMaster__GetEnableEntity(v12, (int32_t)Instance, v13);
  if ( v14 )
  {
    v22 = v14->fields.ruby;
    v23 = v14;
    *ruby = v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)ruby, (int64_t)v22, v16, v17, v18, v19, v20, v21);
    return v23->fields.name;
  }
  else
  {
    v25 = ServantEntity__GetRuby(this, v15);
    *ruby = v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)ruby, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v32);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(Name, 0LL);
  }
}


System_Int32_array *__fastcall ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 methodPtr_low; // x9
  ServantEntity___c_c *v8; // x0
  System_Converter_object__int__o *_9__136_0; // x20
  Il2CppObject *v10; // x21
  struct ServantEntity___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x0
  __int64 v19; // x1

  if ( (byte_4BDCC91 & 1) == 0 )
  {
    sub_1C21E38(&System_Converter_object__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C21E38(&Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__);
    sub_1C21E38(&ServantEntity___c_TypeInfo);
    byte_4BDCC91 = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v6 = (System_Collections_Generic_List_object__o *)result;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v8 = ServantEntity___c_TypeInfo;
      if ( !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v8 = ServantEntity___c_TypeInfo;
      }
      _9__136_0 = v8->static_fields->__9__136_0;
      if ( !_9__136_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = ServantEntity___c_TypeInfo;
        }
        v10 = (Il2CppObject *)v8->static_fields->__9;
        _9__136_0 = (System_Converter_object__int__o *)sub_1C22084(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__136_0,
          v10,
          Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__,
          0LL);
        static_fields = ServantEntity___c_TypeInfo->static_fields;
        static_fields->__9__136_0 = _9__136_0;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__136_0,
          (int64_t)_9__136_0,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
      }
      v18 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v6,
                                                        (System_Converter_T__TOutput__o *)_9__136_0,
                                                        (const MethodInfo_2EDFBE4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v18 )
        return System_Collections_Generic_List_int___ToArray(
                 v18,
                 (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1C22354(result);
    }
    sub_1C22094(v18, v19);
  }
  return result;
}


System_String_o *__fastcall ServantEntity__getTrueName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4BDCC7E & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4BDCC7E = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(Name, 0LL);
}


bool __fastcall ServantEntity__get_IsAllClass(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsAll(this->fields.classId, 0LL);
}


bool __fastcall ServantEntity__get_IsCampaignSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.flag) & 1;
}


bool __fastcall ServantEntity__get_IsChocolateSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool __fastcall ServantEntity__get_IsCombineMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsCombineMaterial(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEnemy(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemy(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEnemyCollection(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemyCollection(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEnemyCollectionDetail(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsEnemyCollectionDetail(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsEventRewardSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 2) & 1;
}


bool __fastcall ServantEntity__get_IsEventSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 1) & 1;
}


bool __fastcall ServantEntity__get_IsExpUp(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsExpUp(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsFriendShipSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall ServantEntity__get_IsIgnoreCombineLimitSpecial(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool __fastcall ServantEntity__get_IsKeepServant(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsKeepServant(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsKeepServantEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsKeepServantEquip(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsManaExchangeSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall ServantEntity__get_IsOrganization(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsOrganization(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServant(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServant(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantCollection(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServantCollection(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsServantEquip(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantEquipMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtEqMaterial(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsServantMaterialTd(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsStatusUp(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsStatusUp(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsSvtEqMaterial(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsSvtEqMaterial(this->fields.type, 0LL);
}


bool __fastcall ServantEntity__get_IsSvtEquipExp(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool __fastcall ServantEntity__get_IsUsableOnlyNpcSvtEquip(ServantEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall ServantEntity__isInvalidSkillShift(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BDCC7B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_21114/*"invalidSkillShift"*/);
    byte_4BDCC7B = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_21114/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDCCA6 & 1) == 0 )
  {
    sub_1C21E38(&ServantEntity___c_TypeInfo);
    byte_4BDCCA6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantEntity___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantEntity___c___ctor(ServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantEntity___c___getScriptIntArrayParam_b__136_0(
        ServantEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_1C22094(this, 0LL);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                            x,
                            x->klass->vtable[4].methodPtr,
                            method);
  return System_Int32__Parse(v3, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass102_0___ctor(
        ServantEntity___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass102_0___GetScript_b__0(
        ServantEntity___c__DisplayClass102_0_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  Il2CppObject *key; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = (Il2CppObject *)x.fields.key;
  if ( (byte_4BDCCA7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4BDCCA7 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_1C22094(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}