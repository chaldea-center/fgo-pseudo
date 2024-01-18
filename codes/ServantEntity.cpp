void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AB18 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418AB18 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_418AAE6 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418AAE6 = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AB14 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16501/*"assumedEffectId"*/, method);
    byte_418AB14 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16501/*"assumedEffectId"*/, 0LL);
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
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x20
  unsigned __int64 v23; // x27
  SkillInfo_o *v24; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v26; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x24
  unsigned __int64 v29; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v31; // x25
  int32_t v32; // w1
  int32_t Param; // w26
  int32_t v34; // w1
  int32_t v35; // w0
  System_Collections_Generic_HashSet_int__o *v36; // x19
  _BOOL8 v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  __int64 count; // x1
  System_Int32_array *v42; // x20
  __int64 v44; // x0
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v48; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v49; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v50; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_418AB17 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B2C35C(&int___TypeInfo, v17);
    byte_418AB17 = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  v48 = 0LL;
  memset(&v49, 0, sizeof(v49));
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v21 = *(_QWORD *)&enableSkillInfoList->max_length;
  v22 = DataValsList;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v21 )
      {
LABEL_56:
        v44 = sub_B2C460(DataValsList);
        sub_B2C400(v44, 0LL);
      }
      v24 = enableSkillInfoList->m_Items[v23];
      if ( v24 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v24->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v24->fields.lv;
          if ( lv >= 1 )
          {
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_55;
            DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__GetEntity(
                                                                            Master_WarQuestSelectionMaster,
                                                                            (int32_t)id,
                                                                            lv,
                                                                            0LL);
            if ( DataValsList )
            {
              id = (System_Collections_Generic_IEnumerable_T__o *)DataValsList->fields.list;
              v26 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v45;
                if ( !v45 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v45,
                  id,
                  (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getDataValsList(v26, 0LL);
                funcId = v26->fields.funcId;
                if ( !funcId )
                  goto LABEL_55;
                v28 = DataValsList;
                v29 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v29 >= (int)max_length )
                    break;
                  if ( v29 >= max_length )
                    goto LABEL_56;
                  if ( !v22 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v22,
                                                                                  &entity,
                                                                                  funcId->m_Items[v29 + 1],
                                                                                  (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_55;
                    DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)FuncList__isAddState(
                                                                                    (int32_t)entity->fields.age,
                                                                                    0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v28 )
                        goto LABEL_55;
                      if ( v29 >= LODWORD(v28->fields._MasterName_k__BackingField) )
                        goto LABEL_56;
                      if ( !entity )
                        goto LABEL_55;
                      v31 = (DataVals_o *)p_list[v29];
                      if ( !v31 )
                        goto LABEL_55;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v29],
                        (FunctionMaster_o *)v22,
                        (int32_t)entity->fields.age,
                        0LL);
                      if ( DataVals__isParam(v31, 26, 0LL) )
                        v32 = 26;
                      else
                        v32 = 3;
                      Param = DataVals__GetParam(v31, v32, 0, 0LL);
                      if ( DataVals__isParam(v31, 27, 0LL) )
                        v34 = 27;
                      else
                        v34 = 4;
                      v35 = DataVals__GetParam(v31, v34, 0, 0LL);
                      DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__TryGetEntity(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      &v50,
                                                                                      Param,
                                                                                      v35,
                                                                                      0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v50 )
                          goto LABEL_55;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v50->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v45,
                            id,
                            (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v26->fields.funcId;
                  ++v29;
                  if ( !funcId )
                    goto LABEL_55;
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
  v36 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v36,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v45;
  if ( !v45 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v47,
    v45,
    (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v49 = v47;
  while ( 1 )
  {
    v37 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v49,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v37 )
      break;
    if ( !v22 )
      sub_B2C434(v37, v38);
    v39 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v22,
            &v48,
            (int32_t)v49.fields._current,
            (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v39 )
    {
      if ( !v48 )
        sub_B2C434(v39, v40);
      if ( !v36 )
        sub_B2C434(v39, v40);
      System_Collections_Generic_HashSet_int___Add(
        v36,
        HIDWORD(v48->fields.emptyMessage),
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v36 )
LABEL_55:
    sub_B2C434(DataValsList, id);
  count = (unsigned int)v36->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v42 = (System_Int32_array *)sub_B2C374(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_47736232(
    v36,
    v42,
    (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
  return v42;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AB08 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17278/*"changeLimitVoiceInFriendshipLv"*/, method);
    byte_418AB08 = 1;
  }
  param = 0;
  ServantEntity__checkScript_30746348(this, (System_String_o *)StringLiteral_17278/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8

  if ( (byte_418AAF6 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_12055/*"SERVANT_UNIT"*/, v3);
    sub_B2C35C(&StringLiteral_5752/*"EXCEPT_SERVANT_UNIT"*/, v4);
    sub_B2C35C(&StringLiteral_11717/*"SERVANT_EQUIP_UNIT"*/, v5);
    byte_418AAF6 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12055/*"SERVANT_UNIT"*/;
  }
  else if ( SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11717/*"SERVANT_EQUIP_UNIT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_5752/*"EXCEPT_SERVANT_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AB13 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17937/*"defaultDeadType"*/, *(_QWORD *)&defType);
    byte_418AB13 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30746348(this, (System_String_o *)StringLiteral_17937/*"defaultDeadType"*/, &param, v3) )
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
  void *Instance; // x0
  __int64 v8; // x1
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v10; // x1
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v15; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418AB02 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418AB02 = 1;
  }
  name = 0LL;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v5) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (void *)ServantEntity__GetEventNameServantId(this, v10);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    v11 = *((_DWORD *)Instance + 6);
    v12 = Instance;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
        {
          v15 = sub_B2C460(Instance);
          sub_B2C400(v15, 0LL);
        }
        Instance = (void *)*((_QWORD *)v12 + (int)v13 + 4);
        if ( !Instance )
          break;
        Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          return 0;
      }
LABEL_16:
      sub_B2C434(Instance, v8);
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

  if ( (byte_418AB05 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418AB05 = 1;
  }
  v3 = !SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
  p_baseSvtId = (ServantEntity_Fields *)&this->fields.baseSvtId;
  p_fakeValue = &this->fields.baseSvtId.fields.fakeValue;
  if ( v3 )
    p_baseSvtId = &this->fields;
  if ( v3 )
    p_fakeValue = &this->fields.id.fields.fakeValue;
  v6 = *(_QWORD *)&p_baseSvtId->id.fields.currentCryptoKey;
  v7 = *(_QWORD *)p_fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x8

  if ( (byte_418AB09 & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, method);
    sub_B2C35C(&StringLiteral_7163/*"HideInAnimNode"*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AB09 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7163/*"HideInAnimNode"*/, v2);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x20
  struct DataMasterBase_array *datalist; // x8
  int64_t UserId; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  int64_t v13; // x19
  int32_t v14; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_418AB06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418AB06 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v8 = (UserServantCollectionMaster_o *)Instance,
        (Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                       (UserServantCollectionMaster_o *)Instance,
                                       2,
                                       0LL)) == 0LL) )
  {
    sub_B2C434(Instance, v7);
  }
  datalist = Instance->fields.datalist;
  if ( datalist )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v13 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v17, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, v13, v14, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(datalist) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return (unsigned __int8)datalist & 1;
    }
LABEL_16:
    LOBYTE(datalist) = 0;
  }
  return (unsigned __int8)datalist & 1;
}


bool __fastcall ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t EventNameServantId; // w19
  void *Instance; // x0
  __int64 v8; // x1
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w24
  char v12; // w25
  __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x23
  __int64 v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_418AB04 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AB04 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_22;
    v9 = *((_DWORD *)Instance + 6);
    v10 = Instance;
    if ( v9 >= 1 )
    {
      v11 = 0;
      v12 = 0;
      while ( 1 )
      {
        if ( v11 >= v9 )
        {
          v17 = sub_B2C460(Instance);
          sub_B2C400(v17, 0LL);
        }
        v13 = *((_QWORD *)v10 + (int)v11 + 4);
        if ( !v13 )
          break;
        v15 = *(_QWORD *)(v13 + 80);
        v14 = *(_QWORD *)(v13 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v18.fields.currentCryptoKey = v15;
        *(_QWORD *)&v18.fields.fakeValue = v14;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v13, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_20;
          v12 = 1;
        }
        v9 = *((_DWORD *)v10 + 6);
        if ( (int)++v11 >= v9 )
          return v12 & 1;
      }
LABEL_22:
      sub_B2C434(Instance, v8);
    }
  }
LABEL_20:
  v12 = 0;
  return v12 & 1;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418AB03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418AB03 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                      (UserServantCollectionMaster_o *)Instance,
                                      2,
                                      0LL);
        if ( Instance )
          return Instance->fields.datalist != 0LL;
      }
    }
LABEL_12:
    sub_B2C434(Instance, v5);
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
  __int64 v20; // x1
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v22; // x1
  int v23; // w8
  void *v24; // x20
  unsigned int v25; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v26; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x23
  __int64 v29; // x24
  ServantLimitAddMaster_o *v30; // x21
  System_String_o *OverwriteSvtDetailName; // x0
  System_String_o *v32; // x19
  WarQuestSelectionMaster_o *v33; // x0
  __int64 v34; // x23
  __int64 v35; // x24
  ServantLimitAddMaster_o *v36; // x22
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  UserServantCollectionMaster_o *v40; // x21
  int64_t UserId; // x0
  __int64 v42; // x23
  __int64 v43; // x24
  int64_t v44; // x22
  __int64 v45; // x0
  ServantLimitAddEntity_o *v46; // [xsp+8h] [xbp-58h] BYREF
  UserServantCollectionEntity_o *v47; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_418AB00 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    byte_418AB00 = 1;
  }
  name = 0LL;
  v47 = 0LL;
  entity = 0LL;
  v46 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v18) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v22);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v23 = *((_DWORD *)Instance + 6);
  v24 = Instance;
  if ( v23 < 1 )
  {
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v29 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v28 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v30 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v50.fields.currentCryptoKey = v29;
      *(_QWORD *)&v50.fields.fakeValue = v28;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50, 0LL);
      if ( !v30 )
        goto LABEL_66;
      if ( ServantLimitAddMaster__TryGetEntity(v30, &entity, (int32_t)Instance, imageLimitCount, 0LL) )
      {
        Instance = entity;
        if ( entity )
        {
          OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
          goto LABEL_42;
        }
LABEL_66:
        sub_B2C434(Instance, v20);
      }
      goto LABEL_46;
    }
    if ( maxLimitCount == -1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      v40 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v43 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v42 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v44 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v43;
      *(_QWORD *)&v52.fields.fakeValue = v42;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v52, 0LL);
      if ( !v40 )
        goto LABEL_66;
      if ( !UserServantCollectionMaster__TryGetEntity(v40, &v47, v44, (int32_t)Instance, 0LL) )
        goto LABEL_46;
      Instance = v47;
      if ( !v47 )
        goto LABEL_66;
      Instance = (void *)UserServantCollectionEntity__IsGet(v47, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_46;
      if ( !v47 )
        goto LABEL_66;
      maxLimitCount = v47->fields.maxLimitCount;
      if ( (maxLimitCount & 0x80000000) != 0 )
      {
LABEL_46:
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v26, 0LL);
        if ( System_String__IsNullOrEmpty(v38, 0LL) )
          return this->fields.nameSave;
        return v26;
      }
    }
    else if ( (maxLimitCount & 0x80000000) != 0 )
    {
      goto LABEL_46;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    v33 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    v46 = 0LL;
    v35 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v34 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v36 = (ServantLimitAddMaster_o *)v33;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v51.fields.currentCryptoKey = v35;
    *(_QWORD *)&v51.fields.fakeValue = v34;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL);
    if ( !v36 )
      goto LABEL_66;
    ServantLimitAddMaster__TryGetEntity(v36, &v46, (int32_t)Instance, maxLimitCount, 0LL);
    if ( v46 )
    {
      OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteServantName(v46, 0LL);
LABEL_42:
      v37 = OverwriteSvtDetailName;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v37, 0LL);
      goto LABEL_46;
    }
    goto LABEL_46;
  }
  v25 = 0;
  while ( 1 )
  {
    if ( v25 >= v23 )
    {
      v45 = sub_B2C460(Instance);
      sub_B2C400(v45, 0LL);
    }
    Instance = (void *)*((_QWORD *)v24 + (int)v25 + 4);
    if ( !Instance )
      goto LABEL_66;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v23 = *((_DWORD *)v24 + 6);
    if ( (int)++v25 >= v23 )
      goto LABEL_15;
  }
  v32 = name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v32, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AAF3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4018/*"ClassImageId"*/, method);
    byte_418AAF3 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30746348(this, (System_String_o *)StringLiteral_4018/*"ClassImageId"*/, &param, v2) )
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
  __int64 v9; // x8
  System_Int32_array_array *v10; // x20
  unsigned __int64 v11; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v13; // x21
  __int64 v14; // x1
  __int64 v16; // x0

  if ( (byte_418AB07 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, *(_QWORD *)&baseSkillId);
    sub_B2C35C(&int___TypeInfo, v5);
    sub_B2C35C(&Method_ServantEntity_GetScriptMultiArray_int___, v6);
    sub_B2C35C(&StringLiteral_12890/*"SkillRankUp"*/, v7);
    byte_418AB07 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12890/*"SkillRankUp"*/,
                           (const MethodInfo_2099EE4 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v9 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v10 = ScriptMultiArray_int;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v11 < (unsigned int)v9 )
      {
        v13 = m_Items[v11];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v13,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v13;
        LODWORD(v9) = v10->max_length;
        if ( (__int64)++v11 >= (int)v9 )
          goto LABEL_9;
      }
LABEL_13:
      v16 = sub_B2C460(ScriptMultiArray_int);
      sub_B2C400(v16, 0LL);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_B2C434(0LL, v14);
  v13 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v13;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Empty; // x20
  const MethodInfo *v8; // x1
  void *Instance; // x0
  __int64 v10; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x22
  __int64 v13; // x23
  EventServantMaster_o *v14; // x21
  int v15; // w8
  _DWORD *v16; // x21
  unsigned int v17; // w23
  char *v18; // x8
  EventServantEntity_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  __int64 v22; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_418AB01 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    byte_418AB01 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___);
    v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v14 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v13;
    *(_QWORD *)&v24.fields.fakeValue = v12;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
    if ( !v14 || (Instance = EventServantMaster__GetEntities(v14, (int32_t)Instance, 0LL)) == 0LL )
LABEL_25:
      sub_B2C434(Instance, v10);
    v15 = *((_DWORD *)Instance + 6);
    v16 = Instance;
    if ( v15 >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= v15 )
        {
          v22 = sub_B2C460(Instance);
          sub_B2C400(v22, 0LL);
        }
        v18 = (char *)&v16[2 * v17];
        v19 = (EventServantEntity_o *)*((_QWORD *)v18 + 4);
        if ( !v19 )
          goto LABEL_25;
        Instance = (void *)EventServantEntity__TryGetName(*((EventServantEntity_o **)v18 + 4), &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_19;
      }
      Empty = EventServantEntity__GetRuby(v19, 0LL);
    }
  }
LABEL_19:
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    ruby = this->fields.ruby;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(ruby, 0LL);
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
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_mergedScript; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x22
  __int64 v24; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x21
  struct System_String_o *name; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **v42; // x21
  System_Collections_Generic_IEnumerable_T__o *v43; // x20
  System_Action_KeyValuePair_string__object___o *v44; // x23
  __int64 v45; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_418AAEC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_KeyValuePair_string__object____ctor__, method);
    sub_B2C35C(&System_Action_KeyValuePair_string__object___TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantAddMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_ServantEntity___c__DisplayClass93_0__GetScript_b__0__, v18);
    sub_B2C35C(&ServantEntity___c__DisplayClass93_0_TypeInfo, v19);
    byte_418AAEC = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  p_mergedScript = &this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantAddMaster___);
    v24 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v24;
    *(_QWORD *)&v49.fields.fakeValue = v23;
    name = (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v49, 0LL);
    if ( v25 )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v25,
              &entity,
              (int32_t)name,
              (const MethodInfo_24E412C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        script = this->fields.script;
        this->fields.mergedScript = script;
LABEL_21:
        sub_B2C2F8(
          (BattleServantConfConponent_o *)p_mergedScript,
          (System_Int32_array **)script,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        return *p_mergedScript;
      }
      v34 = sub_B2C42C(ServantEntity___c__DisplayClass93_0_TypeInfo);
      ServantEntity___c__DisplayClass93_0___ctor((ServantEntity___c__DisplayClass93_0_o *)v34, 0LL);
      v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v35,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v34 )
      {
        *(_QWORD *)(v34 + 16) = v35;
        v42 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v34 + 16);
        sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
        v43 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v44 = (System_Action_KeyValuePair_string__object___o *)sub_B2C42C(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_string__object_____ctor(
          v44,
          (Il2CppObject *)v34,
          Method_ServantEntity___c__DisplayClass93_0__GetScript_b__0__,
          (const MethodInfo_24B6BCC *)Method_System_Action_KeyValuePair_string__object____ctor__);
        BasicHelper__ForEach_KeyValuePair_string__object__(
          v43,
          (System_Action_T__o *)v44,
          (const MethodInfo_17270DC *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          name = entity->fields.name;
          if ( name )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              &v47,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)name,
              (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v47,
                      (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*v42 )
                sub_B2C434(0LL, v45);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                *v42,
                (System_Xml_XmlQualifiedName_o *)v47.fields.current.fields.key,
                (System_Xml_Schema_XmlSchemaObject_o *)v47.fields.current.fields.value,
                (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v47,
              (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            script = (struct System_Collections_Generic_Dictionary_string__object__o *)*v42;
            *p_mergedScript = (struct System_Collections_Generic_Dictionary_string__object__o *)*v42;
            goto LABEL_21;
          }
        }
      }
    }
    sub_B2C434(name, v27);
  }
  return result;
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2099EE4 *method)
{
  ServantEntity_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double v9; // q0

  v5 = this;
  if ( (byte_418D1D6 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, key);
    this = (ServantEntity_o *)sub_B2C35C(&string_TypeInfo, v6);
    byte_418D1D6 = 1;
  }
  if ( !v5 )
    sub_B2C434(this, key);
  ScriptValue = ServantEntity__GetScriptValue(v5, key, 0LL);
  v8 = (System_String_o *)sub_B2C41C(ScriptValue, string_TypeInfo);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    return 0LL;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (System_Int32_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                       v8,
                                       v9);
}


System_Object_array_array *__fastcall ServantEntity__GetScriptMultiArray_object_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2099FB8 *method)
{
  ServantEntity_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double v9; // q0

  v5 = this;
  if ( (byte_418D1D7 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, key);
    this = (ServantEntity_o *)sub_B2C35C(&string_TypeInfo, v6);
    byte_418D1D7 = 1;
  }
  if ( !v5 )
    sub_B2C434(this, key);
  ScriptValue = ServantEntity__GetScriptValue(v5, key, 0LL);
  v8 = (System_String_o *)sub_B2C41C(ScriptValue, string_TypeInfo);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
    return 0LL;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    *(__n128 *)&v9 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (System_Object_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                        v8,
                                        v9);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418AAED & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_418AAED = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
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
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v13; // x0
  SkillInfo_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  SkillInfo_c **v21; // x24
  __int64 v22; // x25
  __int64 v23; // x27
  __int64 v24; // x26
  SkillInfo_o *v25; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v27; // x1
  SkillInfo_c **v28; // x28
  __int64 v29; // x23
  __int64 v30; // x24
  SkillInfo_array *v31; // x23
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_418AB16 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&SkillInfo___TypeInfo, v10);
    sub_B2C35C(&SkillInfo_TypeInfo, v11);
    byte_418AB16 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v13 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v13 = BalanceConfig_TypeInfo;
    }
    skillListNum = v13->static_fields->SvtSkillListMax;
  }
  v14 = (SkillInfo_array *)sub_B2C374(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  if ( skillListNum >= 1 )
  {
    v21 = &SkillInfo_TypeInfo;
    v22 = skillListNum;
    v23 = 4LL;
    v24 = 32LL;
    do
    {
      v25 = (SkillInfo_o *)sub_B2C42C(*v21);
      SkillInfo___ctor(v25, 0LL);
      if ( !v25 )
LABEL_26:
        sub_B2C434(IsServantEquip, v27);
      v25->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v28 = v21;
        v30 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v29 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = v30;
        *(_QWORD *)&v42.fields.fakeValue = v29;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v42,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_26;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)IsServantEquip,
                           (int)v23 - 3,
                           0LL);
        v21 = v28;
        if ( IsServantEquip )
        {
          v25->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v25->fields.title,
            &v25->fields.explanation,
            0LL);
        }
      }
      v31 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_26;
      v32 = sub_B2C41C(v25, v31->obj.klass->_1.element_class);
      if ( !v32 )
      {
        v41 = sub_B2C454(0LL);
        sub_B2C400(v41, 0LL);
      }
      if ( v23 - 4 >= (unsigned __int64)v31->max_length )
      {
        v40 = sub_B2C460(v32);
        sub_B2C400(v40, 0LL);
      }
      *((_QWORD *)&v31->obj.klass + v23) = v25;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)v31 + v24),
        (System_Int32_array **)v25,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v39 = v23 - 3;
      ++v23;
      v24 += 8LL;
    }
    while ( v39 < v22 );
  }
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  ServantTreasureDvcMaster_o *v23; // x19
  TreasureDvcLvMaster_o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v27; // x20
  TreasureDvcLvEntity_o *v28; // x0
  TreasureDvcLvEntity_o *v29; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x19
  SkillLvMaster_o *v31; // x23
  System_Collections_Generic_HashSet_int__o *v32; // x27
  struct System_Int32_array *funcId; // x8
  TreasureDvcLvMaster_o *v34; // x24
  unsigned __int64 v35; // x20
  unsigned __int64 max_length; // x9
  DataVals_o *v37; // x25
  int32_t v38; // w1
  int32_t Param; // w26
  int32_t v40; // w1
  System_Collections_Generic_IEnumerable_T__o *v41; // x1
  System_Collections_Generic_HashSet_int__o *v42; // x22
  int32_t v43; // w26
  int32_t v44; // w27
  void *v45; // x8
  System_Collections_Generic_HashSet_int__o *v46; // x20
  _BOOL8 v47; // x0
  __int64 v48; // x1
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 count; // x1
  __int64 v53; // x0
  TreasureDvcLvMaster_o *v54; // [xsp+0h] [xbp-C0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v56; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v57; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v58; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v59; // [xsp+50h] [xbp-70h] BYREF
  TreasureDvcLvEntity_o *v60; // [xsp+58h] [xbp-68h] BYREF
  SkillLvEntity_o *v61; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_418AB15 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_B2C35C(&int___TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    byte_418AB15 = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v59 = 0LL;
  v57 = 0LL;
  memset(&v58, 0, sizeof(v58));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v22;
  *(_QWORD *)&v63.fields.fakeValue = v21;
  DataValsList = (TreasureDvcLvMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v63, 0LL);
  if ( !v23 )
    goto LABEL_55;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v23,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_55;
    v27 = DataValsList;
    v28 = TreasureDvcLvMaster__GetEntity(DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v28 )
      return 0LL;
    v29 = v28;
    if ( !v28->fields.funcId )
      return 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v54 = v27;
    v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
    v31 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
    v32 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v32,
      (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
    if ( !v32 )
      goto LABEL_55;
    System_Collections_Generic_HashSet_int___UnionWith(
      v32,
      (System_Collections_Generic_IEnumerable_T__o *)v29->fields.funcId,
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvEntity__getDataValsList(v29, 100, 0LL);
    funcId = v29->fields.funcId;
    if ( !funcId )
      goto LABEL_55;
    p_list = &DataValsList->fields.list;
    v34 = DataValsList;
    v35 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v35 >= (int)max_length )
      {
        v46 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v46,
          (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v56,
          v32,
          (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v58 = v56;
        while ( 1 )
        {
          v47 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v58,
                  (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v47 )
            break;
          if ( !v30 )
            sub_B2C434(v47, v48);
          v49 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v30,
                  &v57,
                  (int32_t)v58.fields._current,
                  (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v49 )
          {
            if ( !v57 )
              sub_B2C434(v49, v50);
            if ( !v46 )
              sub_B2C434(v49, v50);
            System_Collections_Generic_HashSet_int___Add(
              v46,
              HIDWORD(v57->fields.emptyMessage),
              (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v58,
          (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v46 )
        {
          count = (unsigned int)v46->fields._count;
          if ( (int)count >= 1 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_B2C374(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_47736232(
              v46,
              EntityFromSvtIdOnly,
              (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_55:
        sub_B2C434(DataValsList, v25);
      }
      if ( v35 >= max_length )
        goto LABEL_68;
      if ( !v30 )
        goto LABEL_55;
      DataValsList = (TreasureDvcLvMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                v30,
                                                &entity,
                                                funcId->m_Items[v35 + 1],
                                                (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_55;
        DataValsList = (TreasureDvcLvMaster_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v34 )
            goto LABEL_55;
          if ( v35 >= LODWORD(v34->fields._MasterName_k__BackingField) )
          {
LABEL_68:
            v53 = sub_B2C460(DataValsList);
            sub_B2C400(v53, 0LL);
          }
          if ( !entity )
            goto LABEL_55;
          v37 = (DataVals_o *)p_list[v35];
          if ( !v37 )
            goto LABEL_55;
          DataVals__SetTempType((DataVals_o *)p_list[v35], (FunctionMaster_o *)v30, (int32_t)entity->fields.age, 0LL);
          v38 = DataVals__isParam(v37, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v37, v38, 0, 0LL);
          v40 = DataVals__isParam(v37, 27, 0LL) ? 27 : 4;
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__GetParam(v37, v40, 0, 0LL);
          if ( !v31 )
            goto LABEL_55;
          DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(
                                                    v31,
                                                    &v61,
                                                    Param,
                                                    (int32_t)DataValsList,
                                                    0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v61 )
              goto LABEL_55;
            v41 = (System_Collections_Generic_IEnumerable_T__o *)v61->fields.funcId;
            if ( v41 )
              System_Collections_Generic_HashSet_int___UnionWith(
                v32,
                v41,
                (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
          }
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v37, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v37, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v42 = v32;
              v43 = DataVals__GetParam(v37, 92, 0, 0LL);
              v44 = DataVals__GetParam(v37, 93, 0, 0LL);
              if ( DataVals__isParam(v37, 95, 0LL) )
              {
                DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvMaster__TryGetEntity(v54, &v60, v43, v44, 0LL);
                v32 = v42;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v45 = v60;
                  if ( !v60 )
                    goto LABEL_55;
LABEL_52:
                  v25 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v45 + 4);
                  if ( v25 )
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v32,
                      v25,
                      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                }
              }
              else
              {
                DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(v31, &v59, v43, v44, 0LL);
                v32 = v42;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v45 = v59;
                  if ( !v59 )
                    goto LABEL_55;
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
      funcId = v29->fields.funcId;
      ++v35;
      if ( !funcId )
        goto LABEL_55;
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
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x8
  ServantChangeMaster_o *v12; // x19
  ServantChangeEntity_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_418AAFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AAFF = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v6;
  *(_QWORD *)&v15.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v12 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster,
        *(_QWORD *)&v16.fields.currentCryptoKey = v11,
        Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL),
        !v12) )
  {
    sub_B2C434(Instance, v9);
  }
  v13 = ServantChangeMaster__TrueNameEntity(v12, (int32_t)Instance, 0LL);
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
  __int64 v7; // x9

  if ( (byte_418AB0A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16262/*"additionExpandImage"*/, *(_QWORD *)&limitCount);
    byte_418AB0A = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16262/*"additionExpandImage"*/, method);
  if ( ScriptIntArrayParam )
  {
    v6 = *(_QWORD *)&ScriptIntArrayParam->max_length;
    if ( v6 && (int)v6 >= 1 )
    {
      v7 = 0LL;
      while ( ScriptIntArrayParam->m_Items[v7 + 1] != limitCount )
      {
        if ( (int)++v7 >= (int)v6 )
          goto LABEL_9;
      }
      LOBYTE(ScriptIntArrayParam) = 1;
    }
    else
    {
LABEL_9:
      LOBYTE(ScriptIntArrayParam) = 0;
    }
  }
  return (char)ScriptIntArrayParam;
}


bool __fastcall ServantEntity__IsBeast(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_418AB12 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v4);
    byte_418AB12 = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 5LL);
  v7.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418AB0C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17493/*"coinRoomCheck"*/, method);
    byte_418AB0C = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17493/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_418AB10 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v4);
    byte_418AB10 = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v7.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  const MethodInfo *v6; // x1
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_418AB11 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v4);
    byte_418AB11 = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 4LL);
  v8.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeast(this, v6);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_418AB0F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v4);
    byte_418AB0F = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 8LL);
  v7.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
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
  int32_t LimitCountByDispLimit; // w0
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w21
  int32_t v17; // w22
  System_Int32_array *IndividualityList; // x0
  int v19; // w8
  __int64 v20; // x9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  ServantLimitAddMaster_o *v24; // x20
  __int64 v25; // x1
  struct System_Int32_array *v26; // x10
  int max_length; // w8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v31; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_418AAE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v12);
    byte_418AAE9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v15;
  *(_QWORD *)&v33.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v17, v16, 0LL);
  if ( !IndividualityList && (IndividualityList = this->fields.individuality) == 0LL
    || (v19 = IndividualityList->max_length, v19 < 1) )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v24 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v23;
    *(_QWORD *)&v34.fields.fakeValue = v22;
    IndividualityList = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                v34,
                                                0LL);
    if ( v24 )
    {
      IndividualityList = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(
                                                  v24,
                                                  &entity,
                                                  (int32_t)IndividualityList,
                                                  v16,
                                                  0LL);
      if ( ((unsigned __int8)IndividualityList & 1) == 0 )
        return 0;
      if ( entity )
      {
        v26 = entity->fields.individuality;
        if ( v26 )
        {
          max_length = v26->max_length;
          if ( max_length >= 1 )
          {
            v28 = 0LL;
            v29 = &v26->m_Items[1];
            while ( (unsigned int)v28 < max_length )
            {
              if ( v29[v28] == individuality )
                return 1;
              if ( (int)++v28 >= max_length )
                return 0;
            }
LABEL_37:
            v31 = sub_B2C460(IndividualityList);
            sub_B2C400(v31, 0LL);
          }
        }
        return 0;
      }
    }
    sub_B2C434(IndividualityList, v25);
  }
  v20 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v20 >= v19 )
      goto LABEL_37;
    if ( IndividualityList->m_Items[v20 + 1] == individuality )
      return 1;
    if ( (int)++v20 >= v19 )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality_30743904(
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
  int32_t LimitCountByDispLimit; // w0
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w21
  int32_t v17; // w22
  System_Int32_array *individuality; // x0
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x8
  signed int max_length; // w12
  __int64 v22; // x14
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x22
  __int64 v25; // x23
  ServantLimitAddMaster_o *v26; // x20
  __int64 v27; // x1
  struct System_Int32_array *v28; // x8
  unsigned __int64 v29; // x10
  unsigned __int64 v30; // x9
  signed int v31; // w13
  __int64 v32; // x15
  __int64 v33; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_418AAEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v12);
    byte_418AAEA = 1;
  }
  entity = 0LL;
  if ( !individualityList || !*(_QWORD *)&individualityList->max_length )
  {
LABEL_45:
    LOBYTE(individuality) = 1;
    return (char)individuality;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v15;
  *(_QWORD *)&v36.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  individuality = ServantIndividualityMaster__GetIndividualityList(v17, v16, 0LL);
  if ( (individuality || (individuality = this->fields.individuality) != 0LL)
    && (int)*(_QWORD *)&individuality->max_length >= 1 )
  {
    v19 = (unsigned int)*(_QWORD *)&individuality->max_length;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= v19 )
        goto LABEL_48;
      max_length = individualityList->max_length;
      if ( max_length >= 1 )
        break;
LABEL_24:
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_25;
    }
    v22 = 0LL;
    while ( (unsigned int)v22 < max_length )
    {
      if ( individuality->m_Items[v20 + 1] == individualityList->m_Items[v22 + 1] )
        goto LABEL_45;
      if ( (int)++v22 >= max_length )
        goto LABEL_24;
    }
LABEL_48:
    v33 = sub_B2C460(individuality);
    sub_B2C400(v33, 0LL);
  }
LABEL_25:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v25 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v26 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v25;
  *(_QWORD *)&v37.fields.fakeValue = v24;
  individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
  if ( !v26 )
    goto LABEL_49;
  individuality = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(
                                          v26,
                                          &entity,
                                          (int32_t)individuality,
                                          v16,
                                          0LL);
  if ( ((unsigned __int8)individuality & 1) != 0 )
  {
    if ( entity )
    {
      v28 = entity->fields.individuality;
      if ( v28 && (int)*(_QWORD *)&v28->max_length >= 1 )
      {
        v29 = (unsigned int)*(_QWORD *)&v28->max_length;
        v30 = 0LL;
        while ( 1 )
        {
          if ( v30 >= v29 )
            goto LABEL_48;
          v31 = individualityList->max_length;
          if ( v31 >= 1 )
            break;
LABEL_43:
          ++v30;
          individuality = 0LL;
          if ( (__int64)v30 >= (int)v29 )
            return (char)individuality;
        }
        v32 = 0LL;
        while ( (unsigned int)v32 < v31 )
        {
          if ( v28->m_Items[v30 + 1] == individualityList->m_Items[v32 + 1] )
            goto LABEL_45;
          if ( (int)++v32 >= v31 )
            goto LABEL_43;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
LABEL_49:
    sub_B2C434(individuality, v27);
  }
LABEL_47:
  LOBYTE(individuality) = 0;
  return (char)individuality;
}


bool __fastcall ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  ServantChangeMaster_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_418AAFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AAFE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( !v10 || (Instance = (DataManager_o *)ServantChangeMaster__GetEntityList(v10, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B2C434(Instance, v6);
  return Instance->fields.datalist != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  ServantChangeMaster_o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_418AAFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AAFC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
  if ( !v10 )
LABEL_9:
    sub_B2C434(Instance, v6);
  return ServantChangeMaster__IsNameTrue(v10, (int32_t)Instance, 0LL);
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantChangeMaster_o *v10; // x20
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  ServantChangeEntity_o *v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_418AAFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418AAFD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v9;
  *(_QWORD *)&v15.fields.fakeValue = v8;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v15, 0LL);
  if ( !v10 )
LABEL_12:
    sub_B2C434(Instance, v6);
  v11 = ServantChangeMaster__TrueNameEntity(v10, (int32_t)Instance, 0LL);
  if ( v11 && (v13 = v11, ServantChangeEntity__IsEnable(v11, 0LL)) )
    return ServantChangeEntity__HasFlag(v13, 8, 0LL);
  else
    return ServantEntity__IsNameTrue(this, v12);
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418AB0D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22459/*"svtBuffTurnExtend"*/, method);
    byte_418AB0D = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22459/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_418AB0E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v4);
    byte_418AB0E = 1;
  }
  v5 = (System_Array_o *)sub_B2C374(int___TypeInfo, 6LL);
  v7.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall ServantEntity__SetName(
        ServantEntity_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.nameSave = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nameSave,
    (System_Int32_array **)name,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_418AAEE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_418AAEE = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_30746348(
        ServantEntity_o *this,
        System_String_o *key,
        int32_t *param,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  int32_t v8; // w8
  ServantEntity_o *v9; // x0
  System_String_o *v10; // x1
  float *v11; // x2
  const MethodInfo *v12; // x3
  long double v13; // q0

  if ( (byte_418AAEF & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_418AAEF = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v13 = sub_B2C728(ScriptValue);
      LOBYTE(ScriptValue) = ServantEntity__checkScript_30746500(v9, v10, v11, *(float *)&v13, v12);
      return (char)ScriptValue;
    }
    v8 = *(_DWORD *)j_il2cpp_object_unbox_0(ScriptValue);
    LOBYTE(ScriptValue) = 1;
  }
  else
  {
    v8 = 0;
  }
  *param = v8;
  return (char)ScriptValue;
}


bool __fastcall ServantEntity__checkScript_30746500(
        ServantEntity_o *this,
        System_String_o *key,
        float *param,
        float denominator,
        const MethodInfo *method)
{
  Il2CppObject *ScriptValue; // x0
  __int64 v10; // x8
  float v11; // s0
  ServantEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_418AAF0 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_418AAF0 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B2C728(ScriptValue);
      LOBYTE(ScriptValue) = ServantEntity__getDressId(v12, v13);
      return (char)ScriptValue;
    }
    v10 = *(_QWORD *)j_il2cpp_object_unbox_0(ScriptValue);
    LOBYTE(ScriptValue) = 1;
    v11 = (float)v10 / denominator;
  }
  else
  {
    v11 = 0.0;
  }
  *param = v11;
  return (char)ScriptValue;
}


bool __fastcall ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418AAF4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16648/*"battleHeight"*/, height);
    byte_418AAF4 = 1;
  }
  return ServantEntity__checkScript_30746500(this, (System_String_o *)StringLiteral_16648/*"battleHeight"*/, height, 1000.0, v3);
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
  void *Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  EventServantMaster_o *v21; // x22
  int v22; // w8
  void *v23; // x22
  unsigned int v24; // w23
  WarQuestSelectionMaster_o *v25; // x0
  __int64 v26; // x22
  __int64 v27; // x23
  ServantChangeMaster_o *v28; // x21
  ServantChangeEntity_o *v29; // x0
  ServantChangeEntity_o *v30; // x21
  WarQuestSelectionMaster_o *v32; // x0
  __int64 v33; // x22
  __int64 v34; // x23
  ServantLimitAddMaster_o *v35; // x21
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x20
  System_String_o *v38; // x0
  WarQuestSelectionMaster_o *v39; // x0
  __int64 v40; // x21
  __int64 v41; // x22
  ServantChangeMaster_o *v42; // x20
  ServantChangeEntity_o *v43; // x0
  __int64 v44; // x0
  ServantLimitAddEntity_o *v45; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_418AAFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418AAFB = 1;
  }
  entity = 0LL;
  battleName = 0LL;
  v45 = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v15) )
  {
    goto LABEL_17;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventServantMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v20;
  *(_QWORD *)&v48.fields.fakeValue = v19;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
  if ( !v21 )
    goto LABEL_54;
  Instance = EventServantMaster__GetEntities(v21, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_54;
  v22 = *((_DWORD *)Instance + 6);
  v23 = Instance;
  if ( v22 < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_29;
LABEL_17:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    v25 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v27 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v26 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v28 = (ServantChangeMaster_o *)v25;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v27;
    *(_QWORD *)&v49.fields.fakeValue = v26;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v49, 0LL);
    if ( !v28 )
      goto LABEL_54;
    v29 = ServantChangeMaster__TrueNameEntity(v28, (int32_t)Instance, 0LL);
    if ( !v29 )
      goto LABEL_29;
    v30 = v29;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &entity,
                         v30->fields.svtId,
                         (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return entity->fields.emptyMessage;
    }
    else
    {
LABEL_29:
      if ( (limitCount & 0x80000000) == 0 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        v32 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v45 = 0LL;
        v34 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v33 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v35 = (ServantLimitAddMaster_o *)v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v50.fields.currentCryptoKey = v34;
        *(_QWORD *)&v50.fields.fakeValue = v33;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50, 0LL);
        if ( !v35 )
          goto LABEL_54;
        ServantLimitAddMaster__TryGetEntity(v35, &v45, (int32_t)Instance, limitCount, 0LL);
        if ( v45 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v45, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v37, 0LL);
          if ( !System_String__IsNullOrEmpty(v38, 0LL) )
          {
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            }
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v37, 0LL);
          }
        }
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v39 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v41 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v40 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v42 = (ServantChangeMaster_o *)v39;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v51.fields.currentCryptoKey = v41;
        *(_QWORD *)&v51.fields.fakeValue = v40;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL);
        if ( v42 )
        {
          v43 = ServantChangeMaster__GetEnableEntity(v42, (int32_t)Instance, 0LL);
          if ( v43 )
            return v43->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_54:
    sub_B2C434(Instance, v17);
  }
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= v22 )
    {
      v44 = sub_B2C460(Instance);
      sub_B2C400(v44, 0LL);
    }
    Instance = (void *)*((_QWORD *)v23 + (int)v24 + 4);
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)EventServantEntity__TryGetBattleName((EventServantEntity_o *)Instance, &battleName, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    v22 = *((_DWORD *)v23 + 6);
    if ( (int)++v24 >= v22 )
      goto LABEL_17;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AAF2 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17182/*"cameraActionId"*/, method);
    byte_418AAF2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30746348(this, (System_String_o *)StringLiteral_17182/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **p_age; // x20
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418AAE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418AAE7 = 1;
  }
  entity = 0LL;
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v8);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_24E412C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( entity )
      p_age = &entity->fields.age;
  }
  return *p_age;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Int32_array *classPassive; // x8
  int max_length; // w24
  BalanceConfig_c *v15; // x0
  System_Int32_array *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  DataManager_o *Instance; // x0
  __int64 v38; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x23
  __int64 v40; // x25
  __int64 v41; // x26
  __int64 i; // x27
  struct System_Int32_array *v43; // x8
  unsigned __int64 v44; // x19
  int32_t v45; // w24
  System_Int32_array *v46; // x8
  System_String_array *v47; // x8
  System_String_array *v48; // x9
  __int64 v49; // x8
  __int64 v50; // x0

  if ( (byte_418AAEB & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&string___TypeInfo, v12);
    byte_418AAEB = 1;
  }
  classPassive = this->fields.classPassive;
  if ( classPassive )
    max_length = classPassive->max_length;
  else
    max_length = 0;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  *idList = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)idList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_String_array *)sub_B2C374(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_String_array *)sub_B2C374(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v40 = max_length;
    v41 = 32LL;
    for ( i = 8LL; ; ++i )
    {
      v43 = this->fields.classPassive;
      if ( !v43 )
        break;
      v44 = i - 8;
      if ( i - 8 >= (unsigned __int64)v43->max_length )
        goto LABEL_26;
      if ( !v39 )
        break;
      v45 = *((_DWORD *)&v43->obj.klass + i);
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v39,
                                    v45,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v46 = *idList;
      if ( !*idList )
        break;
      if ( v44 >= v46->max_length )
        goto LABEL_26;
      *((_DWORD *)&v46->obj.klass + i) = v45;
      if ( Instance )
      {
        v47 = *titleList;
        if ( !*titleList )
          break;
        v48 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v44 >= v47->max_length || v44 >= v48->max_length )
        {
LABEL_26:
          v50 = sub_B2C460(Instance);
          sub_B2C400(v50, 0LL);
        }
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v47 + v41),
          (System_String_o **)((char *)v48 + v41),
          0,
          0LL);
      }
      v49 = i - 7;
      v41 += 8LL;
      if ( v49 >= v40 )
        return;
    }
LABEL_25:
    sub_B2C434(Instance, v38);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418AAF1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22624/*"tdTransform"*/, method);
    byte_418AAF1 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30746348(this, (System_String_o *)StringLiteral_22624/*"tdTransform"*/, &param, v2) )
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
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  ServantChangeMaster_o *v13; // x21
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_418AAF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418AAF9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL);
  if ( !v13 )
LABEL_14:
    sub_B2C434(Instance, v9);
  v14 = ServantChangeMaster__GetHiddenEntity(v13, (int32_t)Instance, 0LL);
  if ( v14 )
    return v14->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v15);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(Name, 0LL);
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
  int32_t v16; // w20
  System_Int32_array *IndividualityList; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  ServantLimitAddMaster_o *v21; // x22
  struct System_Int32_array *v22; // x0
  __int64 v23; // x1
  System_Array_o *individuality; // x21
  void *monitor; // x8
  __int64 v26; // x9
  struct System_Int32_array *v27; // x0
  struct System_Int32_array **p_individuality; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_418AAE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v11);
    byte_418AAE8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v14;
  *(_QWORD *)&v37.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v37, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v16, v15, 0LL);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v20;
  *(_QWORD *)&v38.fields.fakeValue = v19;
  v22 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v38, 0LL);
  if ( !v21 )
    goto LABEL_33;
  v22 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v21, &entity, (int32_t)v22, v15, 0LL);
  if ( ((unsigned __int8)v22 & 1) == 0 )
    goto LABEL_30;
  if ( !entity )
    goto LABEL_33;
  individuality = (System_Array_o *)entity->fields.individuality;
  if ( individuality && (monitor = individuality[1].monitor) != 0LL )
  {
    if ( IndividualityList )
    {
      v26 = *(_QWORD *)&IndividualityList->max_length;
      if ( v26 )
      {
        individuality = (System_Array_o *)sub_B2C374(int___TypeInfo, (unsigned int)(v26 + (_DWORD)monitor));
        System_Array__CopyTo((System_Array_o *)IndividualityList, individuality, 0, 0LL);
        if ( entity )
        {
          v22 = entity->fields.individuality;
          if ( v22 )
          {
            System_Array__CopyTo((System_Array_o *)v22, individuality, IndividualityList->max_length, 0LL);
            return (System_Int32_array *)individuality;
          }
        }
LABEL_33:
        sub_B2C434(v22, v23);
      }
    }
  }
  else
  {
LABEL_30:
    individuality = (System_Array_o *)IndividualityList;
    if ( !IndividualityList )
    {
      v27 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
      this->fields.individuality = v27;
      p_individuality = &this->fields.individuality;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)p_individuality,
        (System_Int32_array **)v27,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      return *p_individuality;
    }
  }
  return (System_Int32_array *)individuality;
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
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantChangeMaster_o *v15; // x22
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_418AAF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418AAF7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
  if ( !v15 )
LABEL_14:
    sub_B2C434(Instance, v11);
  v16 = ServantChangeMaster__GetEnableEntity(v15, (int32_t)Instance, 0LL);
  if ( v16 )
    return v16->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, v17);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_30749432(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantChangeMaster_o *v15; // x22
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x1
  ServantChangeEntity_o *v25; // x22
  System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_418AAFA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418AAFA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v15 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v14;
  *(_QWORD *)&v36.fields.fakeValue = v13;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
  if ( !v15 )
LABEL_14:
    sub_B2C434(Instance, v11);
  v16 = ServantChangeMaster__GetEnableEntity(v15, (int32_t)Instance, 0LL);
  if ( v16 )
  {
    v24 = v16->fields.ruby;
    v25 = v16;
    *ruby = v24;
    sub_B2C2F8((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v24, v18, v19, v20, v21, v22, v23);
    return v25->fields.name;
  }
  else
  {
    v27 = ServantEntity__GetRuby(this, v17);
    *ruby = v27;
    sub_B2C2F8((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, v34);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(Name, 0LL);
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
  __int64 v10; // x1
  System_Int32_array *result; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v12; // x19
  __int64 v13; // x9
  ServantEntity___c_c *v14; // x0
  struct ServantEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__127_0; // x20
  Il2CppObject *v17; // x21
  struct ServantEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1

  if ( (byte_418AB0B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, key);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B2C35C(&Method_ServantEntity___c__getScriptIntArrayParam_b__127_0__, v9);
    sub_B2C35C(&ServantEntity___c_TypeInfo, v10);
    byte_418AB0B = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v12 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
    v13 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v13
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[v13 - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v14 = ServantEntity___c_TypeInfo;
      if ( (BYTE3(ServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v14 = ServantEntity___c_TypeInfo;
      }
      static_fields = v14->static_fields;
      _9__127_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__127_0;
      if ( !_9__127_0 )
      {
        if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          static_fields = ServantEntity___c_TypeInfo->static_fields;
        }
        v17 = (Il2CppObject *)static_fields->__9;
        _9__127_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__127_0,
          v17,
          Method_ServantEntity___c__getScriptIntArrayParam_b__127_0__,
          (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
        v18 = ServantEntity___c_TypeInfo->static_fields;
        v18->__9__127_0 = (struct System_Converter_object__int__o *)_9__127_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v18->__9__127_0,
          (System_Int32_array **)_9__127_0,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
      }
      v25 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                        v12,
                                                        (System_Converter_T__TOutput__o *)_9__127_0,
                                                        (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v25 )
        return System_Collections_Generic_List_int___ToArray(
                 v25,
                 (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_B2C728(result);
    }
    sub_B2C434(v25, v26);
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

  if ( (byte_418AAF8 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
    byte_418AAF8 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(Name, 0LL);
}


bool __fastcall ServantEntity__get_IsAllClass(ServantEntity_o *this, const MethodInfo *method)
{
  return SvtType__IsAll(this->fields.classId, 0LL);
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

  if ( (byte_418AAF5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19889/*"invalidSkillShift"*/, method);
    byte_418AAF5 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_19889/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantEntity___c_StaticFields *static_fields; // x0

  if ( (byte_41853E0 & 1) == 0 )
  {
    sub_B2C35C(&ServantEntity___c_TypeInfo, v1);
    byte_41853E0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantEntity___c___ctor(ServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantEntity___c___getScriptIntArrayParam_b__127_0(
        ServantEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_B2C434(this, 0LL);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                            x,
                            x->klass->vtable[4].methodPtr,
                            method);
  return System_Int32__Parse(v3, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass93_0___ctor(
        ServantEntity___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass93_0___GetScript_b__0(
        ServantEntity___c__DisplayClass93_0_o *this,
        System_Collections_Generic_KeyValuePair_string__object__o x,
        const MethodInfo *method)
{
  Il2CppObject *value; // x19
  struct System_String_o *key; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_41853E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v7);
    byte_41853E1 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_B2C434(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
    (System_Xml_XmlQualifiedName_o *)key,
    (System_Xml_Schema_XmlSchemaObject_o *)value,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}