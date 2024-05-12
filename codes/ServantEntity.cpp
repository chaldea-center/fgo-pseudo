void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E8E7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438E8E7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_438E8B5 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438E8B5 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E8E3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16822/*"assumedEffectId"*/);
    byte_438E8E3 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16822/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 v7; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  unsigned __int64 v9; // x27
  SkillInfo_o *v10; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v12; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x24
  unsigned __int64 v15; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v17; // x25
  int32_t v18; // w1
  int32_t Param; // w26
  int32_t v20; // w1
  int32_t v21; // w0
  System_Collections_Generic_HashSet_int__o *v22; // x19
  _BOOL8 v23; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 count; // x1
  System_Int32_array *v28; // x20
  __int64 v30; // x0
  System_Collections_Generic_HashSet_int__o *v31; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v33; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v34; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v36; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_438E8E6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___69373336);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    byte_438E8E6 = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  v34 = 0LL;
  memset(&v35, 0, sizeof(v35));
  v31 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v31,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v7 = *(_QWORD *)&enableSkillInfoList->max_length;
  v8 = DataValsList;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
      {
LABEL_56:
        v30 = sub_B776C8(DataValsList);
        sub_B77668(v30, 0LL);
      }
      v10 = enableSkillInfoList->m_Items[v9];
      if ( v10 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v10->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v10->fields.lv;
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
              v12 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v31;
                if ( !v31 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v31,
                  id,
                  (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getDataValsList(v12, 0LL);
                funcId = v12->fields.funcId;
                if ( !funcId )
                  goto LABEL_55;
                v14 = DataValsList;
                v15 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v15 >= (int)max_length )
                    break;
                  if ( v15 >= max_length )
                    goto LABEL_56;
                  if ( !v8 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v8,
                                                                                  &entity,
                                                                                  funcId->m_Items[v15 + 1],
                                                                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_55;
                    DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)FuncList__isAddState(
                                                                                    (int32_t)entity->fields.age,
                                                                                    0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v14 )
                        goto LABEL_55;
                      if ( v15 >= LODWORD(v14->fields._MasterName_k__BackingField) )
                        goto LABEL_56;
                      if ( !entity )
                        goto LABEL_55;
                      v17 = (DataVals_o *)p_list[v15];
                      if ( !v17 )
                        goto LABEL_55;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v15],
                        (FunctionMaster_o *)v8,
                        (int32_t)entity->fields.age,
                        0LL);
                      if ( DataVals__isParam(v17, 26, 0LL) )
                        v18 = 26;
                      else
                        v18 = 3;
                      Param = DataVals__GetParam(v17, v18, 0, 0LL);
                      if ( DataVals__isParam(v17, 27, 0LL) )
                        v20 = 27;
                      else
                        v20 = 4;
                      v21 = DataVals__GetParam(v17, v20, 0, 0LL);
                      DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__TryGetEntity(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      &v36,
                                                                                      Param,
                                                                                      v21,
                                                                                      0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v36 )
                          goto LABEL_55;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v36->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v31,
                            id,
                            (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v12->fields.funcId;
                  ++v15;
                  if ( !funcId )
                    goto LABEL_55;
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
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v31;
  if ( !v31 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v33,
    v31,
    (const MethodInfo_2EDC58C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v35 = v33;
  while ( 1 )
  {
    v23 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v35,
            (const MethodInfo_2259EF8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v23 )
      break;
    if ( !v8 )
      sub_B7769C(v23, v24);
    v25 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v8,
            &v34,
            (int32_t)v35.fields._current,
            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v25 )
    {
      if ( !v34 )
        sub_B7769C(v25, v26);
      if ( !v22 )
        sub_B7769C(v25, v26);
      System_Collections_Generic_HashSet_int___Add(
        v22,
        HIDWORD(v34->fields.emptyMessage),
        (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v35,
    (const MethodInfo_2259EF4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v22 )
LABEL_55:
    sub_B7769C(DataValsList, id);
  count = (unsigned int)v22->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v28 = (System_Int32_array *)sub_B775DC(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_49139628(
    v22,
    v28,
    (const MethodInfo_2EDCFAC *)Method_System_Collections_Generic_HashSet_int__CopyTo___69373336);
  return v28;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E8D7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17623/*"changeLimitVoiceInFriendshipLv"*/);
    byte_438E8D7 = 1;
  }
  param = 0;
  ServantEntity__checkScript_31711240(this, (System_String_o *)StringLiteral_17623/*"changeLimitVoiceInFriendshipLv"*/, &param, v2);
  return param;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 *v3; // x8

  if ( (byte_438E8C5 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_12287/*"SERVANT_UNIT"*/);
    sub_B775C4(&StringLiteral_5896/*"EXCEPT_SERVANT_UNIT"*/);
    sub_B775C4(&StringLiteral_11941/*"SERVANT_EQUIP_UNIT"*/);
    byte_438E8C5 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = &StringLiteral_12287/*"SERVANT_UNIT"*/;
  }
  else if ( SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = &StringLiteral_11941/*"SERVANT_EQUIP_UNIT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v3 = &StringLiteral_5896/*"EXCEPT_SERVANT_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v3, 0LL);
}


int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E8E2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18294/*"defaultDeadType"*/);
    byte_438E8E2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_31711240(this, (System_String_o *)StringLiteral_18294/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


int32_t __fastcall ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t EventNameServantId; // w19
  void *Instance; // x0
  __int64 v6; // x1
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v8; // x1
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w21
  __int64 v13; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E8D1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E8D1 = 1;
  }
  name = 0LL;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v3) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (void *)ServantEntity__GetEventNameServantId(this, v8);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    v9 = *((_DWORD *)Instance + 6);
    v10 = Instance;
    if ( v9 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= v9 )
        {
          v13 = sub_B776C8(Instance);
          sub_B77668(v13, 0LL);
        }
        Instance = (void *)*((_QWORD *)v10 + (int)v11 + 4);
        if ( !Instance )
          break;
        Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        v9 = *((_DWORD *)v10 + 6);
        if ( (int)++v11 >= v9 )
          return 0;
      }
LABEL_16:
      sub_B7769C(Instance, v6);
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

  if ( (byte_438E8D4 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438E8D4 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v5; // x8

  if ( (byte_438E8D8 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&StringLiteral_7316/*"HideInAnimNode"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E8D8 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7316/*"HideInAnimNode"*/, v2);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserServantCollectionMaster_o *v5; // x20
  struct DataMasterBase_array *datalist; // x8
  int64_t UserId; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  int64_t v10; // x19
  int32_t v11; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_438E8D5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8D5 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v5 = (UserServantCollectionMaster_o *)Instance,
        (Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                       (UserServantCollectionMaster_o *)Instance,
                                       2,
                                       0LL)) == 0LL) )
  {
    sub_B7769C(Instance, v4);
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
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v10 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = v9;
    *(_QWORD *)&v14.fields.fakeValue = v8;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v14, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v5, v10, v11, 0LL);
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
  const MethodInfo *v3; // x1
  int32_t EventNameServantId; // w19
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w24
  char v10; // w25
  __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_438E8D3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8D3 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v3);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_22;
    v7 = *((_DWORD *)Instance + 6);
    v8 = Instance;
    if ( v7 >= 1 )
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        if ( v9 >= v7 )
        {
          v15 = sub_B776C8(Instance);
          sub_B77668(v15, 0LL);
        }
        v11 = *((_QWORD *)v8 + (int)v9 + 4);
        if ( !v11 )
          break;
        v13 = *(_QWORD *)(v11 + 80);
        v12 = *(_QWORD *)(v11 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v16.fields.currentCryptoKey = v13;
        *(_QWORD *)&v16.fields.fakeValue = v12;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v11, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_20;
          v10 = 1;
        }
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          return v10 & 1;
      }
LABEL_22:
      sub_B7769C(Instance, v6);
    }
  }
LABEL_20:
  v10 = 0;
  return v10 & 1;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438E8D2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8D2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B7769C(Instance, v3);
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
  const MethodInfo *v9; // x1
  void *Instance; // x0
  __int64 v11; // x1
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v13; // x1
  int v14; // w8
  void *v15; // x20
  unsigned int v16; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v17; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  ServantLimitAddMaster_o *v21; // x21
  System_String_o *OverwriteSvtDetailName; // x0
  System_String_o *v23; // x19
  WarQuestSelectionMaster_o *v24; // x0
  __int64 v25; // x23
  __int64 v26; // x24
  ServantLimitAddMaster_o *v27; // x22
  System_String_o *v28; // x20
  System_String_o *v29; // x0
  UserServantCollectionMaster_o *v31; // x21
  int64_t UserId; // x0
  __int64 v33; // x23
  __int64 v34; // x24
  int64_t v35; // x22
  __int64 v36; // x0
  ServantLimitAddEntity_o *v37; // [xsp+8h] [xbp-58h] BYREF
  UserServantCollectionEntity_o *v38; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_438E8CF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E8CF = 1;
  }
  name = 0LL;
  v38 = 0LL;
  entity = 0LL;
  v37 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v9) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v13);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 < 1 )
  {
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v21 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v41.fields.currentCryptoKey = v20;
      *(_QWORD *)&v41.fields.fakeValue = v19;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v41, 0LL);
      if ( !v21 )
        goto LABEL_66;
      if ( ServantLimitAddMaster__TryGetEntity(v21, &entity, (int32_t)Instance, imageLimitCount, 0LL) )
      {
        Instance = entity;
        if ( entity )
        {
          OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
          goto LABEL_42;
        }
LABEL_66:
        sub_B7769C(Instance, v11);
      }
      goto LABEL_46;
    }
    if ( maxLimitCount == -1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      v31 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v34 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v33 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v35 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v43.fields.currentCryptoKey = v34;
      *(_QWORD *)&v43.fields.fakeValue = v33;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v43, 0LL);
      if ( !v31 )
        goto LABEL_66;
      if ( !UserServantCollectionMaster__TryGetEntity(v31, &v38, v35, (int32_t)Instance, 0LL) )
        goto LABEL_46;
      Instance = v38;
      if ( !v38 )
        goto LABEL_66;
      Instance = (void *)UserServantCollectionEntity__IsGet(v38, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_46;
      if ( !v38 )
        goto LABEL_66;
      maxLimitCount = v38->fields.maxLimitCount;
      if ( (maxLimitCount & 0x80000000) != 0 )
      {
LABEL_46:
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(v17, 0LL);
        if ( System_String__IsNullOrEmpty(v29, 0LL) )
          return this->fields.nameSave;
        return v17;
      }
    }
    else if ( (maxLimitCount & 0x80000000) != 0 )
    {
      goto LABEL_46;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    v37 = 0LL;
    v26 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v25 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v27 = (ServantLimitAddMaster_o *)v24;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v26;
    *(_QWORD *)&v42.fields.fakeValue = v25;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v42, 0LL);
    if ( !v27 )
      goto LABEL_66;
    ServantLimitAddMaster__TryGetEntity(v27, &v37, (int32_t)Instance, maxLimitCount, 0LL);
    if ( v37 )
    {
      OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteServantName(v37, 0LL);
LABEL_42:
      v28 = OverwriteSvtDetailName;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v28, 0LL);
      goto LABEL_46;
    }
    goto LABEL_46;
  }
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= v14 )
    {
      v36 = sub_B776C8(Instance);
      sub_B77668(v36, 0LL);
    }
    Instance = (void *)*((_QWORD *)v15 + (int)v16 + 4);
    if ( !Instance )
      goto LABEL_66;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v14 = *((_DWORD *)v15 + 6);
    if ( (int)++v16 >= v14 )
      goto LABEL_15;
  }
  v23 = name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v23, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E8C2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4147/*"ClassImageId"*/);
    byte_438E8C2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_31711240(this, (System_String_o *)StringLiteral_4147/*"ClassImageId"*/, &param, v2) )
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
  __int64 v6; // x8
  System_Int32_array_array *v7; // x20
  unsigned __int64 v8; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v10; // x21
  __int64 v11; // x1
  __int64 v13; // x0

  if ( (byte_438E8D6 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_IndexValue_int____69469920);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_ServantEntity_GetScriptMultiArray_int___);
    sub_B775C4(&StringLiteral_13133/*"SkillRankUp"*/);
    byte_438E8D6 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_13133/*"SkillRankUp"*/,
                           (const MethodInfo_1DFDA90 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v6 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v7 = ScriptMultiArray_int;
    if ( (int)v6 >= 1 )
    {
      v8 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v8 < (unsigned int)v6 )
      {
        v10 = m_Items[v8];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v10,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_1C683B4 *)Method_BasicHelper_IndexValue_int____69469920);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v10;
        LODWORD(v6) = v7->max_length;
        if ( (__int64)++v8 >= (int)v6 )
          goto LABEL_9;
      }
LABEL_13:
      v13 = sub_B776C8(ScriptMultiArray_int);
      sub_B77668(v13, 0LL);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_B775DC(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_B7769C(0LL, v11);
  v10 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v10;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o *Empty; // x20
  const MethodInfo *v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  EventServantMaster_o *v10; // x21
  int v11; // w8
  _DWORD *v12; // x21
  unsigned int v13; // w23
  char *v14; // x8
  EventServantEntity_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  __int64 v18; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_438E8D0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    byte_438E8D0 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v4) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v10 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v9;
    *(_QWORD *)&v20.fields.fakeValue = v8;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
    if ( !v10 || (Instance = EventServantMaster__GetEntities(v10, (int32_t)Instance, 0LL)) == 0LL )
LABEL_25:
      sub_B7769C(Instance, v6);
    v11 = *((_DWORD *)Instance + 6);
    v12 = Instance;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
        {
          v18 = sub_B776C8(Instance);
          sub_B77668(v18, 0LL);
        }
        v14 = (char *)&v12[2 * v13];
        v15 = (EventServantEntity_o *)*((_QWORD *)v14 + 4);
        if ( !v15 )
          goto LABEL_25;
        Instance = (void *)EventServantEntity__TryGetName(*((EventServantEntity_o **)v14 + 4), &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        v11 = v12[6];
        if ( (int)++v13 >= v11 )
          goto LABEL_19;
      }
      Empty = EventServantEntity__GetRuby(v15, 0LL);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(ruby, 0LL);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_mergedScript; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  struct System_String_o *name; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **v25; // x21
  System_Collections_Generic_IEnumerable_T__o *v26; // x20
  System_Action_KeyValuePair_string__object___o *v27; // x23
  __int64 v28; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_438E8BB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_KeyValuePair_string__object____ctor__);
    sub_B775C4(&System_Action_KeyValuePair_string__object___TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_KeyValuePair_string__object____);
    sub_B775C4(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_ServantEntity___c__DisplayClass101_0__GetScript_b__0__);
    sub_B775C4(&ServantEntity___c__DisplayClass101_0_TypeInfo);
    byte_438E8BB = 1;
  }
  entity = 0LL;
  memset(&v30, 0, sizeof(v30));
  p_mergedScript = &this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v7;
    *(_QWORD *)&v32.fields.fakeValue = v6;
    name = (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v32, 0LL);
    if ( v8 )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v8,
              &entity,
              (int32_t)name,
              (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        script = this->fields.script;
        this->fields.mergedScript = script;
LABEL_21:
        sub_B77560(
          (BattleServantConfConponent_o *)p_mergedScript,
          (System_Int32_array **)script,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        return *p_mergedScript;
      }
      v17 = sub_B77694(ServantEntity___c__DisplayClass101_0_TypeInfo);
      ServantEntity___c__DisplayClass101_0___ctor((ServantEntity___c__DisplayClass101_0_o *)v17, 0LL);
      v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v18,
        (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v17 )
      {
        *(_QWORD *)(v17 + 16) = v18;
        v25 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v17 + 16);
        sub_B77560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
        v26 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v27 = (System_Action_KeyValuePair_string__object___o *)sub_B77694(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_string__object_____ctor(
          v27,
          (Il2CppObject *)v17,
          Method_ServantEntity___c__DisplayClass101_0__GetScript_b__0__,
          (const MethodInfo_269ACD0 *)Method_System_Action_KeyValuePair_string__object____ctor__);
        BasicHelper__ForEach_KeyValuePair_string__object__(
          v26,
          (System_Action_T__o *)v27,
          (const MethodInfo_1C66B74 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          name = entity->fields.name;
          if ( name )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              &v30,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)name,
              (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v30,
                      (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*v25 )
                sub_B7769C(0LL, v28);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                *v25,
                (System_Xml_XmlQualifiedName_o *)v30.fields.current.fields.key,
                (System_Xml_Schema_XmlSchemaObject_o *)v30.fields.current.fields.value,
                (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v30,
              (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            script = (struct System_Collections_Generic_Dictionary_string__object__o *)*v25;
            *p_mergedScript = (struct System_Collections_Generic_Dictionary_string__object__o *)*v25;
            goto LABEL_21;
          }
        }
      }
    }
    sub_B7769C(name, v10);
  }
  return result;
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_1DFDA90 *method)
{
  ServantEntity_o *v5; // x21
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20
  long double v8; // q0

  v5 = this;
  if ( (byte_438E6DF & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    this = (ServantEntity_o *)sub_B775C4(&string_TypeInfo);
    byte_438E6DF = 1;
  }
  if ( !v5 )
    sub_B7769C(this, key);
  ScriptValue = ServantEntity__GetScriptValue(v5, key, 0LL);
  v7 = (System_String_o *)sub_B77684(ScriptValue, string_TypeInfo);
  if ( System_String__IsNullOrEmpty(v7, 0LL) )
    return 0LL;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (System_Int32_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                       v7,
                                       v8);
}


System_Object_array_array *__fastcall ServantEntity__GetScriptMultiArray_object_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_1DFDB64 *method)
{
  ServantEntity_o *v5; // x21
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x20
  long double v8; // q0

  v5 = this;
  if ( (byte_438E6E0 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    this = (ServantEntity_o *)sub_B775C4(&string_TypeInfo);
    byte_438E6E0 = 1;
  }
  if ( !v5 )
    sub_B7769C(this, key);
  ScriptValue = ServantEntity__GetScriptValue(v5, key, 0LL);
  v7 = (System_String_o *)sub_B77684(ScriptValue, string_TypeInfo);
  if ( System_String__IsNullOrEmpty(v7, 0LL) )
    return 0LL;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (System_Object_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                        v7,
                                        v8);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E8BC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438E8BC = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v8; // x0
  SkillInfo_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  SkillInfo_c **v16; // x24
  __int64 v17; // x25
  __int64 v18; // x27
  __int64 v19; // x26
  SkillInfo_o *v20; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v22; // x1
  SkillInfo_c **v23; // x28
  __int64 v24; // x23
  __int64 v25; // x24
  SkillInfo_array *v26; // x23
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_438E8E5 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantSkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&SkillInfo___TypeInfo);
    sub_B775C4(&SkillInfo_TypeInfo);
    byte_438E8E5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    skillListNum = v8->static_fields->SvtSkillListMax;
  }
  v9 = (SkillInfo_array *)sub_B775DC(SkillInfo___TypeInfo, (unsigned int)skillListNum);
  *skillInfoList = v9;
  sub_B77560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  if ( skillListNum >= 1 )
  {
    v16 = &SkillInfo_TypeInfo;
    v17 = skillListNum;
    v18 = 4LL;
    v19 = 32LL;
    do
    {
      v20 = (SkillInfo_o *)sub_B77694(*v16);
      SkillInfo___ctor(v20, 0LL);
      if ( !v20 )
LABEL_26:
        sub_B7769C(IsServantEquip, v22);
      v20->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v23 = v16;
        v25 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v24 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v37.fields.currentCryptoKey = v25;
        *(_QWORD *)&v37.fields.fakeValue = v24;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                   v37,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_26;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)IsServantEquip,
                           (int)v18 - 3,
                           0LL);
        v16 = v23;
        if ( IsServantEquip )
        {
          v20->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v20->fields.title,
            &v20->fields.explanation,
            0LL);
        }
      }
      v26 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_26;
      v27 = sub_B77684(v20, v26->obj.klass->_1.element_class);
      if ( !v27 )
      {
        v36 = sub_B776BC(0LL);
        sub_B77668(v36, 0LL);
      }
      if ( v18 - 4 >= (unsigned __int64)v26->max_length )
      {
        v35 = sub_B776C8(v27);
        sub_B77668(v35, 0LL);
      }
      *((_QWORD *)&v26->obj.klass + v18) = v20;
      sub_B77560(
        (BattleServantConfConponent_o *)((char *)v26 + v19),
        (System_Int32_array **)v20,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = v18 - 3;
      ++v18;
      v19 += 8LL;
    }
    while ( v34 < v17 );
  }
}


System_Int32_array *__fastcall ServantEntity__GetTreasureDeviceCategoryIdList(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  ServantTreasureDvcMaster_o *v6; // x19
  TreasureDvcLvMaster_o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v10; // x20
  TreasureDvcLvEntity_o *v11; // x0
  TreasureDvcLvEntity_o *v12; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x19
  SkillLvMaster_o *v14; // x23
  System_Collections_Generic_HashSet_int__o *v15; // x27
  struct System_Int32_array *funcId; // x8
  TreasureDvcLvMaster_o *v17; // x24
  unsigned __int64 v18; // x20
  unsigned __int64 max_length; // x9
  DataVals_o *v20; // x25
  int32_t v21; // w1
  int32_t Param; // w26
  int32_t v23; // w1
  System_Collections_Generic_IEnumerable_T__o *v24; // x1
  System_Collections_Generic_HashSet_int__o *v25; // x22
  int32_t v26; // w26
  int32_t v27; // w27
  void *v28; // x8
  System_Collections_Generic_HashSet_int__o *v29; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 count; // x1
  __int64 v36; // x0
  TreasureDvcLvMaster_o *v37; // [xsp+0h] [xbp-C0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v39; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v40; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v41; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v42; // [xsp+50h] [xbp-70h] BYREF
  TreasureDvcLvEntity_o *v43; // [xsp+58h] [xbp-68h] BYREF
  SkillLvEntity_o *v44; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438E8E4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___69373336);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438E8E4 = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  memset(&v41, 0, sizeof(v41));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v5 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v6 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v5;
  *(_QWORD *)&v46.fields.fakeValue = v4;
  DataValsList = (TreasureDvcLvMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v6 )
    goto LABEL_55;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v6,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_55;
    v10 = DataValsList;
    v11 = TreasureDvcLvMaster__GetEntity(DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v11 )
      return 0LL;
    v12 = v11;
    if ( !v11->fields.funcId )
      return 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v37 = v10;
    v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
    v14 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v15 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v15,
      (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    if ( !v15 )
      goto LABEL_55;
    System_Collections_Generic_HashSet_int___UnionWith(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)v12->fields.funcId,
      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvEntity__getDataValsList(v12, 100, 0LL);
    funcId = v12->fields.funcId;
    if ( !funcId )
      goto LABEL_55;
    p_list = &DataValsList->fields.list;
    v17 = DataValsList;
    v18 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v18 >= (int)max_length )
      {
        v29 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v29,
          (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v39,
          v15,
          (const MethodInfo_2EDC58C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v41 = v39;
        while ( 1 )
        {
          v30 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v41,
                  (const MethodInfo_2259EF8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v30 )
            break;
          if ( !v13 )
            sub_B7769C(v30, v31);
          v32 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v13,
                  &v40,
                  (int32_t)v41.fields._current,
                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v32 )
          {
            if ( !v40 )
              sub_B7769C(v32, v33);
            if ( !v29 )
              sub_B7769C(v32, v33);
            System_Collections_Generic_HashSet_int___Add(
              v29,
              HIDWORD(v40->fields.emptyMessage),
              (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v41,
          (const MethodInfo_2259EF4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v29 )
        {
          count = (unsigned int)v29->fields._count;
          if ( (int)count >= 1 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_B775DC(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_49139628(
              v29,
              EntityFromSvtIdOnly,
              (const MethodInfo_2EDCFAC *)Method_System_Collections_Generic_HashSet_int__CopyTo___69373336);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_55:
        sub_B7769C(DataValsList, v8);
      }
      if ( v18 >= max_length )
        goto LABEL_68;
      if ( !v13 )
        goto LABEL_55;
      DataValsList = (TreasureDvcLvMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                v13,
                                                &entity,
                                                funcId->m_Items[v18 + 1],
                                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_55;
        DataValsList = (TreasureDvcLvMaster_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_55;
          if ( v18 >= LODWORD(v17->fields._MasterName_k__BackingField) )
          {
LABEL_68:
            v36 = sub_B776C8(DataValsList);
            sub_B77668(v36, 0LL);
          }
          if ( !entity )
            goto LABEL_55;
          v20 = (DataVals_o *)p_list[v18];
          if ( !v20 )
            goto LABEL_55;
          DataVals__SetTempType((DataVals_o *)p_list[v18], (FunctionMaster_o *)v13, (int32_t)entity->fields.age, 0LL);
          v21 = DataVals__isParam(v20, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v20, v21, 0, 0LL);
          v23 = DataVals__isParam(v20, 27, 0LL) ? 27 : 4;
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__GetParam(v20, v23, 0, 0LL);
          if ( !v14 )
            goto LABEL_55;
          DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(
                                                    v14,
                                                    &v44,
                                                    Param,
                                                    (int32_t)DataValsList,
                                                    0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v44 )
              goto LABEL_55;
            v24 = (System_Collections_Generic_IEnumerable_T__o *)v44->fields.funcId;
            if ( v24 )
              System_Collections_Generic_HashSet_int___UnionWith(
                v15,
                v24,
                (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
          }
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v20, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v20, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v25 = v15;
              v26 = DataVals__GetParam(v20, 92, 0, 0LL);
              v27 = DataVals__GetParam(v20, 93, 0, 0LL);
              if ( DataVals__isParam(v20, 95, 0LL) )
              {
                DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvMaster__TryGetEntity(v37, &v43, v26, v27, 0LL);
                v15 = v25;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v28 = v43;
                  if ( !v43 )
                    goto LABEL_55;
LABEL_52:
                  v8 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v28 + 4);
                  if ( v8 )
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v15,
                      v8,
                      (const MethodInfo_2EDCC84 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                }
              }
              else
              {
                DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(v14, &v42, v26, v27, 0LL);
                v15 = v25;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v28 = v42;
                  if ( !v42 )
                    goto LABEL_55;
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
      funcId = v12->fields.funcId;
      ++v18;
      if ( !funcId )
        goto LABEL_55;
    }
  }
  return EntityFromSvtIdOnly;
}


int32_t __fastcall ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w20
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x8
  ServantChangeMaster_o *v10; // x19
  ServantChangeEntity_o *v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_438E8CE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8CE = 1;
  }
  v4 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v4;
  *(_QWORD *)&v13.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v13, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v14.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v10 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster,
        *(_QWORD *)&v14.fields.currentCryptoKey = v9,
        Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v14, 0LL),
        !v10) )
  {
    sub_B7769C(Instance, v7);
  }
  v11 = ServantChangeMaster__TrueNameEntity(v10, (int32_t)Instance, 0LL);
  if ( v11 )
    return v11->fields.svtId;
  return v5;
}


bool __fastcall ServantEntity__IsAdditionExpandImage(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x8
  __int64 v7; // x9

  if ( (byte_438E8D9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16581/*"additionExpandImage"*/);
    byte_438E8D9 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16581/*"additionExpandImage"*/, method);
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
  System_Array_o *v3; // x20
  System_RuntimeFieldHandle_o v5; // 0:w1.4

  if ( (byte_438E8E1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A);
    byte_438E8E1 = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(int___TypeInfo, 5LL);
  v5.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v5, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438E8DB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17847/*"coinRoomCheck"*/);
    byte_438E8DB = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17847/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_RuntimeFieldHandle_o v5; // 0:w1.4

  if ( (byte_438E8DF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913);
    byte_438E8DF = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(int___TypeInfo, 4LL);
  v5.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v5, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  const MethodInfo *v4; // x1
  System_RuntimeFieldHandle_o v6; // 0:w1.4

  if ( (byte_438E8E0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA);
    byte_438E8E0 = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(int___TypeInfo, 4LL);
  v6.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v6, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeast(this, v4);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_RuntimeFieldHandle_o v5; // 0:w1.4

  if ( (byte_438E8DE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE);
    byte_438E8DE = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(int___TypeInfo, 8LL);
  v5.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v5, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t individuality,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w0
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w21
  int32_t v13; // w22
  System_Int32_array *IndividualityList; // x0
  int v15; // w8
  __int64 v16; // x9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantLimitAddMaster_o *v20; // x20
  __int64 v21; // x1
  struct System_Int32_array *v22; // x10
  int max_length; // w8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v27; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_438E8B8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantIndividualityMaster_TypeInfo);
    byte_438E8B8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v11;
  *(_QWORD *)&v29.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v29, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v13, v12, 0LL);
  if ( !IndividualityList && (IndividualityList = this->fields.individuality) == 0LL
    || (v15 = IndividualityList->max_length, v15 < 1) )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v20 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    IndividualityList = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                v30,
                                                0LL);
    if ( v20 )
    {
      IndividualityList = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(
                                                  v20,
                                                  &entity,
                                                  (int32_t)IndividualityList,
                                                  v12,
                                                  0LL);
      if ( ((unsigned __int8)IndividualityList & 1) == 0 )
        return 0;
      if ( entity )
      {
        v22 = entity->fields.individuality;
        if ( v22 )
        {
          max_length = v22->max_length;
          if ( max_length >= 1 )
          {
            v24 = 0LL;
            v25 = &v22->m_Items[1];
            while ( (unsigned int)v24 < max_length )
            {
              if ( v25[v24] == individuality )
                return 1;
              if ( (int)++v24 >= max_length )
                return 0;
            }
LABEL_37:
            v27 = sub_B776C8(IndividualityList);
            sub_B77668(v27, 0LL);
          }
        }
        return 0;
      }
    }
    sub_B7769C(IndividualityList, v21);
  }
  v16 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v16 >= v15 )
      goto LABEL_37;
    if ( IndividualityList->m_Items[v16 + 1] == individuality )
      return 1;
    if ( (int)++v16 >= v15 )
      goto LABEL_19;
  }
}


bool __fastcall ServantEntity__IsIndividuality_31708796(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  int32_t LimitCountByDispLimit; // w0
  __int64 v10; // x22
  __int64 v11; // x23
  int32_t v12; // w21
  int32_t v13; // w22
  System_Int32_array *individuality; // x0
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x8
  signed int max_length; // w12
  __int64 v18; // x14
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x22
  __int64 v21; // x23
  ServantLimitAddMaster_o *v22; // x20
  __int64 v23; // x1
  struct System_Int32_array *v24; // x8
  unsigned __int64 v25; // x10
  unsigned __int64 v26; // x9
  signed int v27; // w13
  __int64 v28; // x15
  __int64 v29; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_438E8B9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantIndividualityMaster_TypeInfo);
    byte_438E8B9 = 1;
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
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v11;
  *(_QWORD *)&v32.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v32, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  individuality = ServantIndividualityMaster__GetIndividualityList(v13, v12, 0LL);
  if ( (individuality || (individuality = this->fields.individuality) != 0LL)
    && (int)*(_QWORD *)&individuality->max_length >= 1 )
  {
    v15 = (unsigned int)*(_QWORD *)&individuality->max_length;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= v15 )
        goto LABEL_48;
      max_length = individualityList->max_length;
      if ( max_length >= 1 )
        break;
LABEL_24:
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_25;
    }
    v18 = 0LL;
    while ( (unsigned int)v18 < max_length )
    {
      if ( individuality->m_Items[v16 + 1] == individualityList->m_Items[v18 + 1] )
        goto LABEL_45;
      if ( (int)++v18 >= max_length )
        goto LABEL_24;
    }
LABEL_48:
    v29 = sub_B776C8(individuality);
    sub_B77668(v29, 0LL);
  }
LABEL_25:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v21 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v22 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v21;
  *(_QWORD *)&v33.fields.fakeValue = v20;
  individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
  if ( !v22 )
    goto LABEL_49;
  individuality = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(
                                          v22,
                                          &entity,
                                          (int32_t)individuality,
                                          v12,
                                          0LL);
  if ( ((unsigned __int8)individuality & 1) != 0 )
  {
    if ( entity )
    {
      v24 = entity->fields.individuality;
      if ( v24 && (int)*(_QWORD *)&v24->max_length >= 1 )
      {
        v25 = (unsigned int)*(_QWORD *)&v24->max_length;
        v26 = 0LL;
        while ( 1 )
        {
          if ( v26 >= v25 )
            goto LABEL_48;
          v27 = individualityList->max_length;
          if ( v27 >= 1 )
            break;
LABEL_43:
          ++v26;
          individuality = 0LL;
          if ( (__int64)v26 >= (int)v25 )
            return (char)individuality;
        }
        v28 = 0LL;
        while ( (unsigned int)v28 < v27 )
        {
          if ( v24->m_Items[v26 + 1] == individualityList->m_Items[v28 + 1] )
            goto LABEL_45;
          if ( (int)++v28 >= v27 )
            goto LABEL_43;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
LABEL_49:
    sub_B7769C(individuality, v23);
  }
LABEL_47:
  LOBYTE(individuality) = 0;
  return (char)individuality;
}


bool __fastcall ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  ServantChangeMaster_o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_438E8CD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8CD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL);
  if ( !v8 || (Instance = (DataManager_o *)ServantChangeMaster__GetEntityList(v8, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B7769C(Instance, v4);
  return Instance->fields.datalist != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  ServantChangeMaster_o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_438E8CB & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8CB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL);
  if ( !v8 )
LABEL_9:
    sub_B7769C(Instance, v4);
  return ServantChangeMaster__IsNameTrue(v8, (int32_t)Instance, 0LL);
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantChangeMaster_o *v8; // x20
  ServantChangeEntity_o *v9; // x0
  const MethodInfo *v10; // x1
  ServantChangeEntity_o *v11; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_438E8CC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8CC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v7 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v8 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v13, 0LL);
  if ( !v8 )
LABEL_12:
    sub_B7769C(Instance, v4);
  v9 = ServantChangeMaster__TrueNameEntity(v8, (int32_t)Instance, 0LL);
  if ( v9 && (v11 = v9, ServantChangeEntity__IsEnable(v9, 0LL)) )
    return ServantChangeEntity__HasFlag(v11, 8, 0LL);
  else
    return ServantEntity__IsNameTrue(this, v10);
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438E8DC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22935/*"svtBuffTurnExtend"*/);
    byte_438E8DC = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22935/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_RuntimeFieldHandle_o v5; // 0:w1.4

  if ( (byte_438E8DD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA);
    byte_438E8DD = 1;
  }
  v3 = (System_Array_o *)sub_B775DC(int___TypeInfo, 6LL);
  v5.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v3, v5, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3,
           this->fields.classId,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
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
  sub_B77560(
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

  if ( (byte_438E8BD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_438E8BD = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_31711240(
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

  if ( (byte_438E8BE & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438E8BE = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v13 = sub_B77990(ScriptValue);
      LOBYTE(ScriptValue) = ServantEntity__checkScript_31711392(v9, v10, v11, *(float *)&v13, v12);
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


bool __fastcall ServantEntity__checkScript_31711392(
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

  if ( (byte_438E8BF & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438E8BF = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B77990(ScriptValue);
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

  if ( (byte_438E8C3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16978/*"battleHeight"*/);
    byte_438E8C3 = 1;
  }
  return ServantEntity__checkScript_31711392(this, (System_String_o *)StringLiteral_16978/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getBattleName(
        ServantEntity_o *this,
        bool isTrueNameForce,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  void *Instance; // x0
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x23
  __int64 v12; // x24
  EventServantMaster_o *v13; // x22
  int v14; // w8
  void *v15; // x22
  unsigned int v16; // w23
  WarQuestSelectionMaster_o *v17; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantChangeMaster_o *v20; // x21
  ServantChangeEntity_o *v21; // x0
  ServantChangeEntity_o *v22; // x21
  WarQuestSelectionMaster_o *v24; // x0
  __int64 v25; // x22
  __int64 v26; // x23
  ServantLimitAddMaster_o *v27; // x21
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x20
  System_String_o *v30; // x0
  WarQuestSelectionMaster_o *v31; // x0
  __int64 v32; // x21
  __int64 v33; // x22
  ServantChangeMaster_o *v34; // x20
  ServantChangeEntity_o *v35; // x0
  __int64 v36; // x0
  ServantLimitAddEntity_o *v37; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_438E8CA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E8CA = 1;
  }
  entity = 0LL;
  battleName = 0LL;
  v37 = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v7) )
  {
    goto LABEL_17;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v13 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v40.fields.currentCryptoKey = v12;
  *(_QWORD *)&v40.fields.fakeValue = v11;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v40, 0LL);
  if ( !v13 )
    goto LABEL_54;
  Instance = EventServantMaster__GetEntities(v13, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_54;
  v14 = *((_DWORD *)Instance + 6);
  v15 = Instance;
  if ( v14 < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_29;
LABEL_17:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    v17 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v20 = (ServantChangeMaster_o *)v17;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v19;
    *(_QWORD *)&v41.fields.fakeValue = v18;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v41, 0LL);
    if ( !v20 )
      goto LABEL_54;
    v21 = ServantChangeMaster__TrueNameEntity(v20, (int32_t)Instance, 0LL);
    if ( !v21 )
      goto LABEL_29;
    v22 = v21;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &entity,
                         v22->fields.svtId,
                         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        v24 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v37 = 0LL;
        v26 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v25 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v27 = (ServantLimitAddMaster_o *)v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v42.fields.currentCryptoKey = v26;
        *(_QWORD *)&v42.fields.fakeValue = v25;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v42, 0LL);
        if ( !v27 )
          goto LABEL_54;
        ServantLimitAddMaster__TryGetEntity(v27, &v37, (int32_t)Instance, limitCount, 0LL);
        if ( v37 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v37, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(v29, 0LL);
          if ( !System_String__IsNullOrEmpty(v30, 0LL) )
          {
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            }
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(v29, 0LL);
          }
        }
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v31 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v33 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v32 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v34 = (ServantChangeMaster_o *)v31;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v43.fields.currentCryptoKey = v33;
        *(_QWORD *)&v43.fields.fakeValue = v32;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v43, 0LL);
        if ( v34 )
        {
          v35 = ServantChangeMaster__GetEnableEntity(v34, (int32_t)Instance, 0LL);
          if ( v35 )
            return v35->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_54:
    sub_B7769C(Instance, v9);
  }
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= v14 )
    {
      v36 = sub_B776C8(Instance);
      sub_B77668(v36, 0LL);
    }
    Instance = (void *)*((_QWORD *)v15 + (int)v16 + 4);
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)EventServantEntity__TryGetBattleName((EventServantEntity_o *)Instance, &battleName, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    v14 = *((_DWORD *)v15 + 6);
    if ( (int)++v16 >= v14 )
      goto LABEL_17;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E8C1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17525/*"cameraActionId"*/);
    byte_438E8C1 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_31711240(this, (System_String_o *)StringLiteral_17525/*"cameraActionId"*/, &param, v2) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  System_String_o **p_age; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E8B6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E8B6 = 1;
  }
  entity = 0LL;
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_B7769C(Instance, v5);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  struct System_Int32_array *classPassive; // x8
  int max_length; // w24
  BalanceConfig_c *v10; // x0
  System_Int32_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x23
  __int64 v35; // x25
  __int64 v36; // x26
  __int64 i; // x27
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x19
  int32_t v40; // w24
  System_Int32_array *v41; // x8
  System_String_array *v42; // x8
  System_String_array *v43; // x9
  __int64 v44; // x8
  __int64 v45; // x0

  if ( (byte_438E8BA & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string___TypeInfo);
    byte_438E8BA = 1;
  }
  classPassive = this->fields.classPassive;
  if ( classPassive )
    max_length = classPassive->max_length;
  else
    max_length = 0;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)v10->static_fields->SvtPassiveSkillListMax);
  *idList = v11;
  sub_B77560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_String_array *)sub_B775DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v18;
  sub_B77560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_String_array *)sub_B775DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v25;
  sub_B77560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v35 = max_length;
    v36 = 32LL;
    for ( i = 8LL; ; ++i )
    {
      v38 = this->fields.classPassive;
      if ( !v38 )
        break;
      v39 = i - 8;
      if ( i - 8 >= (unsigned __int64)v38->max_length )
        goto LABEL_26;
      if ( !v34 )
        break;
      v40 = *((_DWORD *)&v38->obj.klass + i);
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v34,
                                    v40,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v41 = *idList;
      if ( !*idList )
        break;
      if ( v39 >= v41->max_length )
        goto LABEL_26;
      *((_DWORD *)&v41->obj.klass + i) = v40;
      if ( Instance )
      {
        v42 = *titleList;
        if ( !*titleList )
          break;
        v43 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v39 >= v42->max_length || v39 >= v43->max_length )
        {
LABEL_26:
          v45 = sub_B776C8(Instance);
          sub_B77668(v45, 0LL);
        }
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v42 + v36),
          (System_String_o **)((char *)v43 + v36),
          0,
          0LL);
      }
      v44 = i - 7;
      v36 += 8LL;
      if ( v44 >= v35 )
        return;
    }
LABEL_25:
    sub_B7769C(Instance, v33);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438E8C0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23101/*"tdTransform"*/);
    byte_438E8C0 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_31711240(this, (System_String_o *)StringLiteral_23101/*"tdTransform"*/, &param, v2) )
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
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  ServantChangeMaster_o *v10; // x21
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_438E8C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8C8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL);
  if ( !v10 )
LABEL_14:
    sub_B7769C(Instance, v6);
  v11 = ServantChangeMaster__GetHiddenEntity(v10, (int32_t)Instance, 0LL);
  if ( v11 )
    return v11->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v12);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(Name, 0LL);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitAddMaster_o *v16; // x22
  struct System_Int32_array *v17; // x0
  __int64 v18; // x1
  System_Array_o *individuality; // x21
  void *monitor; // x8
  __int64 v21; // x9
  struct System_Int32_array *v22; // x0
  struct System_Int32_array **p_individuality; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_438E8B7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantIndividualityMaster_TypeInfo);
    byte_438E8B7 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v10 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v9;
  *(_QWORD *)&v32.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v32, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v11, v10, 0LL);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v15;
  *(_QWORD *)&v33.fields.fakeValue = v14;
  v17 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
  if ( !v16 )
    goto LABEL_33;
  v17 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v16, &entity, (int32_t)v17, v10, 0LL);
  if ( ((unsigned __int8)v17 & 1) == 0 )
    goto LABEL_30;
  if ( !entity )
    goto LABEL_33;
  individuality = (System_Array_o *)entity->fields.individuality;
  if ( individuality && (monitor = individuality[1].monitor) != 0LL )
  {
    if ( IndividualityList )
    {
      v21 = *(_QWORD *)&IndividualityList->max_length;
      if ( v21 )
      {
        individuality = (System_Array_o *)sub_B775DC(int___TypeInfo, (unsigned int)(v21 + (_DWORD)monitor));
        System_Array__CopyTo((System_Array_o *)IndividualityList, individuality, 0, 0LL);
        if ( entity )
        {
          v17 = entity->fields.individuality;
          if ( v17 )
          {
            System_Array__CopyTo((System_Array_o *)v17, individuality, IndividualityList->max_length, 0LL);
            return (System_Int32_array *)individuality;
          }
        }
LABEL_33:
        sub_B7769C(v17, v18);
      }
    }
  }
  else
  {
LABEL_30:
    individuality = (System_Array_o *)IndividualityList;
    if ( !IndividualityList )
    {
      v22 = (struct System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
      this->fields.individuality = v22;
      p_individuality = &this->fields.individuality;
      sub_B77560(
        (BattleServantConfConponent_o *)p_individuality,
        (System_Int32_array **)v22,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      return *p_individuality;
    }
  }
  return (System_Int32_array *)individuality;
}


System_String_o *__fastcall ServantEntity__getName(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantChangeMaster_o *v12; // x22
  ServantChangeEntity_o *v13; // x0
  const MethodInfo *v14; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_438E8C6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
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
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v17, 0LL);
  if ( !v12 )
LABEL_14:
    sub_B7769C(Instance, v8);
  v13 = ServantChangeMaster__GetEnableEntity(v12, (int32_t)Instance, 0LL);
  if ( v13 )
    return v13->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, v14);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_31714324(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x23
  __int64 v11; // x24
  ServantChangeMaster_o *v12; // x22
  ServantChangeEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x1
  ServantChangeEntity_o *v22; // x22
  System_String_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_438E8C9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E8C9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v11;
  *(_QWORD *)&v33.fields.fakeValue = v10;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
  if ( !v12 )
LABEL_14:
    sub_B7769C(Instance, v8);
  v13 = ServantChangeMaster__GetEnableEntity(v12, (int32_t)Instance, 0LL);
  if ( v13 )
  {
    v21 = v13->fields.ruby;
    v22 = v13;
    *ruby = v21;
    sub_B77560((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v21, v15, v16, v17, v18, v19, v20);
    return v22->fields.name;
  }
  else
  {
    v24 = ServantEntity__GetRuby(this, v14);
    *ruby = v24;
    sub_B77560((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, v31);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(Name, 0LL);
  }
}


System_Int32_array *__fastcall ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v6; // x19
  __int64 v7; // x9
  ServantEntity___c_c *v8; // x0
  struct ServantEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__135_0; // x20
  Il2CppObject *v11; // x21
  struct ServantEntity___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_438E8DA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_ServantEntity___c__getScriptIntArrayParam_b__135_0__);
    sub_B775C4(&ServantEntity___c_TypeInfo);
    byte_438E8DA = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v6 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v7
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[v7 - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v8 = ServantEntity___c_TypeInfo;
      if ( (BYTE3(ServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v8 = ServantEntity___c_TypeInfo;
      }
      static_fields = v8->static_fields;
      _9__135_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__135_0;
      if ( !_9__135_0 )
      {
        if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          static_fields = ServantEntity___c_TypeInfo->static_fields;
        }
        v11 = (Il2CppObject *)static_fields->__9;
        _9__135_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__135_0,
          v11,
          Method_ServantEntity___c__getScriptIntArrayParam_b__135_0__,
          (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
        v12 = ServantEntity___c_TypeInfo->static_fields;
        v12->__9__135_0 = (struct System_Converter_object__int__o *)_9__135_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v12->__9__135_0,
          (System_Int32_array **)_9__135_0,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
      }
      v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                        v6,
                                                        (System_Converter_T__TOutput__o *)_9__135_0,
                                                        (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v19 )
        return System_Collections_Generic_List_int___ToArray(
                 v19,
                 (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_B77990(result);
    }
    sub_B7769C(v19, v20);
  }
  return result;
}


System_String_o *__fastcall ServantEntity__getTrueName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_438E8C7 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_438E8C7 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45464420(Name, 0LL);
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

  if ( (byte_438E8C4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20295/*"invalidSkillShift"*/);
    byte_438E8C4 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_20295/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4388810 & 1) == 0 )
  {
    sub_B775C4(&ServantEntity___c_TypeInfo);
    byte_4388810 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ServantEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEntity___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_4388811 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    byte_4388811 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_B7769C(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
    (System_Xml_XmlQualifiedName_o *)key,
    (System_Xml_Schema_XmlSchemaObject_o *)value,
    (const MethodInfo_2F7D5F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}