void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16919 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16919 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B168E5 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B168E5 = 1;
  }
  v5 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16914 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17114/*"assumedEffectId"*/, method, v2);
    byte_4B16914 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17114/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  Il2CppObject *Master_object; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 lv; // x2
  __int64 v38; // x3
  __int64 v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  unsigned __int64 v41; // x27
  SkillInfo_o *v42; // x8
  SkillLvEntity_o *v43; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x24
  unsigned __int64 v46; // x28
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v49; // x25
  int32_t v50; // w1
  int32_t Param; // w26
  int32_t v52; // w1
  int32_t v53; // w0
  System_Collections_Generic_HashSet_int__o *v54; // x19
  _BOOL8 v55; // x0
  __int64 v56; // x1
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 count; // x1
  System_Int32_array *v60; // x20
  System_Collections_Generic_HashSet_int__o *v62; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v63; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v64; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v65; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v66; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B16917 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v29, v30);
    sub_1BCA7E0(&int___TypeInfo, v31, v32);
    byte_4B16917 = 1;
  }
  v66 = 0LL;
  entity = 0LL;
  memset(&v65, 0, sizeof(v65));
  v64 = 0LL;
  v62 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       method,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v62,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v33);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_54;
  v39 = *(_QWORD *)&enableSkillInfoList->max_length;
  v40 = DataValsList;
  if ( (int)v39 >= 1 )
  {
    v41 = 0LL;
    do
    {
      if ( v41 >= (unsigned int)v39 )
LABEL_55:
        sub_1BCAA44(DataValsList, id);
      v42 = enableSkillInfoList->m_Items[v41];
      if ( v42 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v42->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v42->fields.lv;
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
              v43 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v62;
                if ( !v62 )
                  goto LABEL_54;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v62,
                  id,
                  (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvEntity__getDataValsList(v43, 0LL);
                funcId = v43->fields.funcId;
                if ( !funcId )
                  goto LABEL_54;
                v45 = DataValsList;
                v46 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v46 >= (int)max_length )
                    break;
                  if ( v46 >= max_length )
                    goto LABEL_55;
                  if ( !v40 )
                    goto LABEL_54;
                  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                 v40,
                                                                                 &entity,
                                                                                 funcId->m_Items[v46 + 1],
                                                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_54;
                    DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)FuncList__isAddState(
                                                                                   (int32_t)entity[1].monitor,
                                                                                   0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v45 )
                        goto LABEL_54;
                      if ( v46 >= LODWORD(v45->fields._MasterName_k__BackingField) )
                        goto LABEL_55;
                      if ( !entity )
                        goto LABEL_54;
                      v49 = (DataVals_o *)p_list[v46];
                      if ( !v49 )
                        goto LABEL_54;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v46],
                        (FunctionMaster_o *)v40,
                        (int32_t)entity[1].monitor,
                        0LL);
                      if ( DataVals__isParam(v49, 26, 0LL) )
                        v50 = 26;
                      else
                        v50 = 3;
                      Param = DataVals__GetParam(v49, v50, 0, 0LL);
                      if ( DataVals__isParam(v49, 27, 0LL) )
                        v52 = 27;
                      else
                        v52 = 4;
                      v53 = DataVals__GetParam(v49, v52, 0, 0LL);
                      DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillLvMaster__TryGetEntity(
                                                                                     (SkillLvMaster_o *)Master_object,
                                                                                     &v66,
                                                                                     Param,
                                                                                     v53,
                                                                                     0LL);
                      if ( ((unsigned __int8)DataValsList & 1) != 0 )
                      {
                        if ( !v66 )
                          goto LABEL_54;
                        id = (System_Collections_Generic_IEnumerable_T__o *)v66->fields.funcId;
                        if ( id )
                          System_Collections_Generic_HashSet_int___UnionWith(
                            v62,
                            id,
                            (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v43->fields.funcId;
                  ++v46;
                  if ( !funcId )
                    goto LABEL_54;
                }
              }
            }
          }
        }
      }
      LODWORD(v39) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v41 < (int)v39 );
  }
  v54 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       id,
                                                       lv,
                                                       v38);
  System_Collections_Generic_HashSet_int____ctor(
    v54,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  DataValsList = (DataMasterBase_TMaster__TEntity__PKType__o *)v62;
  if ( !v62 )
    goto LABEL_54;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v63,
    v62,
    (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v65 = v63;
  while ( 1 )
  {
    v55 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v65,
            (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v55 )
      break;
    if ( !v40 )
      sub_1BCAA3C(v55, v56);
    v57 = DataMasterBase_object__object__int___TryGetEntity(
            v40,
            &v64,
            (int32_t)v65.fields._current,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v57 )
    {
      if ( !v64 )
        sub_1BCAA3C(v57, v58);
      if ( !v54 )
        sub_1BCAA3C(v57, v58);
      System_Collections_Generic_HashSet_int___Add(
        v54,
        HIDWORD(v64[4].monitor),
        (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v65,
    (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v54 )
LABEL_54:
    sub_1BCAA3C(DataValsList, id);
  count = (unsigned int)v54->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v60 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_54878432(
    v54,
    v60,
    (const MethodInfo_34560E0 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v60;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16908 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17996/*"changeLimitVoiceInFriendshipLv"*/, method, v2);
    byte_4B16908 = 1;
  }
  param = 0;
  ServantEntity__checkScript_40381492(this, (System_String_o *)StringLiteral_17996/*"changeLimitVoiceInFriendshipLv"*/, &param, v3);
  return param;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetClassId(
        ServantEntity_o *this,
        bool isPlayableBeastToBase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  int32_t *p_classId; // x19
  int32_t classId; // t1
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0

  if ( (byte_4B16918 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isPlayableBeastToBase, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v5, v6);
    byte_4B16918 = 1;
  }
  if ( isPlayableBeastToBase )
  {
    v7 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, isPlayableBeastToBase);
      v7 = BalanceConfig_TypeInfo;
    }
    classId = this->fields.classId;
    p_classId = &this->fields.classId;
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->PlayableBeastClassIds,
           classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
        v11 = BalanceConfig_TypeInfo;
      }
      p_classId = &v11->static_fields->PlayableBeastBaseClassId;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 *v11; // x8
  __int64 v12; // x1
  bool IsServantEquip; // w19

  if ( (byte_4B168F6 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12088/*"SERVANT_UNIT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11740/*"SERVANT_EQUIP_UNIT"*/, v8, v9);
    byte_4B168F6 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
    v11 = &StringLiteral_12088/*"SERVANT_UNIT"*/;
  }
  else
  {
    IsServantEquip = SvtType__IsServantEquip(this->fields.type, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v11 = &StringLiteral_5829/*"EXCEPT_SERVANT_UNIT"*/;
    if ( IsServantEquip )
      v11 = &StringLiteral_11740/*"SERVANT_EQUIP_UNIT"*/;
  }
  return LocalizationManager__Get((System_String_o *)*v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16913 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18724/*"defaultDeadType"*/, *(_QWORD *)&defType, method);
    byte_4B16913 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40381492(this, (System_String_o *)StringLiteral_18724/*"defaultDeadType"*/, &param, v3) )
    return param;
  else
    return defType;
}


int32_t __fastcall ServantEntity__GetEventJoinNameExistSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  int32_t EventNameServantId; // w19
  EventServantEntity_array *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v13; // x1
  int max_length; // w8
  EventServantEntity_array *v15; // x20
  unsigned int v16; // w21
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16902 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventServantMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16902 = 1;
  }
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    name = (System_String_o *)StringLiteral_1/*""*/;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v8);
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventServantMaster___);
    Instance = (EventServantEntity_array *)ServantEntity__GetEventNameServantId(this, v13);
    if ( !MasterData_object )
      goto LABEL_16;
    Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    max_length = Instance->max_length;
    v15 = Instance;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
          sub_1BCAA44(Instance, v11);
        Instance = (EventServantEntity_array *)v15->m_Items[v16];
        if ( !Instance )
          break;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)Instance,
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          return EventNameServantId;
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          return 0;
      }
LABEL_16:
      sub_1BCAA3C(Instance, v11);
    }
  }
  return 0;
}


int32_t __fastcall ServantEntity__GetEventNameServantId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  bool v4; // zf
  __int64 v5; // x1
  ServantEntity_Fields *p_baseSvtId; // x8
  int32_t *p_fakeValue; // x9
  __int64 v8; // x19
  __int64 v9; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4B16905 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B16905 = 1;
  }
  v4 = !SvtType__IsSvtMaterialTd(this->fields.type, 0LL);
  p_baseSvtId = (ServantEntity_Fields *)&this->fields.baseSvtId;
  p_fakeValue = &this->fields.baseSvtId.fields.fakeValue;
  if ( v4 )
    p_fakeValue = &this->fields.id.fields.fakeValue;
  if ( v4 )
    p_baseSvtId = &this->fields;
  v8 = *(_QWORD *)&p_baseSvtId->id.fields.currentCryptoKey;
  v9 = *(_QWORD *)p_fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v11, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v9; // x8

  if ( (byte_4B16909 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_7369/*"HideInAnimNode"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B16909 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7369/*"HideInAnimNode"*/, v2);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v9 = (System_String_o *)ScriptValue;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    return v9;
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


System_Int32_array *__fastcall ServantEntity__GetIndividuality(ServantEntity_o *this, const MethodInfo *method)
{
  return this->fields.individuality;
}


bool __fastcall ServantEntity__GetIsCollectionStatusNotGet(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserServantCollectionEntity_array *Instance; // x0
  __int64 v11; // x1
  UserServantCollectionMaster_o *v12; // x20
  __int64 v13; // x8
  int64_t UserId; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x22
  int64_t v18; // x19
  int32_t v19; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B16906 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16906 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_14;
  Instance = (UserServantCollectionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UserServantCollectionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v12 = (UserServantCollectionMaster_o *)Instance,
        (Instance = UserServantCollectionMaster__getList((UserServantCollectionMaster_o *)Instance, 2, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v11);
  }
  v13 = *(_QWORD *)&Instance->max_length;
  if ( v13 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
    UserId = NetworkManager__get_UserId(0LL);
    v17 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v18 = UserId;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    *(_QWORD *)&v22.fields.currentCryptoKey = v17;
    *(_QWORD *)&v22.fields.fakeValue = v16;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v12, v18, v19, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(v13) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return v13 & 1;
    }
LABEL_14:
    LOBYTE(v13) = 0;
  }
  return v13 & 1;
}


bool __fastcall ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x1
  int32_t EventNameServantId; // w19
  UserServantEntity_array *Instance; // x0
  __int64 v11; // x1
  int max_length; // w8
  UserServantEntity_array *v13; // x20
  unsigned int v14; // w24
  bool v15; // w25
  UserServantEntity_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B16904 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16904 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v8);
    Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_21;
    Instance = UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_21;
    max_length = Instance->max_length;
    v13 = Instance;
    if ( max_length >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1BCAA44(Instance, v11);
        v16 = v13->m_Items[v14];
        if ( !v16 )
          break;
        v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
        *(_QWORD *)&v20.fields.currentCryptoKey = v18;
        *(_QWORD *)&v20.fields.fakeValue = v17;
        Instance = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                v20,
                                                0LL);
        if ( (_DWORD)Instance == EventNameServantId )
        {
          Instance = (UserServantEntity_array *)UserServantEntity__IsEventJoin(v16, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          v15 = 1;
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return v15;
      }
LABEL_21:
      sub_1BCAA3C(Instance, v11);
    }
  }
  return 0;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B16903 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B16903 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)UserServantMaster__getOrganizationList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_12;
  if ( Instance->fields.m_CancellationTokenSource )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    sub_1BCAA3C(Instance, v8);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v33; // x1
  int v34; // w8
  void *v35; // x21
  unsigned int v36; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v37; // x21
  Il2CppObject *Master_object; // x0
  __int64 v39; // x1
  __int64 v40; // x24
  __int64 v41; // x25
  ServantLimitAddMaster_o *v42; // x22
  const MethodInfo *v43; // x4
  System_String_o *OverwriteServantName; // x0
  __int64 v45; // x1
  System_String_o *v46; // x19
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x24
  __int64 v50; // x25
  ServantLimitAddMaster_o *v51; // x23
  const MethodInfo *v52; // x4
  System_String_o *v53; // x21
  System_String_o *v54; // x0
  bool IsNullOrEmpty; // w0
  __int64 v56; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameSave; // x20
  System_String_o *v58; // x0
  __int64 v60; // x1
  Il2CppObject *v61; // x22
  int64_t UserId; // x0
  __int64 v63; // x1
  __int64 v64; // x24
  __int64 v65; // x25
  int64_t v66; // x23
  ServantLimitAddEntity_o *v67; // [xsp+0h] [xbp-70h] BYREF
  UserServantCollectionEntity_o *v68; // [xsp+8h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_4B16900 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventServantMaster___,
      *(_QWORD *)&limitCount,
      isForceNeedToCheckEventJoinName);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B16900 = 1;
  }
  entity = 0LL;
  name = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v29) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventServantMaster___);
  Instance = (void *)ServantEntity__GetEventNameServantId(this, v33);
  if ( !MasterData_object )
    goto LABEL_63;
  Instance = EventServantMaster__GetEntities((EventServantMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_63;
  v34 = *((_DWORD *)Instance + 6);
  v35 = Instance;
  if ( v34 < 1 )
  {
LABEL_15:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v30);
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( (imageLimitCount & 0x80000000) != 0 )
    {
      if ( maxLimitCount == -1 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        v61 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v60);
        UserId = NetworkManager__get_UserId(0LL);
        v65 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v64 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v66 = UserId;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
        *(_QWORD *)&v73.fields.currentCryptoKey = v65;
        *(_QWORD *)&v73.fields.fakeValue = v64;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
        if ( !v61 )
          goto LABEL_63;
        if ( !UserServantCollectionMaster__TryGetEntity(
                (UserServantCollectionMaster_o *)v61,
                &v68,
                v66,
                (int32_t)Instance,
                0LL) )
          goto LABEL_40;
        Instance = v68;
        if ( !v68 )
          goto LABEL_63;
        Instance = (void *)UserServantCollectionEntity__IsGet(v68, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_40;
        if ( !v68 )
          goto LABEL_63;
        maxLimitCount = v68->fields.maxLimitCount;
        if ( (maxLimitCount & 0x80000000) != 0 )
          goto LABEL_40;
      }
      else if ( (maxLimitCount & 0x80000000) != 0 )
      {
        goto LABEL_40;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v47 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v67 = 0LL;
        v50 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v49 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v51 = (ServantLimitAddMaster_o *)v47;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48);
        *(_QWORD *)&v72.fields.currentCryptoKey = v50;
        *(_QWORD *)&v72.fields.fakeValue = v49;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v72, 0LL);
        if ( v51 )
        {
          ServantLimitAddMaster__TryGetEntity(v51, &v67, (int32_t)Instance, maxLimitCount, v52);
          if ( !v67 )
            goto LABEL_40;
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteServantName(v67, v30);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v41 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v40 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v42 = (ServantLimitAddMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
      *(_QWORD *)&v71.fields.currentCryptoKey = v41;
      *(_QWORD *)&v71.fields.fakeValue = v40;
      Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v71, 0LL);
      if ( v42 )
      {
        if ( !ServantLimitAddMaster__TryGetEntity(v42, &entity, (int32_t)Instance, imageLimitCount, v43) )
          goto LABEL_40;
        Instance = entity;
        if ( entity )
        {
          OverwriteServantName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, v30);
LABEL_37:
          v53 = OverwriteServantName;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v45);
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v53, 0LL);
LABEL_40:
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v30);
          v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v37, 0LL);
          IsNullOrEmpty = System_String__IsNullOrEmpty(v54, 0LL);
          if ( useName )
          {
            if ( !IsNullOrEmpty )
              return v37;
            nameSave = this->fields.nameSave;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v56);
            v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(nameSave, 0LL);
            if ( System_String__IsNullOrEmpty(v58, 0LL) )
              return this->fields.name;
          }
          else if ( !IsNullOrEmpty )
          {
            return v37;
          }
          return this->fields.nameSave;
        }
      }
    }
LABEL_63:
    sub_1BCAA3C(Instance, v30);
  }
  v36 = 0;
  while ( 1 )
  {
    if ( v36 >= v34 )
      sub_1BCAA44(Instance, v30);
    Instance = (void *)*((_QWORD *)v35 + (int)v36 + 4);
    if ( !Instance )
      goto LABEL_63;
    Instance = (void *)EventServantEntity__TryGetName((EventServantEntity_o *)Instance, &name, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      break;
    v34 = *((_DWORD *)v35 + 6);
    if ( (int)++v36 >= v34 )
      goto LABEL_15;
  }
  v46 = name;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v30);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v46, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B168F3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4587/*"ClassImageId"*/, method, v2);
    byte_4B168F3 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40381492(this, (System_String_o *)StringLiteral_4587/*"ClassImageId"*/, &param, v3) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Int32_array_array *ScriptMultiArray_int; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  System_Int32_array_array *v14; // x20
  unsigned __int64 v15; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v17; // x21

  if ( (byte_4B16907 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, *(_QWORD *)&baseSkillId, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantEntity_GetScriptMultiArray_int___, v7, v8);
    sub_1BCA7E0(&StringLiteral_12953/*"SkillRankUp"*/, v9, v10);
    byte_4B16907 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12953/*"SkillRankUp"*/,
                           (const MethodInfo_2FB15B4 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v13 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v14 = ScriptMultiArray_int;
    if ( (int)v13 >= 1 )
    {
      v15 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v15 < (unsigned int)v13 )
      {
        v17 = m_Items[v15];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v17,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v17;
        LODWORD(v13) = v14->max_length;
        if ( (__int64)++v15 >= (int)v13 )
          goto LABEL_9;
      }
LABEL_13:
      sub_1BCAA44(ScriptMultiArray_int, v12);
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !ScriptMultiArray_int )
    sub_1BCAA3C(0LL, v12);
  v17 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v17;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *Empty; // x20
  const MethodInfo *v13; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  __int64 v18; // x22
  __int64 v19; // x23
  EventServantMaster_o *v20; // x21
  int max_length; // w8
  EventServantEntity_array *v22; // x21
  unsigned int v23; // w23
  Il2CppClass **v24; // x8
  EventServantEntity_o *v25; // x22
  __int64 v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B16901 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventServantMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&string_TypeInfo, v10, v11);
    byte_4B16901 = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v13) )
  {
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v20 = (EventServantMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
    if ( !v20 || (Instance = EventServantMaster__GetEntities(v20, (int32_t)Instance, 0LL)) == 0LL )
LABEL_23:
      sub_1BCAA3C(Instance, v15);
    max_length = Instance->max_length;
    v22 = Instance;
    if ( max_length >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= max_length )
          sub_1BCAA44(Instance, v15);
        v24 = &v22->obj.klass + (int)v23;
        v25 = (EventServantEntity_o *)v24[4];
        if ( !v25 )
          goto LABEL_23;
        Instance = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)v24[4],
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          break;
        max_length = v22->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_18;
      }
      Empty = EventServantEntity__GetRuby(v25, 0LL);
    }
  }
LABEL_18:
  if ( System_String__IsNullOrEmpty(Empty, 0LL) )
  {
    ruby = this->fields.ruby;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v26);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(ruby, 0LL);
  }
  return Empty;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall ServantEntity__GetScript(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  PartyOrganizationUtility_o *p_mergedScript; // x19
  Il2CppObject *Master_object; // x0
  __int64 v39; // x1
  __int64 v40; // x22
  __int64 v41; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x21
  Il2CppClass *klass; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  int64_t v46; // x2
  __int64 v47; // x3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_Dictionary_object__object__o *v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_Dictionary_object__object__o **p_script; // x21
  System_Collections_Generic_IEnumerable_T__o *script; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_T__o *v68; // x23
  __int64 v69; // x1
  System_Collections_Generic_Dictionary_object__object__o *v70; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B168EC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_KeyValuePair_string__object___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantAddMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__, v32, v33);
    sub_1BCA7E0(&ServantEntity___c__DisplayClass102_0_TypeInfo, v34, v35);
    byte_4B168EC = 1;
  }
  entity = 0LL;
  memset(&v71, 0, sizeof(v71));
  p_mergedScript = (PartyOrganizationUtility_o *)&this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantAddMaster___);
    v41 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v40 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    *(_QWORD *)&v73.fields.currentCryptoKey = v41;
    *(_QWORD *)&v73.fields.fakeValue = v40;
    klass = (Il2CppClass *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
    if ( v42 )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v42,
              &entity,
              (int32_t)klass,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)&this->fields.script;
LABEL_19:
        v70 = *p_script;
        p_mergedScript->klass = (PartyOrganizationUtility_c *)*p_script;
        sub_1BCA784(p_mergedScript, (int64_t)v70, v46, v47, v48, v49, v50, v51);
        return (System_Collections_Generic_Dictionary_string__object__o *)p_mergedScript->klass;
      }
      v52 = sub_1BCAA2C(ServantEntity___c__DisplayClass102_0_TypeInfo, v45, v46, v47);
      System_Object___ctor((Il2CppObject *)v52, 0LL);
      v56 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                         v53,
                                                                         v54,
                                                                         v55);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v56,
        (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v52 )
      {
        *(_QWORD *)(v52 + 16) = v56;
        p_script = (System_Collections_Generic_Dictionary_object__object__o **)(v52 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 16), (int64_t)v56, v57, v58, v59, v60, v61, v62);
        script = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v68 = (System_Action_T__o *)sub_1BCAA2C(System_Action_KeyValuePair_string__object___TypeInfo, v65, v66, v67);
        System_Action_KeyValuePair_object__object_____ctor(
          v68,
          (Il2CppObject *)v52,
          Method_ServantEntity___c__DisplayClass102_0__GetScript_b__0__,
          0LL);
        BasicHelper__ForEach_KeyValuePair_object__object__(
          script,
          v68,
          (const MethodInfo_2EFF060 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          klass = entity[2].klass;
          if ( klass )
          {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v71,
              (System_Collections_Generic_Dictionary_object__object__o *)klass,
              (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v71,
                      (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*p_script )
                sub_1BCAA3C(0LL, v69);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                *p_script,
                v71.fields._current.fields.key,
                v71.fields._current.fields.value,
                (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v71,
              (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            goto LABEL_19;
          }
        }
      }
    }
    sub_1BCAA3C(klass, v44);
  }
  return result;
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *__fastcall ServantEntity__GetScriptMultiArray___Il2CppFullySharedGenericType_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2FB167C *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v9; // x20
  __int64 v10; // x1
  long double inited; // q0

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, key, method);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v9 = (System_String_o *)ScriptValue;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array_array *)((__int64 (__fastcall *)(System_String_o *, long double))method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_->methodPointer)(
                                                                               v9,
                                                                               inited);
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_2FB15B4 *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *ScriptValue; // x0
  System_String_o *v9; // x20
  __int64 v10; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, key, method);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  if ( ScriptValue )
  {
    if ( (System_String_c *)ScriptValue->klass == string_TypeInfo )
      v9 = (System_String_o *)ScriptValue;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( System_String__IsNullOrEmpty(v9, 0LL) )
    return 0LL;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
  return JsonManager__DeserializeMultiArray_int_(
           (Il2CppObject *)v9,
           (const MethodInfo_2F79850 *)method->rgctx_data->_0_JsonManager_DeserializeMultiArray_T_);
}


Il2CppObject *__fastcall ServantEntity__GetScriptValue(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B168ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B168ED = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEntity__GetSkillInfo(
        ServantEntity_o *this,
        SkillInfo_array **skillInfoList,
        int32_t skillListNum,
        const MethodInfo *method)
{
  int32_t SvtSkillListMax; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  Il2CppObject *Master_object; // x21
  BalanceConfig_c *v19; // x0
  SkillInfo_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  unsigned __int64 v30; // x25
  __int64 v31; // x28
  __int64 v32; // x29
  SkillInfo_o *v33; // x22
  ServantSkillEntity_o *IsServantEquip; // x0
  __int64 v35; // x1
  __int64 v36; // x23
  __int64 v37; // x24
  SkillInfo_array *v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  SvtSkillListMax = skillListNum;
  if ( (byte_4B16916 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, skillInfoList, *(_QWORD *)&skillListNum);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantSkillMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&SkillInfo___TypeInfo, v13, v14);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v15, v16);
    byte_4B16916 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillInfoList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( SvtSkillListMax <= 0 )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      v19 = BalanceConfig_TypeInfo;
    }
    SvtSkillListMax = v19->static_fields->SvtSkillListMax;
  }
  v20 = (SkillInfo_array *)sub_1BCA888(SkillInfo___TypeInfo, (unsigned int)SvtSkillListMax);
  *skillInfoList = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)skillInfoList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  if ( SvtSkillListMax >= 1 )
  {
    v30 = 0LL;
    v31 = (unsigned int)SvtSkillListMax;
    v32 = 32LL;
    do
    {
      v33 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v27, v28, v29);
      SkillInfo___ctor(v33, 0LL);
      if ( !v33 )
LABEL_23:
        sub_1BCAA3C(IsServantEquip, v35);
      v33->fields.lv = 1;
      IsServantEquip = (ServantSkillEntity_o *)SvtType__IsServantEquip(this->fields.type, 0LL);
      if ( ((unsigned __int8)IsServantEquip & 1) == 0 )
      {
        v37 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v36 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
        *(_QWORD *)&v48.fields.currentCryptoKey = v37;
        *(_QWORD *)&v48.fields.fakeValue = v36;
        IsServantEquip = (ServantSkillEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v48,
                                                   0LL);
        if ( !Master_object )
          goto LABEL_23;
        IsServantEquip = ServantSkillMaster__getLowPriorityEntity(
                           (ServantSkillMaster_o *)Master_object,
                           (int32_t)IsServantEquip,
                           (int)v30 + 1,
                           0LL);
        if ( IsServantEquip )
        {
          v33->fields.id = IsServantEquip->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            IsServantEquip,
            &v33->fields.title,
            &v33->fields.explanation,
            0LL);
        }
      }
      v38 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_23;
      v39 = sub_1BCA91C(v33, v38->obj.klass->_1.element_class);
      if ( !v39 )
      {
        v47 = sub_1BCAA60(0LL);
        sub_1BCA908(v47, 0LL);
      }
      if ( v30 >= v38->max_length )
        sub_1BCAA44(v39, v40);
      v38->m_Items[v30] = v33;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v38 + v32), (int64_t)v33, v41, v42, v43, v44, v45, v46);
      ++v30;
      v32 += 8LL;
    }
    while ( v31 != v30 );
  }
}


System_Int32_array *__fastcall ServantEntity__GetSubAttrReplacedIndividualityArray(
        ServantEntity_o *this,
        System_Int32_array *individualityArray,
        ServantLimitAddEntity_o *servantLimitAddEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  AttriMaster_o *v19; // x23
  int32_t IndividualityFromValue; // w22
  int v21; // w21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_int__o *v25; // x20
  __int64 v26; // x8
  char v27; // w26
  unsigned __int64 v28; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10

  if ( (byte_4B168E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AttriMaster___, individualityArray, servantLimitAddEntity);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    byte_4B168E7 = 1;
  }
  if ( !servantLimitAddEntity || servantLimitAddEntity->fields.attri == -1 )
    return individualityArray;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, individualityArray);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_object )
    goto LABEL_36;
  v19 = (AttriMaster_o *)Master_object;
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                             (AttriMaster_o *)Master_object,
                             this->fields.attri,
                             0LL);
  v21 = AttriMaster__GetIndividualityFromValue(v19, servantLimitAddEntity->fields.attri, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_36;
  v26 = *(_QWORD *)&individualityArray->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0;
    v28 = 0LL;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v26 )
        sub_1BCAA44(Master_object, v18);
      v18 = (unsigned int)individualityArray->m_Items[v28 + 1];
      if ( (_DWORD)v18 == IndividualityFromValue )
      {
        if ( v21 >= 1 )
        {
          if ( !v25 )
            goto LABEL_36;
          items = v25->fields._items;
          v30 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_36;
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v25,
              v21,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v25->fields._size = size + 1;
            items->m_Items[size + 1] = v21;
          }
          v27 = 1;
        }
      }
      else
      {
        if ( !v25 )
          goto LABEL_36;
        v32 = v25->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v25->fields._version;
        if ( !v32 )
          goto LABEL_36;
        v34 = v25->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v25,
            v18,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = v34 + 1;
          v32->m_Items[v34 + 1] = v18;
        }
      }
      LODWORD(v26) = individualityArray->max_length;
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_29;
    }
  }
  v27 = 0;
LABEL_29:
  if ( v21 >= 1 && (v27 & 1) == 0 )
  {
    if ( v25 )
    {
      v36 = v25->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v25->fields._version;
      if ( v36 )
      {
        v38 = v25->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v25,
            v21,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v25->fields._size = v38 + 1;
          v36->m_Items[v38 + 1] = v21;
        }
        return System_Collections_Generic_List_int___ToArray(
                 v25,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
      }
    }
LABEL_36:
    sub_1BCAA3C(Master_object, v18);
  }
  if ( !v25 )
    goto LABEL_36;
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall ServantEntity__GetTreasureDeviceCategoryIdList(
        ServantEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *Master_object; // x0
  __int64 v39; // x1
  __int64 v40; // x20
  __int64 v41; // x21
  ServantTreasureDvcMaster_o *v42; // x19
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x1
  __int64 v45; // x1
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v47; // x20
  TreasureDvcLvEntity_o *v48; // x0
  __int64 v49; // x1
  TreasureDvcLvEntity_o *v50; // x21
  Il2CppObject *v51; // x19
  Il2CppObject *v52; // x23
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_HashSet_int__o *v56; // x22
  const MethodInfo_3455DB8 **v57; // x27
  __int64 v58; // x2
  __int64 v59; // x3
  struct System_Int32_array *funcId; // x8
  DataVals_o **m_Items; // x20
  DataVals_array *v62; // x24
  unsigned __int64 v63; // x29
  unsigned __int64 max_length; // x9
  DataVals_o *v65; // x25
  int32_t v66; // w1
  int32_t Param; // w26
  int32_t v68; // w1
  System_Collections_Generic_IEnumerable_T__o *v69; // x1
  System_Collections_Generic_HashSet_int__o *v70; // x20
  const MethodInfo_3455DB8 **v71; // x22
  int32_t v72; // w26
  int32_t v73; // w27
  void *v74; // x8
  System_Collections_Generic_HashSet_int__o *v75; // x20
  _BOOL8 v76; // x0
  __int64 v77; // x1
  _BOOL8 v78; // x0
  __int64 v79; // x1
  __int64 count; // x1
  TreasureDvcLvMaster_o *v82; // [xsp+0h] [xbp-D0h]
  DataVals_o **v83; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v84; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v85; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v86; // [xsp+30h] [xbp-A0h] BYREF
  SkillLvEntity_o *v87; // [xsp+50h] [xbp-80h] BYREF
  TreasureDvcLvEntity_o *v88; // [xsp+58h] [xbp-78h] BYREF
  SkillLvEntity_o *v89; // [xsp+60h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4B16915 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v30, v31);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v32, v33);
    sub_1BCA7E0(&int___TypeInfo, v34, v35);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37);
    byte_4B16915 = 1;
  }
  v89 = 0LL;
  entity = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  memset(&v86, 0, sizeof(v86));
  v85 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v41 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v42 = (ServantTreasureDvcMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
  *(_QWORD *)&v91.fields.currentCryptoKey = v41;
  *(_QWORD *)&v91.fields.fakeValue = v40;
  DataValsList = (DataVals_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v91, 0LL);
  if ( !v42 )
    goto LABEL_51;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                v42,
                                                (int32_t)DataValsList,
                                                1,
                                                0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
    DataValsList = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !DataValsList )
      goto LABEL_51;
    v47 = (TreasureDvcLvMaster_o *)DataValsList;
    v48 = TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)DataValsList, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v48 )
      return 0LL;
    v50 = v48;
    if ( !v48->fields.funcId )
      return 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
    v82 = v47;
    v51 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
    v52 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
    v56 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v53,
                                                         v54,
                                                         v55);
    System_Collections_Generic_HashSet_int____ctor(
      v56,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !v56 )
      goto LABEL_51;
    v57 = (const MethodInfo_3455DB8 **)&Method_System_Collections_Generic_HashSet_int__UnionWith__;
    System_Collections_Generic_HashSet_int___UnionWith(
      v56,
      (System_Collections_Generic_IEnumerable_T__o *)v50->fields.funcId,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v50, 100, 0LL);
    funcId = v50->fields.funcId;
    if ( !funcId )
      goto LABEL_51;
    m_Items = DataValsList->m_Items;
    v62 = DataValsList;
    v63 = 0LL;
    v83 = DataValsList->m_Items;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v63 >= (int)max_length )
      {
        v75 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_HashSet_int__TypeInfo,
                                                             v44,
                                                             v58,
                                                             v59);
        System_Collections_Generic_HashSet_int____ctor(
          v75,
          (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v84,
          v56,
          (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v86 = v84;
        while ( 1 )
        {
          v76 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v86,
                  (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          if ( !v76 )
            break;
          if ( !v51 )
            sub_1BCAA3C(v76, v77);
          v78 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                  &v85,
                  (int32_t)v86.fields._current,
                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
          if ( v78 )
          {
            if ( !v85 )
              sub_1BCAA3C(v78, v79);
            if ( !v75 )
              sub_1BCAA3C(v78, v79);
            System_Collections_Generic_HashSet_int___Add(
              v75,
              HIDWORD(v85[4].monitor),
              (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v86,
          (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v75 )
        {
          count = (unsigned int)v75->fields._count;
          if ( (int)count > 0 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_1BCA888(int___TypeInfo, count);
            System_Collections_Generic_HashSet_int___CopyTo_54878432(
              v75,
              EntityFromSvtIdOnly,
              (const MethodInfo_34560E0 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_51:
        sub_1BCAA3C(DataValsList, v44);
      }
      if ( v63 >= max_length )
        goto LABEL_64;
      if ( !v51 )
        goto LABEL_51;
      DataValsList = (DataVals_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)v51,
                                         &entity,
                                         funcId->m_Items[v63 + 1],
                                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_51;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_51;
          if ( v63 >= v62->max_length )
LABEL_64:
            sub_1BCAA44(DataValsList, v44);
          if ( !entity )
            goto LABEL_51;
          v65 = m_Items[v63];
          if ( !v65 )
            goto LABEL_51;
          DataVals__SetTempType(m_Items[v63], (FunctionMaster_o *)v51, (int32_t)entity[1].monitor, 0LL);
          v66 = DataVals__isParam(v65, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v65, v66, 0, 0LL);
          v68 = DataVals__isParam(v65, 27, 0LL) ? 27 : 4;
          DataValsList = (DataVals_array *)DataVals__GetParam(v65, v68, 0, 0LL);
          if ( !v52 )
            goto LABEL_51;
          DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                             (SkillLvMaster_o *)v52,
                                             &v89,
                                             Param,
                                             (int32_t)DataValsList,
                                             0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            if ( !v89 )
              goto LABEL_51;
            v69 = (System_Collections_Generic_IEnumerable_T__o *)v89->fields.funcId;
            if ( v69 )
              System_Collections_Generic_HashSet_int___UnionWith(v56, v69, *v57);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v65, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v65, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v70 = v56;
              v71 = v57;
              v72 = DataVals__GetParam(v65, 92, 0, 0LL);
              v73 = DataVals__GetParam(v65, 93, 0, 0LL);
              if ( DataVals__isParam(v65, 95, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v82, &v88, v72, v73, 0LL);
                v57 = v71;
                v56 = v70;
                m_Items = v83;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v74 = v88;
                  if ( !v88 )
                    goto LABEL_51;
LABEL_48:
                  v44 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v74 + 4);
                  if ( v44 )
                    System_Collections_Generic_HashSet_int___UnionWith(v56, v44, *v57);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(
                                                   (SkillLvMaster_o *)v52,
                                                   &v87,
                                                   v72,
                                                   v73,
                                                   0LL);
                v57 = v71;
                v56 = v70;
                m_Items = v83;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v74 = v87;
                  if ( !v87 )
                    goto LABEL_51;
                  goto LABEL_48;
                }
              }
            }
          }
        }
      }
      funcId = v50->fields.funcId;
      ++v63;
      if ( !funcId )
        goto LABEL_51;
    }
  }
  return EntityFromSvtIdOnly;
}


int32_t __fastcall ServantEntity__GetTrueSvtId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x8
  ServantChangeMaster_o *v15; // x19
  const MethodInfo *v16; // x2
  ServantChangeEntity_o *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B168FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B168FF = 1;
  }
  v9 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v14 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v20.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v15 = (ServantChangeMaster_o *)MasterData_object,
        *(_QWORD *)&v20.fields.currentCryptoKey = v14,
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v20, 0LL),
        !v15) )
  {
    sub_1BCAA3C(Instance, v12);
  }
  v17 = ServantChangeMaster__TrueNameEntity(v15, (int32_t)Instance, v16);
  if ( v17 )
    return v17->fields.svtId;
  return v10;
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

  if ( (byte_4B1690A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16846/*"additionExpandImage"*/, *(_QWORD *)&limitCount, method);
    byte_4B1690A = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16846/*"additionExpandImage"*/, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Array_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4B16912 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v6,
      v7);
    byte_4B16912 = 1;
  }
  v8 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 5LL);
  v11.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v11, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v9,
           this->fields.classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1690C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18226/*"coinRoomCheck"*/, method, v2);
    byte_4B1690C = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_18226/*"coinRoomCheck"*/, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Array_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4B16910 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v6,
      v7);
    byte_4B16910 = 1;
  }
  v8 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 4LL);
  v11.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v11, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v9,
           this->fields.classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Array_o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  __int64 v16; // x1
  BalanceConfig_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  const MethodInfo *v20; // x1
  System_RuntimeFieldHandle_o v22; // 0:w1.4

  if ( (byte_4B16911 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572,
      v12,
      v13);
    byte_4B16911 = 1;
  }
  v14 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 3LL);
  v22.fields.value = Field__PrivateImplementationDetails__38F9E660D9115C0614E92C75E3E4A5CA8499743FB698CBC48AD941DBE60A0572;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v14, v22, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = System_Linq_Enumerable__Concat_int_(
          v15,
          (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->PlayableBeastClassIds,
          (const MethodInfo_2F2A9EC *)Method_System_Linq_Enumerable_Concat_int___);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v18,
                                                               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return System_Linq_Enumerable__Contains_int_(
           v19,
           this->fields.classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeastNotPlayable(this, v20);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Array_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4B1690F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v6,
      v7);
    byte_4B1690F = 1;
  }
  v8 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 8LL);
  v11.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v11, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v9,
           this->fields.classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t LimitCountByDispLimit; // w0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x23
  int32_t v23; // w22
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w21
  __int64 v27; // x1
  System_Int32_array *IndividualityList; // x21
  Il2CppObject *Master_object; // x0
  __int64 v30; // x1
  __int64 v31; // x24
  __int64 v32; // x25
  ServantLimitAddMaster_o *v33; // x23
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x4
  AttriMaster_o *v37; // x22
  int32_t IndividualityFromValue; // w0
  __int64 v39; // x0
  int max_length; // w8
  __int64 v41; // x9
  int32_t v42; // w11
  struct System_Int32_array *v43; // x10
  int v44; // w8
  __int64 v45; // x9
  int32_t *v46; // x10
  int32_t v47; // w11
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4B168E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount, *(_QWORD *)&dispLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v17, v18);
    byte_4B168E9 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v50.fields.currentCryptoKey = v22;
  *(_QWORD *)&v50.fields.fakeValue = v21;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v50, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v24);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v26, v23, v25);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v32 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v33 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v51.fields.currentCryptoKey = v32;
  *(_QWORD *)&v51.fields.fakeValue = v31;
  v34 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v51, 0LL);
  if ( !v33 )
    goto LABEL_46;
  v34 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v33, &entity, (int32_t)v34, v23, v36);
  if ( ((unsigned __int8)v34 & 1) == 0 )
    goto LABEL_26;
  if ( !entity )
    goto LABEL_46;
  if ( entity->fields.attri == -1 )
  {
LABEL_26:
    v39 = 0xFFFFFFFFLL;
    if ( !IndividualityList )
      goto LABEL_35;
LABEL_27:
    max_length = IndividualityList->max_length;
    if ( max_length >= 1 )
    {
      v41 = 0LL;
      while ( (unsigned int)v41 < max_length )
      {
        v42 = IndividualityList->m_Items[v41 + 1];
        if ( v42 != (_DWORD)v39 && v42 == individuality )
          goto LABEL_25;
        if ( (int)++v41 >= max_length )
          goto LABEL_35;
      }
      goto LABEL_45;
    }
LABEL_35:
    if ( !entity || (v43 = entity->fields.individuality) == 0LL || (v44 = v43->max_length, v44 < 1) )
    {
      LOBYTE(v39) = 0;
      return v39;
    }
    v45 = 0LL;
    v46 = &v43->m_Items[1];
    while ( (unsigned int)v45 < v44 )
    {
      v47 = v46[v45++];
      v39 = v47 == individuality;
      if ( (int)v45 >= v44 || v47 == individuality )
        return v39;
    }
LABEL_45:
    sub_1BCAA44(v39, v35);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !entity || (v37 = (AttriMaster_o *)v34) == 0LL )
LABEL_46:
    sub_1BCAA3C(v34, v35);
  IndividualityFromValue = AttriMaster__GetIndividualityFromValue((AttriMaster_o *)v34, entity->fields.attri, 0LL);
  if ( IndividualityFromValue < 1 || IndividualityFromValue != individuality )
  {
    v39 = AttriMaster__GetIndividualityFromValue(v37, this->fields.attri, 0LL);
    if ( !IndividualityList )
      goto LABEL_35;
    goto LABEL_27;
  }
LABEL_25:
  LOBYTE(v39) = 1;
  return v39;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality_40378960(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        System_Int32_array *individualityList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t LimitCountByDispLimit; // w0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x23
  int32_t v23; // w22
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int32_t v26; // w21
  __int64 v27; // x1
  System_Int32_array *individuality; // x21
  Il2CppObject *Master_object; // x0
  __int64 v30; // x1
  __int64 v31; // x24
  __int64 v32; // x25
  ServantLimitAddMaster_o *v33; // x23
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x4
  AttriMaster_o *v37; // x22
  __int64 IndividualityFromValue; // x0
  signed int max_length; // w8
  __int64 v40; // x9
  unsigned __int64 v41; // x9
  unsigned __int64 v42; // x8
  int32_t v43; // w12
  signed int v44; // w13
  __int64 v45; // x14
  struct System_Int32_array *v46; // x8
  unsigned __int64 v47; // x10
  unsigned __int64 v48; // x9
  signed int v49; // w13
  __int64 v50; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4B168EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AttriMaster___, *(_QWORD *)&limitCount, *(_QWORD *)&dispLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v17, v18);
    byte_4B168EA = 1;
  }
  entity = 0LL;
  if ( !individualityList || !*(_QWORD *)&individualityList->max_length )
  {
LABEL_56:
    LOBYTE(IndividualityFromValue) = 1;
    return IndividualityFromValue;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v53.fields.currentCryptoKey = v22;
  *(_QWORD *)&v53.fields.fakeValue = v21;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v24);
  individuality = ServantIndividualityMaster__GetIndividualityList(v26, v23, v25);
  if ( !individuality )
    individuality = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v32 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v31 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v33 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
  *(_QWORD *)&v54.fields.currentCryptoKey = v32;
  *(_QWORD *)&v54.fields.fakeValue = v31;
  v34 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v54, 0LL);
  if ( !v33 )
    goto LABEL_59;
  v34 = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v33, &entity, (int32_t)v34, v23, v36);
  if ( ((unsigned __int8)v34 & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_59;
    if ( entity->fields.attri != -1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
      v34 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AttriMaster___);
      if ( entity )
      {
        v37 = (AttriMaster_o *)v34;
        if ( v34 )
        {
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(
                                     (AttriMaster_o *)v34,
                                     entity->fields.attri,
                                     0LL);
          if ( (int)IndividualityFromValue >= 1 )
          {
            max_length = individualityList->max_length;
            if ( max_length >= 1 )
            {
              v40 = 0LL;
              while ( (unsigned int)v40 < max_length )
              {
                if ( (_DWORD)IndividualityFromValue == individualityList->m_Items[v40 + 1] )
                  goto LABEL_56;
                if ( (int)++v40 >= max_length )
                  goto LABEL_31;
              }
LABEL_58:
              sub_1BCAA44(IndividualityFromValue, v35);
            }
          }
LABEL_31:
          IndividualityFromValue = AttriMaster__GetIndividualityFromValue(v37, this->fields.attri, 0LL);
          if ( !individuality )
            goto LABEL_44;
          goto LABEL_34;
        }
      }
LABEL_59:
      sub_1BCAA3C(v34, v35);
    }
  }
  IndividualityFromValue = 0xFFFFFFFFLL;
  if ( individuality )
  {
LABEL_34:
    if ( (int)*(_QWORD *)&individuality->max_length >= 1 )
    {
      v41 = (unsigned int)*(_QWORD *)&individuality->max_length;
      v42 = 0LL;
      while ( 1 )
      {
        if ( v42 >= v41 )
          goto LABEL_58;
        v43 = individuality->m_Items[v42 + 1];
        if ( v43 != (_DWORD)IndividualityFromValue )
        {
          v44 = individualityList->max_length;
          if ( v44 >= 1 )
            break;
        }
LABEL_43:
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_44;
      }
      v45 = 0LL;
      while ( (unsigned int)v45 < v44 )
      {
        if ( v43 == individualityList->m_Items[v45 + 1] )
          goto LABEL_56;
        if ( (int)++v45 >= v44 )
          goto LABEL_43;
      }
      goto LABEL_58;
    }
  }
LABEL_44:
  if ( entity )
  {
    v46 = entity->fields.individuality;
    if ( v46 )
    {
      if ( (int)*(_QWORD *)&v46->max_length >= 1 )
      {
        v47 = (unsigned int)*(_QWORD *)&v46->max_length;
        v48 = 0LL;
        while ( 1 )
        {
          if ( v48 >= v47 )
            goto LABEL_58;
          v49 = individualityList->max_length;
          if ( v49 >= 1 )
            break;
LABEL_54:
          ++v48;
          IndividualityFromValue = 0LL;
          if ( (__int64)v48 >= (int)v47 )
            return IndividualityFromValue;
        }
        v50 = 0LL;
        while ( (unsigned int)v50 < v49 )
        {
          if ( v46->m_Items[v48 + 1] == individualityList->m_Items[v50 + 1] )
            goto LABEL_56;
          if ( (int)++v50 >= v49 )
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantChangeEntity_array *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x21
  ServantChangeMaster_o *v14; // x19
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B168FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B168FE = 1;
  }
  Instance = (ServantChangeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v17.fields.currentCryptoKey = v13;
  *(_QWORD *)&v17.fields.fakeValue = v12;
  Instance = (ServantChangeEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  if ( !v14 || (Instance = ServantChangeMaster__GetEntityList(v14, (int32_t)Instance, v15)) == 0LL )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  return *(_QWORD *)&Instance->max_length != 0LL;
}


bool __fastcall ServantEntity__IsNameTrue(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  __int64 v12; // x20
  __int64 v13; // x21
  ServantChangeMaster_o *v14; // x19
  const MethodInfo *v15; // x2
  ServantChangeEntity_o *v16; // x0
  _BOOL4 v17; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B168FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B168FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v19.fields.currentCryptoKey = v13;
  *(_QWORD *)&v19.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  if ( !v14 )
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  v16 = ServantChangeMaster__GetEnableEntity(v14, (int32_t)Instance, v15);
  if ( v16 )
    return (LOBYTE(v16->fields.flag) >> 3) & 1;
  else
    LOBYTE(v17) = 1;
  return v17;
}


bool __fastcall ServantEntity__IsNameTrueFromBattleSvt(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  __int64 v13; // x22
  ServantChangeMaster_o *v14; // x20
  const MethodInfo *v15; // x2
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  ServantChangeEntity_o *v18; // x20
  _BOOL4 v19; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4B168FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B168FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
  *(_QWORD *)&v21.fields.currentCryptoKey = v13;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
  if ( !v14 )
LABEL_11:
    sub_1BCAA3C(Instance, v9);
  v16 = ServantChangeMaster__TrueNameEntity(v14, (int32_t)Instance, v15);
  if ( v16 && (v18 = v16, ServantChangeEntity__IsEnable(v16, v17)) )
    return (LOBYTE(v18->fields.flag) >> 3) & 1;
  else
    LOBYTE(v19) = ServantEntity__IsNameTrue(this, v17);
  return v19;
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1690D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23946/*"svtBuffTurnExtend"*/, method, v2);
    byte_4B1690D = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_23946/*"svtBuffTurnExtend"*/, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Array_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4B1690E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v6,
      v7);
    byte_4B1690E = 1;
  }
  v8 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 6LL);
  v11.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v8, v11, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           v9,
           this->fields.classId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nameSave, (int64_t)name, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4B168EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B168EE = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)Script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_40381492(
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

  if ( (byte_4B168EF & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, param);
    byte_4B168EF = 1;
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
  v17 = sub_1BCACFC(ScriptValue);
  return ServantEntity__checkScript_40381656(v13, v14, v15, *(float *)&v17, v16);
}


bool __fastcall ServantEntity__checkScript_40381656(
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

  if ( (byte_4B168F0 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, param);
    byte_4B168F0 = 1;
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
  sub_1BCACFC(ScriptValue);
  return ServantEntity__getDressId(v15, v16);
}


bool __fastcall ServantEntity__getBattleHeight(ServantEntity_o *this, float *height, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B168F4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17284/*"battleHeight"*/, height, method);
    byte_4B168F4 = 1;
  }
  return ServantEntity__checkScript_40381656(this, (System_String_o *)StringLiteral_17284/*"battleHeight"*/, height, 1000.0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getBattleName(
        ServantEntity_o *this,
        bool isTrueNameForce,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x1
  EventServantEntity_array *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v27; // x1
  __int64 v28; // x23
  __int64 v29; // x24
  EventServantMaster_o *v30; // x22
  int max_length; // w8
  EventServantEntity_array *v32; // x22
  unsigned int v33; // w23
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x22
  __int64 v37; // x23
  ServantChangeMaster_o *v38; // x21
  const MethodInfo *v39; // x2
  ServantChangeEntity_o *v40; // x0
  ServantChangeEntity_o *v41; // x21
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x22
  __int64 v46; // x23
  ServantLimitAddMaster_o *v47; // x21
  const MethodInfo *v48; // x4
  const MethodInfo *v49; // x1
  __int64 v50; // x1
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v52; // x20
  System_String_o *v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x21
  __int64 v58; // x22
  ServantChangeMaster_o *v59; // x20
  const MethodInfo *v60; // x2
  ServantChangeEntity_o *v61; // x0
  ServantLimitAddEntity_o *v62; // [xsp+0h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4B168FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B168FB = 1;
  }
  battleName = 0LL;
  v62 = 0LL;
  entity = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v23) )
  {
    goto LABEL_16;
  }
  battleName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v29 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v28 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v30 = (EventServantMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
  *(_QWORD *)&v65.fields.currentCryptoKey = v29;
  *(_QWORD *)&v65.fields.fakeValue = v28;
  Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v65, 0LL);
  if ( !v30 )
    goto LABEL_48;
  Instance = EventServantMaster__GetEntities(v30, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  max_length = Instance->max_length;
  v32 = Instance;
  if ( max_length < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_27;
LABEL_16:
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    v34 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v37 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v36 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v38 = (ServantChangeMaster_o *)v34;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
    *(_QWORD *)&v66.fields.currentCryptoKey = v37;
    *(_QWORD *)&v66.fields.fakeValue = v36;
    Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
    if ( !v38 )
      goto LABEL_48;
    v40 = ServantChangeMaster__TrueNameEntity(v38, (int32_t)Instance, v39);
    if ( !v40 )
      goto LABEL_27;
    v41 = v40;
    Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                             &entity,
                                             v41->fields.svtId,
                                             (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
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
        Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        v43 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v62 = 0LL;
        v46 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v45 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v47 = (ServantLimitAddMaster_o *)v43;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
        *(_QWORD *)&v67.fields.currentCryptoKey = v46;
        *(_QWORD *)&v67.fields.fakeValue = v45;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v67,
                                                 0LL);
        if ( !v47 )
          goto LABEL_48;
        ServantLimitAddMaster__TryGetEntity(v47, &v62, (int32_t)Instance, limitCount, v48);
        if ( v62 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v62, v49);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v50);
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v52, 0LL);
          if ( !System_String__IsNullOrEmpty(v53, 0LL) )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v54);
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v52, 0LL);
          }
        }
      }
      Instance = (EventServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v55 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v58 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v57 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v59 = (ServantChangeMaster_o *)v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56);
        *(_QWORD *)&v68.fields.currentCryptoKey = v58;
        *(_QWORD *)&v68.fields.fakeValue = v57;
        Instance = (EventServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v68,
                                                 0LL);
        if ( v59 )
        {
          v61 = ServantChangeMaster__GetEnableEntity(v59, (int32_t)Instance, v60);
          if ( v61 )
            return v61->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_48:
    sub_1BCAA3C(Instance, v25);
  }
  v33 = 0;
  while ( 1 )
  {
    if ( v33 >= max_length )
      sub_1BCAA44(Instance, v25);
    Instance = (EventServantEntity_array *)v32->m_Items[v33];
    if ( !Instance )
      goto LABEL_48;
    Instance = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(
                                             (EventServantEntity_o *)Instance,
                                             &battleName,
                                             0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      return battleName;
    max_length = v32->max_length;
    if ( (int)++v33 >= max_length )
      goto LABEL_16;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B168F2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17889/*"cameraActionId"*/, method, v2);
    byte_4B168F2 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40381492(this, (System_String_o *)StringLiteral_17889/*"cameraActionId"*/, &param, v3) )
    return param;
  else
    return 0;
}


System_String_o *__fastcall ServantEntity__getClassName(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o **p_monitor; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B168E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B168E6 = 1;
  }
  entity = 0LL;
  p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v12);
    }
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
      &entity,
      this->fields.classId,
      (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *classPassive; // x8
  int max_length; // w24
  BalanceConfig_c *v21; // x0
  System_Int32_array *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_String_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *Instance; // x0
  __int64 v44; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x23
  unsigned __int64 v46; // x25
  __int64 v47; // x27
  __int64 i; // x28
  struct System_Int32_array *v49; // x8
  int32_t v50; // w24
  System_Int32_array *v51; // x8
  System_String_array *v52; // x8
  System_String_array *v53; // x9

  if ( (byte_4B168EB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&int___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&string___TypeInfo, v17, v18);
    byte_4B168EB = 1;
  }
  classPassive = this->fields.classPassive;
  if ( classPassive )
    max_length = classPassive->max_length;
  else
    max_length = 0;
  v21 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, idList);
    v21 = BalanceConfig_TypeInfo;
  }
  v22 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v21->static_fields->SvtPassiveSkillListMax);
  *idList = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)idList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_String_array *)sub_1BCA888(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *titleList = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)titleList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_String_array *)sub_1BCA888(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax);
  *explanationList = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)explanationList, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v46 = 0LL;
    v47 = (unsigned int)max_length;
    for ( i = 32LL; ; i += 8LL )
    {
      v49 = this->fields.classPassive;
      if ( !v49 )
        break;
      if ( v46 >= v49->max_length )
        goto LABEL_25;
      if ( !v45 )
        break;
      v50 = v49->m_Items[v46 + 1];
      Instance = DataMasterBase_object__object__int___GetEntity(
                   v45,
                   v50,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v51 = *idList;
      if ( !*idList )
        break;
      if ( v46 >= v51->max_length )
        goto LABEL_25;
      v51->m_Items[v46 + 1] = v50;
      if ( Instance )
      {
        v52 = *titleList;
        if ( !*titleList )
          break;
        v53 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v46 >= v52->max_length || v46 >= v53->max_length )
LABEL_25:
          sub_1BCAA44(Instance, v44);
        SkillEntity__getSkillMessageInfo(
          (SkillEntity_o *)Instance,
          (System_String_o **)((char *)v52 + i),
          (System_String_o **)((char *)v53 + i),
          0,
          0LL);
      }
      if ( v47 == ++v46 )
        return;
    }
LABEL_24:
    sub_1BCAA3C(Instance, v44);
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B168F1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24118/*"tdTransform"*/, method, v2);
    byte_4B168F1 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_40381492(this, (System_String_o *)StringLiteral_24118/*"tdTransform"*/, &param, v3) )
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  ServantChangeMaster_o *v17; // x21
  const MethodInfo *v18; // x2
  ServantChangeEntity_o *v19; // x0
  const MethodInfo *v20; // x5
  __int64 v22; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4B168F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B168F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v16 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v17 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v24.fields.currentCryptoKey = v16;
  *(_QWORD *)&v24.fields.fakeValue = v15;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL);
  if ( !v17 )
LABEL_12:
    sub_1BCAA3C(Instance, v12);
  v19 = ServantChangeMaster__GetHiddenEntity(v17, (int32_t)Instance, v18);
  if ( v19 )
    return v19->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v20);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v22);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantEntity__getIndividuality(
        ServantEntity_o *this,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t LimitCountByDispLimit; // w0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x22
  int32_t v21; // w21
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w20
  __int64 v25; // x1
  System_Int32_array *IndividualityList; // x20
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  __int64 v29; // x23
  __int64 v30; // x24
  ServantLimitAddMaster_o *v31; // x22
  struct System_Int32_array *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x4
  const MethodInfo *v35; // x3
  ServantLimitAddEntity_o *v36; // x2
  struct System_Int32_array *individuality; // x1
  __int64 v38; // x8
  __int64 v39; // x9
  System_Array_o *v40; // x21
  ServantEntity_o *v41; // x0
  struct System_Int32_array *v43; // x0
  struct System_Int32_array **p_individuality; // x19
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_4B168E8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_ServantLimitAddMaster___,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&dispLimitCount);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v9, v10);
    sub_1BCA7E0(&int___TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantIndividualityMaster_TypeInfo, v15, v16);
    byte_4B168E8 = 1;
  }
  entity = 0LL;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0LL);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = LimitCountByDispLimit;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v52.fields.currentCryptoKey = v20;
  *(_QWORD *)&v52.fields.fakeValue = v19;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v52, 0LL);
  if ( !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo, v22);
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v24, v21, v23);
  if ( !IndividualityList )
    IndividualityList = this->fields.individuality;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v25);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v30 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v31 = (ServantLimitAddMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
  *(_QWORD *)&v53.fields.currentCryptoKey = v30;
  *(_QWORD *)&v53.fields.fakeValue = v29;
  v32 = (struct System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
  if ( !v31 )
    goto LABEL_30;
  v32 = (struct System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v31, &entity, (int32_t)v32, v21, v34);
  if ( ((unsigned __int8)v32 & 1) != 0 )
  {
    v36 = entity;
    if ( !entity )
      goto LABEL_30;
    individuality = entity->fields.individuality;
    if ( individuality )
    {
      v38 = *(_QWORD *)&individuality->max_length;
      if ( v38 )
      {
        if ( !IndividualityList || (v39 = *(_QWORD *)&IndividualityList->max_length) == 0 )
        {
          v41 = this;
          return ServantEntity__GetSubAttrReplacedIndividualityArray(v41, individuality, v36, v35);
        }
        v40 = (System_Array_o *)sub_1BCA888(int___TypeInfo, (unsigned int)(v39 + v38));
        System_Array__CopyTo((System_Array_o *)IndividualityList, v40, 0, 0LL);
        if ( entity )
        {
          v32 = entity->fields.individuality;
          if ( v32 )
          {
            System_Array__CopyTo((System_Array_o *)v32, v40, IndividualityList->max_length, 0LL);
            v36 = entity;
            v41 = this;
            individuality = (struct System_Int32_array *)v40;
            return ServantEntity__GetSubAttrReplacedIndividualityArray(v41, individuality, v36, v35);
          }
        }
LABEL_30:
        sub_1BCAA3C(v32, v33);
      }
    }
  }
  if ( IndividualityList )
  {
    v36 = entity;
    v41 = this;
    individuality = IndividualityList;
    return ServantEntity__GetSubAttrReplacedIndividualityArray(v41, individuality, v36, v35);
  }
  v43 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.individuality = v43;
  p_individuality = &this->fields.individuality;
  sub_1BCA784((PartyOrganizationUtility_o *)p_individuality, (int64_t)v43, v45, v46, v47, v48, v49, v50);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  ServantChangeMaster_o *v19; // x22
  const MethodInfo *v20; // x2
  ServantChangeEntity_o *v21; // x0
  const MethodInfo *v22; // x5
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B168F7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_ServantChangeMaster___,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B168F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v18 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v19 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v26.fields.currentCryptoKey = v18;
  *(_QWORD *)&v26.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  if ( !v19 )
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  v21 = ServantChangeMaster__GetEnableEntity(v19, (int32_t)Instance, v20);
  if ( v21 )
    return v21->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, 0, v22);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v24);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantEntity__getName_40384088(
        ServantEntity_o *this,
        System_String_o **ruby,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x1
  __int64 v17; // x23
  __int64 v18; // x24
  ServantChangeMaster_o *v19; // x22
  const MethodInfo *v20; // x2
  ServantChangeEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x1
  ServantChangeEntity_o *v30; // x22
  System_String_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x5
  __int64 v40; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4B168FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B168FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v18 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v19 = (ServantChangeMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = v17;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v42, 0LL);
  if ( !v19 )
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  v21 = ServantChangeMaster__GetEnableEntity(v19, (int32_t)Instance, v20);
  if ( v21 )
  {
    v29 = v21->fields.ruby;
    v30 = v21;
    *ruby = v29;
    sub_1BCA784((PartyOrganizationUtility_o *)ruby, (int64_t)v29, v23, v24, v25, v26, v27, v28);
    return v30->fields.name;
  }
  else
  {
    v32 = ServantEntity__GetRuby(this, v22);
    *ruby = v32;
    sub_1BCA784((PartyOrganizationUtility_o *)ruby, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v39);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v40);
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(Name, 0LL);
  }
}


System_Int32_array *__fastcall ServantEntity__getScriptIntArrayParam(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Int32_array *result; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x19
  System_Collections_Generic_List_object__c *v19; // x1
  __int64 methodPtr_low; // x9
  ServantEntity___c_c *v21; // x0
  System_Converter_object__int__o *_9__136_0; // x20
  Il2CppObject *v23; // x21
  struct ServantEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x0
  __int64 v32; // x1

  if ( (byte_4B1690B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__, v11, v12);
    sub_1BCA7E0(&ServantEntity___c_TypeInfo, v13, v14);
    byte_4B1690B = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v18 = (System_Collections_Generic_List_object__o *)result;
    v19 = System_Collections_Generic_List_object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->obj.klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v21 = ServantEntity___c_TypeInfo;
      if ( !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo, System_Collections_Generic_List_object__TypeInfo);
        v21 = ServantEntity___c_TypeInfo;
      }
      _9__136_0 = v21->static_fields->__9__136_0;
      if ( !_9__136_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21, v19);
          v21 = ServantEntity___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__136_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                         System_Converter_object__int__TypeInfo,
                                                         v19,
                                                         v16,
                                                         v17);
        System_Converter_object__int____ctor(
          _9__136_0,
          v23,
          Method_ServantEntity___c__getScriptIntArrayParam_b__136_0__,
          0LL);
        static_fields = ServantEntity___c_TypeInfo->static_fields;
        static_fields->__9__136_0 = _9__136_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__136_0,
          (int64_t)_9__136_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      v31 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                        v18,
                                                        (System_Converter_T__TOutput__o *)_9__136_0,
                                                        (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v31 )
        return System_Collections_Generic_List_int___ToArray(
                 v31,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_1BCACFC(result);
    }
    sub_1BCAA3C(v31, v32);
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
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4B168F8 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount, method);
    byte_4B168F8 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, 0, v3);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(Name, 0LL);
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

  if ( (byte_4B168F5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20964/*"invalidSkillShift"*/, method, v2);
    byte_4B168F5 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_20964/*"invalidSkillShift"*/, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1691A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantEntity___c_TypeInfo, v1, v2);
    byte_4B1691A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantEntity___c_TypeInfo->static_fields->__9 = (struct ServantEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *result; // x0

  value = x.fields.value;
  key = (Il2CppObject *)x.fields.key;
  if ( (byte_4B1691B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key, x.fields.value);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v8, v9);
    byte_4B1691B = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_1BCAA3C(0LL, x.fields.key);
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)result,
    key,
    value,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}