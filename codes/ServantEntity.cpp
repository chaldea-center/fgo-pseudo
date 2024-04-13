void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB95F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB95F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42EB92D & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB92D = 1;
  }
  v6 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v8, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB95B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16699/*"assumedEffectId"*/, (_DWORD)method, v2, v3);
    byte_42EB95B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16699/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x20
  unsigned __int64 v52; // x27
  SkillInfo_o *v53; // x8
  int32_t lv; // w2
  SkillLvEntity_o *v55; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v57; // x24
  unsigned __int64 v58; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v60; // x25
  int32_t v61; // w1
  int32_t Param; // w26
  int32_t v63; // w1
  int32_t v64; // w0
  System_Collections_Generic_HashSet_int__o *v65; // x19
  _BOOL8 v66; // x0
  __int64 v67; // x1
  _BOOL8 v68; // x0
  __int64 v69; // x1
  __int64 count; // x1
  System_Int32_array *v71; // x20
  __int64 v73; // x0
  System_Collections_Generic_HashSet_int__o *v74; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v76; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v77; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v78; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v79; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42EB95E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)enableSkillInfoList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&int___TypeInfo, v44, v45, v46);
    byte_42EB95E = 1;
  }
  v79 = 0LL;
  entity = 0LL;
  v77 = 0LL;
  memset(&v78, 0, sizeof(v78));
  v74 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v74,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v50 = *(_QWORD *)&enableSkillInfoList->max_length;
  v51 = DataValsList;
  if ( (int)v50 >= 1 )
  {
    v52 = 0LL;
    do
    {
      if ( v52 >= (unsigned int)v50 )
      {
LABEL_56:
        v73 = sub_B5D6C8(DataValsList);
        sub_B5D668(v73, 0LL);
      }
      v53 = enableSkillInfoList->m_Items[v52];
      if ( v53 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v53->fields.id;
        if ( (int)id >= 1 )
        {
          lv = v53->fields.lv;
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
              v55 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v74;
                if ( !v74 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v74,
                  id,
                  (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getDataValsList(v55, 0LL);
                funcId = v55->fields.funcId;
                if ( !funcId )
                  goto LABEL_55;
                v57 = DataValsList;
                v58 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v58 >= (int)max_length )
                    break;
                  if ( v58 >= max_length )
                    goto LABEL_56;
                  if ( !v51 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v51,
                                                                                  &entity,
                                                                                  funcId->m_Items[v58 + 1],
                                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_55;
                    DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)FuncList__isAddState(
                                                                                    (int32_t)entity->fields.age,
                                                                                    0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v57 )
                        goto LABEL_55;
                      if ( v58 >= LODWORD(v57->fields._MasterName_k__BackingField) )
                        goto LABEL_56;
                      if ( !entity )
                        goto LABEL_55;
                      v60 = (DataVals_o *)p_list[v58];
                      if ( !v60 )
                        goto LABEL_55;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v58],
                        (FunctionMaster_o *)v51,
                        (int32_t)entity->fields.age,
                        0LL);
                      if ( DataVals__isParam(v60, 26, 0LL) )
                        v61 = 26;
                      else
                        v61 = 3;
                      Param = DataVals__GetParam(v60, v61, 0, 0LL);
                      if ( DataVals__isParam(v60, 27, 0LL) )
                        v63 = 27;
                      else
                        v63 = 4;
                      v64 = DataVals__GetParam(v60, v63, 0, 0LL);
                      DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__TryGetEntity(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      &v79,
                                                                                      Param,
                                                                                      v64,
                                                                                      0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v79 )
                          goto LABEL_55;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v79->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v74,
                            id,
                            (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v55->fields.funcId;
                  ++v58;
                  if ( !funcId )
                    goto LABEL_55;
                }
              }
            }
          }
        }
      }
      LODWORD(v50) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v52 < (int)v50 );
  }
  v65 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v65,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)v74;
  if ( !v74 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v76,
    v74,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v78 = v76;
  while ( 1 )
  {
    v66 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v78,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v66 )
      break;
    if ( !v51 )
      sub_B5D69C(v66, v67);
    v68 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v51,
            &v77,
            (int32_t)v78.fields._current,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v68 )
    {
      if ( !v77 )
        sub_B5D69C(v68, v69);
      if ( !v65 )
        sub_B5D69C(v68, v69);
      System_Collections_Generic_HashSet_int___Add(
        v65,
        HIDWORD(v77->fields.emptyMessage),
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v78,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v65 )
LABEL_55:
    sub_B5D69C(DataValsList, id);
  count = (unsigned int)v65->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v71 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_38799776(
    v65,
    v71,
    (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
  return v71;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB94F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17493/*"changeLimitVoiceInFriendshipLv"*/, (_DWORD)method, v2, v3);
    byte_42EB94F = 1;
  }
  param = 0;
  ServantEntity__checkScript_30802408(this, (System_String_o *)StringLiteral_17493/*"changeLimitVoiceInFriendshipLv"*/, &param, v3);
  return param;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 *v14; // x8

  if ( (byte_42EB93D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12202/*"SERVANT_UNIT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11856/*"SERVANT_EQUIP_UNIT"*/, v11, v12, v13);
    byte_42EB93D = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_12202/*"SERVANT_UNIT"*/;
  }
  else if ( SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_11856/*"SERVANT_EQUIP_UNIT"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v14, 0LL);
}


int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB95A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18159/*"defaultDeadType"*/, defType, (_DWORD)method, v3);
    byte_42EB95A = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30802408(this, (System_String_o *)StringLiteral_18159/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


int32_t __fastcall ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  int32_t EventNameServantId; // w19
  void *Instance; // x0
  __int64 v14; // x1
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v16; // x1
  int v17; // w8
  void *v18; // x20
  unsigned int v19; // w21
  __int64 v21; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB949 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EB949 = 1;
  }
  name = 0LL;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v11) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v11);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (void *)ServantEntity__GetEventNameServantId(this, v16);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    v17 = *((_DWORD *)Instance + 6);
    v18 = Instance;
    if ( v17 >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= v17 )
        {
          v21 = sub_B5D6C8(Instance);
          sub_B5D668(v21, 0LL);
        }
        Instance = (void *)*((_QWORD *)v18 + (int)v19 + 4);
        if ( !Instance )
          break;
        Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        v17 = *((_DWORD *)v18 + 6);
        if ( (int)++v19 >= v17 )
          return 0;
      }
LABEL_16:
      sub_B5D69C(Instance, v14);
    }
  }
  return 0;
}


int32_t __fastcall ServantEntity__GetEventNameServantId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  bool v5; // zf
  ServantEntity_Fields *p_baseSvtId; // x8
  int32_t *p_fakeValue; // x9
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42EB94C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB94C = 1;
  }
  v5 = !SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
  p_baseSvtId = (ServantEntity_Fields *)&this->fields.baseSvtId;
  p_fakeValue = &this->fields.baseSvtId.fields.fakeValue;
  if ( v5 )
    p_baseSvtId = &this->fields;
  if ( v5 )
    p_fakeValue = &this->fields.id.fields.fakeValue;
  v8 = *(_QWORD *)&p_baseSvtId->id.fields.currentCryptoKey;
  v9 = *(_QWORD *)p_fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *ScriptValue; // x0
  System_String_o *v12; // x8

  if ( (byte_42EB950 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_7245/*"HideInAnimNode"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EB950 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7245/*"HideInAnimNode"*/, v2);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v12 = (System_String_o *)ScriptValue;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
    return v12;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantEntity__GetIndividuality(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


bool __fastcall ServantEntity__GetIsCollectionStatusNotGet(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  UserServantCollectionMaster_o *v16; // x20
  struct DataMasterBase_array *datalist; // x8
  int64_t UserId; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  int64_t v21; // x19
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EB94D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB94D = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_16;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v16 = (UserServantCollectionMaster_o *)Instance,
        (Instance = (DataManager_o *)UserServantCollectionMaster__getList(
                                       (UserServantCollectionMaster_o *)Instance,
                                       2,
                                       0LL)) == 0LL) )
  {
    sub_B5D69C(Instance, v15);
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
    v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v21 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = v20;
    *(_QWORD *)&v25.fields.fakeValue = v19;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v21, v22, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  int32_t EventNameServantId; // w19
  void *Instance; // x0
  __int64 v14; // x1
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w24
  char v18; // w25
  __int64 v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42EB94B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB94B = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v11);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_22;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_22;
    v15 = *((_DWORD *)Instance + 6);
    v16 = Instance;
    if ( v15 >= 1 )
    {
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        if ( v17 >= v15 )
        {
          v23 = sub_B5D6C8(Instance);
          sub_B5D668(v23, 0LL);
        }
        v19 = *((_QWORD *)v16 + (int)v17 + 4);
        if ( !v19 )
          break;
        v21 = *(_QWORD *)(v19 + 80);
        v20 = *(_QWORD *)(v19 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = v21;
        *(_QWORD *)&v24.fields.fakeValue = v20;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v19, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_20;
          v18 = 1;
        }
        v15 = *((_DWORD *)v16 + 6);
        if ( (int)++v17 >= v15 )
          return v18 & 1;
      }
LABEL_22:
      sub_B5D69C(Instance, v14);
    }
  }
LABEL_20:
  v18 = 0;
  return v18 & 1;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_42EB94A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42EB94A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.datalist )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_B5D69C(Instance, v11);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  const MethodInfo *v36; // x1
  void *Instance; // x0
  __int64 v38; // x1
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v40; // x1
  int v41; // w8
  void *v42; // x20
  unsigned int v43; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v44; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v46; // x23
  __int64 v47; // x24
  ServantLimitAddMaster_o *v48; // x21
  System_String_o *OverwriteSvtDetailName; // x0
  System_String_o *v50; // x19
  WarQuestSelectionMaster_o *v51; // x0
  __int64 v52; // x23
  __int64 v53; // x24
  ServantLimitAddMaster_o *v54; // x22
  System_String_o *v55; // x20
  System_String_o *v56; // x0
  UserServantCollectionMaster_o *v58; // x21
  int64_t UserId; // x0
  __int64 v60; // x23
  __int64 v61; // x24
  int64_t v62; // x22
  __int64 v63; // x0
  ServantLimitAddEntity_o *v64; // [xsp+8h] [xbp-58h] BYREF
  UserServantCollectionEntity_o *v65; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_42EB947 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventServantMaster___,
      limitCount,
      isForceNeedToCheckEventJoinName,
      *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    byte_42EB947 = 1;
  }
  name = 0LL;
  v65 = 0LL;
  entity = 0LL;
  v64 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v36) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v40);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Instance = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_66;
  v41 = *((_DWORD *)Instance + 6);
  v42 = Instance;
  if ( v41 < 1 )
  {
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v47 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v46 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v48 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v68.fields.currentCryptoKey = v47;
      *(_QWORD *)&v68.fields.fakeValue = v46;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
      if ( !v48 )
        goto LABEL_66;
      if ( ServantLimitAddMaster__TryGetEntity(v48, &entity, (int32_t)Instance, imageLimitCount, 0LL) )
      {
        Instance = entity;
        if ( entity )
        {
          OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
          goto LABEL_42;
        }
LABEL_66:
        sub_B5D69C(Instance, v38);
      }
      goto LABEL_46;
    }
    if ( maxLimitCount == -1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_66;
      v58 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v61 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v60 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v62 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v70.fields.currentCryptoKey = v61;
      *(_QWORD *)&v70.fields.fakeValue = v60;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
      if ( !v58 )
        goto LABEL_66;
      if ( !UserServantCollectionMaster__TryGetEntity(v58, &v65, v62, (int32_t)Instance, 0LL) )
        goto LABEL_46;
      Instance = v65;
      if ( !v65 )
        goto LABEL_66;
      Instance = (void *)UserServantCollectionEntity__IsGet(v65, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_46;
      if ( !v65 )
        goto LABEL_66;
      maxLimitCount = v65->fields.maxLimitCount;
      if ( (maxLimitCount & 0x80000000) != 0 )
      {
LABEL_46:
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v44, 0LL);
        if ( System_String__IsNullOrEmpty(v56, 0LL) )
          return this->fields.nameSave;
        return v44;
      }
    }
    else if ( (maxLimitCount & 0x80000000) != 0 )
    {
      goto LABEL_46;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_66;
    v51 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    v64 = 0LL;
    v53 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v52 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v54 = (ServantLimitAddMaster_o *)v51;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v69.fields.currentCryptoKey = v53;
    *(_QWORD *)&v69.fields.fakeValue = v52;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
    if ( !v54 )
      goto LABEL_66;
    ServantLimitAddMaster__TryGetEntity(v54, &v64, (int32_t)Instance, maxLimitCount, 0LL);
    if ( v64 )
    {
      OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteServantName(v64, 0LL);
LABEL_42:
      v55 = OverwriteSvtDetailName;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v55, 0LL);
      goto LABEL_46;
    }
    goto LABEL_46;
  }
  v43 = 0;
  while ( 1 )
  {
    if ( v43 >= v41 )
    {
      v63 = sub_B5D6C8(Instance);
      sub_B5D668(v63, 0LL);
    }
    Instance = (void *)*((_QWORD *)v42 + (int)v43 + 4);
    if ( !Instance )
      goto LABEL_66;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v41 = *((_DWORD *)v42 + 6);
    if ( (int)++v43 >= v41 )
      goto LABEL_15;
  }
  v50 = name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v50, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB93A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4087/*"ClassImageId"*/, (_DWORD)method, v2, v3);
    byte_42EB93A = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30802408(this, (System_String_o *)StringLiteral_4087/*"ClassImageId"*/, &param, v3) )
    return param;
  else
    return 0;
}


System_Int32_array *__fastcall ServantEntity__GetRankUpSkillIds(
        ServantEntity_o *this,
        int32_t baseSkillId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array_array *ScriptMultiArray_int; // x0
  __int64 v16; // x8
  System_Int32_array_array *v17; // x20
  unsigned __int64 v18; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v20; // x21
  __int64 v21; // x1
  __int64 v23; // x0

  if ( (byte_42EB94E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, baseSkillId, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ServantEntity_GetScriptMultiArray_int___, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_13046/*"SkillRankUp"*/, v12, v13, v14);
    byte_42EB94E = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_13046/*"SkillRankUp"*/,
                           (const MethodInfo_1E6A468 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v16 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v17 = ScriptMultiArray_int;
    if ( (int)v16 >= 1 )
    {
      v18 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v18 < (unsigned int)v16 )
      {
        v20 = m_Items[v18];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v20,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v20;
        LODWORD(v16) = v17->max_length;
        if ( (__int64)++v18 >= (int)v16 )
          goto LABEL_9;
      }
LABEL_13:
      v23 = sub_B5D6C8(ScriptMultiArray_int);
      sub_B5D668(v23, 0LL);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_B5D69C(0LL, v21);
  v20 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v20;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *Empty; // x20
  const MethodInfo *v18; // x1
  void *Instance; // x0
  __int64 v20; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x22
  __int64 v23; // x23
  EventServantMaster_o *v24; // x21
  int v25; // w8
  _DWORD *v26; // x21
  unsigned int v27; // w23
  char *v28; // x8
  EventServantEntity_o *v29; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  __int64 v32; // x0
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42EB948 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&string_TypeInfo, v14, v15, v16);
    byte_42EB948 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v18) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___);
    v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v24 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v23;
    *(_QWORD *)&v34.fields.fakeValue = v22;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
    if ( !v24 || (Instance = EventServantMaster__GetEntities(v24, (int32_t)Instance, 0LL)) == 0LL )
LABEL_25:
      sub_B5D69C(Instance, v20);
    v25 = *((_DWORD *)Instance + 6);
    v26 = Instance;
    if ( v25 >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= v25 )
        {
          v32 = sub_B5D6C8(Instance);
          sub_B5D668(v32, 0LL);
        }
        v28 = (char *)&v26[2 * v27];
        v29 = (EventServantEntity_o *)*((_QWORD *)v28 + 4);
        if ( !v29 )
          goto LABEL_25;
        Instance = (void *)EventServantEntity__TryGetName(*((EventServantEntity_o **)v28 + 4), &name, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        v25 = v26[6];
        if ( (int)++v27 >= v25 )
          goto LABEL_19;
      }
      Empty = EventServantEntity__GetRuby(v29, 0LL);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(ruby, 0LL);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_mergedScript; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v59; // x22
  __int64 v60; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x21
  struct System_String_o *name; // x0
  __int64 v63; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v71; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **v78; // x21
  System_Collections_Generic_IEnumerable_T__o *v79; // x20
  System_Action_KeyValuePair_string__object___o *v80; // x23
  __int64 v81; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_42EB933 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_KeyValuePair_string__object____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_KeyValuePair_string__object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantAddMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_ServantEntity___c__DisplayClass101_0__GetScript_b__0__, v50, v51, v52);
    sub_B5D5C4(&ServantEntity___c__DisplayClass101_0_TypeInfo, v53, v54, v55);
    byte_42EB933 = 1;
  }
  entity = 0LL;
  memset(&v83, 0, sizeof(v83));
  p_mergedScript = &this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantAddMaster___);
    v60 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v59 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v85.fields.currentCryptoKey = v60;
    *(_QWORD *)&v85.fields.fakeValue = v59;
    name = (struct System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v85, 0LL);
    if ( v61 )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v61,
              &entity,
              (int32_t)name,
              (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        script = this->fields.script;
        this->fields.mergedScript = script;
LABEL_21:
        sub_B5D560(
          (BattleServantConfConponent_o *)p_mergedScript,
          (System_Int32_array **)script,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69);
        return *p_mergedScript;
      }
      v70 = sub_B5D694(ServantEntity___c__DisplayClass101_0_TypeInfo);
      ServantEntity___c__DisplayClass101_0___ctor((ServantEntity___c__DisplayClass101_0_o *)v70, 0LL);
      v71 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v71,
        (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v70 )
      {
        *(_QWORD *)(v70 + 16) = v71;
        v78 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v70 + 16);
        sub_B5D560((BattleServantConfConponent_o *)(v70 + 16), (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
        v79 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v80 = (System_Action_KeyValuePair_string__object___o *)sub_B5D694(System_Action_KeyValuePair_string__object___TypeInfo);
        System_Action_KeyValuePair_string__object_____ctor(
          v80,
          (Il2CppObject *)v70,
          Method_ServantEntity___c__DisplayClass101_0__GetScript_b__0__,
          (const MethodInfo_2585A94 *)Method_System_Action_KeyValuePair_string__object____ctor__);
        BasicHelper__ForEach_KeyValuePair_string__object__(
          v79,
          (System_Action_T__o *)v80,
          (const MethodInfo_1AD7764 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          name = entity->fields.name;
          if ( name )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              &v83,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)name,
              (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v83,
                      (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*v78 )
                sub_B5D69C(0LL, v81);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                *v78,
                (System_Xml_XmlQualifiedName_o *)v83.fields.current.fields.key,
                (System_Xml_Schema_XmlSchemaObject_o *)v83.fields.current.fields.value,
                (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v83,
              (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            script = (struct System_Collections_Generic_Dictionary_string__object__o *)*v78;
            *p_mergedScript = (struct System_Collections_Generic_Dictionary_string__object__o *)*v78;
            goto LABEL_21;
          }
        }
      }
    }
    sub_B5D69C(name, v63);
  }
  return result;
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_1E6A468 *method)
{
  __int64 v3; // x3
  ServantEntity_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  Il2CppObject *ScriptValue; // x0
  System_String_o *v11; // x20
  long double v12; // q0

  v6 = this;
  if ( (byte_42EC249 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    this = (ServantEntity_o *)sub_B5D5C4(&string_TypeInfo, v7, v8, v9);
    byte_42EC249 = 1;
  }
  if ( !v6 )
    sub_B5D69C(this, key);
  ScriptValue = ServantEntity__GetScriptValue(v6, key, 0LL);
  v11 = (System_String_o *)sub_B5D684(ScriptValue, string_TypeInfo);
  if ( System_String__IsNullOrEmpty(v11, 0LL) )
    return 0LL;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (System_Int32_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                       v11,
                                       v12);
}


System_Object_array_array *__fastcall ServantEntity__GetScriptMultiArray_object_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_1E6A53C *method)
{
  __int64 v3; // x3
  ServantEntity_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  Il2CppObject *ScriptValue; // x0
  System_String_o *v11; // x20
  long double v12; // q0

  v6 = this;
  if ( (byte_42EC24A & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    this = (ServantEntity_o *)sub_B5D5C4(&string_TypeInfo, v7, v8, v9);
    byte_42EC24A = 1;
  }
  if ( !v6 )
    sub_B5D69C(this, key);
  ScriptValue = ServantEntity__GetScriptValue(v6, key, 0LL);
  v11 = (System_String_o *)sub_B5D684(ScriptValue, string_TypeInfo);
  if ( System_String__IsNullOrEmpty(v11, 0LL) )
    return 0LL;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (System_Object_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                        v11,
                                        v12);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB934 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EB934 = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int32_t SvtSkillListMax; // w22
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v23; // x0
  SkillInfo_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  SkillInfo_c **v31; // x24
  __int64 v32; // x25
  __int64 v33; // x27
  __int64 v34; // x26
  SkillInfo_o *v35; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v37; // x1
  SkillInfo_c **v38; // x28
  __int64 v39; // x23
  __int64 v40; // x24
  SkillInfo_array *v41; // x23
  __int64 v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x8
  __int64 v50; // x0
  __int64 v51; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  SvtSkillListMax = skillListNum;
  if ( (byte_42EB95D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)skillInfoList, skillListNum, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantSkillMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SkillInfo___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&SkillInfo_TypeInfo, v19, v20, v21);
    byte_42EB95D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( SvtSkillListMax <= 0 )
  {
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    SvtSkillListMax = v23->static_fields->SvtSkillListMax;
  }
  v24 = (SkillInfo_array *)sub_B5D5DC(SkillInfo___TypeInfo, (unsigned int)SvtSkillListMax);
  *skillInfoList = v24;
  sub_B5D560((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  if ( SvtSkillListMax >= 1 )
  {
    v31 = &SkillInfo_TypeInfo;
    v32 = SvtSkillListMax;
    v33 = 4LL;
    v34 = 32LL;
    do
    {
      v35 = (SkillInfo_o *)sub_B5D694(*v31);
      SkillInfo___ctor(v35, 0LL);
      if ( !v35 )
LABEL_26:
        sub_B5D69C(IsServantEquip, v37);
      v35->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v38 = v31;
        v40 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v39 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v52.fields.currentCryptoKey = v40;
        *(_QWORD *)&v52.fields.fakeValue = v39;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                   v52,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_26;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)IsServantEquip,
                           (int)v33 - 3,
                           0LL);
        v31 = v38;
        if ( IsServantEquip )
        {
          v35->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v35->fields.title,
            &v35->fields.explanation,
            0LL);
        }
      }
      v41 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_26;
      v42 = sub_B5D684(v35, v41->obj.klass->_1.element_class);
      if ( !v42 )
      {
        v51 = sub_B5D6BC(0LL);
        sub_B5D668(v51, 0LL);
      }
      if ( v33 - 4 >= (unsigned __int64)v41->max_length )
      {
        v50 = sub_B5D6C8(v42);
        sub_B5D668(v50, 0LL);
      }
      *((_QWORD *)&v41->obj.klass + v33) = v35;
      sub_B5D560(
        (BattleServantConfConponent_o *)((char *)v41 + v34),
        (System_Int32_array **)v35,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      v49 = v33 - 3;
      ++v33;
      v34 += 8LL;
    }
    while ( v49 < v32 );
  }
}


System_Int32_array *__fastcall ServantEntity__GetTreasureDeviceCategoryIdList(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v57; // x20
  __int64 v58; // x21
  ServantTreasureDvcMaster_o *v59; // x19
  TreasureDvcLvMaster_o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v61; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v63; // x20
  TreasureDvcLvEntity_o *v64; // x0
  TreasureDvcLvEntity_o *v65; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x19
  SkillLvMaster_o *v67; // x23
  System_Collections_Generic_HashSet_int__o *v68; // x27
  struct System_Int32_array *funcId; // x8
  TreasureDvcLvMaster_o *v70; // x24
  unsigned __int64 v71; // x20
  unsigned __int64 max_length; // x9
  DataVals_o *v73; // x25
  int32_t v74; // w1
  int32_t Param; // w26
  int32_t v76; // w1
  System_Collections_Generic_IEnumerable_T__o *v77; // x1
  System_Collections_Generic_HashSet_int__o *v78; // x22
  int32_t v79; // w26
  int32_t v80; // w27
  void *v81; // x8
  System_Collections_Generic_HashSet_int__o *v82; // x20
  _BOOL8 v83; // x0
  __int64 v84; // x1
  _BOOL8 v85; // x0
  __int64 v86; // x1
  __int64 count; // x1
  __int64 v89; // x0
  TreasureDvcLvMaster_o *v90; // [xsp+0h] [xbp-C0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v92; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v93; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v94; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v95; // [xsp+50h] [xbp-70h] BYREF
  TreasureDvcLvEntity_o *v96; // [xsp+58h] [xbp-68h] BYREF
  SkillLvEntity_o *v97; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_42EB95C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&int___TypeInfo, v50, v51, v52);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53, v54, v55);
    byte_42EB95C = 1;
  }
  entity = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v95 = 0LL;
  v93 = 0LL;
  memset(&v94, 0, sizeof(v94));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v58 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v57 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v59 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v99.fields.currentCryptoKey = v58;
  *(_QWORD *)&v99.fields.fakeValue = v57;
  DataValsList = (TreasureDvcLvMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v99, 0LL);
  if ( !v59 )
    goto LABEL_55;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v59,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataValsList = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_55;
    v63 = DataValsList;
    v64 = TreasureDvcLvMaster__GetEntity(DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v64 )
      return 0LL;
    v65 = v64;
    if ( !v64->fields.funcId )
      return 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v90 = v63;
    v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
    v67 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
    v68 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v68,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
    if ( !v68 )
      goto LABEL_55;
    System_Collections_Generic_HashSet_int___UnionWith(
      v68,
      (System_Collections_Generic_IEnumerable_T__o *)v65->fields.funcId,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvEntity__getDataValsList(v65, 100, 0LL);
    funcId = v65->fields.funcId;
    if ( !funcId )
      goto LABEL_55;
    p_list = &DataValsList->fields.list;
    v70 = DataValsList;
    v71 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v71 >= (int)max_length )
      {
        v82 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v82,
          (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v92,
          v68,
          (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v94 = v92;
        while ( 1 )
        {
          v83 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v94,
                  (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v83 )
            break;
          if ( !v66 )
            sub_B5D69C(v83, v84);
          v85 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v66,
                  &v93,
                  (int32_t)v94.fields._current,
                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v85 )
          {
            if ( !v93 )
              sub_B5D69C(v85, v86);
            if ( !v82 )
              sub_B5D69C(v85, v86);
            System_Collections_Generic_HashSet_int___Add(
              v82,
              HIDWORD(v93->fields.emptyMessage),
              (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v94,
          (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v82 )
        {
          count = (unsigned int)v82->fields._count;
          if ( (int)count >= 1 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_38799776(
              v82,
              EntityFromSvtIdOnly,
              (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_55:
        sub_B5D69C(DataValsList, v61);
      }
      if ( v71 >= max_length )
        goto LABEL_68;
      if ( !v66 )
        goto LABEL_55;
      DataValsList = (TreasureDvcLvMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                v66,
                                                &entity,
                                                funcId->m_Items[v71 + 1],
                                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_55;
        DataValsList = (TreasureDvcLvMaster_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v70 )
            goto LABEL_55;
          if ( v71 >= LODWORD(v70->fields._MasterName_k__BackingField) )
          {
LABEL_68:
            v89 = sub_B5D6C8(DataValsList);
            sub_B5D668(v89, 0LL);
          }
          if ( !entity )
            goto LABEL_55;
          v73 = (DataVals_o *)p_list[v71];
          if ( !v73 )
            goto LABEL_55;
          DataVals__SetTempType((DataVals_o *)p_list[v71], (FunctionMaster_o *)v66, (int32_t)entity->fields.age, 0LL);
          v74 = DataVals__isParam(v73, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v73, v74, 0, 0LL);
          v76 = DataVals__isParam(v73, 27, 0LL) ? 27 : 4;
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__GetParam(v73, v76, 0, 0LL);
          if ( !v67 )
            goto LABEL_55;
          DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(
                                                    v67,
                                                    &v97,
                                                    Param,
                                                    (int32_t)DataValsList,
                                                    0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v97 )
              goto LABEL_55;
            v77 = (System_Collections_Generic_IEnumerable_T__o *)v97->fields.funcId;
            if ( v77 )
              System_Collections_Generic_HashSet_int___UnionWith(
                v68,
                v77,
                (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
          }
          DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v73, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (TreasureDvcLvMaster_o *)DataVals__isParam(v73, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v78 = v68;
              v79 = DataVals__GetParam(v73, 92, 0, 0LL);
              v80 = DataVals__GetParam(v73, 93, 0, 0LL);
              if ( DataVals__isParam(v73, 95, 0LL) )
              {
                DataValsList = (TreasureDvcLvMaster_o *)TreasureDvcLvMaster__TryGetEntity(v90, &v96, v79, v80, 0LL);
                v68 = v78;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v81 = v96;
                  if ( !v96 )
                    goto LABEL_55;
LABEL_52:
                  v61 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v81 + 4);
                  if ( v61 )
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v68,
                      v61,
                      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                }
              }
              else
              {
                DataValsList = (TreasureDvcLvMaster_o *)SkillLvMaster__TryGetEntity(v67, &v95, v79, v80, 0LL);
                v68 = v78;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v81 = v95;
                  if ( !v95 )
                    goto LABEL_55;
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
      funcId = v65->fields.funcId;
      ++v71;
      if ( !funcId )
        goto LABEL_55;
    }
  }
  return EntityFromSvtIdOnly;
}


int32_t __fastcall ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w20
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x8
  ServantChangeMaster_o *v18; // x19
  ServantChangeEntity_o *v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_42EB946 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB946 = 1;
  }
  v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v17 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v22.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v18 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster,
        *(_QWORD *)&v22.fields.currentCryptoKey = v17,
        Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v22, 0LL),
        !v18) )
  {
    sub_B5D69C(Instance, v15);
  }
  v19 = ServantChangeMaster__TrueNameEntity(v18, (int32_t)Instance, 0LL);
  if ( v19 )
    return v19->fields.svtId;
  return v13;
}


bool __fastcall ServantEntity__IsAdditionExpandImage(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x8
  __int64 v8; // x9

  if ( (byte_42EB951 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16459/*"additionExpandImage"*/, limitCount, (_DWORD)method, v3);
    byte_42EB951 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16459/*"additionExpandImage"*/, method);
  if ( ScriptIntArrayParam )
  {
    v7 = *(_QWORD *)&ScriptIntArrayParam->max_length;
    if ( v7 && (int)v7 >= 1 )
    {
      v8 = 0LL;
      while ( ScriptIntArrayParam->m_Items[v8 + 1] != limitCount )
      {
        if ( (int)++v8 >= (int)v7 )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Array_o *v11; // x20
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_42EB959 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v8,
      v9,
      v10);
    byte_42EB959 = 1;
  }
  v11 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 5LL);
  v13.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v13, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v11,
           this->fields.classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB953 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17712/*"coinRoomCheck"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB953 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17712/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Array_o *v11; // x20
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_42EB957 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v8,
      v9,
      v10);
    byte_42EB957 = 1;
  }
  v11 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v13.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v13, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v11,
           this->fields.classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Array_o *v11; // x20
  const MethodInfo *v12; // x1
  System_RuntimeFieldHandle_o v14; // 0:w1.4

  if ( (byte_42EB958 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v8,
      v9,
      v10);
    byte_42EB958 = 1;
  }
  v11 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 4LL);
  v14.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v14, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v11,
           this->fields.classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeast(this, v12);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Array_o *v11; // x20
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_42EB956 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v8,
      v9,
      v10);
    byte_42EB956 = 1;
  }
  v11 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 8LL);
  v13.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v13, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v11,
           this->fields.classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t individuality,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t LimitCountByDispLimit; // w0
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w21
  int32_t v25; // w22
  System_Int32_array *IndividualityList; // x0
  int v27; // w8
  __int64 v28; // x9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x22
  __int64 v31; // x23
  ServantLimitAddMaster_o *v32; // x20
  __int64 v33; // x1
  struct System_Int32_array *v34; // x10
  int max_length; // w8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v39; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_42EB930 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ServantLimitAddMaster___,
      limitCount,
      dispLimitCount,
      *(_QWORD *)&individuality);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v18, v19, v20);
    byte_42EB930 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v23;
  *(_QWORD *)&v41.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v41, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v25, v24, 0LL);
  if ( !IndividualityList && (IndividualityList = this->fields.individuality) == 0LL
    || (v27 = IndividualityList->max_length, v27 < 1) )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v31 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v30 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v32 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v42.fields.currentCryptoKey = v31;
    *(_QWORD *)&v42.fields.fakeValue = v30;
    IndividualityList = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                v42,
                                                0LL);
    if ( v32 )
    {
      IndividualityList = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(
                                                  v32,
                                                  &entity,
                                                  (int32_t)IndividualityList,
                                                  v24,
                                                  0LL);
      if ( ((unsigned __int8)IndividualityList & 1) == 0 )
        return 0;
      if ( entity )
      {
        v34 = entity->fields.individuality;
        if ( v34 )
        {
          max_length = v34->max_length;
          if ( max_length >= 1 )
          {
            v36 = 0LL;
            v37 = &v34->m_Items[1];
            while ( (unsigned int)v36 < max_length )
            {
              if ( v37[v36] == individuality )
                return 1;
              if ( (int)++v36 >= max_length )
                return 0;
            }
LABEL_37:
            v39 = sub_B5D6C8(IndividualityList);
            sub_B5D668(v39, 0LL);
          }
        }
        return 0;
      }
    }
    sub_B5D69C(IndividualityList, v33);
  }
  v28 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v28 >= v27 )
      goto LABEL_37;
    if ( IndividualityList->m_Items[v28 + 1] == individuality )
      return 1;
    if ( (int)++v28 >= v27 )
      goto LABEL_19;
  }
}


bool __fastcall ServantEntity__IsIndividuality_30799964(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int32_t LimitCountByDispLimit; // w0
  __int64 v22; // x22
  __int64 v23; // x23
  int32_t v24; // w21
  int32_t v25; // w22
  System_Int32_array *individuality; // x0
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x8
  signed int max_length; // w12
  __int64 v30; // x14
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x22
  __int64 v33; // x23
  ServantLimitAddMaster_o *v34; // x20
  __int64 v35; // x1
  struct System_Int32_array *v36; // x8
  unsigned __int64 v37; // x10
  unsigned __int64 v38; // x9
  signed int v39; // w13
  __int64 v40; // x15
  __int64 v41; // x0
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_42EB931 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, limitCount, dispLimitCount, individualityList);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v18, v19, v20);
    byte_42EB931 = 1;
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
  v23 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v24 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v23;
  *(_QWORD *)&v44.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v44, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  individuality = ServantIndividualityMaster__GetIndividualityList(v25, v24, 0LL);
  if ( (individuality || (individuality = this->fields.individuality) != 0LL)
    && (int)*(_QWORD *)&individuality->max_length >= 1 )
  {
    v27 = (unsigned int)*(_QWORD *)&individuality->max_length;
    v28 = 0LL;
    while ( 1 )
    {
      if ( v28 >= v27 )
        goto LABEL_48;
      max_length = individualityList->max_length;
      if ( max_length >= 1 )
        break;
LABEL_24:
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_25;
    }
    v30 = 0LL;
    while ( (unsigned int)v30 < max_length )
    {
      if ( individuality->m_Items[v28 + 1] == individualityList->m_Items[v30 + 1] )
        goto LABEL_45;
      if ( (int)++v30 >= max_length )
        goto LABEL_24;
    }
LABEL_48:
    v41 = sub_B5D6C8(individuality);
    sub_B5D668(v41, 0LL);
  }
LABEL_25:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v33 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v34 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v33;
  *(_QWORD *)&v45.fields.fakeValue = v32;
  individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v45, 0LL);
  if ( !v34 )
    goto LABEL_49;
  individuality = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(
                                          v34,
                                          &entity,
                                          (int32_t)individuality,
                                          v24,
                                          0LL);
  if ( ((unsigned __int8)individuality & 1) != 0 )
  {
    if ( entity )
    {
      v36 = entity->fields.individuality;
      if ( v36 && (int)*(_QWORD *)&v36->max_length >= 1 )
      {
        v37 = (unsigned int)*(_QWORD *)&v36->max_length;
        v38 = 0LL;
        while ( 1 )
        {
          if ( v38 >= v37 )
            goto LABEL_48;
          v39 = individualityList->max_length;
          if ( v39 >= 1 )
            break;
LABEL_43:
          ++v38;
          individuality = 0LL;
          if ( (__int64)v38 >= (int)v37 )
            return (char)individuality;
        }
        v40 = 0LL;
        while ( (unsigned int)v40 < v39 )
        {
          if ( v36->m_Items[v38 + 1] == individualityList->m_Items[v40 + 1] )
            goto LABEL_45;
          if ( (int)++v40 >= v39 )
            goto LABEL_43;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
LABEL_49:
    sub_B5D69C(individuality, v35);
  }
LABEL_47:
  LOBYTE(individuality) = 0;
  return (char)individuality;
}


bool __fastcall ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  ServantChangeMaster_o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42EB945 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB945 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  if ( !v16 || (Instance = (DataManager_o *)ServantChangeMaster__GetEntityList(v16, (int32_t)Instance, 0LL)) == 0LL )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return Instance->fields.datalist != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  ServantChangeMaster_o *v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42EB943 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB943 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  if ( !v16 )
LABEL_9:
    sub_B5D69C(Instance, v12);
  return ServantChangeMaster__IsNameTrue(v16, (int32_t)Instance, 0LL);
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x21
  __int64 v15; // x22
  ServantChangeMaster_o *v16; // x20
  ServantChangeEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  ServantChangeEntity_o *v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EB944 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB944 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v15 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v16 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v15;
  *(_QWORD *)&v21.fields.fakeValue = v14;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v16 )
LABEL_12:
    sub_B5D69C(Instance, v12);
  v17 = ServantChangeMaster__TrueNameEntity(v16, (int32_t)Instance, 0LL);
  if ( v17 && (v19 = v17, ServantChangeEntity__IsEnable(v17, 0LL)) )
    return ServantChangeEntity__HasFlag(v19, 8, 0LL);
  else
    return ServantEntity__IsNameTrue(this, v18);
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB954 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22763/*"svtBuffTurnExtend"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB954 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22763/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Array_o *v11; // x20
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_42EB955 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v8,
      v9,
      v10);
    byte_42EB955 = 1;
  }
  v11 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 6LL);
  v13.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v11, v13, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v11,
           this->fields.classId,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
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
  sub_B5D560(
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
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__object__o *Script; // x0

  if ( (byte_42EB935 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EB935 = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_30802408(
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

  if ( (byte_42EB936 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, (_DWORD)param, method);
    byte_42EB936 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v13 = sub_B5D990(ScriptValue);
      LOBYTE(ScriptValue) = ServantEntity__checkScript_30802560(v9, v10, v11, *(float *)&v13, v12);
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


bool __fastcall ServantEntity__checkScript_30802560(
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

  if ( (byte_42EB937 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, (_DWORD)param, method);
    byte_42EB937 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B5D990(ScriptValue);
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

  if ( (byte_42EB93B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16852/*"battleHeight"*/, (_DWORD)height, (_DWORD)method, v3);
    byte_42EB93B = 1;
  }
  return ServantEntity__checkScript_30802560(this, (System_String_o *)StringLiteral_16852/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getBattleName(
        ServantEntity_o *this,
        bool isTrueNameForce,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  const MethodInfo *v31; // x1
  void *Instance; // x0
  __int64 v33; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v35; // x23
  __int64 v36; // x24
  EventServantMaster_o *v37; // x22
  int v38; // w8
  void *v39; // x22
  unsigned int v40; // w23
  WarQuestSelectionMaster_o *v41; // x0
  __int64 v42; // x22
  __int64 v43; // x23
  ServantChangeMaster_o *v44; // x21
  ServantChangeEntity_o *v45; // x0
  ServantChangeEntity_o *v46; // x21
  WarQuestSelectionMaster_o *v48; // x0
  __int64 v49; // x22
  __int64 v50; // x23
  ServantLimitAddMaster_o *v51; // x21
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v53; // x20
  System_String_o *v54; // x0
  WarQuestSelectionMaster_o *v55; // x0
  __int64 v56; // x21
  __int64 v57; // x22
  ServantChangeMaster_o *v58; // x20
  ServantChangeEntity_o *v59; // x0
  __int64 v60; // x0
  ServantLimitAddEntity_o *v61; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_42EB942 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce, limitCount, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_1/*""*/, v28, v29, v30);
    byte_42EB942 = 1;
  }
  entity = 0LL;
  battleName = 0LL;
  v61 = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v31) )
  {
    goto LABEL_17;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventServantMaster___);
  v36 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v35 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v37 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v64.fields.currentCryptoKey = v36;
  *(_QWORD *)&v64.fields.fakeValue = v35;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v64, 0LL);
  if ( !v37 )
    goto LABEL_54;
  Instance = EventServantMaster__GetEntities(v37, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_54;
  v38 = *((_DWORD *)Instance + 6);
  v39 = Instance;
  if ( v38 < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_29;
LABEL_17:
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    v41 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)Instance,
            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v43 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v42 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v44 = (ServantChangeMaster_o *)v41;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v65.fields.currentCryptoKey = v43;
    *(_QWORD *)&v65.fields.fakeValue = v42;
    Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v65, 0LL);
    if ( !v44 )
      goto LABEL_54;
    v45 = ServantChangeMaster__TrueNameEntity(v44, (int32_t)Instance, 0LL);
    if ( !v45 )
      goto LABEL_29;
    v46 = v45;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_54;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &entity,
                         v46->fields.svtId,
                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_54;
        v48 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v61 = 0LL;
        v50 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v49 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v51 = (ServantLimitAddMaster_o *)v48;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v66.fields.currentCryptoKey = v50;
        *(_QWORD *)&v66.fields.fakeValue = v49;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v66, 0LL);
        if ( !v51 )
          goto LABEL_54;
        ServantLimitAddMaster__TryGetEntity(v51, &v61, (int32_t)Instance, limitCount, 0LL);
        if ( v61 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v61, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v53, 0LL);
          if ( !System_String__IsNullOrEmpty(v54, 0LL) )
          {
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            }
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(v53, 0LL);
          }
        }
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v55 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)Instance,
                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v57 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v56 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v58 = (ServantChangeMaster_o *)v55;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v67.fields.currentCryptoKey = v57;
        *(_QWORD *)&v67.fields.fakeValue = v56;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v67, 0LL);
        if ( v58 )
        {
          v59 = ServantChangeMaster__GetEnableEntity(v58, (int32_t)Instance, 0LL);
          if ( v59 )
            return v59->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_54:
    sub_B5D69C(Instance, v33);
  }
  v40 = 0;
  while ( 1 )
  {
    if ( v40 >= v38 )
    {
      v60 = sub_B5D6C8(Instance);
      sub_B5D668(v60, 0LL);
    }
    Instance = (void *)*((_QWORD *)v39 + (int)v40 + 4);
    if ( !Instance )
      goto LABEL_54;
    Instance = (void *)EventServantEntity__TryGetBattleName((EventServantEntity_o *)Instance, &battleName, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    v38 = *((_DWORD *)v39 + 6);
    if ( (int)++v40 >= v38 )
      goto LABEL_17;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB939 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17395/*"cameraActionId"*/, (_DWORD)method, v2, v3);
    byte_42EB939 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30802408(this, (System_String_o *)StringLiteral_17395/*"cameraActionId"*/, &param, v3) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o **p_age; // x20
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB92E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EB92E = 1;
  }
  entity = 0LL;
  p_age = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v16);
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Int32_array *classPassive; // x8
  int max_length; // w24
  BalanceConfig_c *v25; // x0
  System_Int32_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x23
  __int64 v50; // x25
  __int64 v51; // x26
  __int64 i; // x27
  struct System_Int32_array *v53; // x8
  unsigned __int64 v54; // x19
  int32_t v55; // w24
  System_Int32_array *v56; // x8
  System_String_array *v57; // x8
  System_String_array *v58; // x9
  __int64 v59; // x8
  __int64 v60; // x0

  if ( (byte_42EB932 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&string___TypeInfo, v20, v21, v22);
    byte_42EB932 = 1;
  }
  classPassive = this->fields.classPassive;
  if ( classPassive )
    max_length = classPassive->max_length;
  else
    max_length = 0;
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  v26 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v25->static_fields->SvtPassiveSkillListMax);
  *idList = v26;
  sub_B5D560((BattleServantConfConponent_o *)idList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_String_array *)sub_B5D5DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v33;
  sub_B5D560((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_String_array *)sub_B5D5DC(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v40;
  sub_B5D560((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v50 = max_length;
    v51 = 32LL;
    for ( i = 8LL; ; ++i )
    {
      v53 = this->fields.classPassive;
      if ( !v53 )
        break;
      v54 = i - 8;
      if ( i - 8 >= (unsigned __int64)v53->max_length )
        goto LABEL_26;
      if ( !v49 )
        break;
      v55 = *((_DWORD *)&v53->obj.klass + i);
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v49,
                                    v55,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v56 = *idList;
      if ( !*idList )
        break;
      if ( v54 >= v56->max_length )
        goto LABEL_26;
      *((_DWORD *)&v56->obj.klass + i) = v55;
      if ( Instance )
      {
        v57 = *titleList;
        if ( !*titleList )
          break;
        v58 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v54 >= v57->max_length || v54 >= v58->max_length )
        {
LABEL_26:
          v60 = sub_B5D6C8(Instance);
          sub_B5D668(v60, 0LL);
        }
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v57 + v51),
          (System_String_o **)((char *)v58 + v51),
          0,
          0LL);
      }
      v59 = i - 7;
      v51 += 8LL;
      if ( v59 >= v50 )
        return;
    }
LABEL_25:
    sub_B5D69C(Instance, v48);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB938 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22929/*"tdTransform"*/, (_DWORD)method, v2, v3);
    byte_42EB938 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30802408(this, (System_String_o *)StringLiteral_22929/*"tdTransform"*/, &param, v3) )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x22
  __int64 v19; // x23
  ServantChangeMaster_o *v20; // x21
  ServantChangeEntity_o *v21; // x0
  const MethodInfo *v22; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EB940 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EB940 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v20 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v19;
  *(_QWORD *)&v25.fields.fakeValue = v18;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  if ( !v20 )
LABEL_14:
    sub_B5D69C(Instance, v16);
  v21 = ServantChangeMaster__GetHiddenEntity(v20, (int32_t)Instance, 0LL);
  if ( v21 )
    return v21->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v22);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(Name, 0LL);
}


System_Int32_array *__fastcall ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int32_t LimitCountByDispLimit; // w0
  __int64 v23; // x20
  __int64 v24; // x22
  int32_t v25; // w21
  int32_t v26; // w20
  System_Int32_array *IndividualityList; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x23
  __int64 v30; // x24
  ServantLimitAddMaster_o *v31; // x22
  struct System_Int32_array *v32; // x0
  __int64 v33; // x1
  System_Array_o *individuality; // x21
  void *monitor; // x8
  __int64 v36; // x9
  struct System_Int32_array *v37; // x0
  struct System_Int32_array **p_individuality; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42EB92F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, limitCount, dispLimitCount, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&int___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v19, v20, v21);
    byte_42EB92F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v24 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v25 = LimitCountByDispLimit;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v47.fields.currentCryptoKey = v24;
  *(_QWORD *)&v47.fields.fakeValue = v23;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v47, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v26, v25, 0LL);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v30 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v31 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v30;
  *(_QWORD *)&v48.fields.fakeValue = v29;
  v32 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
  if ( !v31 )
    goto LABEL_33;
  v32 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v31, &entity, (int32_t)v32, v25, 0LL);
  if ( ((unsigned __int8)v32 & 1) == 0 )
    goto LABEL_30;
  if ( !entity )
    goto LABEL_33;
  individuality = (System_Array_o *)entity->fields.individuality;
  if ( individuality && (monitor = individuality[1].monitor) != 0LL )
  {
    if ( IndividualityList )
    {
      v36 = *(_QWORD *)&IndividualityList->max_length;
      if ( v36 )
      {
        individuality = (System_Array_o *)sub_B5D5DC(int___TypeInfo, (unsigned int)(v36 + (_DWORD)monitor));
        System_Array__CopyTo((System_Array_o *)IndividualityList, individuality, 0, 0LL);
        if ( entity )
        {
          v32 = entity->fields.individuality;
          if ( v32 )
          {
            System_Array__CopyTo((System_Array_o *)v32, individuality, IndividualityList->max_length, 0LL);
            return (System_Int32_array *)individuality;
          }
        }
LABEL_33:
        sub_B5D69C(v32, v33);
      }
    }
  }
  else
  {
LABEL_30:
    individuality = (System_Array_o *)IndividualityList;
    if ( !IndividualityList )
    {
      v37 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
      this->fields.individuality = v37;
      p_individuality = &this->fields.individuality;
      sub_B5D560(
        (BattleServantConfConponent_o *)p_individuality,
        (System_Int32_array **)v37,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  ServantChangeMaster_o *v21; // x22
  ServantChangeEntity_o *v22; // x0
  const MethodInfo *v23; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_42EB93E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, limitCount, imageLimitCount, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42EB93E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v26.fields.currentCryptoKey = v20;
  *(_QWORD *)&v26.fields.fakeValue = v19;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v26, 0LL);
  if ( !v21 )
LABEL_14:
    sub_B5D69C(Instance, v17);
  v22 = ServantChangeMaster__GetEnableEntity(v21, (int32_t)Instance, 0LL);
  if ( v22 )
    return v22->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, v23);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_30805492(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v19; // x23
  __int64 v20; // x24
  ServantChangeMaster_o *v21; // x22
  ServantChangeEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *v30; // x1
  ServantChangeEntity_o *v31; // x22
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_42EB941 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, (_DWORD)ruby, limitCount, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    byte_42EB941 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v20;
  *(_QWORD *)&v42.fields.fakeValue = v19;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
  if ( !v21 )
LABEL_14:
    sub_B5D69C(Instance, v17);
  v22 = ServantChangeMaster__GetEnableEntity(v21, (int32_t)Instance, 0LL);
  if ( v22 )
  {
    v30 = v22->fields.ruby;
    v31 = v22;
    *ruby = v30;
    sub_B5D560((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v30, v24, v25, v26, v27, v28, v29);
    return v31->fields.name;
  }
  else
  {
    v33 = ServantEntity__GetRuby(this, v23);
    *ruby = v33;
    sub_B5D560((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, v40);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(Name, 0LL);
  }
}


System_Int32_array *__fastcall ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Int32_array *result; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v25; // x19
  __int64 v26; // x9
  ServantEntity___c_c *v27; // x0
  struct ServantEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__135_0; // x20
  Il2CppObject *v30; // x21
  struct ServantEntity___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_int__o *v38; // x0
  __int64 v39; // x1

  if ( (byte_42EB952 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ServantEntity___c__getScriptIntArrayParam_b__135_0__, v18, v19, v20);
    sub_B5D5C4(&ServantEntity___c_TypeInfo, v21, v22, v23);
    byte_42EB952 = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v25 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
    v26 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v26
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[v26 - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v27 = ServantEntity___c_TypeInfo;
      if ( (BYTE3(ServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v27 = ServantEntity___c_TypeInfo;
      }
      static_fields = v27->static_fields;
      _9__135_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__135_0;
      if ( !_9__135_0 )
      {
        if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          static_fields = ServantEntity___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)static_fields->__9;
        _9__135_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__135_0,
          v30,
          Method_ServantEntity___c__getScriptIntArrayParam_b__135_0__,
          (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
        v31 = ServantEntity___c_TypeInfo->static_fields;
        v31->__9__135_0 = (struct System_Converter_object__int__o *)_9__135_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v31->__9__135_0,
          (System_Int32_array **)_9__135_0,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      v38 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                        v25,
                                                        (System_Converter_T__TOutput__o *)_9__135_0,
                                                        (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v38 )
        return System_Collections_Generic_List_int___ToArray(
                 v38,
                 (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_B5D990(result);
    }
    sub_B5D69C(v38, v39);
  }
  return result;
}


System_String_o *__fastcall ServantEntity__getTrueName(
        ServantEntity_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_42EB93F & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, limitCount, (_DWORD)method, v3);
    byte_42EB93F = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v4);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(Name, 0LL);
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
  __int64 v3; // x3

  if ( (byte_42EB93C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20141/*"invalidSkillShift"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB93C = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_20141/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D50 & 1) == 0 )
  {
    sub_B5D5C4(&ServantEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5D50 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantEntity___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_42E5D51 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__Add__,
      x.fields.key,
      x.fields.value,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v9, v10, v11);
    byte_42E5D51 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_B5D69C(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
    (System_Xml_XmlQualifiedName_o *)key,
    (System_Xml_Schema_XmlSchemaObject_o *)value,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}