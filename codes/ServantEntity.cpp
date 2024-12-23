void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B672FF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, method);
    byte_4B672FF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4B672C9 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B672C9 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B672F8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17156/*"assumedEffectId"*/, method);
    byte_4B672F8 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17156/*"assumedEffectId"*/, 0LL);
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
  __int64 v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  unsigned __int64 v23; // x27
  SkillInfo_o *v24; // x8
  int32_t lv; // w2
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
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  __int64 count; // x1
  System_Int32_array *v43; // x20
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v46; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v47; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v48; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v49; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B672FB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1BE4ACC(&int___TypeInfo, v17);
    byte_4B672FB = 1;
  }
  v49 = 0LL;
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  v47 = 0LL;
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  v21 = *(_QWORD *)&enableSkillInfoList->max_length;
  v22 = DataValsList;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v21 )
LABEL_55:
        sub_1BE4D30(DataValsList, id);
      v24 = enableSkillInfoList->m_Items[v23];
      if ( v24 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v24->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v24->fields.lv;
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
              id = (System_Collections_Generic_IEnumerable_T__o *)DataValsList->fields.list;
              v26 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v45;
                if ( !v45 )
                  goto LABEL_54;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v45,
                  id,
                  (const MethodInfo_34A0080 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
                  if ( !v22 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v22,
                                                                                 &entity,
                                                                                 funcId->m_Items[v29 + 1],
                                                                                 (const MethodInfo_31FD818 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                        (FunctionMaster_o *)v22,
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
                                                                                     &v49,
                                                                                     Param,
                                                                                     v36,
                                                                                     0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v49 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v49->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v45,
                            id,
                            (const MethodInfo_34A0080 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
      LODWORD(v21) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v23 < (int)v21 );
  }
  v37 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v37,
    (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v45;
  if ( !v45 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v46,
    v45,
    (const MethodInfo_349F9F4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v48 = v46;
  while ( 1 )
  {
    v38 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v48,
            (const MethodInfo_335D9AC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v38 )
      break;
    if ( !v22 )
      sub_1BE4D28(v38, v39);
    v40 = DataMasterBase_object__object__int___TryGetEntity(
            v22,
            &v47,
            (int32_t)v48.fields._current,
            (const MethodInfo_31FD818 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v40 )
    {
      if ( !v47 )
        sub_1BE4D28(v40, v41);
      if ( !v37 )
        sub_1BE4D28(v40, v41);
      System_Collections_Generic_HashSet_int___Add(
        v37,
        HIDWORD(v47[4].monitor),
        (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v48,
    (const MethodInfo_335D9A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v37 )
LABEL_54:
    sub_1BE4D28(DataValsList, id);
  count = (unsigned int)v37->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v43 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_55182248(
    v37,
    v43,
    (const MethodInfo_34A03A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v43;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B672EC & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18047/*"changeLimitVoiceInFriendshipLv"*/, method);
    byte_4B672EC = 1;
  }
  param = 0;
  ServantEntity__checkScript_40601080(this, (System_String_o *)StringLiteral_18047/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isPlayableBeastToBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  BalanceConfig_c *v9; // x0

  if ( (byte_4B672FC & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, isPlayableBeastToBase);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v5);
    byte_4B672FC = 1;
  }
  if ( isPlayableBeastToBase )
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
           (System_Collections_Generic_IEnumerable_TSource__o *)v6->static_fields->PlayableBeastClassIds,
           classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      p_classId = &v9->static_fields->PlayableBeastBaseClassId;
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

  if ( (byte_4B672DA & 1) == 0 )
  {
    sub_1BE4ACC(&LocalizationManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_12120/*"SERVANT_UNIT"*/, v3);
    sub_1BE4ACC(&StringLiteral_5841/*"EXCEPT_SERVANT_UNIT"*/, v4);
    sub_1BE4ACC(&StringLiteral_11772/*"SERVANT_EQUIP_UNIT"*/, v5);
    byte_4B672DA = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_12120/*"SERVANT_UNIT"*/;
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_5841/*"EXCEPT_SERVANT_UNIT"*/;
    if ( IsServantEquip )
      v6 = &StringLiteral_11772/*"SERVANT_EQUIP_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B672F7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18777/*"defaultDeadType"*/, *(_QWORD *)&defType);
    byte_4B672F7 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40601080(this, (System_String_o *)StringLiteral_18777/*"defaultDeadType"*/, &param, v3) )
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
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  int max_length; // w8
  EventServantEntity_array *v12; // x20
  unsigned int v13; // w21
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B672E6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v4);
    byte_4B672E6 = 1;
  }
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v5) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (EventServantEntity_array *)ServantEntity__GetEventNameServantId(this, v10);
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
          sub_1BE4D30(Instance, v8);
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
      sub_1BE4D28(Instance, v8);
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

  if ( (byte_4B672E9 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4B672E9 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x8

  if ( (byte_4B672ED & 1) == 0 )
  {
    sub_1BE4ACC(&string_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_7388/*"HideInAnimNode"*/, v4);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v5);
    byte_4B672ED = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7388/*"HideInAnimNode"*/, v2);
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
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x20
  __int64 v9; // x8
  NetworkManager_c *v10; // x0
  __int64 v11; // x19
  __int64 v12; // x22
  int64_t userIdNumber; // x21
  int32_t v14; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B672EA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B672EA = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_18;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v8 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0LL)) == 0LL) )
  {
    sub_1BE4D28(Instance, v7);
  }
  v9 = *(_QWORD *)&Instance->max_length;
  if ( v9 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B61717 )
    {
      sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
      byte_4B61717 = 1;
    }
    v10 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v10 = NetworkManager_TypeInfo;
    }
    v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    userIdNumber = v10->static_fields->userIdNumber;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v17, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userIdNumber, v14, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(v9) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return v9 & 1;
    }
LABEL_18:
    LOBYTE(v9) = 0;
  }
  return v9 & 1;
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

  if ( (byte_4B672E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B672E8 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
          sub_1BE4D30(Instance, v8);
        v13 = v10->m_Items[v11];
        if ( !v13 )
          break;
        v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v17.fields.currentCryptoKey = v15;
        *(_QWORD *)&v17.fields.fakeValue = v14;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
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
      sub_1BE4D28(Instance, v8);
    }
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B672E7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, v2);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B672E7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_1BE4D28(Instance, v5);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  void *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v24; // x1
  int v25; // w8
  void *v26; // x21
  unsigned int v27; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v28; // x21
  Il2CppObject *Master_object; // x0
  __int64 v30; // x24
  __int64 v31; // x25
  ServantLimitAddMaster_o *v32; // x22
  System_String_o *OverwriteServantName; // x0
  System_String_o *v34; // x19
  Il2CppObject *v35; // x0
  __int64 v36; // x24
  __int64 v37; // x25
  ServantLimitAddMaster_o *v38; // x23
  System_String_o *v39; // x21
  System_String_o *v40; // x0
  bool IsNullOrEmpty; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x20
  System_String_o *v43; // x0
  __int64 v45; // x1
  Il2CppObject *v46; // x22
  NetworkManager_c *v47; // x0
  __int64 v48; // x24
  __int64 v49; // x25
  int64_t userIdNumber; // x23
  ServantLimitAddEntity_o *v51; // [xsp+0h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v52; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4B672E4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventServantMaster___, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v11);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v13);
    sub_1BE4ACC(&DataManager_TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v19);
    byte_4B672E4 = 1;
  }
  entity = 0LL;
  name = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v20) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v24);
  if ( !MasterData_object )
    goto LABEL_67;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_67;
  v25 = *((_DWORD *)Instance + 6);
  v26 = Instance;
  if ( v25 < 1 )
  {
LABEL_15:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) != 0 )
    {
      if ( maxLimitCount == -1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_67;
        v46 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B61717 )
        {
          sub_1BE4ACC(&NetworkManager_TypeInfo, v45);
          byte_4B61717 = 1;
        }
        v47 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v47 = NetworkManager_TypeInfo;
        }
        v49 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v48 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        userIdNumber = v47->static_fields->userIdNumber;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v57.fields.currentCryptoKey = v49;
        *(_QWORD *)&v57.fields.fakeValue = v48;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v57, 0LL);
        if ( !v46 )
          goto LABEL_67;
        if ( !UserServantCollectionMaster__TryGetEntity(
                (UserServantCollectionMaster_o *)v46,
                &v52,
                userIdNumber,
                (int32_t)Instance,
                0LL) )
          goto LABEL_40;
        Instance = v52;
        if ( !v52 )
          goto LABEL_67;
        Instance = (void *)UserServantCollectionEntity__IsGet(v52, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_40;
        if ( !v52 )
          goto LABEL_67;
        maxLimitCount = v52->fields.maxLimitCount;
        if ( (maxLimitCount & 0x80000000) != 0 )
          goto LABEL_40;
      }
      else if ( (maxLimitCount & 0x80000000) != 0 )
      {
        goto LABEL_40;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v35 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v51 = 0LL;
        v37 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v36 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v38 = (ServantLimitAddMaster_o *)v35;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v56.fields.currentCryptoKey = v37;
        *(_QWORD *)&v56.fields.fakeValue = v36;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v56, 0LL);
        if ( v38 )
        {
          ServantLimitAddMaster__TryGetEntity(v38, &v51, (int32_t)Instance, maxLimitCount, 0LL);
          if ( !v51 )
            goto LABEL_40;
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteServantName(v51, 0LL);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v31 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v30 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v32 = (ServantLimitAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v55.fields.currentCryptoKey = v31;
      *(_QWORD *)&v55.fields.fakeValue = v30;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v55, 0LL);
      if ( v32 )
      {
        if ( !ServantLimitAddMaster__TryGetEntity(v32, &entity, (int32_t)Instance, imageLimitCount, 0LL) )
          goto LABEL_40;
        Instance = entity;
        if ( entity )
        {
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
LABEL_37:
          v39 = OverwriteServantName;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v39, 0LL);
LABEL_40:
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(v28, 0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(v40, 0LL);
          if ( useName )
          {
            if ( !IsNullOrEmpty )
              return v28;
            nameSave = this->fields.nameSave;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(nameSave, 0LL);
            if ( System_String__IsNullOrEmpty(v43, 0LL) )
              return this->fields.name;
          }
          else if ( !IsNullOrEmpty )
          {
            return v28;
          }
          return this->fields.nameSave;
        }
      }
    }
LABEL_67:
    sub_1BE4D28(Instance, v22);
  }
  v27 = 0;
  while ( 1 )
  {
    if ( v27 >= v25 )
      sub_1BE4D30(Instance, v22);
    Instance = (void *)*((_QWORD *)v26 + (int)v27 + 4);
    if ( !Instance )
      goto LABEL_67;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v25 = *((_DWORD *)v26 + 6);
    if ( (int)++v27 >= v25 )
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

  if ( (byte_4B672D7 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_4598/*"ClassImageId"*/, method);
    byte_4B672D7 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40601080(this, (System_String_o *)StringLiteral_4598/*"ClassImageId"*/, &param, v2) )
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

  if ( (byte_4B672EB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_int____77163864, *(_QWORD *)&baseSkillId);
    sub_1BE4ACC(&int___TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantEntity_GetScriptMultiArray_int___, v6);
    sub_1BE4ACC(&StringLiteral_12990/*"SkillRankUp"*/, v7);
    byte_4B672EB = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12990/*"SkillRankUp"*/,
                           (const MethodInfo_2FF87FC *)Method_ServantEntity_GetScriptMultiArray_int___);
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
                                                             (const MethodInfo_2F47BF4 *)Method_BasicHelper_IndexValue_int____77163864);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v14;
        LODWORD(v10) = v11->max_length;
        if ( (__int64)++v12 >= (int)v10 )
          goto LABEL_9;
      }
LABEL_13:
      sub_1BE4D30(ScriptMultiArray_int, v9);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_1BE4B74(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_1BE4D28(0LL, v9);
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
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  EventServantMaster_o *v14; // x21
  int max_length; // w8
  EventServantEntity_array *v16; // x21
  unsigned int v17; // w23
  Il2CppClass **v18; // x8
  EventServantEntity_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B672E5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&string_TypeInfo, v6);
    byte_4B672E5 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v14 = (EventServantMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v13;
    *(_QWORD *)&v23.fields.fakeValue = v12;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v23, 0LL);
    if ( !v14 || (Instance = EventServantMaster__GetEntities(v14, (int32_t)Instance, 0LL)) == 0LL )
LABEL_23:
      sub_1BE4D28(Instance, v10);
    max_length = Instance->max_length;
    v16 = Instance;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= max_length )
          sub_1BE4D30(Instance, v10);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(ruby, 0LL);
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
  PartyOrganizationUtility_o *p_mergedScript; // x19
  Il2CppObject *Master_object; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  Il2CppClass *klass; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x22
  System_Collections_Generic_Dictionary_object__object__o *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  System_Action_T__o *v43; // x23
  __int64 v44; // x1
  System_Collections_Generic_Dictionary_object__object__o *v45; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B672D0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_KeyValuePair_string__object___TypeInfo, method);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantAddMaster___, v4);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v15);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BE4ACC(&Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__, v17);
    sub_1BE4ACC(&ServantEntity___c__DisplayClass102_0_TypeInfo, v18);
    byte_4B672D0 = 1;
  }
  entity = 0LL;
  memset(&v46, 0, sizeof(v46));
  p_mergedScript = (PartyOrganizationUtility_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantAddMaster___);
    v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v23;
    *(_QWORD *)&v48.fields.fakeValue = v22;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v48, 0LL);
    if ( v24 )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v24,
              &entity,
              (int32_t)klass,
              (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v45 = *p_script;
        p_mergedScript->klass = (PartyOrganizationUtility_c *)*p_script;
        sub_1BE4A70(p_mergedScript, (int64_t)v45, v27, v28, v29, v30, v31, v32);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v33 = sub_1BE4D18(ServantEntity___c__DisplayClass102_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0LL);
      v34 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v34,
        (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v33 )
      {
        *(_QWORD *)(v33 + 16) = v34;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v33 + 16);
        sub_1BE4A70((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)v34, v35, v36, v37, v38, v39, v40);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v43 = (System_Action_T__o *)sub_1BE4D18(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_object__object_____ctor(
          v43,
          (Il2CppObject *)v33,
          Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__,
          0LL);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v43,
          (const MethodInfo_2F45448 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v46,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_32B0654 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v46,
                      (const MethodInfo_33AE940 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_1BE4D28(0LL, v44);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v46.fields._current.fields.key,
                v46.fields._current.fields.value,
                (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v46,
              (const MethodInfo_33AEA60 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_1BE4D28(klass, v26);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *__fastcall ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2FF88C4 *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double inited; // q0

  if ( !method->rgctx_data )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, key);
    sub_1BE4ACC(&string_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1C36A04();
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
        const MethodInfo_2FF87FC *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20

  if ( !method->rgctx_data )
  {
    sub_1BE4ACC(&JsonManager_TypeInfo, key);
    sub_1BE4ACC(&string_TypeInfo, v6);
    if ( !method->rgctx_data )
      sub_1C36A04();
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
           (const MethodInfo_2FC09F8 *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B672D1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B672D1 = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  unsigned __int64 v21; // x25
  __int64 v22; // x28
  __int64 v23; // x29
  SkillInfo_o *v24; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v26; // x1
  __int64 v27; // x23
  __int64 v28; // x24
  SkillInfo_array *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4B672FA & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BE4ACC(&SkillInfo___TypeInfo, v10);
    sub_1BE4ACC(&SkillInfo_TypeInfo, v11);
    byte_4B672FA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantSkillMaster___);
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
  v14 = (SkillInfo_array *)sub_1BE4B74(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  if ( skillListNum >= 1 )
  {
    v21 = 0LL;
    v22 = (unsigned int)skillListNum;
    v23 = 32LL;
    do
    {
      v24 = (SkillInfo_o *)sub_1BE4D18(SkillInfo_TypeInfo);
      SkillInfo___ctor(v24, 0LL);
      if ( !v24 )
LABEL_23:
        sub_1BE4D28(IsServantEquip, v26);
      v24->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v28 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v27 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v39.fields.currentCryptoKey = v28;
        *(_QWORD *)&v39.fields.fakeValue = v27;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                   v39,
                                                   0LL);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v21 + 1,
                           0LL);
        if ( IsServantEquip )
        {
          v24->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v24->fields.title,
            &v24->fields.explanation,
            0LL);
        }
      }
      v29 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v30 = sub_1BE4C08(v24, v29->obj.klass->_1.element_class);
      if ( !v30 )
      {
        v38 = sub_1BE4D4C(0LL);
        sub_1BE4BF4(v38, 0LL);
      }
      if ( v21 >= v29->max_length )
        sub_1BE4D30(v30, v31);
      v29->m_Items[v21] = v24;
      sub_1BE4A70((PartyOrganizationUtility_o *)((char *)v29 + v23), (int64_t)v24, v32, v33, v34, v35, v36, v37);
      ++v21;
      v23 += 8LL;
    }
    while ( v22 != v21 );
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
  __int64 v13; // x1
  AttriMaster_o *v14; // x23
  int32_t IndividualityFromValue; // w22
  int v16; // w21
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x8
  char v19; // w26
  unsigned __int64 v20; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10

  if ( (byte_4B672CB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_AttriMaster___, individualityArray);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4B672CB = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v14 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                             (AttriMaster_o *)Master_object,
                             this->fields.attri,
                             0LL);
  v16 = AttriMaster__GetIndividualityFromValue(v14, servantLimitAddEntity->fields.attri, 0LL);
  v17 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  v18 = *(_QWORD *)&individualityArray->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1BE4D30(Master_object, v13);
      v13 = (unsigned int)individualityArray->m_Items[v20 + 1];
      if ( (_DWORD)v13 == IndividualityFromValue )
      {
        if ( v16 >= 1 )
        {
          if ( !v17 )
            goto LABEL_36;
          items = v17->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v17->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v17,
              v16,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v17->fields._size = size + 1;
            items->m_Items[size + 1] = v16;
          }
          v19 = 1;
        }
      }
      else
      {
        if ( !v17 )
          goto LABEL_36;
        v24 = v17->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !v24 )
          goto LABEL_36;
        v26 = v17->fields._size;
        if ( (unsigned int)v26 >= v24->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v13,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = v26 + 1;
          v24->m_Items[v26 + 1] = v13;
        }
      }
      LODWORD(v18) = individualityArray->max_length;
      if ( (__int64)++v20 >= (int)v18 )
        goto LABEL_29;
    }
  }
  v19 = 0;
LABEL_29:
  if ( v16 >= 1 && (v19 & 1) == 0 )
  {
    if ( v17 )
    {
      v28 = v17->fields._items;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++v17->fields._version;
      if ( v28 )
      {
        v30 = v17->fields._size;
        if ( (unsigned int)v30 >= v28->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            v16,
            *(const MethodInfo_35CF200 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = v30 + 1;
          v28->m_Items[v30 + 1] = v16;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v17,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_36:
    sub_1BE4D28(Master_object, v13);
  }
  if ( !v17 )
    goto LABEL_36;
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_IEnumerable_T__o *v25; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v27; // x20
  TreasureDvcLvEntity_o *v28; // x0
  TreasureDvcLvEntity_o *v29; // x21
  Il2CppObject *v30; // x19
  Il2CppObject *v31; // x23
  System_Collections_Generic_HashSet_int__o *v32; // x22
  const MethodInfo_34A0080 **v33; // x27
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v36; // x24
  unsigned __int64 v37; // x29
  unsigned __int64 max_length; // x9
  DataVals_o *v39; // x25
  int32_t v40; // w1
  int32_t Param; // w26
  int32_t v42; // w1
  System_Collections_Generic_IEnumerable_T__o *v43; // x1
  System_Collections_Generic_HashSet_int__o *v44; // x20
  const MethodInfo_34A0080 **v45; // x22
  int32_t v46; // w26
  int32_t v47; // w27
  void *v48; // x8
  System_Collections_Generic_HashSet_int__o *v49; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  _BOOL8 v52; // x0
  __int64 v53; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v56; // [xsp+0h] [xbp-D0h]
  DataVals_o **v57; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v58; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v59; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v60; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v61; // [xsp+50h] [xbp-80h] BYREF
  TreasureDvcLvEntity_o *v62; // [xsp+58h] [xbp-78h] BYREF
  SkillLvEntity_o *v63; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_4B672F9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_1BE4ACC(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1BE4ACC(&int___TypeInfo, v18);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    byte_4B672F9 = 1;
  }
  v63 = 0LL;
  entity = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  memset(&v60, 0, sizeof(v60));
  v59 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v65.fields.currentCryptoKey = v22;
  *(_QWORD *)&v65.fields.fakeValue = v21;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v65, 0LL);
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
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v27 = (TreasureDvcLvMaster_o *)DataValsList;
    v28 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v28 )
      return 0LL;
    v29 = v28;
    if ( !v28->fields.funcId )
      return 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v56 = v27;
    v30 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_FunctionMaster___);
    v31 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillLvMaster___);
    v32 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v32,
      (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v32 )
      goto LABEL_51;
    v33 = (const MethodInfo_34A0080 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v32,
      (System_Collections_Generic_IEnumerable_T__o *)v29->fields.funcId,
      (const MethodInfo_34A0080 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v29, 100, 0LL);
    funcId = v29->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v36 = DataValsList;
    v37 = 0LL;
    v57 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v37 >= (int)max_length )
      {
        v49 = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v49,
          (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v58,
          v32,
          (const MethodInfo_349F9F4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v60 = v58;
        while ( 1 )
        {
          v50 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v60,
                  (const MethodInfo_335D9AC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v50 )
            break;
          if ( !v30 )
            sub_1BE4D28(v50, v51);
          v52 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                  &v59,
                  (int32_t)v60.fields._current,
                  (const MethodInfo_31FD818 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v52 )
          {
            if ( !v59 )
              sub_1BE4D28(v52, v53);
            if ( !v49 )
              sub_1BE4D28(v52, v53);
            System_Collections_Generic_HashSet_int___Add(
              v49,
              HIDWORD(v59[4].monitor),
              (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v60,
          (const MethodInfo_335D9A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v49 )
        {
          count = (unsigned int)v49->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_55182248(
              v49,
              EntityFromSvtIdOnly,
              (const MethodInfo_34A03A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_51:
        sub_1BE4D28(DataValsList, v25);
      }
      if ( v37 >= max_length )
        goto LABEL_64;
      if ( !v30 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v30,
                                         &entity,
                                         funcId->m_Items[v37 + 1],
                                         (const MethodInfo_31FD818 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_51;
          if ( v37 >= v36->max_length )
LABEL_64:
            sub_1BE4D30(DataValsList, v25);
          if ( !entity )
            goto LABEL_51;
          v39 = m_Items[v37];
          if ( !v39 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v37], (FunctionMaster_o *)v30, (int32_t)entity[1].monitor, 0LL);
          v40 = DataVals__isParam(v39, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v39, v40, 0, 0LL);
          v42 = DataVals__isParam(v39, 27, 0LL) ? 27 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v39, v42, 0, 0LL);
          if ( !v31 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v31,
                                             &v63,
                                             Param,
                                             (int32_t)DataValsList,
                                             0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v63 )
              goto LABEL_51;
            v43 = (System_Collections_Generic_IEnumerable_T__o *)v63->fields.funcId;
            if ( v43 )
              System_Collections_Generic_HashSet_int___UnionWith(v32, v43, *v33);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v39, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v39, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v44 = v32;
              v45 = v33;
              v46 = DataVals__GetParam(v39, 92, 0, 0LL);
              v47 = DataVals__GetParam(v39, 93, 0, 0LL);
              if ( DataVals__isParam(v39, 95, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v56, &v62, v46, v47, 0LL);
                v33 = v45;
                v32 = v44;
                m_Items = v57;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v48 = v62;
                  if ( !v62 )
                    goto LABEL_51;
LABEL_48:
                  v25 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v48 + 4);
                  if ( v25 )
                    System_Collections_Generic_HashSet_int___UnionWith(v32, v25, *v33);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                   (SkillLvMaster_o *)v31,
                                                   &v61,
                                                   v46,
                                                   v47,
                                                   0LL);
                v33 = v45;
                v32 = v44;
                m_Items = v57;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v48 = v61;
                  if ( !v61 )
                    goto LABEL_51;
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
      funcId = v29->fields.funcId;
      ++v37;
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
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x8
  ServantChangeMaster_o *v12; // x19
  const MethodInfo *v13; // x2
  ServantChangeEntity_o *v14; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B672E3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B672E3 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v6;
  *(_QWORD *)&v16.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v17.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v12 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v17.fields.currentCryptoKey = v11,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v17, 0LL),
        !v12) )
  {
    sub_1BE4D28(Instance, v9);
  }
  v14 = ServantChangeMaster__TrueNameEntity(v12, (int32_t)Instance, v13);
  if ( v14 )
    return v14->fields.svtId;
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

  if ( (byte_4B672EE & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_16888/*"additionExpandImage"*/, *(_QWORD *)&limitCount);
    byte_4B672EE = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16888/*"additionExpandImage"*/, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B672F6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v4);
    byte_4B672F6 = 1;
  }
  v5 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 5LL);
  v8.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B672F0 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18277/*"coinRoomCheck"*/, method);
    byte_4B672F0 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_18277/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B672F4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v4);
    byte_4B672F4 = 1;
  }
  v5 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 4LL);
  v8.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4B672F5 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Concat_int___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BE4ACC(&int___TypeInfo, v6);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572,
      v7);
    byte_4B672F5 = 1;
  }
  v8 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 3LL);
  v15.fields.value = Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v8, v15, 0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = System_Linq_Enumerable__Concat_int_(
          v9,
          (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->PlayableBeastClassIds,
          (const MethodInfo_2F70E6C *)Method_System_Linq_Enumerable_Concat_int___);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v11,
                                                               (const MethodInfo_2F9293C *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v12,
           this->fields.classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeastNotPlayable(this, v13);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B672F3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v4);
    byte_4B672F3 = 1;
  }
  v5 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 8LL);
  v8.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v26; // x1
  AttriMaster_o *v27; // x22
  int32_t IndividualityFromValue; // w0
  __int64 v29; // x0
  int max_length; // w8
  __int64 v31; // x9
  int32_t v32; // w11
  struct System_Int32_array *v33; // x10
  int v34; // w8
  __int64 v35; // x9
  int32_t *v36; // x10
  int32_t v37; // w11
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4B672CD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BE4ACC(&ServantIndividualityMaster_TypeInfo, v13);
    byte_4B672CD = 1;
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
  *(_QWORD *)&v40.fields.currentCryptoKey = v16;
  *(_QWORD *)&v40.fields.fakeValue = v15;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v40, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v19, v17, v18);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v23;
  *(_QWORD *)&v41.fields.fakeValue = v22;
  v25 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v41, 0LL);
  if ( !v24 )
    goto LABEL_46;
  v25 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v24, &entity, (int32_t)v25, v17, 0LL);
  if ( ((unsigned __int8)v25 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_46;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v29 = 0xFFFFFFFFLL;
    if ( !IndividualityList )
      goto LABEL_35;
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      v31 = 0LL;
      while ( (unsigned int)v31 < max_length )
      {
        v32 = IndividualityList->m_Items[v31 + 1];
        if ( v32 != (_DWORD)v29 && v32 == individuality )
          goto LABEL_25;
        if ( (int)++v31 >= max_length )
          goto LABEL_35;
      }
      goto LABEL_45;
    }
LABEL_35:
    if ( !entity || (v33 = entity->fields.individuality) == 0LL || (v34 = v33->max_length, v34 < 1) )
    {
      LOBYTE(v29) = 0;
      return v29;
    }
    v35 = 0LL;
    v36 = &v33->m_Items[1];
    while ( (unsigned int)v35 < v34 )
    {
      v37 = v36[v35++];
      v29 = v37 == individuality;
      if ( (int)v35 >= v34 || v37 == individuality )
        return v29;
    }
LABEL_45:
    sub_1BE4D30(v29, v26);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v27 = (AttriMaster_o *)v25) == 0LL )
LABEL_46:
    sub_1BE4D28(v25, v26);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v25, entity->fields.attri, 0LL);
  if ( IndividualityFromValue < 1 || IndividualityFromValue != individuality )
  {
    v29 = AttriMaster__GetIndividualityFromValue(v27, this->fields.attri, 0LL);
    if ( !IndividualityList )
      goto LABEL_35;
    goto LABEL_27;
  }
LABEL_25:
  LOBYTE(v29) = 1;
  return v29;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality_40598544(
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
  __int64 v26; // x1
  AttriMaster_o *v27; // x22
  __int64 IndividualityFromValue; // x0
  signed int max_length; // w8
  __int64 v30; // x9
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x8
  int32_t v33; // w12
  signed int v34; // w13
  __int64 v35; // x14
  struct System_Int32_array *v36; // x8
  unsigned __int64 v37; // x10
  unsigned __int64 v38; // x9
  signed int v39; // w13
  __int64 v40; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4B672CE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BE4ACC(&ServantIndividualityMaster_TypeInfo, v13);
    byte_4B672CE = 1;
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
  *(_QWORD *)&v43.fields.currentCryptoKey = v16;
  *(_QWORD *)&v43.fields.fakeValue = v15;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v43, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  individuality = ServantIndividualityMaster__GetIndividualityList(v19, v17, v18);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v23;
  *(_QWORD *)&v44.fields.fakeValue = v22;
  v25 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v44, 0LL);
  if ( !v24 )
    goto LABEL_59;
  v25 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v24, &entity, (int32_t)v25, v17, 0LL);
  if ( ((unsigned __int8)v25 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_59;
    if ( entity->fields.attri != -1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v25 = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v27 = (AttriMaster_o *)v25;
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
              v30 = 0LL;
              while ( (unsigned int)v30 < max_length )
              {
                if ( (_DWORD)IndividualityFromValue == individualityList->m_Items[v30 + 1] )
                  goto LABEL_56;
                if ( (int)++v30 >= max_length )
                  goto LABEL_31;
              }
LABEL_58:
              sub_1BE4D30(IndividualityFromValue, v26);
            }
          }
LABEL_31:
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(v27, this->fields.attri, 0LL);
          if ( !individuality )
            goto LABEL_44;
          goto LABEL_34;
        }
      }
LABEL_59:
      sub_1BE4D28(v25, v26);
    }
  }
  IndividualityFromValue = 0xFFFFFFFFLL;
  if ( individuality )
  {
LABEL_34:
    if ( (int)*(_QWORD *)&individuality->max_length >= 1 )
    {
      v31 = (unsigned int)*(_QWORD *)&individuality->max_length;
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= v31 )
          goto LABEL_58;
        v33 = individuality->m_Items[v32 + 1];
        if ( v33 != (_DWORD)IndividualityFromValue )
        {
          v34 = individualityList->max_length;
          if ( v34 >= 1 )
            break;
        }
LABEL_43:
        if ( (__int64)++v32 >= (int)v31 )
          goto LABEL_44;
      }
      v35 = 0LL;
      while ( (unsigned int)v35 < v34 )
      {
        if ( v33 == individualityList->m_Items[v35 + 1] )
          goto LABEL_56;
        if ( (int)++v35 >= v34 )
          goto LABEL_43;
      }
      goto LABEL_58;
    }
  }
LABEL_44:
  if ( entity )
  {
    v36 = entity->fields.individuality;
    if ( v36 )
    {
      if ( (int)*(_QWORD *)&v36->max_length >= 1 )
      {
        v37 = (unsigned int)*(_QWORD *)&v36->max_length;
        v38 = 0LL;
        while ( 1 )
        {
          if ( v38 >= v37 )
            goto LABEL_58;
          v39 = individualityList->max_length;
          if ( v39 >= 1 )
            break;
LABEL_54:
          ++v38;
          IndividualityFromValue = 0LL;
          if ( (__int64)v38 >= (int)v37 )
            return IndividualityFromValue;
        }
        v40 = 0LL;
        while ( (unsigned int)v40 < v39 )
        {
          if ( v36->m_Items[v38 + 1] == individualityList->m_Items[v40 + 1] )
            goto LABEL_56;
          if ( (int)++v40 >= v39 )
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
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  ServantChangeMaster_o *v10; // x19
  const MethodInfo *v11; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4B672E2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B672E2 = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v13, 0LL);
  if ( !v10 || (Instance = ServantChangeMaster__GetEntityList(v10, (int32_t)Instance, v11)) == 0LL )
LABEL_9:
    sub_1BE4D28(Instance, v6);
  return *(_QWORD *)&Instance->max_length != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  ServantChangeMaster_o *v10; // x19
  const MethodInfo *v11; // x2
  ServantChangeEntity_o *v12; // x0
  _BOOL4 v13; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4B672E0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B672E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v15, 0LL);
  if ( !v10 )
LABEL_10:
    sub_1BE4D28(Instance, v6);
  v12 = ServantChangeMaster__GetEnableEntity(v10, (int32_t)Instance, v11);
  if ( v12 )
    return (LOBYTE(v12->fields.flag) >> 3) & 1;
  else
    LOBYTE(v13) = 1;
  return v13;
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantChangeMaster_o *v10; // x20
  const MethodInfo *v11; // x2
  ServantChangeEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  ServantChangeEntity_o *v14; // x20
  _BOOL4 v15; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B672E1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B672E1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v9;
  *(_QWORD *)&v17.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v17, 0LL);
  if ( !v10 )
LABEL_11:
    sub_1BE4D28(Instance, v6);
  v12 = ServantChangeMaster__TrueNameEntity(v10, (int32_t)Instance, v11);
  if ( v12 && (v14 = v12, ServantChangeEntity__IsEnable(v12, v13)) )
    return (LOBYTE(v14->fields.flag) >> 3) & 1;
  else
    LOBYTE(v15) = ServantEntity__IsNameTrue(this, v13);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsPeriodLimitedServantByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_T__o *v11; // x20
  System_Func_int__bool__o *v12; // x21
  System_Collections_Generic_List_int__o *svtIdList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B672FD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_int___, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaBaseCollateralMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v7);
    sub_1BE4ACC(&Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__151_0__, v8);
    byte_4B672FD = 1;
  }
  svtIdList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaBaseCollateralMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v10);
  if ( GachaBaseCollateralMaster__TryGetPeriodLimitedSvtIdList(
         (GachaBaseCollateralMaster_o *)Master_object,
         &svtIdList,
         gachaId,
         0LL) )
  {
    v11 = (System_Collections_Generic_List_T__o *)svtIdList;
    v12 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantByGachaId_b__151_0__,
      0LL);
    return BasicHelper__Any_int_(
             v11,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_2F43D50 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsPeriodLimitedServantEquipByGachaId(
        ServantEntity_o *this,
        int32_t gachaId,
        int64_t summonSceenInTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  GachaSubEntity_o *OpenEntity_40297404; // x0
  GachaSubEntity_o *v15; // x20
  System_Collections_Generic_List_T__o *v16; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_List_int__o *svtEquipIdList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B672FE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_int___, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaAdjustAddMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMaster_GachaSubMaster___, v8);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&System_Func_int__bool__TypeInfo, v10);
    sub_1BE4ACC(&Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__152_0__, v11);
    byte_4B672FE = 1;
  }
  svtEquipIdList = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaSubMaster___);
  if ( !Master_object )
    goto LABEL_14;
  OpenEntity_40297404 = GachaSubMaster__GetOpenEntity_40297404(
                          (GachaSubMaster_o *)Master_object,
                          gachaId,
                          summonSceenInTime,
                          0LL);
  if ( !OpenEntity_40297404 )
    return (unsigned __int8)OpenEntity_40297404 & 1;
  v15 = OpenEntity_40297404;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_GachaAdjustAddMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BE4D28(Master_object, v13);
  if ( GachaAdjustAddMaster__TryGetPeriodLimitedSvtEquipIdList(
         (GachaAdjustAddMaster_o *)Master_object,
         &svtEquipIdList,
         v15->fields.adjustAddId,
         0LL) )
  {
    v16 = (System_Collections_Generic_List_T__o *)svtEquipIdList;
    v17 = (System_Func_int__bool__o *)sub_1BE4D18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v17,
      (Il2CppObject *)this,
      Method_ServantEntity__IsPeriodLimitedServantEquipByGachaId_b__152_0__,
      0LL);
    LOBYTE(OpenEntity_40297404) = BasicHelper__Any_int_(
                                    v16,
                                    (System_Func_T__bool__o *)v17,
                                    (const MethodInfo_2F43D50 *)Method_BasicHelper_Any_int___);
  }
  else
  {
    LOBYTE(OpenEntity_40297404) = 0;
  }
  return (unsigned __int8)OpenEntity_40297404 & 1;
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B672F1 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24033/*"svtBuffTurnExtend"*/, method);
    byte_4B672F1 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_24033/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B672F2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_1BE4ACC(&int___TypeInfo, v3);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v4);
    byte_4B672F2 = 1;
  }
  v5 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, 6LL);
  v8.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v6,
           this->fields.classId,
           (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.nameSave, (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity___IsPeriodLimitedServantByGachaId_b__151_0(
        ServantEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B67300 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_4B67300 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v8, 0LL) == svtId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity___IsPeriodLimitedServantEquipByGachaId_b__152_0(
        ServantEntity_o *this,
        int32_t svtEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4B67301 & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtEquipId);
    byte_4B67301 = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v8, 0LL) == svtEquipId;
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

  if ( (byte_4B672D2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B672D2 = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_40601080(
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

  if ( (byte_4B672D3 & 1) == 0 )
  {
    sub_1BE4ACC(&long_TypeInfo, key);
    byte_4B672D3 = 1;
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
  v17 = sub_1BE4FE8(ScriptValue);
  return ServantEntity__checkScript_40601244(v13, v14, v15, *(float *)&v17, v16);
}


bool __fastcall ServantEntity__checkScript_40601244(
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

  if ( (byte_4B672D4 & 1) == 0 )
  {
    sub_1BE4ACC(&long_TypeInfo, key);
    byte_4B672D4 = 1;
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
  sub_1BE4FE8(ScriptValue);
  return ServantEntity__getDressId(v15, v16);
}


bool __fastcall ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B672D8 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17328/*"battleHeight"*/, height);
    byte_4B672D8 = 1;
  }
  return ServantEntity__checkScript_40601244(this, (System_String_o *)StringLiteral_17328/*"battleHeight"*/, height, 1000.0, v3);
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
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  EventServantMaster_o *v21; // x22
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
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v38; // x20
  System_String_o *v39; // x0
  Il2CppObject *v40; // x0
  __int64 v41; // x21
  __int64 v42; // x22
  ServantChangeMaster_o *v43; // x20
  const MethodInfo *v44; // x2
  ServantChangeEntity_o *v45; // x0
  ServantLimitAddEntity_o *v46; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4B672DF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v14);
    byte_4B672DF = 1;
  }
  battleName = 0LL;
  v46 = 0LL;
  entity = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v15) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (EventServantMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = v20;
  *(_QWORD *)&v49.fields.fakeValue = v19;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v49, 0LL);
  if ( !v21 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v21, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v23 = Instance;
  if ( max_length < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_27;
LABEL_16:
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v25 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v27 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v26 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v28 = (ServantChangeMaster_o *)v25;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v50.fields.currentCryptoKey = v27;
    *(_QWORD *)&v50.fields.fakeValue = v26;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v50, 0LL);
    if ( !v28 )
      goto LABEL_48;
    v30 = ServantChangeMaster__TrueNameEntity(v28, (int32_t)Instance, v29);
    if ( !v30 )
      goto LABEL_27;
    v31 = v30;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v31->fields.svtId,
                                             (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v33 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v46 = 0LL;
        v35 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v34 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v36 = (ServantLimitAddMaster_o *)v33;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v35;
        *(_QWORD *)&v51.fields.fakeValue = v34;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                 v51,
                                                 0LL);
        if ( !v36 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity(v36, &v46, (int32_t)Instance, limitCount, 0LL);
        if ( v46 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v46, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(v38, 0LL);
          if ( !System_String__IsNullOrEmpty(v39, 0LL) )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(v38, 0LL);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v40 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v42 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v41 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v43 = (ServantChangeMaster_o *)v40;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v52.fields.currentCryptoKey = v42;
        *(_QWORD *)&v52.fields.fakeValue = v41;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                                 v52,
                                                 0LL);
        if ( v43 )
        {
          v45 = ServantChangeMaster__GetEnableEntity(v43, (int32_t)Instance, v44);
          if ( v45 )
            return v45->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_1BE4D28(Instance, v17);
  }
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= max_length )
      sub_1BE4D30(Instance, v17);
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

  if ( (byte_4B672D6 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_17939/*"cameraActionId"*/, method);
    byte_4B672D6 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40601080(this, (System_String_o *)StringLiteral_17939/*"cameraActionId"*/, &param, v2) )
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
  __int64 v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B672CA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v5);
    byte_4B672CA = 1;
  }
  entity = 0LL;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_1BE4D28(Instance, v8);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_31FD818 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_String_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *Instance; // x0
  __int64 v39; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x23
  unsigned __int64 v41; // x25
  __int64 v42; // x27
  __int64 i; // x28
  struct System_Int32_array *v44; // x8
  int32_t v45; // w24
  System_Int32_array *v46; // x8
  System_String_array *v47; // x8
  System_String_array *v48; // x9

  if ( (byte_4B672CF & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, idList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1BE4ACC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&int___TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BE4ACC(&string___TypeInfo, v13);
    byte_4B672CF = 1;
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
  v17 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
  *idList = v17;
  sub_1BE4A70((PartyOrganizationUtility_o *)idList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_String_array *)sub_1BE4B74(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)titleList, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_String_array *)sub_1BE4B74(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v31;
  sub_1BE4A70((PartyOrganizationUtility_o *)explanationList, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v41 = 0LL;
    v42 = (unsigned int)max_length;
    for ( i = 32LL; ; i += 8LL )
    {
      v44 = this->fields.classPassive;
      if ( !v44 )
        break;
      if ( v41 >= v44->max_length )
        goto LABEL_25;
      if ( !v40 )
        break;
      v45 = v44->m_Items[v41 + 1];
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v40,
                   v45,
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v46 = *idList;
      if ( !*idList )
        break;
      if ( v41 >= v46->max_length )
        goto LABEL_25;
      v46->m_Items[v41 + 1] = v45;
      if ( Instance )
      {
        v47 = *titleList;
        if ( !*titleList )
          break;
        v48 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v41 >= v47->max_length || v41 >= v48->max_length )
LABEL_25:
          sub_1BE4D30(Instance, v39);
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v47 + i),
          (System_String_o **)((char *)v48 + i),
          0,
          0LL);
      }
      if ( v42 == ++v41 )
        return;
    }
LABEL_24:
    sub_1BE4D28(Instance, v39);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B672D5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24205/*"tdTransform"*/, method);
    byte_4B672D5 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40601080(this, (System_String_o *)StringLiteral_24205/*"tdTransform"*/, &param, v2) )
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
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  ServantChangeMaster_o *v13; // x21
  const MethodInfo *v14; // x2
  ServantChangeEntity_o *v15; // x0
  const MethodInfo *v16; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B672DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B672DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v12;
  *(_QWORD *)&v19.fields.fakeValue = v11;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v19, 0LL);
  if ( !v13 )
LABEL_12:
    sub_1BE4D28(Instance, v9);
  v15 = ServantChangeMaster__GetHiddenEntity(v13, (int32_t)Instance, v14);
  if ( v15 )
    return v15->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v16);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(Name, 0LL);
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
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  ServantLimitAddEntity_o *v26; // x2
  struct System_Int32_array *individuality; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  System_Array_o *v30; // x21
  ServantEntity_o *v31; // x0
  struct System_Int32_array *v33; // x0
  struct System_Int32_array **p_individuality; // x19
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B672CC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, v8);
    sub_1BE4ACC(&int___TypeInfo, v9);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BE4ACC(&ServantIndividualityMaster_TypeInfo, v11);
    byte_4B672CC = 1;
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
  *(_QWORD *)&v42.fields.currentCryptoKey = v14;
  *(_QWORD *)&v42.fields.fakeValue = v13;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v42, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v17, v15, v16);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v22 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v21;
  *(_QWORD *)&v43.fields.fakeValue = v20;
  v23 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v43, 0LL);
  if ( !v22 )
    goto LABEL_30;
  v23 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v22, &entity, (int32_t)v23, v15, 0LL);
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
        v30 = (System_Array_o *)sub_1BE4B74(int___TypeInfo, (unsigned int)(v29 + v28));
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
        sub_1BE4D28(v23, v24);
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
  v33 = (struct System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  this->fields.individuality = v33;
  p_individuality = &this->fields.individuality;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_individuality, (int64_t)v33, v35, v36, v37, v38, v39, v40);
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
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantChangeMaster_o *v15; // x22
  const MethodInfo *v16; // x2
  ServantChangeEntity_o *v17; // x0
  const MethodInfo *v18; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B672DB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B672DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v14;
  *(_QWORD *)&v21.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v21, 0LL);
  if ( !v15 )
LABEL_12:
    sub_1BE4D28(Instance, v11);
  v17 = ServantChangeMaster__GetEnableEntity(v15, (int32_t)Instance, v16);
  if ( v17 )
    return v17->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, 0, v18);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_40603736(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantChangeMaster_o *v15; // x22
  const MethodInfo *v16; // x2
  ServantChangeEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o *v25; // x1
  ServantChangeEntity_o *v26; // x22
  System_String_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4B672DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B672DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v14;
  *(_QWORD *)&v37.fields.fakeValue = v13;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v37, 0LL);
  if ( !v15 )
LABEL_12:
    sub_1BE4D28(Instance, v11);
  v17 = ServantChangeMaster__GetEnableEntity(v15, (int32_t)Instance, v16);
  if ( v17 )
  {
    v25 = v17->fields.ruby;
    v26 = v17;
    *ruby = v25;
    sub_1BE4A70((PartyOrganizationUtility_o *)ruby, (int64_t)v25, v19, v20, v21, v22, v23, v24);
    return v26->fields.name;
  }
  else
  {
    v28 = ServantEntity__GetRuby(this, v18);
    *ruby = v28;
    sub_1BE4A70((PartyOrganizationUtility_o *)ruby, (int64_t)v28, v29, v30, v31, v32, v33, v34);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v35);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(Name, 0LL);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 methodPtr_low; // x9
  ServantEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__136_0; // x20
  Il2CppObject *v15; // x21
  struct ServantEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x0
  __int64 v24; // x1

  if ( (byte_4B672EF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_object__int__TypeInfo, key);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1BE4ACC(&Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__, v8);
    sub_1BE4ACC(&ServantEntity___c_TypeInfo, v9);
    byte_4B672EF = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v11 = (System_Collections_Generic_List_object__o *)result;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v13 = ServantEntity___c_TypeInfo;
      if ( !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v13 = ServantEntity___c_TypeInfo;
      }
      _9__136_0 = v13->static_fields->__9__136_0;
      if ( !_9__136_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = ServantEntity___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__136_0 = (System_Converter_object__int__o *)sub_1BE4D18(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(
          _9__136_0,
          v15,
          Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__,
          0LL);
        static_fields = ServantEntity___c_TypeInfo->static_fields;
        static_fields->__9__136_0 = _9__136_0;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&static_fields->__9__136_0,
          (int64_t)_9__136_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      v23 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v11,
                                                        (System_Converter_T__TOutput__o *)_9__136_0,
                                                        (const MethodInfo_2E88EF0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v23 )
        return System_Collections_Generic_List_int___ToArray(
                 v23,
                 (const MethodInfo_35D0CB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1BE4FE8(result);
    }
    sub_1BE4D28(v23, v24);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getTrueName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4B672DC & 1) == 0 )
  {
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
    byte_4B672DC = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47334904(Name, 0LL);
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

  if ( (byte_4B672D9 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_21034/*"invalidSkillShift"*/, method);
    byte_4B672D9 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_21034/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67302 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantEntity___c_TypeInfo, v1);
    byte_4B67302 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
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
  if ( (byte_4B67303 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v7);
    byte_4B67303 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_1BE4D28(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_32B0224 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}