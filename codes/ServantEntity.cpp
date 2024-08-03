void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCAF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FCAF7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_49FCAC3 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FCAC3 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCAF2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16874/*"assumedEffectId"*/, method);
    byte_49FCAF2 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16874/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 lv; // x2
  __int64 v22; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x20
  unsigned __int64 v24; // x27
  SkillInfo_o *v25; // x8
  SkillLvEntity_o *v26; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x24
  unsigned __int64 v29; // x28
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v32; // x25
  int32_t v33; // w1
  int32_t Param; // w26
  int32_t v35; // w1
  int32_t v36; // w0
  System_Collections_Generic_HashSet_int__o *v37; // x19
  _BOOL8 v38; // x0
  _BOOL8 v39; // x0
  __int64 count; // x1
  System_Int32_array *v41; // x20
  System_Collections_Generic_HashSet_int__o *v43; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v45; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v46; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v47; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FCAF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1B640C8(&int___TypeInfo, v17);
    byte_49FCAF5 = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  memset(&v46, 0, sizeof(v46));
  v45 = 0LL;
  v43 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v43,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  v22 = *(_QWORD *)&enableSkillInfoList->max_length;
  v23 = DataValsList;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v22 )
LABEL_55:
        sub_1B6432C(DataValsList, id);
      v25 = enableSkillInfoList->m_Items[v24];
      if ( v25 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v25->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v25->fields.lv;
          if ( (int)lv >= 1 )
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
              id = (System_Collections_Generic_IEnumerable_T__o *)DataValsList->fields.list;
              v26 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v43;
                if ( !v43 )
                  goto LABEL_54;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v43,
                  id,
                  (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getDataValsList(v26, 0LL);
                funcId = v26->fields.funcId;
                if ( !funcId )
                  goto LABEL_54;
                v28 = DataValsList;
                v29 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v29 >= (int)max_length )
                    break;
                  if ( v29 >= max_length )
                    goto LABEL_55;
                  if ( !v23 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v23,
                                                                                 &entity,
                                                                                 funcId->m_Items[v29 + 1],
                                                                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_54;
                    DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)FuncList__isAddState(
                                                                                   (int32_t)entity[1].monitor,
                                                                                   0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v28 )
                        goto LABEL_54;
                      if ( v29 >= LODWORD(v28->fields._MasterName_k__BackingField) )
                        goto LABEL_55;
                      if ( !entity )
                        goto LABEL_54;
                      v32 = (DataVals_o *)p_list[v29];
                      if ( !v32 )
                        goto LABEL_54;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v29],
                        (FunctionMaster_o *)v23,
                        (int32_t)entity[1].monitor,
                        0LL);
                      if ( DataVals__isParam(v32, 26, 0LL) )
                        v33 = 26;
                      else
                        v33 = 3;
                      Param = DataVals__GetParam(v32, v33, 0, 0LL);
                      if ( DataVals__isParam(v32, 27, 0LL) )
                        v35 = 27;
                      else
                        v35 = 4;
                      v36 = DataVals__GetParam(v32, v35, 0, 0LL);
                      DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__TryGetEntity(
                                                                                     (SkillLvMaster_o *)Master_object,
                                                                                     &v47,
                                                                                     Param,
                                                                                     v36,
                                                                                     0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v47 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v47->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v43,
                            id,
                            (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v26->fields.funcId;
                  ++v29;
                  if ( !funcId )
                    goto LABEL_54;
                }
              }
            }
          }
        }
      }
      LODWORD(v22) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v24 < (int)v22 );
  }
  v37 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       id,
                                                       lv);
  System_Collections_Generic_HashSet_int____ctor(
    v37,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v43;
  if ( !v43 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v44,
    v43,
    (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v46 = v44;
  while ( 1 )
  {
    v38 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v46,
            (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v38 )
      break;
    if ( !v23 )
      sub_1B64324(v38);
    v39 = DataMasterBase_object__object__int___TryGetEntity(
            v23,
            &v45,
            (int32_t)v46.fields._current,
            (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v39 )
    {
      if ( !v45 )
        sub_1B64324(v39);
      if ( !v37 )
        sub_1B64324(v39);
      System_Collections_Generic_HashSet_int___Add(
        v37,
        HIDWORD(v45[4].monitor),
        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v46,
    (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v37 )
LABEL_54:
    sub_1B64324(DataValsList);
  count = (unsigned int)v37->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v41 = (System_Int32_array *)sub_1B64170(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_53890792(
    v37,
    v41,
    (const MethodInfo_3364EE8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v41;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCAE6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17743/*"changeLimitVoiceInFriendshipLv"*/, method);
    byte_49FCAE6 = 1;
  }
  param = 0;
  ServantEntity__checkScript_39325420(this, (System_String_o *)StringLiteral_17743/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isAvailableValidToBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  BalanceConfig_c *v9; // x0

  if ( (byte_49FCAF6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isAvailableValidToBase);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v5);
    byte_49FCAF6 = 1;
  }
  if ( isAvailableValidToBase )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    classId = this->fields.classId;
    p_classId = &this->fields.classId;
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6->static_fields->AvailableValidIds,
           classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      p_classId = &v9->static_fields->AvailableValidBaseId;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8
  bool IsServantEquip; // w19

  if ( (byte_49FCAD4 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11895/*"SERVANT_UNIT"*/, v3);
    sub_1B640C8(&StringLiteral_5719/*"EXCEPT_SERVANT_UNIT"*/, v4);
    sub_1B640C8(&StringLiteral_11547/*"SERVANT_EQUIP_UNIT"*/, v5);
    byte_49FCAD4 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11895/*"SERVANT_UNIT"*/;
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_5719/*"EXCEPT_SERVANT_UNIT"*/;
    if ( IsServantEquip )
      v6 = &StringLiteral_11547/*"SERVANT_EQUIP_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCAF1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18464/*"defaultDeadType"*/, *(_QWORD *)&defType);
    byte_49FCAF1 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_39325420(this, (System_String_o *)StringLiteral_18464/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


int32_t __fastcall ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t EventNameServantId; // w19
  EventServantEntity_array *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  int max_length; // w8
  EventServantEntity_array *v12; // x20
  unsigned int v13; // w21
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCAE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FCAE0 = 1;
  }
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v5) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (EventServantEntity_array *)ServantEntity__GetEventNameServantId(this, v9);
    if ( !MasterData_object )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    max_length = Instance->max_length;
    v12 = Instance;
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1B6432C(Instance, v10);
        Instance = (EventServantEntity_array *)v12->m_Items[v13];
        if ( !Instance )
          break;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)Instance,
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
          return 0;
      }
LABEL_16:
      sub_1B64324(Instance);
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

  if ( (byte_49FCAE3 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FCAE3 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x8

  if ( (byte_49FCAE7 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    sub_1B640C8(&StringLiteral_7214/*"HideInAnimNode"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCAE7 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7214/*"HideInAnimNode"*/, v2);
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
  if ( v7 )
    return v7;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantEntity__GetIndividuality(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


bool __fastcall ServantEntity__GetIsCollectionStatusNotGet(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionEntity_array *Instance; // x0
  UserServantCollectionMaster_o *v7; // x20
  __int64 v8; // x8
  int64_t UserId; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  int64_t v12; // x19
  int32_t v13; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FCAE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCAE4 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_14;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v7 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0LL)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  v8 = *(_QWORD *)&Instance->max_length;
  if ( v8 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v12 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v11;
    *(_QWORD *)&v16.fields.fakeValue = v10;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v12, v13, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(v8) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return v8 & 1;
    }
LABEL_14:
    LOBYTE(v8) = 0;
  }
  return v8 & 1;
}


bool __fastcall ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t EventNameServantId; // w19
  UserServantEntity_array *Instance; // x0
  __int64 v8; // x1
  int max_length; // w8
  UserServantEntity_array *v10; // x20
  unsigned int v11; // w24
  bool v12; // w25
  UserServantEntity_o *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_49FCAE2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCAE2 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_21;
    max_length = Instance->max_length;
    v10 = Instance;
    if ( max_length >= 1 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1B6432C(Instance, v8);
        v13 = v10->m_Items[v11];
        if ( !v13 )
          break;
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v15;
        *(_QWORD *)&v17.fields.fakeValue = v14;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                v17,
                                                0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsEventJoin(v13, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          v12 = 1;
        }
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return v12;
      }
LABEL_21:
      sub_1B64324(Instance);
    }
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_o *Instance; // x0

  if ( (byte_49FCAE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FCAE1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_1B64324(Instance);
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
        const MethodInfo *method)
{
  int32_t maxLimitCount; // w21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  int v23; // w8
  void *v24; // x20
  unsigned int v25; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x20
  Il2CppObject *Master_object; // x0
  __int64 v28; // x23
  __int64 v29; // x24
  ServantLimitAddMaster_o *v30; // x21
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x1
  System_String_o *OverwriteSvtDetailName; // x0
  System_String_o *v34; // x19
  Il2CppObject *v35; // x0
  __int64 v36; // x23
  __int64 v37; // x24
  ServantLimitAddMaster_o *v38; // x22
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x1
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  Il2CppObject *v44; // x21
  int64_t UserId; // x0
  __int64 v46; // x23
  __int64 v47; // x24
  int64_t v48; // x22
  ServantLimitAddEntity_o *v49; // [xsp+8h] [xbp-68h] BYREF
  UserServantCollectionEntity_o *v50; // [xsp+10h] [xbp-60h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_49FCADE & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FCADE = 1;
  }
  name = 0LL;
  v50 = 0LL;
  entity = 0LL;
  v49 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v18) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v21);
  if ( !MasterData_object )
    goto LABEL_57;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_57;
  v23 = *((_DWORD *)Instance + 6);
  v24 = Instance;
  if ( v23 < 1 )
  {
LABEL_15:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v29 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v28 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v30 = (ServantLimitAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v53.fields.currentCryptoKey = v29;
      *(_QWORD *)&v53.fields.fakeValue = v28;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v53, 0LL);
      if ( !v30 )
        goto LABEL_57;
      if ( ServantLimitAddMaster__TryGetEntity(v30, &entity, (int32_t)Instance, imageLimitCount, v31) )
      {
        Instance = entity;
        if ( entity )
        {
          OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, v32);
LABEL_37:
          v41 = OverwriteSvtDetailName;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v41, 0LL);
          goto LABEL_40;
        }
LABEL_57:
        sub_1B64324(Instance);
      }
      goto LABEL_40;
    }
    if ( maxLimitCount == -1 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      v44 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      v47 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v46 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v48 = UserId;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v55.fields.currentCryptoKey = v47;
      *(_QWORD *)&v55.fields.fakeValue = v46;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
      if ( !v44 )
        goto LABEL_57;
      if ( !UserServantCollectionMaster__TryGetEntity(
              (UserServantCollectionMaster_o *)v44,
              &v50,
              v48,
              (int32_t)Instance,
              0LL) )
        goto LABEL_40;
      Instance = v50;
      if ( !v50 )
        goto LABEL_57;
      Instance = (void *)UserServantCollectionEntity__IsGet(v50, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_40;
      if ( !v50 )
        goto LABEL_57;
      maxLimitCount = v50->fields.maxLimitCount;
      if ( (maxLimitCount & 0x80000000) != 0 )
      {
LABEL_40:
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v26, 0LL);
        if ( System_String__IsNullOrEmpty(v42, 0LL) )
          return this->fields.nameSave;
        return v26;
      }
    }
    else if ( (maxLimitCount & 0x80000000) != 0 )
    {
      goto LABEL_40;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    v35 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    v49 = 0LL;
    v37 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v36 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v38 = (ServantLimitAddMaster_o *)v35;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v37;
    *(_QWORD *)&v54.fields.fakeValue = v36;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
    if ( !v38 )
      goto LABEL_57;
    ServantLimitAddMaster__TryGetEntity(v38, &v49, (int32_t)Instance, maxLimitCount, v39);
    if ( v49 )
    {
      OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteServantName(v49, v40);
      goto LABEL_37;
    }
    goto LABEL_40;
  }
  v25 = 0;
  while ( 1 )
  {
    if ( v25 >= v23 )
      sub_1B6432C(Instance, v22);
    Instance = (void *)*((_QWORD *)v24 + (int)v25 + 4);
    if ( !Instance )
      goto LABEL_57;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v23 = *((_DWORD *)v24 + 6);
    if ( (int)++v25 >= v23 )
      goto LABEL_15;
  }
  v34 = name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v34, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCAD1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4496/*"ClassImageId"*/, method);
    byte_49FCAD1 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_39325420(this, (System_String_o *)StringLiteral_4496/*"ClassImageId"*/, &param, v2) )
    return param;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantEntity__GetRankUpSkillIds(
        ServantEntity_o *this,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Int32_array_array *ScriptMultiArray_int; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  System_Int32_array_array *v11; // x20
  unsigned __int64 v12; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v14; // x21

  if ( (byte_49FCAE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, *(_QWORD *)&baseSkillId);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_ServantEntity_GetScriptMultiArray_int___, v6);
    sub_1B640C8(&StringLiteral_12732/*"SkillRankUp"*/, v7);
    byte_49FCAE5 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12732/*"SkillRankUp"*/,
                           (const MethodInfo_2ED636C *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v10 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v11 = ScriptMultiArray_int;
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v12 < (unsigned int)v10 )
      {
        v14 = m_Items[v12];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v14,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v14;
        LODWORD(v10) = v11->max_length;
        if ( (__int64)++v12 >= (int)v10 )
          goto LABEL_9;
      }
LABEL_13:
      sub_1B6432C(ScriptMultiArray_int, v9);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_1B64324(0LL);
  v14 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v14;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Empty; // x20
  const MethodInfo *v8; // x1
  EventServantEntity_array *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  EventServantMaster_o *v13; // x21
  __int64 v14; // x1
  int max_length; // w8
  EventServantEntity_array *v16; // x21
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  EventServantEntity_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FCADF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&string_TypeInfo, v6);
    byte_49FCADF = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___);
    v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v13 = (EventServantMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v12;
    *(_QWORD *)&v23.fields.fakeValue = v11;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
    if ( !v13 || (Instance = EventServantMaster__GetEntities(v13, (int32_t)Instance, 0LL)) == 0LL )
LABEL_23:
      sub_1B64324(Instance);
    max_length = Instance->max_length;
    v16 = Instance;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          sub_1B6432C(Instance, v14);
        v18 = &v16->obj.klass + (int)v17;
        v19 = (EventServantEntity_o *)v18[4];
        if ( !v19 )
          goto LABEL_23;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)v18[4],
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        max_length = v16->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_18;
      }
      Empty = EventServantEntity__GetRuby(v19, 0LL);
    }
  }
LABEL_18:
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    ruby = this->fields.ruby;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(ruby, 0LL);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  ServantStatusBattleListViewItem_o *p_mergedScript; // x19
  Il2CppObject *Master_object; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  Il2CppClass *klass; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  int32_t v28; // w3
  __int64 v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_Dictionary_object__object__o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_T__o *v39; // x23
  System_Collections_Generic_Dictionary_object__object__o *v40; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49FCACA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_KeyValuePair_string__object___TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantAddMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__, v17);
    sub_1B640C8(&ServantEntity___c__DisplayClass102_0_TypeInfo, v18);
    byte_49FCACA = 1;
  }
  entity = 0LL;
  memset(&v41, 0, sizeof(v41));
  p_mergedScript = (ServantStatusBattleListViewItem_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v23;
    *(_QWORD *)&v43.fields.fakeValue = v22;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
    if ( v24 )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v24,
              &entity,
              (int32_t)klass,
              (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v40 = *p_script;
        p_mergedScript->klass = (ServantStatusBattleListViewItem_c *)*p_script;
        sub_1B6406C(p_mergedScript, (int32_t)v40, v27, v28);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v29 = sub_1B64314(ServantEntity___c__DisplayClass102_0_TypeInfo, v26, v27);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      v32 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                         v30,
                                                                         v31);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v32,
        (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v29 )
      {
        *(_QWORD *)(v29 + 16) = v32;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v29 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)v32, v33, v34);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v39 = (System_Action_T__o *)sub_1B64314(System_Action_KeyValuePair_string__object___TypeInfo, v37, v38);
        System_Action_KeyValuePair_object__object_____ctor(
          v39,
          (Il2CppObject *)v29,
          Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__,
          0LL);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v39,
          (const MethodInfo_2E25C3C *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v41,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v41,
                      (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_1B64324(0LL);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v41.fields._current.fields.key,
                v41.fields._current.fields.value,
                (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v41,
              (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_1B64324(klass);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *__fastcall ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2ED6434 *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double inited; // q0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&JsonManager_TypeInfo, key);
    sub_1B640C8(&string_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v8 = (System_String_o *)ScriptValue;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                                                               v8,
                                                                               inited);
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2ED636C *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&JsonManager_TypeInfo, key);
    sub_1B640C8(&string_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v8 = (System_String_o *)ScriptValue;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeMultiArray_int_(
           (Il2CppObject *)v8,
           (const MethodInfo_2E9EF8C *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCACB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FCACB = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned __int64 v19; // x25
  __int64 v20; // x28
  __int64 v21; // x29
  SkillInfo_o *v22; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v24; // x23
  __int64 v25; // x24
  SkillInfo_array *v26; // x23
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_49FCAF4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&SkillInfo___TypeInfo, v10);
    sub_1B640C8(&SkillInfo_TypeInfo, v11);
    byte_49FCAF4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    skillListNum = v13->static_fields->SvtSkillListMax;
  }
  v14 = (SkillInfo_array *)sub_1B64170(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)skillInfoList, (int32_t)v14, v15, v16);
  if ( skillListNum >= 1 )
  {
    v19 = 0LL;
    v20 = (unsigned int)skillListNum;
    v21 = 32LL;
    do
    {
      v22 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v17, v18);
      SkillInfo___ctor(v22, 0LL);
      if ( !v22 )
LABEL_23:
        sub_1B64324(IsServantEquip);
      v22->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v25 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v24 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v32.fields.currentCryptoKey = v25;
        *(_QWORD *)&v32.fields.fakeValue = v24;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                   v32,
                                                   0LL);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v19 + 1,
                           0LL);
        if ( IsServantEquip )
        {
          v22->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v22->fields.title,
            &v22->fields.explanation,
            0LL);
        }
      }
      v26 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v27 = sub_1B64204(v22, v26->obj.klass->_1.element_class);
      if ( !v27 )
      {
        v31 = sub_1B64348(0LL);
        sub_1B641F0(v31, 0LL);
      }
      if ( v19 >= v26->max_length )
        sub_1B6432C(v27, v28);
      v26->m_Items[v19] = v22;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v26 + v21), (int32_t)v22, v29, v30);
      ++v19;
      v21 += 8LL;
    }
    while ( v20 != v19 );
  }
}


System_Int32_array *__fastcall ServantEntity__GetSubAttrReplacedIndividualityArray(
        ServantEntity_o *this,
        System_Int32_array *individualityArray,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  AttriMaster_o *v13; // x23
  int32_t IndividualityFromValue; // w22
  int v15; // w21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_int__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x8
  char v21; // w26
  unsigned __int64 v22; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  struct System_Int32_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10

  if ( (byte_49FCAC5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_AttriMaster___, individualityArray);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_49FCAC5 = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v13 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                             (AttriMaster_o *)Master_object,
                             this->fields.attri,
                             0LL);
  v15 = AttriMaster__GetIndividualityFromValue(v13, servantLimitAddEntity->fields.attri, 0LL);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  v20 = *(_QWORD *)&individualityArray->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
        sub_1B6432C(Master_object, v19);
      v19 = (unsigned int)individualityArray->m_Items[v22 + 1];
      if ( (_DWORD)v19 == IndividualityFromValue )
      {
        if ( v15 >= 1 )
        {
          if ( !v18 )
            goto LABEL_36;
          items = v18->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v18,
              v15,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v18->fields._size = size + 1;
            items->m_Items[size + 1] = v15;
          }
          v21 = 1;
        }
      }
      else
      {
        if ( !v18 )
          goto LABEL_36;
        v26 = v18->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !v26 )
          goto LABEL_36;
        v28 = v18->fields._size;
        if ( (unsigned int)v28 >= v26->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v19,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = v28 + 1;
          v26->m_Items[v28 + 1] = v19;
        }
      }
      LODWORD(v20) = individualityArray->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_29;
    }
  }
  v21 = 0;
LABEL_29:
  if ( v15 >= 1 && (v21 & 1) == 0 )
  {
    if ( v18 )
    {
      v30 = v18->fields._items;
      v31 = Method_System_Collections_Generic_List_int__Add__;
      ++v18->fields._version;
      if ( v30 )
      {
        v32 = v18->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v15,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = v32 + 1;
          v30->m_Items[v32 + 1] = v15;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v18,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_36:
    sub_1B64324(Master_object);
  }
  if ( !v18 )
    goto LABEL_36;
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ServantEntity__GetTreasureDeviceCategoryIdList(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *Master_object; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  ServantTreasureDvcMaster_o *v23; // x19
  DataVals_array *DataValsList; // x0
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v26; // x20
  TreasureDvcLvEntity_o *v27; // x0
  TreasureDvcLvEntity_o *v28; // x21
  Il2CppObject *v29; // x19
  Il2CppObject *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_HashSet_int__o *v33; // x22
  const MethodInfo_3364BC0 **v34; // x27
  System_Collections_Generic_IEnumerable_T__o *v35; // x1
  __int64 v36; // x2
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v39; // x24
  unsigned __int64 v40; // x29
  unsigned __int64 max_length; // x9
  DataVals_o *v42; // x25
  int32_t v43; // w1
  int32_t Param; // w26
  int32_t v45; // w1
  System_Collections_Generic_IEnumerable_T__o *v46; // x1
  System_Collections_Generic_HashSet_int__o *v47; // x20
  const MethodInfo_3364BC0 **v48; // x22
  int32_t v49; // w26
  int32_t v50; // w27
  void *v51; // x8
  System_Collections_Generic_HashSet_int__o *v52; // x20
  _BOOL8 v53; // x0
  _BOOL8 v54; // x0
  __int64 count; // x1
  TreasureDvcLvMaster_o *v57; // [xsp+0h] [xbp-D0h]
  DataVals_o **v58; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v59; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v60; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v61; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v62; // [xsp+50h] [xbp-80h] BYREF
  TreasureDvcLvEntity_o *v63; // [xsp+58h] [xbp-78h] BYREF
  SkillLvEntity_o *v64; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_49FCAF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    byte_49FCAF3 = 1;
  }
  v64 = 0LL;
  entity = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  memset(&v61, 0, sizeof(v61));
  v60 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v22;
  *(_QWORD *)&v66.fields.fakeValue = v21;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v66, 0LL);
  if ( !v23 )
    goto LABEL_51;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v23,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v26 = (TreasureDvcLvMaster_o *)DataValsList;
    v27 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v27 )
      return 0LL;
    v28 = v27;
    if ( !v27->fields.funcId )
      return 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v57 = v26;
    v29 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_FunctionMaster___);
    v30 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v33 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v31,
                                                         v32);
    System_Collections_Generic_HashSet_int____ctor(
      v33,
      (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v33 )
      goto LABEL_51;
    v34 = (const MethodInfo_3364BC0 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)v28->fields.funcId,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v28, 100, 0LL);
    funcId = v28->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v39 = DataValsList;
    v40 = 0LL;
    v58 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v40 >= (int)max_length )
      {
        v52 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                             System_Collections_Generic_HashSet_int__TypeInfo,
                                                             v35,
                                                             v36);
        System_Collections_Generic_HashSet_int____ctor(
          v52,
          (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v59,
          v33,
          (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v61 = v59;
        while ( 1 )
        {
          v53 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v61,
                  (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v53 )
            break;
          if ( !v29 )
            sub_1B64324(v53);
          v54 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
                  &v60,
                  (int32_t)v61.fields._current,
                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v54 )
          {
            if ( !v60 )
              sub_1B64324(v54);
            if ( !v52 )
              sub_1B64324(v54);
            System_Collections_Generic_HashSet_int___Add(
              v52,
              HIDWORD(v60[4].monitor),
              (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v61,
          (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v52 )
        {
          count = (unsigned int)v52->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_1B64170(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_53890792(
              v52,
              EntityFromSvtIdOnly,
              (const MethodInfo_3364EE8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_51:
        sub_1B64324(DataValsList);
      }
      if ( v40 >= max_length )
        goto LABEL_64;
      if ( !v29 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v29,
                                         &entity,
                                         funcId->m_Items[v40 + 1],
                                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_51;
          if ( v40 >= v39->max_length )
LABEL_64:
            sub_1B6432C(DataValsList, v35);
          if ( !entity )
            goto LABEL_51;
          v42 = m_Items[v40];
          if ( !v42 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v40], (FunctionMaster_o *)v29, (int32_t)entity[1].monitor, 0LL);
          v43 = DataVals__isParam(v42, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v42, v43, 0, 0LL);
          v45 = DataVals__isParam(v42, 27, 0LL) ? 27 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v42, v45, 0, 0LL);
          if ( !v30 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v30,
                                             &v64,
                                             Param,
                                             (int32_t)DataValsList,
                                             0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v64 )
              goto LABEL_51;
            v46 = (System_Collections_Generic_IEnumerable_T__o *)v64->fields.funcId;
            if ( v46 )
              System_Collections_Generic_HashSet_int___UnionWith(v33, v46, *v34);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v42, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v42, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v47 = v33;
              v48 = v34;
              v49 = DataVals__GetParam(v42, 92, 0, 0LL);
              v50 = DataVals__GetParam(v42, 93, 0, 0LL);
              if ( DataVals__isParam(v42, 95, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v57, &v63, v49, v50, 0LL);
                v34 = v48;
                v33 = v47;
                m_Items = v58;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v51 = v63;
                  if ( !v63 )
                    goto LABEL_51;
LABEL_48:
                  v35 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v51 + 4);
                  if ( v35 )
                    System_Collections_Generic_HashSet_int___UnionWith(v33, v35, *v34);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                   (SkillLvMaster_o *)v30,
                                                   &v62,
                                                   v49,
                                                   v50,
                                                   0LL);
                v34 = v48;
                v33 = v47;
                m_Items = v58;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v51 = v62;
                  if ( !v62 )
                    goto LABEL_51;
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
      funcId = v28->fields.funcId;
      ++v40;
      if ( !funcId )
        goto LABEL_51;
    }
  }
  return EntityFromSvtIdOnly;
}


int32_t __fastcall ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w20
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x8
  ServantChangeMaster_o *v11; // x19
  const MethodInfo *v12; // x2
  ServantChangeEntity_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FCADD & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCADD = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v6;
  *(_QWORD *)&v15.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v15, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v10 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v11 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v16.fields.currentCryptoKey = v10,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL),
        !v11) )
  {
    sub_1B64324(Instance);
  }
  v13 = ServantChangeMaster__TrueNameEntity(v11, (int32_t)Instance, v12);
  if ( v13 )
    return v13->fields.svtId;
  return v7;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsAdditionExpandImage(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x8
  int v7; // w9
  int v8; // w10

  if ( (byte_49FCAE8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16608/*"additionExpandImage"*/, *(_QWORD *)&limitCount);
    byte_49FCAE8 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16608/*"additionExpandImage"*/, method);
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


bool __fastcall ServantEntity__IsBeast(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FCAF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v4);
    byte_49FCAF0 = 1;
  }
  v5 = (System_Array_o *)sub_1B64170(int___TypeInfo, 5LL);
  v8.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FCAEA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17974/*"coinRoomCheck"*/, method);
    byte_49FCAEA = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17974/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FCAEE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v4);
    byte_49FCAEE = 1;
  }
  v5 = (System_Array_o *)sub_1B64170(int___TypeInfo, 4LL);
  v8.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Array_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  BalanceConfig_c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  const MethodInfo *v13; // x1
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_49FCAEF & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572,
      v7);
    byte_49FCAEF = 1;
  }
  v8 = (System_Array_o *)sub_1B64170(int___TypeInfo, 3LL);
  v15.fields.value = Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v8, v15, 0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = System_Linq_Enumerable__Concat_int_(
          v9,
          (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->AvailableValidIds,
          (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v11,
                                                               (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v12,
           this->fields.classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeast(this, v13);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FCAED & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v4);
    byte_49FCAED = 1;
  }
  v5 = (System_Array_o *)sub_1B64170(int___TypeInfo, 8LL);
  v8.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t LimitCountByDispLimit; // w0
  __int64 v15; // x21
  __int64 v16; // x23
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  int32_t v19; // w21
  System_Int32_array *IndividualityList; // x21
  Il2CppObject *Master_object; // x0
  __int64 v22; // x24
  __int64 v23; // x25
  ServantLimitAddMaster_o *v24; // x23
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x4
  __int64 v27; // x1
  AttriMaster_o *v28; // x22
  int32_t IndividualityFromValue; // w0
  __int64 v30; // x0
  int max_length; // w8
  __int64 v32; // x9
  int32_t v33; // w11
  struct System_Int32_array *v34; // x10
  int v35; // w8
  __int64 v36; // x9
  int32_t *v37; // x10
  int32_t v38; // w11
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_49FCAC7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v13);
    byte_49FCAC7 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v16;
  *(_QWORD *)&v41.fields.fakeValue = v15;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v19, v17, v18);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v23;
  *(_QWORD *)&v42.fields.fakeValue = v22;
  v25 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v42, 0LL);
  if ( !v24 )
    goto LABEL_46;
  v25 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v24, &entity, (int32_t)v25, v17, v26);
  if ( ((unsigned __int8)v25 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_46;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v30 = 0xFFFFFFFFLL;
    if ( !IndividualityList )
      goto LABEL_35;
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      v32 = 0LL;
      while ( (unsigned int)v32 < max_length )
      {
        v33 = IndividualityList->m_Items[v32 + 1];
        if ( v33 != (_DWORD)v30 && v33 == individuality )
          goto LABEL_25;
        if ( (int)++v32 >= max_length )
          goto LABEL_35;
      }
      goto LABEL_45;
    }
LABEL_35:
    if ( !entity || (v34 = entity->fields.individuality) == 0LL || (v35 = v34->max_length, v35 < 1) )
    {
      LOBYTE(v30) = 0;
      return v30;
    }
    v36 = 0LL;
    v37 = &v34->m_Items[1];
    while ( (unsigned int)v36 < v35 )
    {
      v38 = v37[v36++];
      v30 = v38 == individuality;
      if ( (int)v36 >= v35 || v38 == individuality )
        return v30;
    }
LABEL_45:
    sub_1B6432C(v30, v27);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v28 = (AttriMaster_o *)v25) == 0LL )
LABEL_46:
    sub_1B64324(v25);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v25, entity->fields.attri, 0LL);
  if ( IndividualityFromValue < 1 || IndividualityFromValue != individuality )
  {
    v30 = AttriMaster__GetIndividualityFromValue(v28, this->fields.attri, 0LL);
    if ( !IndividualityList )
      goto LABEL_35;
    goto LABEL_27;
  }
LABEL_25:
  LOBYTE(v30) = 1;
  return v30;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality_39322888(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t LimitCountByDispLimit; // w0
  __int64 v15; // x21
  __int64 v16; // x23
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  int32_t v19; // w21
  System_Int32_array *individuality; // x21
  Il2CppObject *Master_object; // x0
  __int64 v22; // x24
  __int64 v23; // x25
  ServantLimitAddMaster_o *v24; // x23
  Il2CppObject *v25; // x0
  const MethodInfo *v26; // x4
  __int64 v27; // x1
  AttriMaster_o *v28; // x22
  __int64 IndividualityFromValue; // x0
  signed int max_length; // w8
  __int64 v31; // x9
  unsigned __int64 v32; // x9
  unsigned __int64 v33; // x8
  int32_t v34; // w12
  signed int v35; // w13
  __int64 v36; // x14
  struct System_Int32_array *v37; // x8
  unsigned __int64 v38; // x10
  unsigned __int64 v39; // x9
  signed int v40; // w13
  __int64 v41; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FCAC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_1B640C8(&DataManager_TypeInfo, v10);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v13);
    byte_49FCAC8 = 1;
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
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v16;
  *(_QWORD *)&v44.fields.fakeValue = v15;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v44, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  individuality = ServantIndividualityMaster__GetIndividualityList(v19, v17, v18);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v23;
  *(_QWORD *)&v45.fields.fakeValue = v22;
  v25 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
  if ( !v24 )
    goto LABEL_59;
  v25 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v24, &entity, (int32_t)v25, v17, v26);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_59;
    if ( entity->fields.attri != -1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v25 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v28 = (AttriMaster_o *)v25;
        if ( v25 )
        {
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                                     (AttriMaster_o *)v25,
                                     entity->fields.attri,
                                     0LL);
          if ( (int)IndividualityFromValue >= 1 )
          {
            max_length = individualityList->max_length;
            if ( max_length >= 1 )
            {
              v31 = 0LL;
              while ( (unsigned int)v31 < max_length )
              {
                if ( (_DWORD)IndividualityFromValue == individualityList->m_Items[v31 + 1] )
                  goto LABEL_56;
                if ( (int)++v31 >= max_length )
                  goto LABEL_31;
              }
LABEL_58:
              sub_1B6432C(IndividualityFromValue, v27);
            }
          }
LABEL_31:
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(v28, this->fields.attri, 0LL);
          if ( !individuality )
            goto LABEL_44;
          goto LABEL_34;
        }
      }
LABEL_59:
      sub_1B64324(v25);
    }
  }
  IndividualityFromValue = 0xFFFFFFFFLL;
  if ( individuality )
  {
LABEL_34:
    if ( (int)*(_QWORD *)&individuality->max_length >= 1 )
    {
      v32 = (unsigned int)*(_QWORD *)&individuality->max_length;
      v33 = 0LL;
      while ( 1 )
      {
        if ( v33 >= v32 )
          goto LABEL_58;
        v34 = individuality->m_Items[v33 + 1];
        if ( v34 != (_DWORD)IndividualityFromValue )
        {
          v35 = individualityList->max_length;
          if ( v35 >= 1 )
            break;
        }
LABEL_43:
        if ( (__int64)++v33 >= (int)v32 )
          goto LABEL_44;
      }
      v36 = 0LL;
      while ( (unsigned int)v36 < v35 )
      {
        if ( v34 == individualityList->m_Items[v36 + 1] )
          goto LABEL_56;
        if ( (int)++v36 >= v35 )
          goto LABEL_43;
      }
      goto LABEL_58;
    }
  }
LABEL_44:
  if ( entity )
  {
    v37 = entity->fields.individuality;
    if ( v37 )
    {
      if ( (int)*(_QWORD *)&v37->max_length >= 1 )
      {
        v38 = (unsigned int)*(_QWORD *)&v37->max_length;
        v39 = 0LL;
        while ( 1 )
        {
          if ( v39 >= v38 )
            goto LABEL_58;
          v40 = individualityList->max_length;
          if ( v40 >= 1 )
            break;
LABEL_54:
          ++v39;
          IndividualityFromValue = 0LL;
          if ( (__int64)v39 >= (int)v38 )
            return IndividualityFromValue;
        }
        v41 = 0LL;
        while ( (unsigned int)v41 < v40 )
        {
          if ( v37->m_Items[v39 + 1] == individualityList->m_Items[v41 + 1] )
            goto LABEL_56;
          if ( (int)++v41 >= v40 )
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
  __int64 v3; // x1
  __int64 v4; // x1
  ServantChangeEntity_array *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  const MethodInfo *v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_49FCADC & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCADC = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
  if ( !v9 || (Instance = ServantChangeMaster__GetEntityList(v9, (int32_t)Instance, v10)) == 0LL )
LABEL_9:
    sub_1B64324(Instance);
  return *(_QWORD *)&Instance->max_length != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  const MethodInfo *v10; // x2
  ServantChangeEntity_o *v11; // x0
  _BOOL4 v12; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FCADA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCADA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  if ( !v9 )
LABEL_10:
    sub_1B64324(Instance);
  v11 = ServantChangeMaster__GetEnableEntity(v9, (int32_t)Instance, v10);
  if ( v11 )
    return (LOBYTE(v11->fields.flag) >> 3) & 1;
  else
    LOBYTE(v12) = 1;
  return v12;
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantChangeMaster_o *v9; // x20
  const MethodInfo *v10; // x2
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  ServantChangeEntity_o *v13; // x20
  _BOOL4 v14; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_49FCADB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FCADB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v8;
  *(_QWORD *)&v16.fields.fakeValue = v7;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
  if ( !v9 )
LABEL_11:
    sub_1B64324(Instance);
  v11 = ServantChangeMaster__TrueNameEntity(v9, (int32_t)Instance, v10);
  if ( v11 && (v13 = v11, ServantChangeEntity__IsEnable(v11, v12)) )
    return (LOBYTE(v13->fields.flag) >> 3) & 1;
  else
    LOBYTE(v14) = ServantEntity__IsNameTrue(this, v12);
  return v14;
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FCAEB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23601/*"svtBuffTurnExtend"*/, method);
    byte_49FCAEB = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_23601/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_49FCAEC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v4);
    byte_49FCAEC = 1;
  }
  v5 = (System_Array_o *)sub_1B64170(int___TypeInfo, 6LL);
  v8.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall ServantEntity__SetName(
        ServantEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.nameSave = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nameSave, (int32_t)name, (int32_t)method, v3);
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

  if ( (byte_49FCACC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FCACC = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_39325420(
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

  if ( (byte_49FCACD & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, key);
    byte_49FCACD = 1;
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
  v17 = sub_1B645E4(ScriptValue);
  return ServantEntity__checkScript_39325584(v13, v14, v15, *(float *)&v17, v16);
}


bool __fastcall ServantEntity__checkScript_39325584(
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

  if ( (byte_49FCACE & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, key);
    byte_49FCACE = 1;
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
  sub_1B645E4(ScriptValue);
  return ServantEntity__getDressId(v15, v16);
}


bool __fastcall ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FCAD2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17044/*"battleHeight"*/, height);
    byte_49FCAD2 = 1;
  }
  return ServantEntity__checkScript_39325584(this, (System_String_o *)StringLiteral_17044/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getBattleName(
        ServantEntity_o *this,
        bool isTrueNameForce,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  EventServantEntity_array *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  EventServantMaster_o *v20; // x22
  __int64 v21; // x1
  int max_length; // w8
  EventServantEntity_array *v23; // x22
  unsigned int v24; // w23
  Il2CppObject *v25; // x0
  __int64 v26; // x22
  __int64 v27; // x23
  ServantChangeMaster_o *v28; // x21
  const MethodInfo *v29; // x2
  ServantChangeEntity_o *v30; // x0
  ServantChangeEntity_o *v31; // x21
  Il2CppObject *v33; // x0
  __int64 v34; // x22
  __int64 v35; // x23
  ServantLimitAddMaster_o *v36; // x21
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x1
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v40; // x20
  System_String_o *v41; // x0
  Il2CppObject *v42; // x0
  __int64 v43; // x21
  __int64 v44; // x22
  ServantChangeMaster_o *v45; // x20
  const MethodInfo *v46; // x2
  ServantChangeEntity_o *v47; // x0
  ServantLimitAddEntity_o *v48; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_49FCAD9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&StringLiteral_1/*""*/, v14);
    byte_49FCAD9 = 1;
  }
  battleName = 0LL;
  v48 = 0LL;
  entity = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v15) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventServantMaster___);
  v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v20 = (EventServantMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v19;
  *(_QWORD *)&v51.fields.fakeValue = v18;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v51, 0LL);
  if ( !v20 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v20, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v23 = Instance;
  if ( max_length < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_27;
LABEL_16:
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v25 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v27 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v26 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v28 = (ServantChangeMaster_o *)v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v52.fields.currentCryptoKey = v27;
    *(_QWORD *)&v52.fields.fakeValue = v26;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v52, 0LL);
    if ( !v28 )
      goto LABEL_48;
    v30 = ServantChangeMaster__TrueNameEntity(v28, (int32_t)Instance, v29);
    if ( !v30 )
      goto LABEL_27;
    v31 = v30;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v31->fields.svtId,
                                             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v33 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v48 = 0LL;
        v35 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v34 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v36 = (ServantLimitAddMaster_o *)v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v53.fields.currentCryptoKey = v35;
        *(_QWORD *)&v53.fields.fakeValue = v34;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                 v53,
                                                 0LL);
        if ( !v36 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity(v36, &v48, (int32_t)Instance, limitCount, v37);
        if ( v48 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v48, v38);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v40, 0LL);
          if ( !System_String__IsNullOrEmpty(v41, 0LL) )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(v40, 0LL);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v42 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v44 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v43 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v45 = (ServantChangeMaster_o *)v42;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v54.fields.currentCryptoKey = v44;
        *(_QWORD *)&v54.fields.fakeValue = v43;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                 v54,
                                                 0LL);
        if ( v45 )
        {
          v47 = ServantChangeMaster__GetEnableEntity(v45, (int32_t)Instance, v46);
          if ( v47 )
            return v47->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_1B64324(Instance);
  }
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= max_length )
      sub_1B6432C(Instance, v21);
    Instance = (EventServantEntity_array *)v23->m_Items[v24];
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(
                                             (EventServantEntity_o *)Instance,
                                             &battleName,
                                             0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    max_length = v23->max_length;
    if ( (int)++v24 >= max_length )
      goto LABEL_16;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCAD0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17640/*"cameraActionId"*/, method);
    byte_49FCAD0 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_39325420(this, (System_String_o *)StringLiteral_17640/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **p_monitor; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49FCAC4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FCAC4 = 1;
  }
  entity = 0LL;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Int32_array *classPassive; // x8
  int max_length; // w24
  BalanceConfig_c *v16; // x0
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x23
  unsigned __int64 v29; // x25
  __int64 v30; // x27
  __int64 i; // x28
  struct System_Int32_array *v32; // x8
  int32_t v33; // w24
  System_Int32_array *v34; // x8
  System_String_array *v35; // x8
  System_String_array *v36; // x9

  if ( (byte_49FCAC9 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B640C8(&int___TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&string___TypeInfo, v13);
    byte_49FCAC9 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( classPassive )
    max_length = classPassive->max_length;
  else
    max_length = 0;
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v17 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
  *idList = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v17, v18, v19);
  v20 = (System_String_array *)sub_1B64170(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v20, v21, v22);
  v23 = (System_String_array *)sub_1B64170(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v23, v24, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v29 = 0LL;
    v30 = (unsigned int)max_length;
    for ( i = 32LL; ; i += 8LL )
    {
      v32 = this->fields.classPassive;
      if ( !v32 )
        break;
      if ( v29 >= v32->max_length )
        goto LABEL_25;
      if ( !v28 )
        break;
      v33 = v32->m_Items[v29 + 1];
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v28,
                   v33,
                   (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v34 = *idList;
      if ( !*idList )
        break;
      if ( v29 >= v34->max_length )
        goto LABEL_25;
      v34->m_Items[v29 + 1] = v33;
      if ( Instance )
      {
        v35 = *titleList;
        if ( !*titleList )
          break;
        v36 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v29 >= v35->max_length || v29 >= v36->max_length )
LABEL_25:
          sub_1B6432C(Instance, v27);
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v35 + i),
          (System_String_o **)((char *)v36 + i),
          0,
          0LL);
      }
      if ( v30 == ++v29 )
        return;
    }
LABEL_24:
    sub_1B64324(Instance);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCACF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23772/*"tdTransform"*/, method);
    byte_49FCACF = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_39325420(this, (System_String_o *)StringLiteral_23772/*"tdTransform"*/, &param, v2) )
    return param;
  else
    return 0;
}


float __fastcall ServantEntity__getHeadUpY(ServantEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.hpGaugeY / 1000.0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getHiddenName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  ServantChangeMaster_o *v12; // x21
  const MethodInfo *v13; // x2
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_49FCAD7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FCAD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
  if ( !v12 )
LABEL_12:
    sub_1B64324(Instance);
  v14 = ServantChangeMaster__GetHiddenEntity(v12, (int32_t)Instance, v13);
  if ( v14 )
    return v14->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v15);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t LimitCountByDispLimit; // w0
  __int64 v13; // x20
  __int64 v14; // x22
  int32_t v15; // w21
  const MethodInfo *v16; // x2
  int32_t v17; // w20
  System_Int32_array *IndividualityList; // x20
  Il2CppObject *Master_object; // x0
  __int64 v20; // x23
  __int64 v21; // x24
  ServantLimitAddMaster_o *v22; // x22
  struct System_Int32_array *v23; // x0
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x3
  ServantLimitAddEntity_o *v26; // x2
  struct System_Int32_array *individuality; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  System_Array_o *v30; // x21
  ServantEntity_o *v31; // x0
  struct System_Int32_array *v33; // x0
  struct System_Int32_array **p_individuality; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_49FCAC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v8);
    sub_1B640C8(&int___TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v11);
    byte_49FCAC6 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v14;
  *(_QWORD *)&v38.fields.fakeValue = v13;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v17, v15, v16);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v22 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v21;
  *(_QWORD *)&v39.fields.fakeValue = v20;
  v23 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
  if ( !v22 )
    goto LABEL_30;
  v23 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v22, &entity, (int32_t)v23, v15, v24);
  if ( ((unsigned __int8)v23 & 1) != 0 )
  {
    v26 = entity;
    if ( !entity )
      goto LABEL_30;
    individuality = entity->fields.individuality;
    if ( individuality )
    {
      v28 = *(_QWORD *)&individuality->max_length;
      if ( v28 )
      {
        if ( !IndividualityList || (v29 = *(_QWORD *)&IndividualityList->max_length) == 0 )
        {
          v31 = this;
          return ServantEntity__GetSubAttrReplacedIndividualityArray(v31, individuality, v26, v25);
        }
        v30 = (System_Array_o *)sub_1B64170(int___TypeInfo, (unsigned int)(v29 + v28));
        System_Array__CopyTo((System_Array_o *)IndividualityList, v30, 0, 0LL);
        if ( entity )
        {
          v23 = entity->fields.individuality;
          if ( v23 )
          {
            System_Array__CopyTo((System_Array_o *)v23, v30, IndividualityList->max_length, 0LL);
            v26 = entity;
            v31 = this;
            individuality = (struct System_Int32_array *)v30;
            return ServantEntity__GetSubAttrReplacedIndividualityArray(v31, individuality, v26, v25);
          }
        }
LABEL_30:
        sub_1B64324(v23);
      }
    }
  }
  if ( IndividualityList )
  {
    v26 = entity;
    v31 = this;
    individuality = IndividualityList;
    return ServantEntity__GetSubAttrReplacedIndividualityArray(v31, individuality, v26, v25);
  }
  v33 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.individuality = v33;
  p_individuality = &this->fields.individuality;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_individuality, (int32_t)v33, v35, v36);
  return *p_individuality;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getName(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantChangeMaster_o *v14; // x22
  const MethodInfo *v15; // x2
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FCAD5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCAD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( !v14 )
LABEL_12:
    sub_1B64324(Instance);
  v16 = ServantChangeMaster__GetEnableEntity(v14, (int32_t)Instance, v15);
  if ( v16 )
    return v16->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, v17);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_39327948(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantChangeMaster_o *v14; // x22
  const MethodInfo *v15; // x2
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x1
  ServantChangeEntity_o *v21; // x22
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49FCAD8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FCAD8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v13;
  *(_QWORD *)&v28.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
  if ( !v14 )
LABEL_12:
    sub_1B64324(Instance);
  v16 = ServantChangeMaster__GetEnableEntity(v14, (int32_t)Instance, v15);
  if ( v16 )
  {
    v20 = v16->fields.ruby;
    v21 = v16;
    *ruby = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)ruby, (int32_t)v20, v18, v19);
    return v21->fields.name;
  }
  else
  {
    v23 = ServantEntity__GetRuby(this, v17);
    *ruby = v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)ruby, (int32_t)v23, v24, v25);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, v26);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(Name, 0LL);
  }
}


System_Int32_array *__fastcall ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Int32_array *result; // x0
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  System_Collections_Generic_List_object__c *v13; // x1
  __int64 methodPtr_low; // x9
  ServantEntity___c_c *v15; // x0
  System_Converter_object__int__o *_9__136_0; // x20
  Il2CppObject *v17; // x21
  struct ServantEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_int__o *v21; // x0

  if ( (byte_49FCAE9 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1B640C8(&Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__, v8);
    sub_1B640C8(&ServantEntity___c_TypeInfo, v9);
    byte_49FCAE9 = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v12 = (System_Collections_Generic_List_object__o *)result;
    v13 = System_Collections_Generic_List_object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v15 = ServantEntity___c_TypeInfo;
      if ( !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v15 = ServantEntity___c_TypeInfo;
      }
      _9__136_0 = v15->static_fields->__9__136_0;
      if ( !_9__136_0 )
      {
        if ( !v15->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v15);
          v15 = ServantEntity___c_TypeInfo;
        }
        v17 = (Il2CppObject *)v15->static_fields->__9;
        _9__136_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v13, v11);
        System_Converter_object__int____ctor(
          _9__136_0,
          v17,
          Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__,
          0LL);
        static_fields = ServantEntity___c_TypeInfo->static_fields;
        static_fields->__9__136_0 = _9__136_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__136_0, (int32_t)_9__136_0, v19, v20);
      }
      v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v12,
                                                        (System_Converter_T__TOutput__o *)_9__136_0,
                                                        (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v21 )
        return System_Collections_Generic_List_int___ToArray(
                 v21,
                 (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1B645E4(result);
    }
    sub_1B64324(v21);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getTrueName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_49FCAD6 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
    byte_49FCAD6 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(Name, 0LL);
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

  if ( (byte_49FCAD3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20658/*"invalidSkillShift"*/, method);
    byte_49FCAD3 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_20658/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCAF8 & 1) == 0 )
  {
    sub_1B640C8(&ServantEntity___c_TypeInfo, v1);
    byte_49FCAF8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ServantEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = (Il2CppObject *)x.fields.key;
  if ( (byte_49FCAF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v7);
    byte_49FCAF9 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}