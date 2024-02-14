void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42174E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_42174E4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42174B2 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42174B2 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42174E0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16550/*"assumedEffectId"*/, method);
    byte_42174E0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16550/*"assumedEffectId"*/, 0LL);
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
  __int64 lv; // x2
  __int64 v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x20
  unsigned __int64 v24; // x27
  SkillInfo_o *v25; // x8
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
  _BOOL8 v38; // x0
  __int64 count; // x1
  System_Int32_array *v40; // x20
  __int64 v42; // x0
  System_Collections_Generic_HashSet_int__o *v43; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v45; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v46; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v48; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42174E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__CopyTo___67861336, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B0D8A4(&int___TypeInfo, v17);
    byte_42174E3 = 1;
  }
  v48 = 0LL;
  entity = 0LL;
  v46 = 0LL;
  memset(&v47, 0, sizeof(v47));
  v43 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v43,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v22 = *(_QWORD *)&enableSkillInfoList->max_length;
  v23 = DataValsList;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v22 )
      {
LABEL_56:
        v42 = sub_B0D9A8(DataValsList);
        sub_B0D948(v42, 0LL);
      }
      v25 = enableSkillInfoList->m_Items[v24];
      if ( v25 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v25->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v25->fields.lv;
          if ( (int)lv >= 1 )
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
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v43;
                if ( !v43 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v43,
                  id,
                  (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
                  if ( !v23 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v23,
                                                                                  &entity,
                                                                                  funcId->m_Items[v29 + 1],
                                                                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                        (FunctionMaster_o *)v23,
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
                                                                                      &v48,
                                                                                      Param,
                                                                                      v35,
                                                                                      0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v48 )
                          goto LABEL_55;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v48->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v43,
                            id,
                            (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
      LODWORD(v22) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v24 < (int)v22 );
  }
  v36 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       id,
                                                       lv);
  System_Collections_Generic_HashSet_int____ctor(
    v36,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v43;
  if ( !v43 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v45,
    v43,
    (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v47 = v45;
  while ( 1 )
  {
    v37 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v47,
            (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v37 )
      break;
    if ( !v23 )
      sub_B0D97C(v37);
    v38 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v23,
            &v46,
            (int32_t)v47.fields._current,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v38 )
    {
      if ( !v46 )
        sub_B0D97C(v38);
      if ( !v36 )
        sub_B0D97C(v38);
      System_Collections_Generic_HashSet_int___Add(
        v36,
        HIDWORD(v46->fields.emptyMessage),
        (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v47,
    (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v36 )
LABEL_55:
    sub_B0D97C(DataValsList);
  count = (unsigned int)v36->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v40 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_46621988(
    v36,
    v40,
    (const MethodInfo_2C76524 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67861336);
  return v40;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42174D4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17330/*"changeLimitVoiceInFriendshipLv"*/, method);
    byte_42174D4 = 1;
  }
  param = 0;
  ServantEntity__checkScript_29579556(this, (System_String_o *)StringLiteral_17330/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8

  if ( (byte_42174C2 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_12093/*"SERVANT_UNIT"*/, v3);
    sub_B0D8A4(&StringLiteral_5768/*"EXCEPT_SERVANT_UNIT"*/, v4);
    sub_B0D8A4(&StringLiteral_11745/*"SERVANT_EQUIP_UNIT"*/, v5);
    byte_42174C2 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12093/*"SERVANT_UNIT"*/;
  }
  else if ( SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11745/*"SERVANT_EQUIP_UNIT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_5768/*"EXCEPT_SERVANT_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42174DF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17993/*"defaultDeadType"*/, *(_QWORD *)&defType);
    byte_42174DF = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_29579556(this, (System_String_o *)StringLiteral_17993/*"defaultDeadType"*/, &param, v3) )
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
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21
  __int64 v14; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42174CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_42174CE = 1;
  }
  name = 0LL;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v5) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (void *)ServantEntity__GetEventNameServantId(this, v9);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    v10 = *((_DWORD *)Instance + 6);
    v11 = Instance;
    if ( v10 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v10 )
        {
          v14 = sub_B0D9A8(Instance);
          sub_B0D948(v14, 0LL);
        }
        Instance = (void *)*((_QWORD *)v11 + (int)v12 + 4);
        if ( !Instance )
          break;
        Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        v10 = *((_DWORD *)v11 + 6);
        if ( (int)++v12 >= v10 )
          return 0;
      }
LABEL_16:
      sub_B0D97C(Instance);
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

  if ( (byte_42174D1 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42174D1 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x8

  if ( (byte_42174D5 & 1) == 0 )
  {
    sub_B0D8A4(&string_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_7183/*"HideInAnimNode"*/, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42174D5 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7183/*"HideInAnimNode"*/, v2);
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
  UserServantCollectionMaster_o *v7; // x20
  struct DataMasterBase_array *datalist; // x8
  int64_t UserId; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  int64_t v12; // x19
  int32_t v13; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42174D2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42174D2 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v7 = (UserServantCollectionMaster_o *)Instance,
        (Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                       (UserServantCollectionMaster_o *)Instance,
                                       2,
                                       0LL)) == 0LL) )
  {
    sub_B0D97C(Instance);
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
    v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v12 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v11;
    *(_QWORD *)&v16.fields.fakeValue = v10;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v12, v13, 0LL);
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
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w24
  char v11; // w25
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  __int64 v16; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42174D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42174D0 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_22;
    v8 = *((_DWORD *)Instance + 6);
    v9 = Instance;
    if ( v8 >= 1 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        if ( v10 >= v8 )
        {
          v16 = sub_B0D9A8(Instance);
          sub_B0D948(v16, 0LL);
        }
        v12 = *((_QWORD *)v9 + (int)v10 + 4);
        if ( !v12 )
          break;
        v14 = *(_QWORD *)(v12 + 80);
        v13 = *(_QWORD *)(v12 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v17.fields.currentCryptoKey = v14;
        *(_QWORD *)&v17.fields.fakeValue = v13;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v12, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_20;
          v11 = 1;
        }
        v8 = *((_DWORD *)v9 + 6);
        if ( (int)++v10 >= v8 )
          return v11 & 1;
      }
LABEL_22:
      sub_B0D97C(Instance);
    }
  }
LABEL_20:
  v11 = 0;
  return v11 & 1;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_o *Instance; // x0

  if ( (byte_42174CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_42174CF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B0D97C(Instance);
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
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v21; // x1
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x23
  __int64 v28; // x24
  ServantLimitAddMaster_o *v29; // x21
  System_String_o *OverwriteSvtDetailName; // x0
  System_String_o *v31; // x19
  WarQuestSelectionMaster_o *v32; // x0
  __int64 v33; // x23
  __int64 v34; // x24
  ServantLimitAddMaster_o *v35; // x22
  System_String_o *v36; // x20
  System_String_o *v37; // x0
  UserServantCollectionMaster_o *v39; // x21
  int64_t UserId; // x0
  __int64 v41; // x23
  __int64 v42; // x24
  int64_t v43; // x22
  __int64 v44; // x0
  ServantLimitAddEntity_o *v45; // [xsp+8h] [xbp-58h] BYREF
  UserServantCollectionEntity_o *v46; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_42174CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventServantMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_42174CC = 1;
  }
  name = 0LL;
  v46 = 0LL;
  entity = 0LL;
  v45 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v18) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v21);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v22 = *((_DWORD *)Instance + 6);
  v23 = Instance;
  if ( v22 < 1 )
  {
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v28 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v27 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v29 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v49.fields.currentCryptoKey = v28;
      *(_QWORD *)&v49.fields.fakeValue = v27;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v49, 0LL);
      if ( !v29 )
        goto LABEL_66;
      if ( ServantLimitAddMaster__TryGetEntity(v29, &entity, (int32_t)Instance, imageLimitCount, 0LL) )
      {
        Instance = entity;
        if ( entity )
        {
          OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
          goto LABEL_42;
        }
LABEL_66:
        sub_B0D97C(Instance);
      }
      goto LABEL_46;
    }
    if ( maxLimitCount == -1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      v39 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v42 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v41 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v43 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v51.fields.currentCryptoKey = v42;
      *(_QWORD *)&v51.fields.fakeValue = v41;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v51, 0LL);
      if ( !v39 )
        goto LABEL_66;
      if ( !UserServantCollectionMaster__TryGetEntity(v39, &v46, v43, (int32_t)Instance, 0LL) )
        goto LABEL_46;
      Instance = v46;
      if ( !v46 )
        goto LABEL_66;
      Instance = (void *)UserServantCollectionEntity__IsGet(v46, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_46;
      if ( !v46 )
        goto LABEL_66;
      maxLimitCount = v46->fields.maxLimitCount;
      if ( (maxLimitCount & 0x80000000) != 0 )
      {
LABEL_46:
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v25, 0LL);
        if ( System_String__IsNullOrEmpty(v37, 0LL) )
          return this->fields.nameSave;
        return v25;
      }
    }
    else if ( (maxLimitCount & 0x80000000) != 0 )
    {
      goto LABEL_46;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    v32 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
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
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v50, 0LL);
    if ( !v35 )
      goto LABEL_66;
    ServantLimitAddMaster__TryGetEntity(v35, &v45, (int32_t)Instance, maxLimitCount, 0LL);
    if ( v45 )
    {
      OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteServantName(v45, 0LL);
LABEL_42:
      v36 = OverwriteSvtDetailName;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v36, 0LL);
      goto LABEL_46;
    }
    goto LABEL_46;
  }
  v24 = 0;
  while ( 1 )
  {
    if ( v24 >= v22 )
    {
      v44 = sub_B0D9A8(Instance);
      sub_B0D948(v44, 0LL);
    }
    Instance = (void *)*((_QWORD *)v23 + (int)v24 + 4);
    if ( !Instance )
      goto LABEL_66;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v22 = *((_DWORD *)v23 + 6);
    if ( (int)++v24 >= v22 )
      goto LABEL_15;
  }
  v31 = name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v31, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42174BF & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_4031/*"ClassImageId"*/, method);
    byte_42174BF = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_29579556(this, (System_String_o *)StringLiteral_4031/*"ClassImageId"*/, &param, v2) )
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
  __int64 v15; // x0

  if ( (byte_42174D3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, *(_QWORD *)&baseSkillId);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_ServantEntity_GetScriptMultiArray_int___, v6);
    sub_B0D8A4(&StringLiteral_12934/*"SkillRankUp"*/, v7);
    byte_42174D3 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12934/*"SkillRankUp"*/,
                           (const MethodInfo_204EB14 *)Method_ServantEntity_GetScriptMultiArray_int___);
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
                                                             (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v13;
        LODWORD(v9) = v10->max_length;
        if ( (__int64)++v11 >= (int)v9 )
          goto LABEL_9;
      }
LABEL_13:
      v15 = sub_B0D9A8(ScriptMultiArray_int);
      sub_B0D948(v15, 0LL);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_B0D97C(0LL);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  EventServantMaster_o *v13; // x21
  int v14; // w8
  _DWORD *v15; // x21
  unsigned int v16; // w23
  char *v17; // x8
  EventServantEntity_o *v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  __int64 v21; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42174CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&string_TypeInfo, v6);
    byte_42174CD = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v13 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v12;
    *(_QWORD *)&v23.fields.fakeValue = v11;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
    if ( !v13 || (Instance = EventServantMaster__GetEntities(v13, (int32_t)Instance, 0LL)) == 0LL )
LABEL_25:
      sub_B0D97C(Instance);
    v14 = *((_DWORD *)Instance + 6);
    v15 = Instance;
    if ( v14 >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= v14 )
        {
          v21 = sub_B0D9A8(Instance);
          sub_B0D948(v21, 0LL);
        }
        v17 = (char *)&v15[2 * v16];
        v18 = (EventServantEntity_o *)*((_QWORD *)v17 + 4);
        if ( !v18 )
          goto LABEL_25;
        Instance = (void *)EventServantEntity__TryGetName(*((EventServantEntity_o **)v17 + 4), &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        v14 = v15[6];
        if ( (int)++v16 >= v14 )
          goto LABEL_19;
      }
      Empty = EventServantEntity__GetRuby(v18, 0LL);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(ruby, 0LL);
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
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v37; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **v44; // x21
  System_Collections_Generic_IEnumerable_T__o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  System_Action_KeyValuePair_string__object___o *v48; // x23
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_42174B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_KeyValuePair_string__object____ctor__, method);
    sub_B0D8A4(&System_Action_KeyValuePair_string__object___TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantAddMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&Method_ServantEntity___c__DisplayClass101_0__GetScript_b__0__, v18);
    sub_B0D8A4(&ServantEntity___c__DisplayClass101_0_TypeInfo, v19);
    byte_42174B8 = 1;
  }
  entity = 0LL;
  memset(&v50, 0, sizeof(v50));
  p_mergedScript = &this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v24 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v52.fields.currentCryptoKey = v24;
    *(_QWORD *)&v52.fields.fakeValue = v23;
    name = (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v52, 0LL);
    if ( v25 )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v25,
              &entity,
              (int32_t)name,
              (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        script = this->fields.script;
        this->fields.mergedScript = script;
LABEL_21:
        sub_B0D840(
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
      v34 = sub_B0D974(ServantEntity___c__DisplayClass101_0_TypeInfo, v27, v28);
      ServantEntity___c__DisplayClass101_0___ctor((ServantEntity___c__DisplayClass101_0_o *)v34, 0LL);
      v37 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                            System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                            v35,
                                                                                            v36);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v37,
        (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v34 )
      {
        *(_QWORD *)(v34 + 16) = v37;
        v44 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v34 + 16);
        sub_B0D840((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
        v45 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v48 = (System_Action_KeyValuePair_string__object___o *)sub_B0D974(
                                                                 System_Action_KeyValuePair_string__object___TypeInfo,
                                                                 v46,
                                                                 v47);
        System_Action_KeyValuePair_string__object_____ctor(
          v48,
          (Il2CppObject *)v34,
          Method_ServantEntity___c__DisplayClass101_0__GetScript_b__0__,
          (const MethodInfo_24694A0 *)Method_System_Action_KeyValuePair_string__object____ctor__);
        BasicHelper__ForEach_KeyValuePair_string__object__(
          v45,
          (System_Action_T__o *)v48,
          (const MethodInfo_1707B68 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          name = entity->fields.name;
          if ( name )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              &v50,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)name,
              (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v50,
                      (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*v44 )
                sub_B0D97C(0LL);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                *v44,
                (System_Xml_XmlQualifiedName_o *)v50.fields.current.fields.key,
                (System_Xml_Schema_XmlSchemaObject_o *)v50.fields.current.fields.value,
                (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v50,
              (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            script = (struct System_Collections_Generic_Dictionary_string__object__o *)*v44;
            *p_mergedScript = (struct System_Collections_Generic_Dictionary_string__object__o *)*v44;
            goto LABEL_21;
          }
        }
      }
    }
    sub_B0D97C(name);
  }
  return result;
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_204EB14 *method)
{
  ServantEntity_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double v9; // q0

  v5 = this;
  if ( (byte_4219F53 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, key);
    this = (ServantEntity_o *)sub_B0D8A4(&string_TypeInfo, v6);
    byte_4219F53 = 1;
  }
  if ( !v5 )
    sub_B0D97C(this);
  ScriptValue = ServantEntity__GetScriptValue(v5, key, 0LL);
  v8 = (System_String_o *)sub_B0D964(ScriptValue, string_TypeInfo);
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
        const MethodInfo_204EBE8 *method)
{
  ServantEntity_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double v9; // q0

  v5 = this;
  if ( (byte_4219F54 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, key);
    this = (ServantEntity_o *)sub_B0D8A4(&string_TypeInfo, v6);
    byte_4219F54 = 1;
  }
  if ( !v5 )
    sub_B0D97C(this);
  ScriptValue = ServantEntity__GetScriptValue(v5, key, 0LL);
  v8 = (System_String_o *)sub_B0D964(ScriptValue, string_TypeInfo);
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

  if ( (byte_42174B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_42174B9 = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v21; // x1
  __int64 v22; // x2
  SkillInfo_c **v23; // x24
  __int64 v24; // x25
  __int64 v25; // x27
  __int64 v26; // x26
  SkillInfo_o *v27; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  SkillInfo_c **v29; // x28
  __int64 v30; // x23
  __int64 v31; // x24
  SkillInfo_array *v32; // x23
  __int64 v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42174E2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&SkillInfo___TypeInfo, v10);
    sub_B0D8A4(&SkillInfo_TypeInfo, v11);
    byte_42174E2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantSkillMaster___);
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
  v14 = (SkillInfo_array *)sub_B0D8BC(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v14;
  sub_B0D840((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  if ( skillListNum >= 1 )
  {
    v23 = &SkillInfo_TypeInfo;
    v24 = skillListNum;
    v25 = 4LL;
    v26 = 32LL;
    do
    {
      v27 = (SkillInfo_o *)sub_B0D974(*v23, v21, v22);
      SkillInfo___ctor(v27, 0LL);
      if ( !v27 )
LABEL_26:
        sub_B0D97C(IsServantEquip);
      v27->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v29 = v23;
        v31 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v30 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v43.fields.currentCryptoKey = v31;
        *(_QWORD *)&v43.fields.fakeValue = v30;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                   v43,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_26;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)IsServantEquip,
                           (int)v25 - 3,
                           0LL);
        v23 = v29;
        if ( IsServantEquip )
        {
          v27->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v27->fields.title,
            &v27->fields.explanation,
            0LL);
        }
      }
      v32 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_26;
      v33 = sub_B0D964(v27, v32->obj.klass->_1.element_class);
      if ( !v33 )
      {
        v42 = sub_B0D99C(0LL);
        sub_B0D948(v42, 0LL);
      }
      if ( v25 - 4 >= (unsigned __int64)v32->max_length )
      {
        v41 = sub_B0D9A8(v33);
        sub_B0D948(v41, 0LL);
      }
      *((_QWORD *)&v32->obj.klass + v25) = v27;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)v32 + v26),
        (System_Int32_array **)v27,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
      v40 = v25 - 3;
      ++v25;
      v26 += 8LL;
    }
    while ( v40 < v24 );
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
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v26; // x20
  TreasureDvcLvEntity_o *v27; // x0
  TreasureDvcLvEntity_o *v28; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x19
  SkillLvMaster_o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_HashSet_int__o *v33; // x27
  System_Collections_Generic_IEnumerable_T__o *v34; // x1
  __int64 v35; // x2
  struct System_Int32_array *funcId; // x8
  TreasureDvcLvMaster_o *v37; // x24
  unsigned __int64 v38; // x20
  unsigned __int64 max_length; // x9
  DataVals_o *v40; // x25
  int32_t v41; // w1
  int32_t Param; // w26
  int32_t v43; // w1
  System_Collections_Generic_IEnumerable_T__o *v44; // x1
  System_Collections_Generic_HashSet_int__o *v45; // x22
  int32_t v46; // w26
  int32_t v47; // w27
  void *v48; // x8
  System_Collections_Generic_HashSet_int__o *v49; // x20
  _BOOL8 v50; // x0
  _BOOL8 v51; // x0
  __int64 count; // x1
  __int64 v54; // x0
  TreasureDvcLvMaster_o *v55; // [xsp+0h] [xbp-C0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v57; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v58; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v59; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v60; // [xsp+50h] [xbp-70h] BYREF
  TreasureDvcLvEntity_o *v61; // [xsp+58h] [xbp-68h] BYREF
  SkillLvEntity_o *v62; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_42174E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__CopyTo___67861336, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_B0D8A4(&int___TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    byte_42174E1 = 1;
  }
  entity = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  memset(&v59, 0, sizeof(v59));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v22;
  *(_QWORD *)&v64.fields.fakeValue = v21;
  DataValsList = (TreasureDvcLvMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v64, 0LL);
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
    DataValsList = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_55;
    v26 = DataValsList;
    v27 = TreasureDvcLvMaster__GetEntity(DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v27 )
      return 0LL;
    v28 = v27;
    if ( !v27->fields.funcId )
      return 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v55 = v26;
    v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
    v30 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v33 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v31,
                                                         v32);
    System_Collections_Generic_HashSet_int____ctor(
      v33,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
    if ( !v33 )
      goto LABEL_55;
    System_Collections_Generic_HashSet_int___UnionWith(
      v33,
      (System_Collections_Generic_IEnumerable_T__o *)v28->fields.funcId,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvEntity__getDataValsList(v28, 100, 0LL);
    funcId = v28->fields.funcId;
    if ( !funcId )
      goto LABEL_55;
    p_list = &DataValsList->fields.list;
    v37 = DataValsList;
    v38 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v38 >= (int)max_length )
      {
        v49 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                             System_Collections_Generic_HashSet_int__TypeInfo,
                                                             v34,
                                                             v35);
        System_Collections_Generic_HashSet_int____ctor(
          v49,
          (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v57,
          v33,
          (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v59 = v57;
        while ( 1 )
        {
          v50 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v59,
                  (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v50 )
            break;
          if ( !v29 )
            sub_B0D97C(v50);
          v51 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v29,
                  &v58,
                  (int32_t)v59.fields._current,
                  (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v51 )
          {
            if ( !v58 )
              sub_B0D97C(v51);
            if ( !v49 )
              sub_B0D97C(v51);
            System_Collections_Generic_HashSet_int___Add(
              v49,
              HIDWORD(v58->fields.emptyMessage),
              (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v59,
          (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v49 )
        {
          count = (unsigned int)v49->fields._count;
          if ( (int)count >= 1 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_46621988(
              v49,
              EntityFromSvtIdOnly,
              (const MethodInfo_2C76524 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67861336);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_55:
        sub_B0D97C(DataValsList);
      }
      if ( v38 >= max_length )
        goto LABEL_68;
      if ( !v29 )
        goto LABEL_55;
      DataValsList = (TreasureDvcLvMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                v29,
                                                &entity,
                                                funcId->m_Items[v38 + 1],
                                                (const MethodInfo_2669C30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_55;
        DataValsList = (TreasureDvcLvMaster_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_55;
          if ( v38 >= LODWORD(v37->fields._MasterName_k__BackingField) )
          {
LABEL_68:
            v54 = sub_B0D9A8(DataValsList);
            sub_B0D948(v54, 0LL);
          }
          if ( !entity )
            goto LABEL_55;
          v40 = (DataVals_o *)p_list[v38];
          if ( !v40 )
            goto LABEL_55;
          DataVals__SetTempType((DataVals_o *)p_list[v38], (FunctionMaster_o *)v29, (int32_t)entity->fields.age, 0LL);
          v41 = DataVals__isParam(v40, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v40, v41, 0, 0LL);
          v43 = DataVals__isParam(v40, 27, 0LL) ? 27 : 4;
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__GetParam(v40, v43, 0, 0LL);
          if ( !v30 )
            goto LABEL_55;
          DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(
                                                    v30,
                                                    &v62,
                                                    Param,
                                                    (int32_t)DataValsList,
                                                    0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v62 )
              goto LABEL_55;
            v44 = (System_Collections_Generic_IEnumerable_T__o *)v62->fields.funcId;
            if ( v44 )
              System_Collections_Generic_HashSet_int___UnionWith(
                v33,
                v44,
                (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
          }
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v40, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v40, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v45 = v33;
              v46 = DataVals__GetParam(v40, 92, 0, 0LL);
              v47 = DataVals__GetParam(v40, 93, 0, 0LL);
              if ( DataVals__isParam(v40, 95, 0LL) )
              {
                DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvMaster__TryGetEntity(v55, &v61, v46, v47, 0LL);
                v33 = v45;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v48 = v61;
                  if ( !v61 )
                    goto LABEL_55;
LABEL_52:
                  v34 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v48 + 4);
                  if ( v34 )
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v33,
                      v34,
                      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                }
              }
              else
              {
                DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(v30, &v60, v46, v47, 0LL);
                v33 = v45;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v48 = v60;
                  if ( !v60 )
                    goto LABEL_55;
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
      funcId = v28->fields.funcId;
      ++v38;
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x8
  ServantChangeMaster_o *v11; // x19
  ServantChangeEntity_o *v12; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42174CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42174CB = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v6;
  *(_QWORD *)&v14.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v10 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v15.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v11 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster,
        *(_QWORD *)&v15.fields.currentCryptoKey = v10,
        Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v15, 0LL),
        !v11) )
  {
    sub_B0D97C(Instance);
  }
  v12 = ServantChangeMaster__TrueNameEntity(v11, (int32_t)Instance, 0LL);
  if ( v12 )
    return v12->fields.svtId;
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

  if ( (byte_42174D6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16310/*"additionExpandImage"*/, *(_QWORD *)&limitCount);
    byte_42174D6 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16310/*"additionExpandImage"*/, method);
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

  if ( (byte_42174DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v4);
    byte_42174DE = 1;
  }
  v5 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 5LL);
  v7.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42174D8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17549/*"coinRoomCheck"*/, method);
    byte_42174D8 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17549/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_42174DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v4);
    byte_42174DC = 1;
  }
  v5 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v7.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  const MethodInfo *v6; // x1
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_42174DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v4);
    byte_42174DD = 1;
  }
  v5 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 4LL);
  v8.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeast(this, v6);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_42174DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v4);
    byte_42174DB = 1;
  }
  v5 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 8LL);
  v7.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  struct System_Int32_array *v25; // x10
  int max_length; // w8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v30; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_42174B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v12);
    byte_42174B5 = 1;
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
  *(_QWORD *)&v32.fields.currentCryptoKey = v15;
  *(_QWORD *)&v32.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32, 0LL);
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v24 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v23;
    *(_QWORD *)&v33.fields.fakeValue = v22;
    IndividualityList = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                v33,
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
        v25 = entity->fields.individuality;
        if ( v25 )
        {
          max_length = v25->max_length;
          if ( max_length >= 1 )
          {
            v27 = 0LL;
            v28 = &v25->m_Items[1];
            while ( (unsigned int)v27 < max_length )
            {
              if ( v28[v27] == individuality )
                return 1;
              if ( (int)++v27 >= max_length )
                return 0;
            }
LABEL_37:
            v30 = sub_B0D9A8(IndividualityList);
            sub_B0D948(v30, 0LL);
          }
        }
        return 0;
      }
    }
    sub_B0D97C(IndividualityList);
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
bool __fastcall ServantEntity__IsIndividuality_29577112(
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
  struct System_Int32_array *v27; // x8
  unsigned __int64 v28; // x10
  unsigned __int64 v29; // x9
  signed int v30; // w13
  __int64 v31; // x15
  __int64 v32; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42174B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v12);
    byte_42174B6 = 1;
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
  *(_QWORD *)&v35.fields.currentCryptoKey = v15;
  *(_QWORD *)&v35.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v35, 0LL);
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
    v32 = sub_B0D9A8(individuality);
    sub_B0D948(v32, 0LL);
  }
LABEL_25:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v25 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v26 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v25;
  *(_QWORD *)&v36.fields.fakeValue = v24;
  individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v36, 0LL);
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
      v27 = entity->fields.individuality;
      if ( v27 && (int)*(_QWORD *)&v27->max_length >= 1 )
      {
        v28 = (unsigned int)*(_QWORD *)&v27->max_length;
        v29 = 0LL;
        while ( 1 )
        {
          if ( v29 >= v28 )
            goto LABEL_48;
          v30 = individualityList->max_length;
          if ( v30 >= 1 )
            break;
LABEL_43:
          ++v29;
          individuality = 0LL;
          if ( (__int64)v29 >= (int)v28 )
            return (char)individuality;
        }
        v31 = 0LL;
        while ( (unsigned int)v31 < v30 )
        {
          if ( v27->m_Items[v29 + 1] == individualityList->m_Items[v31 + 1] )
            goto LABEL_45;
          if ( (int)++v31 >= v30 )
            goto LABEL_43;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
LABEL_49:
    sub_B0D97C(individuality);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42174CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42174CA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v11, 0LL);
  if ( !v9 || (Instance = (DataManager_o *)ServantChangeMaster__GetEntityList(v9, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B0D97C(Instance);
  return Instance->fields.datalist != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42174C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42174C8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v11, 0LL);
  if ( !v9 )
LABEL_9:
    sub_B0D97C(Instance);
  return ServantChangeMaster__IsNameTrue(v9, (int32_t)Instance, 0LL);
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantChangeMaster_o *v9; // x20
  ServantChangeEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  ServantChangeEntity_o *v12; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42174C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42174C9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v8;
  *(_QWORD *)&v14.fields.fakeValue = v7;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  if ( !v9 )
LABEL_12:
    sub_B0D97C(Instance);
  v10 = ServantChangeMaster__TrueNameEntity(v9, (int32_t)Instance, 0LL);
  if ( v10 && (v12 = v10, ServantChangeEntity__IsEnable(v10, 0LL)) )
    return ServantChangeEntity__HasFlag(v12, 8, 0LL);
  else
    return ServantEntity__IsNameTrue(this, v11);
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_42174D9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22535/*"svtBuffTurnExtend"*/, method);
    byte_42174D9 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22535/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x20
  System_RuntimeFieldHandle_o v7; // 0:w1.4

  if ( (byte_42174DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v4);
    byte_42174DA = 1;
  }
  v5 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 6LL);
  v7.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v5, v7, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           this->fields.classId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  sub_B0D840(
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

  if ( (byte_42174BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_42174BA = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_29579556(
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

  if ( (byte_42174BB & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    byte_42174BB = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v13 = sub_B0DC70(ScriptValue);
      LOBYTE(ScriptValue) = ServantEntity__checkScript_29579708(v9, v10, v11, *(float *)&v13, v12);
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


bool __fastcall ServantEntity__checkScript_29579708(
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

  if ( (byte_42174BC & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    byte_42174BC = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B0DC70(ScriptValue);
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

  if ( (byte_42174C0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16697/*"battleHeight"*/, height);
    byte_42174C0 = 1;
  }
  return ServantEntity__checkScript_29579708(this, (System_String_o *)StringLiteral_16697/*"battleHeight"*/, height, 1000.0, v3);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  EventServantMaster_o *v20; // x22
  int v21; // w8
  void *v22; // x22
  unsigned int v23; // w23
  WarQuestSelectionMaster_o *v24; // x0
  __int64 v25; // x22
  __int64 v26; // x23
  ServantChangeMaster_o *v27; // x21
  ServantChangeEntity_o *v28; // x0
  ServantChangeEntity_o *v29; // x21
  WarQuestSelectionMaster_o *v31; // x0
  __int64 v32; // x22
  __int64 v33; // x23
  ServantLimitAddMaster_o *v34; // x21
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v36; // x20
  System_String_o *v37; // x0
  WarQuestSelectionMaster_o *v38; // x0
  __int64 v39; // x21
  __int64 v40; // x22
  ServantChangeMaster_o *v41; // x20
  ServantChangeEntity_o *v42; // x0
  __int64 v43; // x0
  ServantLimitAddEntity_o *v44; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_42174C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_42174C7 = 1;
  }
  entity = 0LL;
  battleName = 0LL;
  v44 = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v15) )
  {
    goto LABEL_17;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v20 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v19;
  *(_QWORD *)&v47.fields.fakeValue = v18;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v47, 0LL);
  if ( !v20 )
    goto LABEL_54;
  Instance = EventServantMaster__GetEntities(v20, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_54;
  v21 = *((_DWORD *)Instance + 6);
  v22 = Instance;
  if ( v21 < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_29;
LABEL_17:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v26 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v25 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v27 = (ServantChangeMaster_o *)v24;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v48.fields.currentCryptoKey = v26;
    *(_QWORD *)&v48.fields.fakeValue = v25;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v48, 0LL);
    if ( !v27 )
      goto LABEL_54;
    v28 = ServantChangeMaster__TrueNameEntity(v27, (int32_t)Instance, 0LL);
    if ( !v28 )
      goto LABEL_29;
    v29 = v28;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &entity,
                         v29->fields.svtId,
                         (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v44 = 0LL;
        v33 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v32 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v34 = (ServantLimitAddMaster_o *)v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = v33;
        *(_QWORD *)&v49.fields.fakeValue = v32;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v49, 0LL);
        if ( !v34 )
          goto LABEL_54;
        ServantLimitAddMaster__TryGetEntity(v34, &v44, (int32_t)Instance, limitCount, 0LL);
        if ( v44 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v44, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v36, 0LL);
          if ( !System_String__IsNullOrEmpty(v37, 0LL) )
          {
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            }
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(v36, 0LL);
          }
        }
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v38 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v40 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v39 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v41 = (ServantChangeMaster_o *)v38;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v50.fields.currentCryptoKey = v40;
        *(_QWORD *)&v50.fields.fakeValue = v39;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v50, 0LL);
        if ( v41 )
        {
          v42 = ServantChangeMaster__GetEnableEntity(v41, (int32_t)Instance, 0LL);
          if ( v42 )
            return v42->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_54:
    sub_B0D97C(Instance);
  }
  v23 = 0;
  while ( 1 )
  {
    if ( v23 >= v21 )
    {
      v43 = sub_B0D9A8(Instance);
      sub_B0D948(v43, 0LL);
    }
    Instance = (void *)*((_QWORD *)v22 + (int)v23 + 4);
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)EventServantEntity__TryGetBattleName((EventServantEntity_o *)Instance, &battleName, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    v21 = *((_DWORD *)v22 + 6);
    if ( (int)++v23 >= v21 )
      goto LABEL_17;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42174BE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17234/*"cameraActionId"*/, method);
    byte_42174BE = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_29579556(this, (System_String_o *)StringLiteral_17234/*"cameraActionId"*/, &param, v2) )
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
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42174B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_42174B3 = 1;
  }
  entity = 0LL;
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x23
  __int64 v39; // x25
  __int64 v40; // x26
  __int64 i; // x27
  struct System_Int32_array *v42; // x8
  unsigned __int64 v43; // x19
  int32_t v44; // w24
  System_Int32_array *v45; // x8
  System_String_array *v46; // x8
  System_String_array *v47; // x9
  __int64 v48; // x8
  __int64 v49; // x0

  if ( (byte_42174B7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, idList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&string___TypeInfo, v12);
    byte_42174B7 = 1;
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
  v16 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  *idList = v16;
  sub_B0D840((BattleServantConfConponent_o *)idList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_String_array *)sub_B0D8BC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v23;
  sub_B0D840((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v30 = (System_String_array *)sub_B0D8BC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v30;
  sub_B0D840((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v39 = max_length;
    v40 = 32LL;
    for ( i = 8LL; ; ++i )
    {
      v42 = this->fields.classPassive;
      if ( !v42 )
        break;
      v43 = i - 8;
      if ( i - 8 >= (unsigned __int64)v42->max_length )
        goto LABEL_26;
      if ( !v38 )
        break;
      v44 = *((_DWORD *)&v42->obj.klass + i);
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v38,
                                    v44,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v45 = *idList;
      if ( !*idList )
        break;
      if ( v43 >= v45->max_length )
        goto LABEL_26;
      *((_DWORD *)&v45->obj.klass + i) = v44;
      if ( Instance )
      {
        v46 = *titleList;
        if ( !*titleList )
          break;
        v47 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v43 >= v46->max_length || v43 >= v47->max_length )
        {
LABEL_26:
          v49 = sub_B0D9A8(Instance);
          sub_B0D948(v49, 0LL);
        }
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v46 + v40),
          (System_String_o **)((char *)v47 + v40),
          0,
          0LL);
      }
      v48 = i - 7;
      v40 += 8LL;
      if ( v48 >= v39 )
        return;
    }
LABEL_25:
    sub_B0D97C(Instance);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42174BD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22700/*"tdTransform"*/, method);
    byte_42174BD = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_29579556(this, (System_String_o *)StringLiteral_22700/*"tdTransform"*/, &param, v2) )
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  ServantChangeMaster_o *v12; // x21
  ServantChangeEntity_o *v13; // x0
  const MethodInfo *v14; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_42174C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42174C5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v11;
  *(_QWORD *)&v17.fields.fakeValue = v10;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
  if ( !v12 )
LABEL_14:
    sub_B0D97C(Instance);
  v13 = ServantChangeMaster__GetHiddenEntity(v12, (int32_t)Instance, 0LL);
  if ( v13 )
    return v13->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v14);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(Name, 0LL);
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
  System_Array_o *individuality; // x21
  void *monitor; // x8
  __int64 v25; // x9
  struct System_Int32_array *v26; // x0
  struct System_Int32_array **p_individuality; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42174B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&ServantIndividualityMaster_TypeInfo, v11);
    byte_42174B4 = 1;
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
  *(_QWORD *)&v36.fields.currentCryptoKey = v14;
  *(_QWORD *)&v36.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v36, 0LL);
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
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v20;
  *(_QWORD *)&v37.fields.fakeValue = v19;
  v22 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v37, 0LL);
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
      v25 = *(_QWORD *)&IndividualityList->max_length;
      if ( v25 )
      {
        individuality = (System_Array_o *)sub_B0D8BC(int___TypeInfo, (unsigned int)(v25 + (_DWORD)monitor));
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
        sub_B0D97C(v22);
      }
    }
  }
  else
  {
LABEL_30:
    individuality = (System_Array_o *)IndividualityList;
    if ( !IndividualityList )
    {
      v26 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
      this->fields.individuality = v26;
      p_individuality = &this->fields.individuality;
      sub_B0D840(
        (BattleServantConfConponent_o *)p_individuality,
        (System_Int32_array **)v26,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantChangeMaster_o *v14; // x22
  ServantChangeEntity_o *v15; // x0
  const MethodInfo *v16; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42174C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42174C3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
  if ( !v14 )
LABEL_14:
    sub_B0D97C(Instance);
  v15 = ServantChangeMaster__GetEnableEntity(v14, (int32_t)Instance, 0LL);
  if ( v15 )
    return v15->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, v16);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_29582640(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x23
  __int64 v13; // x24
  ServantChangeMaster_o *v14; // x22
  ServantChangeEntity_o *v15; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x1
  ServantChangeEntity_o *v24; // x22
  System_String_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42174C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42174C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v35.fields.currentCryptoKey = v13;
  *(_QWORD *)&v35.fields.fakeValue = v12;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v35, 0LL);
  if ( !v14 )
LABEL_14:
    sub_B0D97C(Instance);
  v15 = ServantChangeMaster__GetEnableEntity(v14, (int32_t)Instance, 0LL);
  if ( v15 )
  {
    v23 = v15->fields.ruby;
    v24 = v15;
    *ruby = v23;
    sub_B0D840((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v23, v17, v18, v19, v20, v21, v22);
    return v24->fields.name;
  }
  else
  {
    v26 = ServantEntity__GetRuby(this, v16);
    *ruby = v26;
    sub_B0D840((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, v33);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(Name, 0LL);
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
  __int64 v12; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v13; // x19
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 v15; // x9
  ServantEntity___c_c *v16; // x0
  struct ServantEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__135_0; // x20
  Il2CppObject *v19; // x21
  struct ServantEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x0

  if ( (byte_42174D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, key);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B0D8A4(&Method_ServantEntity___c__getScriptIntArrayParam_b__135_0__, v9);
    sub_B0D8A4(&ServantEntity___c_TypeInfo, v10);
    byte_42174D7 = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v13 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
    v14 = System_Collections_Generic_List_object__TypeInfo;
    v15 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v15
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v16 = ServantEntity___c_TypeInfo;
      if ( (BYTE3(ServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v16 = ServantEntity___c_TypeInfo;
      }
      static_fields = v16->static_fields;
      _9__135_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__135_0;
      if ( !_9__135_0 )
      {
        if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          static_fields = ServantEntity___c_TypeInfo->static_fields;
        }
        v19 = (Il2CppObject *)static_fields->__9;
        _9__135_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                            System_Converter_object__int__TypeInfo,
                                                                            v14,
                                                                            v12);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__135_0,
          v19,
          Method_ServantEntity___c__getScriptIntArrayParam_b__135_0__,
          (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
        v20 = ServantEntity___c_TypeInfo->static_fields;
        v20->__9__135_0 = (struct System_Converter_object__int__o *)_9__135_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v20->__9__135_0,
          (System_Int32_array **)_9__135_0,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
      }
      v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                        v13,
                                                        (System_Converter_T__TOutput__o *)_9__135_0,
                                                        (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v27 )
        return System_Collections_Generic_List_int___ToArray(
                 v27,
                 (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_B0DC70(result);
    }
    sub_B0D97C(v27);
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

  if ( (byte_42174C4 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
    byte_42174C4 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(Name, 0LL);
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

  if ( (byte_42174C1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19951/*"invalidSkillShift"*/, method);
    byte_42174C1 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_19951/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4212227 & 1) == 0 )
  {
    sub_B0D8A4(&ServantEntity___c_TypeInfo, v1);
    byte_4212227 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantEntity___c___ctor(ServantEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantEntity___c___getScriptIntArrayParam_b__135_0(
        ServantEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v3; // x0

  if ( !x )
    sub_B0D97C(this);
  v3 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                            x,
                            x->klass->vtable[4].methodPtr,
                            method);
  return System_Int32__Parse(v3, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass101_0___ctor(
        ServantEntity___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantEntity___c__DisplayClass101_0___GetScript_b__0(
        ServantEntity___c__DisplayClass101_0_o *this,
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
  if ( (byte_4212228 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v7);
    byte_4212228 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
    (System_Xml_XmlQualifiedName_o *)key,
    (System_Xml_Schema_XmlSchemaObject_o *)value,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}