void __fastcall ServantEntity___ctor(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD056 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FD056 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantEntity__CreatePrimaryKey(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40FD024 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FD024 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetAssumedEffectId(ServantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD052 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16437, method);
    byte_40FD052 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16437, 0LL);
}


System_Int32_array *__fastcall ServantEntity__GetCategoryIdList(
        ServantEntity_o *this,
        SkillInfo_array *enableSkillInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *id; // x1
  __int64 lv; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x20
  unsigned __int64 v28; // x27
  SkillInfo_o *v29; // x8
  SkillLvEntity_o *v30; // x23
  struct System_Int32_array *funcId; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x24
  unsigned __int64 v33; // x21
  unsigned __int64 max_length; // x9
  DataVals_o *v35; // x25
  int32_t v36; // w1
  int32_t Param; // w26
  int32_t v38; // w1
  int32_t v39; // w0
  System_Collections_Generic_HashSet_int__o *v40; // x19
  __int64 v41; // x2
  __int64 count; // x1
  System_Int32_array *v43; // x20
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+0h] [xbp-B0h]
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **p_list; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v47; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v48; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v49; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v50; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40FD055 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, enableSkillInfoList);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__CopyTo___66713984, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v17);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_B16FFC(&int___TypeInfo, v19);
    byte_40FD055 = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  v48 = 0LL;
  memset(&v49, 0, sizeof(v49));
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       enableSkillInfoList,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !enableSkillInfoList )
    goto LABEL_55;
  v26 = *(_QWORD *)&enableSkillInfoList->max_length;
  v27 = DataValsList;
  if ( (int)v26 >= 1 )
  {
    v28 = 0LL;
    do
    {
      if ( v28 >= (unsigned int)v26 )
      {
LABEL_56:
        sub_B17100(DataValsList, id, lv);
        sub_B170A0();
      }
      v29 = enableSkillInfoList->m_Items[v28];
      if ( v29 )
      {
        id = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v29->fields.id;
        if ( (int)id >= 1 )
        {
          lv = (unsigned int)v29->fields.lv;
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
              v30 = (SkillLvEntity_o *)DataValsList;
              if ( id )
              {
                if ( !v45 )
                  goto LABEL_55;
                System_Collections_Generic_HashSet_int___UnionWith(
                  v45,
                  id,
                  (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvEntity__getDataValsList(v30, 0LL);
                funcId = v30->fields.funcId;
                if ( !funcId )
                  goto LABEL_55;
                v32 = DataValsList;
                v33 = 0LL;
                p_list = &DataValsList->fields.list;
                while ( 1 )
                {
                  max_length = funcId->max_length;
                  if ( (__int64)v33 >= (int)max_length )
                    break;
                  if ( v33 >= max_length )
                    goto LABEL_56;
                  if ( !v27 )
                    goto LABEL_55;
                  DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                  v27,
                                                                                  &entity,
                                                                                  funcId->m_Items[v33 + 1],
                                                                                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                  if ( ((unsigned __int8)DataValsList & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_55;
                    DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)FuncList__isAddState(
                                                                                    (int32_t)entity->fields.age,
                                                                                    0LL);
                    if ( ((unsigned __int8)DataValsList & 1) != 0 )
                    {
                      if ( !v32 )
                        goto LABEL_55;
                      if ( v33 >= LODWORD(v32->fields._MasterName_k__BackingField) )
                        goto LABEL_56;
                      if ( !entity )
                        goto LABEL_55;
                      v35 = (DataVals_o *)p_list[v33];
                      if ( !v35 )
                        goto LABEL_55;
                      DataVals__SetTempType(
                        (DataVals_o *)p_list[v33],
                        (FunctionMaster_o *)v27,
                        (int32_t)entity->fields.age,
                        0LL);
                      if ( DataVals__isParam(v35, 26, 0LL) )
                        v36 = 26;
                      else
                        v36 = 3;
                      Param = DataVals__GetParam(v35, v36, 0, 0LL);
                      if ( DataVals__isParam(v35, 27, 0LL) )
                        v38 = 27;
                      else
                        v38 = 4;
                      v39 = DataVals__GetParam(v35, v38, 0, 0LL);
                      DataValsList = (DataMasterBase_WarMaster__WarEntity__int__o *)SkillLvMaster__TryGetEntity(
                                                                                      Master_WarQuestSelectionMaster,
                                                                                      &v50,
                                                                                      Param,
                                                                                      v39,
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
                            (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                      }
                    }
                  }
                  funcId = v30->fields.funcId;
                  ++v33;
                  if ( !funcId )
                    goto LABEL_55;
                }
              }
            }
          }
        }
      }
      LODWORD(v26) = enableSkillInfoList->max_length;
    }
    while ( (__int64)++v28 < (int)v26 );
  }
  v40 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       id,
                                                       lv,
                                                       v24,
                                                       v25);
  System_Collections_Generic_HashSet_int____ctor(
    v40,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !v45 )
    goto LABEL_55;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v47,
    v45,
    (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v49 = v47;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v49,
            (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    if ( !v27 )
      sub_B170D4();
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v27,
           &v48,
           (int32_t)v49.fields._current,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__) )
    {
      if ( !v48 )
        sub_B170D4();
      if ( !v40 )
        sub_B170D4();
      System_Collections_Generic_HashSet_int___Add(
        v40,
        HIDWORD(v48->fields.emptyMessage),
        (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v40 )
LABEL_55:
    sub_B170D4();
  count = (unsigned int)v40->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v43 = (System_Int32_array *)sub_B17014(int___TypeInfo, count, v41);
  System_Collections_Generic_HashSet_int___CopyTo_35493032(
    v40,
    v43,
    (const MethodInfo_21D94A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___66713984);
  return v43;
}


int32_t __fastcall ServantEntity__GetChangeLimitVoiceFriendshpLv(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD046 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17212, method);
    byte_40FD046 = 1;
  }
  param = 0;
  ServantEntity__checkScript_30658676(this, (System_String_o *)StringLiteral_17212, &param, v2);
  return param;
}


System_String_o *__fastcall ServantEntity__GetCountFormat(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 *v6; // x8

  if ( (byte_40FD034 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12004, v3);
    sub_B16FFC(&StringLiteral_5735, v4);
    sub_B16FFC(&StringLiteral_11678, v5);
    byte_40FD034 = 1;
  }
  if ( SvtType__IsServant(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12004;
  }
  else if ( SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11678;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_5735;
  }
  return LocalizationManager__Get((System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantEntity__GetDefaultDeadType(ServantEntity_o *this, int32_t defType, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD051 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17869, *(_QWORD *)&defType);
    byte_40FD051 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30658676(this, (System_String_o *)StringLiteral_17869, &param, v3) )
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
  WebViewManager_o *Instance; // x0
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  EventServantEntity_array *Entities; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  EventServantEntity_array *v15; // x20
  unsigned int v16; // w21
  EventServantEntity_o *v17; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD040 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40FD040 = 1;
  }
  name = 0LL;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v5) )
  {
    name = (System_String_o *)StringLiteral_1;
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v10 = ServantEntity__GetEventNameServantId(this, v9);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    Entities = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, v10, 0LL);
    if ( !Entities )
      goto LABEL_16;
    max_length = Entities->max_length;
    v15 = Entities;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
        {
          sub_B17100(Entities, v12, v13);
          sub_B170A0();
        }
        v17 = v15->m_Items[v16];
        if ( !v17 )
          break;
        Entities = (EventServantEntity_array *)EventServantEntity__TryGetName(v17, &name, 0LL);
        if ( ((unsigned __int8)Entities & 1) != 0 )
          return EventNameServantId;
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          return 0;
      }
LABEL_16:
      sub_B170D4();
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

  if ( (byte_40FD043 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FD043 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v9, 0LL);
}


System_String_o *__fastcall ServantEntity__GetHideInAnimNodeName(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v7; // x8

  if ( (byte_40FD047 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, method);
    sub_B16FFC(&StringLiteral_7135, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FD047 = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, (System_String_o *)StringLiteral_7135, v2);
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
    return (System_String_o *)StringLiteral_1;
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
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v8; // x20
  UserServantCollectionEntity_array *List; // x0
  __int64 v10; // x8
  int64_t UserId; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  int64_t v14; // x19
  int32_t v15; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FD044 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FD044 = 1;
  }
  if ( !SvtType__IsOrganization(this->fields.type, 0LL) )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL
    || (v8 = MasterData_WarQuestSelectionMaster,
        (List = UserServantCollectionMaster__getList(MasterData_WarQuestSelectionMaster, 2, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = *(_QWORD *)&List->max_length;
  if ( v10 )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v14 = UserId;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
    EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, v14, v15, 0LL);
    if ( EntityDefinitely )
    {
      LOBYTE(v10) = !UserServantCollectionEntity__IsGet(EntityDefinitely, 0LL);
      return v10 & 1;
    }
LABEL_16:
    LOBYTE(v10) = 0;
  }
  return v10 & 1;
}


bool __fastcall ServantEntity__GetIsEventJoin(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  int32_t EventNameServantId; // w19
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  UserServantEntity_array *v13; // x20
  unsigned int v14; // w24
  char v15; // w25
  UserServantEntity_o *v16; // x21
  __int64 v17; // x22
  __int64 v18; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FD042 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD042 = 1;
  }
  if ( SvtType__IsOrganization(this->fields.type, 0LL) || SvtType__IsSvtMaterialTd(this->fields.type, 0LL) )
  {
    EventNameServantId = ServantEntity__GetEventNameServantId(this, v5);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_22;
    OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
    if ( !OrganizationList )
      goto LABEL_22;
    max_length = OrganizationList->max_length;
    v13 = OrganizationList;
    if ( max_length >= 1 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
        {
          sub_B17100(OrganizationList, v10, v11);
          sub_B170A0();
        }
        v16 = v13->m_Items[v14];
        if ( !v16 )
          break;
        v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v20.fields.currentCryptoKey = v18;
        *(_QWORD *)&v20.fields.fakeValue = v17;
        OrganizationList = (UserServantEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                        v20,
                                                        0LL);
        if ( (_DWORD)OrganizationList == EventNameServantId )
        {
          OrganizationList = (UserServantEntity_array *)UserServantEntity__IsEventJoin(v16, 0LL);
          if ( ((unsigned __int8)OrganizationList & 1) == 0 )
            goto LABEL_20;
          v15 = 1;
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return v15 & 1;
      }
LABEL_22:
      sub_B170D4();
    }
  }
LABEL_20:
  v15 = 0;
  return v15 & 1;
}


bool __fastcall ServantEntity__GetIsMasterForEventNameComplete(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *OrganizationList; // x0
  WebViewManager_o *v7; // x0
  UserServantCollectionMaster_o *v8; // x0
  UserServantCollectionEntity_array *List; // x0

  if ( (byte_40FD041 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FD041 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_12;
  OrganizationList = UserServantMaster__getOrganizationList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !OrganizationList )
    goto LABEL_12;
  if ( *(_QWORD *)&OrganizationList->max_length )
  {
    v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v7 )
    {
      v8 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)v7,
                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( v8 )
      {
        List = UserServantCollectionMaster__getList(v8, 2, 0LL);
        if ( List )
          return *(_QWORD *)&List->max_length != 0LL;
      }
    }
LABEL_12:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  EventServantMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v21; // x1
  int32_t EventNameServantId; // w0
  EventServantEntity_array *Entities; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  int max_length; // w8
  EventServantEntity_array *v27; // x20
  unsigned int v28; // w23
  EventServantEntity_o *v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v30; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x23
  __int64 v33; // x24
  ServantLimitAddMaster_o *v34; // x21
  int32_t v35; // w0
  System_String_o *OverwriteSvtDetailName; // x0
  System_String_o *v37; // x19
  WebViewManager_o *v38; // x0
  WarQuestSelectionMaster_o *v39; // x0
  __int64 v40; // x23
  __int64 v41; // x24
  ServantLimitAddMaster_o *v42; // x22
  int32_t v43; // w0
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  WebViewManager_o *v47; // x0
  UserServantCollectionMaster_o *v48; // x21
  int64_t UserId; // x0
  __int64 v50; // x23
  __int64 v51; // x24
  int64_t v52; // x22
  int32_t v53; // w0
  ServantLimitAddEntity_o *v54; // [xsp+8h] [xbp-58h] BYREF
  UserServantCollectionEntity_o *v55; // [xsp+10h] [xbp-50h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  maxLimitCount = limitCount;
  if ( (byte_40FD03E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40FD03E = 1;
  }
  name = 0LL;
  v55 = 0LL;
  entity = 0LL;
  v54 = 0LL;
  if ( !isForceNeedToCheckEventJoinName
    && !ServantEntity__GetIsEventJoin(this, *(const MethodInfo **)&limitCount)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v18) )
  {
    goto LABEL_15;
  }
  name = (System_String_o *)StringLiteral_1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (EventServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___);
  EventNameServantId = ServantEntity__GetEventNameServantId(this, v21);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_66;
  Entities = EventServantMaster__GetEntities(MasterData_WarQuestSelectionMaster, EventNameServantId, 0LL);
  if ( !Entities )
    goto LABEL_66;
  max_length = Entities->max_length;
  v27 = Entities;
  if ( max_length < 1 )
  {
LABEL_15:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1, 0LL);
    if ( (imageLimitCount & 0x80000000) == 0 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v33 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v32 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v34 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v58.fields.currentCryptoKey = v33;
      *(_QWORD *)&v58.fields.fakeValue = v32;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58, 0LL);
      if ( !v34 )
        goto LABEL_66;
      if ( ServantLimitAddMaster__TryGetEntity(v34, &entity, v35, imageLimitCount, 0LL) )
      {
        if ( entity )
        {
          OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteSvtDetailName(entity, 0LL);
          goto LABEL_42;
        }
LABEL_66:
        sub_B170D4();
      }
      goto LABEL_46;
    }
    if ( maxLimitCount == -1 )
    {
      v47 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v47 )
        goto LABEL_66;
      v48 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v47,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v51 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
      v50 = *(_QWORD *)&this->fields.id.fields.fakeValue;
      v52 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v60.fields.currentCryptoKey = v51;
      *(_QWORD *)&v60.fields.fakeValue = v50;
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
      if ( !v48 )
        goto LABEL_66;
      if ( !UserServantCollectionMaster__TryGetEntity(v48, &v55, v52, v53, 0LL) )
        goto LABEL_46;
      if ( !v55 )
        goto LABEL_66;
      if ( !UserServantCollectionEntity__IsGet(v55, 0LL) )
        goto LABEL_46;
      if ( !v55 )
        goto LABEL_66;
      maxLimitCount = v55->fields.maxLimitCount;
      if ( (maxLimitCount & 0x80000000) != 0 )
      {
LABEL_46:
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
        }
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v30, 0LL);
        if ( System_String__IsNullOrEmpty(v45, 0LL) )
          return this->fields.nameSave;
        return v30;
      }
    }
    else if ( (maxLimitCount & 0x80000000) != 0 )
    {
      goto LABEL_46;
    }
    v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v38 )
      goto LABEL_66;
    v39 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v38,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    v54 = 0LL;
    v41 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v40 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v42 = (ServantLimitAddMaster_o *)v39;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v59.fields.currentCryptoKey = v41;
    *(_QWORD *)&v59.fields.fakeValue = v40;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
    if ( !v42 )
      goto LABEL_66;
    ServantLimitAddMaster__TryGetEntity(v42, &v54, v43, maxLimitCount, 0LL);
    if ( v54 )
    {
      OverwriteSvtDetailName = ServantLimitAddEntity__GetOverwriteServantName(v54, 0LL);
LABEL_42:
      v44 = OverwriteSvtDetailName;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v44, 0LL);
      goto LABEL_46;
    }
    goto LABEL_46;
  }
  v28 = 0;
  while ( 1 )
  {
    if ( v28 >= max_length )
    {
      sub_B17100(Entities, v24, v25);
      sub_B170A0();
    }
    v29 = v27->m_Items[v28];
    if ( !v29 )
      goto LABEL_66;
    Entities = (EventServantEntity_array *)EventServantEntity__TryGetName(v29, &name, 0LL);
    if ( ((unsigned __int8)Entities & 1) != 0 )
      break;
    max_length = v27->max_length;
    if ( (int)++v28 >= max_length )
      goto LABEL_15;
  }
  v37 = name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(v37, 0LL);
}


int32_t __fastcall ServantEntity__GetOverwriteClassImageId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD031 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4001, method);
    byte_40FD031 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30658676(this, (System_String_o *)StringLiteral_4001, &param, v2) )
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
  __int64 v10; // x2
  __int64 v11; // x8
  System_Int32_array_array *v12; // x20
  unsigned __int64 v13; // x22
  System_Int32_array **m_Items; // x23
  System_Int32_array *v15; // x21

  if ( (byte_40FD045 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, *(_QWORD *)&baseSkillId);
    sub_B16FFC(&int___TypeInfo, v5);
    sub_B16FFC(&Method_ServantEntity_GetScriptMultiArray_int___, v6);
    sub_B16FFC(&StringLiteral_12834, v7);
    byte_40FD045 = 1;
  }
  ScriptMultiArray_int = ServantEntity__GetScriptMultiArray_int_(
                           this,
                           (System_String_o *)StringLiteral_12834,
                           (const MethodInfo_19E22B8 *)Method_ServantEntity_GetScriptMultiArray_int___);
  if ( ScriptMultiArray_int )
  {
    v11 = *(_QWORD *)&ScriptMultiArray_int->max_length;
    v12 = ScriptMultiArray_int;
    if ( (int)v11 >= 1 )
    {
      v13 = 0LL;
      m_Items = ScriptMultiArray_int->m_Items;
      while ( v13 < (unsigned int)v11 )
      {
        v15 = m_Items[v13];
        ScriptMultiArray_int = (System_Int32_array_array *)BasicHelper__IndexValue_int_(
                                                             v15,
                                                             0,
                                                             -1,
                                                             (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
        if ( (_DWORD)ScriptMultiArray_int == baseSkillId )
          return v15;
        LODWORD(v11) = v12->max_length;
        if ( (__int64)++v13 >= (int)v11 )
          goto LABEL_9;
      }
LABEL_13:
      sub_B17100(ScriptMultiArray_int, v9, v10);
      sub_B170A0();
    }
  }
LABEL_9:
  ScriptMultiArray_int = (System_Int32_array_array *)sub_B17014(int___TypeInfo, 1LL, v10);
  if ( !ScriptMultiArray_int )
    sub_B170D4();
  v15 = (System_Int32_array *)ScriptMultiArray_int;
  if ( !ScriptMultiArray_int->max_length )
    goto LABEL_13;
  LODWORD(ScriptMultiArray_int->m_Items[0]) = baseSkillId;
  return v15;
}


System_String_o *__fastcall ServantEntity__GetRuby(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *Empty; // x20
  const MethodInfo *v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x22
  __int64 v12; // x23
  EventServantMaster_o *v13; // x21
  int32_t v14; // w0
  EventServantEntity_array *Entities; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int max_length; // w8
  EventServantEntity_array *v19; // x21
  unsigned int v20; // w23
  Il2CppClass **v21; // x8
  EventServantEntity_o *v22; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *ruby; // x19
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FD03F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&string_TypeInfo, v6);
    byte_40FD03F = 1;
  }
  name = 0LL;
  Empty = string_TypeInfo->static_fields->Empty;
  if ( ServantEntity__GetIsEventJoin(this, method) || ServantEntity__GetIsCollectionStatusNotGet(this, v8) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___);
    v12 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v13 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v12;
    *(_QWORD *)&v26.fields.fakeValue = v11;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
    if ( !v13 || (Entities = EventServantMaster__GetEntities(v13, v14, 0LL)) == 0LL )
LABEL_25:
      sub_B170D4();
    max_length = Entities->max_length;
    v19 = Entities;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= max_length )
        {
          sub_B17100(Entities, v16, v17);
          sub_B170A0();
        }
        v21 = &v19->obj.klass + (int)v20;
        v22 = (EventServantEntity_o *)v21[4];
        if ( !v22 )
          goto LABEL_25;
        Entities = (EventServantEntity_array *)EventServantEntity__TryGetName(
                                                 (EventServantEntity_o *)v21[4],
                                                 &name,
                                                 0LL);
        if ( ((unsigned __int8)Entities & 1) != 0 )
          break;
        max_length = v19->max_length;
        if ( (int)++v20 >= max_length )
          goto LABEL_19;
      }
      Empty = EventServantEntity__GetRuby(v22, 0LL);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(ruby, 0LL);
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
  int32_t v26; // w0
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
  __int64 v37; // x3
  __int64 v38; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v39; // x23
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **v46; // x21
  System_Collections_Generic_IEnumerable_T__o *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_KeyValuePair_string__object___o *v52; // x23
  struct System_String_o *name; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+8h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16

  if ( (byte_40FD02A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_KeyValuePair_string__object____ctor__, method);
    sub_B16FFC(&System_Action_KeyValuePair_string__object___TypeInfo, v3);
    sub_B16FFC(&Method_BasicHelper_ForEach_KeyValuePair_string__object____, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantAddMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&Method_ServantEntity___c__DisplayClass93_0__GetScript_b__0__, v18);
    sub_B16FFC(&ServantEntity___c__DisplayClass93_0_TypeInfo, v19);
    byte_40FD02A = 1;
  }
  entity = 0LL;
  memset(&v55, 0, sizeof(v55));
  p_mergedScript = &this->fields.mergedScript;
  result = this->fields.mergedScript;
  if ( !result )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantAddMaster___);
    v24 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v57.fields.currentCryptoKey = v24;
    *(_QWORD *)&v57.fields.fakeValue = v23;
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v57, 0LL);
    if ( v25 )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v25,
              &entity,
              v26,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
      {
        script = this->fields.script;
        this->fields.mergedScript = script;
LABEL_21:
        sub_B16F98(
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
      v34 = sub_B170CC(ServantEntity___c__DisplayClass93_0_TypeInfo, v27, v28, v29, v30);
      ServantEntity___c__DisplayClass93_0___ctor((ServantEntity___c__DisplayClass93_0_o *)v34, 0LL);
      v39 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                            System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                            v35,
                                                                                            v36,
                                                                                            v37,
                                                                                            v38);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v39,
        (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
      if ( v34 )
      {
        *(_QWORD *)(v34 + 16) = v39;
        v46 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v34 + 16);
        sub_B16F98((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
        v47 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.script;
        v52 = (System_Action_KeyValuePair_string__object___o *)sub_B170CC(
                                                                 System_Action_KeyValuePair_string__object___TypeInfo,
                                                                 v48,
                                                                 v49,
                                                                 v50,
                                                                 v51);
        System_Action_KeyValuePair_string__object_____ctor(
          v52,
          (Il2CppObject *)v34,
          Method_ServantEntity___c__DisplayClass93_0__GetScript_b__0__,
          (const MethodInfo_24B2404 *)Method_System_Action_KeyValuePair_string__object____ctor__);
        BasicHelper__ForEach_KeyValuePair_string__object__(
          v47,
          (System_Action_T__o *)v52,
          (const MethodInfo_18B69F8 *)Method_BasicHelper_ForEach_KeyValuePair_string__object____);
        if ( entity )
        {
          name = entity->fields.name;
          if ( name )
          {
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              &v55,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)name,
              (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
            while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v55,
                      (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
            {
              if ( !*v46 )
                sub_B170D4();
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                *v46,
                (System_Xml_XmlQualifiedName_o *)v55.fields.current.fields.key,
                (System_Xml_Schema_XmlSchemaObject_o *)v55.fields.current.fields.value,
                (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
            }
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v55,
              (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
            script = (struct System_Collections_Generic_Dictionary_string__object__o *)*v46;
            *p_mergedScript = (struct System_Collections_Generic_Dictionary_string__object__o *)*v46;
            goto LABEL_21;
          }
        }
      }
    }
    sub_B170D4();
  }
  return result;
}


System_Int32_array_array *__fastcall ServantEntity__GetScriptMultiArray_int_(
        ServantEntity_o *this,
        System_String_o *key,
        const MethodInfo_19E22B8 *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double v9; // q0

  if ( (byte_40FB09B & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, key);
    sub_B16FFC(&string_TypeInfo, v6);
    byte_40FB09B = 1;
  }
  if ( !this )
    sub_B170D4();
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  v8 = (System_String_o *)sub_B170BC(ScriptValue, string_TypeInfo);
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
        const MethodInfo_19E238C *method)
{
  __int64 v6; // x1
  Il2CppObject *ScriptValue; // x0
  System_String_o *v8; // x20
  long double v9; // q0

  if ( (byte_40FB09C & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, key);
    sub_B16FFC(&string_TypeInfo, v6);
    byte_40FB09C = 1;
  }
  if ( !this )
    sub_B170D4();
  ScriptValue = ServantEntity__GetScriptValue(this, key, 0LL);
  v8 = (System_String_o *)sub_B170BC(ScriptValue, string_TypeInfo);
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

  if ( (byte_40FD02B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FD02B = 1;
  }
  result = (Il2CppObject *)ServantEntity__GetScript(this, (const MethodInfo *)key);
  value = 0LL;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v12; // x2
  ServantSkillMaster_o *Master_WarQuestSelectionMaster; // x21
  BalanceConfig_c *v14; // x0
  SkillInfo_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  SkillInfo_c **v26; // x24
  __int64 v27; // x25
  __int64 v28; // x27
  __int64 v29; // x26
  SkillInfo_o *v30; // x22
  SkillInfo_c **v31; // x28
  __int64 v32; // x23
  __int64 v33; // x24
  int32_t v34; // w0
  ServantSkillEntity_o *LowPriorityEntity; // x0
  SkillInfo_array *v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_40FD054 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, skillInfoList);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantSkillMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&SkillInfo___TypeInfo, v10);
    sub_B16FFC(&SkillInfo_TypeInfo, v11);
    byte_40FD054 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantSkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantSkillMaster___);
  if ( skillListNum <= 0 )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    skillListNum = v14->static_fields->SvtSkillListMax;
  }
  v15 = (SkillInfo_array *)sub_B17014(SkillInfo___TypeInfo, (unsigned int)skillListNum, v12);
  *skillInfoList = v15;
  sub_B16F98((BattleServantConfConponent_o *)skillInfoList, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  if ( skillListNum >= 1 )
  {
    v26 = &SkillInfo_TypeInfo;
    v27 = skillListNum;
    v28 = 4LL;
    v29 = 32LL;
    do
    {
      v30 = (SkillInfo_o *)sub_B170CC(*v26, v22, v23, v24, v25);
      SkillInfo___ctor(v30, 0LL);
      if ( !v30 )
LABEL_26:
        sub_B170D4();
      v30->fields.lv = 1;
      if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
      {
        v31 = v26;
        v33 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v32 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v46.fields.currentCryptoKey = v33;
        *(_QWORD *)&v46.fields.fakeValue = v32;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_26;
        LowPriorityEntity = ServantSkillMaster__getLowPriorityEntity(
                              Master_WarQuestSelectionMaster,
                              v34,
                              (int)v28 - 3,
                              0LL);
        v26 = v31;
        if ( LowPriorityEntity )
        {
          v30->fields.id = LowPriorityEntity->fields.skillId;
          ServantSkillEntity__getAcquisitionMethodExplanation(
            LowPriorityEntity,
            &v30->fields.title,
            &v30->fields.explanation,
            0LL);
        }
      }
      v36 = *skillInfoList;
      if ( !*skillInfoList )
        goto LABEL_26;
      v37 = sub_B170BC(v30, v36->obj.klass->_1.element_class);
      if ( !v37 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
      if ( v28 - 4 >= (unsigned __int64)v36->max_length )
      {
        sub_B17100(v37, v38, v39);
        sub_B170A0();
      }
      *((_QWORD *)&v36->obj.klass + v28) = v30;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v36 + v29),
        (System_Int32_array **)v30,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v45 = v28 - 3;
      ++v28;
      v29 += 8LL;
    }
    while ( v45 < v27 );
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
  int32_t v24; // w0
  System_Int32_array *EntityFromSvtIdOnly; // x19
  TreasureDvcLvMaster_o *v26; // x0
  TreasureDvcLvMaster_o *v27; // x20
  TreasureDvcLvEntity_o *v28; // x0
  TreasureDvcLvEntity_o *v29; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v30; // x19
  SkillLvMaster_o *v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_HashSet_int__o *v36; // x27
  DataVals_array *DataValsList; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Int32_array *funcId; // x8
  DataVals_array *v43; // x24
  unsigned __int64 v44; // x20
  unsigned __int64 max_length; // x9
  DataVals_o *v46; // x25
  int32_t v47; // w1
  int32_t Param; // w26
  int32_t v49; // w1
  int32_t v50; // w0
  System_Collections_Generic_IEnumerable_T__o *v51; // x1
  System_Collections_Generic_HashSet_int__o *v52; // x22
  int32_t v53; // w26
  int32_t v54; // w27
  void *v55; // x8
  System_Collections_Generic_HashSet_int__o *v56; // x20
  __int64 v57; // x2
  __int64 count; // x1
  TreasureDvcLvMaster_o *v60; // [xsp+0h] [xbp-C0h]
  DataVals_o **m_Items; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v62; // [xsp+10h] [xbp-B0h] BYREF
  WarEntity_o *v63; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v65; // [xsp+50h] [xbp-70h] BYREF
  TreasureDvcLvEntity_o *v66; // [xsp+58h] [xbp-68h] BYREF
  SkillLvEntity_o *v67; // [xsp+60h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_40FD053 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantTreasureDvcMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcLvMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__CopyTo___66713984, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v16);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_B16FFC(&int___TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    byte_40FD053 = 1;
  }
  entity = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  memset(&v64, 0, sizeof(v64));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantTreasureDvcMaster___);
  v22 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v23 = (ServantTreasureDvcMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v22;
  *(_QWORD *)&v69.fields.fakeValue = v21;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v69, 0LL);
  if ( !v23 )
    goto LABEL_55;
  EntityFromSvtIdOnly = (System_Int32_array *)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v23, v24, 1, 0LL);
  if ( EntityFromSvtIdOnly )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v26 = (TreasureDvcLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcLvMaster___);
    if ( !v26 )
      goto LABEL_55;
    v27 = v26;
    v28 = TreasureDvcLvMaster__GetEntity(v26, EntityFromSvtIdOnly->m_Items[1], 1, 0LL);
    if ( !v28 )
      return 0LL;
    v29 = v28;
    if ( !v28->fields.funcId )
      return 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v60 = v27;
    v30 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
    v31 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
    v36 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v32,
                                                         v33,
                                                         v34,
                                                         v35);
    System_Collections_Generic_HashSet_int____ctor(
      v36,
      (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
    if ( !v36 )
      goto LABEL_55;
    System_Collections_Generic_HashSet_int___UnionWith(
      v36,
      (System_Collections_Generic_IEnumerable_T__o *)v29->fields.funcId,
      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    DataValsList = TreasureDvcLvEntity__getDataValsList(v29, 100, 0LL);
    funcId = v29->fields.funcId;
    if ( !funcId )
      goto LABEL_55;
    m_Items = DataValsList->m_Items;
    v43 = DataValsList;
    v44 = 0LL;
    while ( 1 )
    {
      max_length = funcId->max_length;
      if ( (__int64)v44 >= (int)max_length )
      {
        v56 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                             System_Collections_Generic_HashSet_int__TypeInfo,
                                                             v38,
                                                             v39,
                                                             v40,
                                                             v41);
        System_Collections_Generic_HashSet_int____ctor(
          v56,
          (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
        System_Collections_Generic_HashSet_int___GetEnumerator(
          &v62,
          v36,
          (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
        v64 = v62;
        while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                  &v64,
                  (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
        {
          if ( !v30 )
            sub_B170D4();
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v30,
                 &v63,
                 (int32_t)v64.fields._current,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__) )
          {
            if ( !v63 )
              sub_B170D4();
            if ( !v56 )
              sub_B170D4();
            System_Collections_Generic_HashSet_int___Add(
              v56,
              HIDWORD(v63->fields.emptyMessage),
              (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose(
          &v64,
          (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
        if ( v56 )
        {
          count = (unsigned int)v56->fields._count;
          if ( (int)count >= 1 )
          {
            EntityFromSvtIdOnly = (System_Int32_array *)sub_B17014(int___TypeInfo, count, v57);
            System_Collections_Generic_HashSet_int___CopyTo_35493032(
              v56,
              EntityFromSvtIdOnly,
              (const MethodInfo_21D94A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___66713984);
            return EntityFromSvtIdOnly;
          }
          return 0LL;
        }
LABEL_55:
        sub_B170D4();
      }
      if ( v44 >= max_length )
        goto LABEL_68;
      if ( !v30 )
        goto LABEL_55;
      DataValsList = (DataVals_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         v30,
                                         &entity,
                                         funcId->m_Items[v44 + 1],
                                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)DataValsList & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_55;
        DataValsList = (DataVals_array *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
        if ( ((unsigned __int8)DataValsList & 1) != 0 )
        {
          if ( !v43 )
            goto LABEL_55;
          if ( v44 >= v43->max_length )
          {
LABEL_68:
            sub_B17100(DataValsList, v38, v39);
            sub_B170A0();
          }
          if ( !entity )
            goto LABEL_55;
          v46 = m_Items[v44];
          if ( !v46 )
            goto LABEL_55;
          DataVals__SetTempType(m_Items[v44], (FunctionMaster_o *)v30, (int32_t)entity->fields.age, 0LL);
          v47 = DataVals__isParam(v46, 26, 0LL) ? 26 : 3;
          Param = DataVals__GetParam(v46, v47, 0, 0LL);
          v49 = DataVals__isParam(v46, 27, 0LL) ? 27 : 4;
          v50 = DataVals__GetParam(v46, v49, 0, 0LL);
          if ( !v31 )
            goto LABEL_55;
          if ( SkillLvMaster__TryGetEntity(v31, &v67, Param, v50, 0LL) )
          {
            if ( !v67 )
              goto LABEL_55;
            v51 = (System_Collections_Generic_IEnumerable_T__o *)v67->fields.funcId;
            if ( v51 )
              System_Collections_Generic_HashSet_int___UnionWith(
                v36,
                v51,
                (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
          }
          DataValsList = (DataVals_array *)DataVals__isParam(v46, 92, 0LL);
          if ( ((unsigned __int8)DataValsList & 1) != 0 )
          {
            DataValsList = (DataVals_array *)DataVals__isParam(v46, 93, 0LL);
            if ( ((unsigned __int8)DataValsList & 1) != 0 )
            {
              v52 = v36;
              v53 = DataVals__GetParam(v46, 92, 0, 0LL);
              v54 = DataVals__GetParam(v46, 93, 0, 0LL);
              if ( DataVals__isParam(v46, 95, 0LL) )
              {
                DataValsList = (DataVals_array *)TreasureDvcLvMaster__TryGetEntity(v60, &v66, v53, v54, 0LL);
                v36 = v52;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v55 = v66;
                  if ( !v66 )
                    goto LABEL_55;
LABEL_52:
                  v38 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)v55 + 4);
                  if ( v38 )
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v36,
                      v38,
                      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                }
              }
              else
              {
                DataValsList = (DataVals_array *)SkillLvMaster__TryGetEntity(v31, &v65, v53, v54, 0LL);
                v36 = v52;
                if ( ((unsigned __int8)DataValsList & 1) != 0 )
                {
                  v55 = v65;
                  if ( !v65 )
                    goto LABEL_55;
                  goto LABEL_52;
                }
              }
            }
          }
        }
      }
      funcId = v29->fields.funcId;
      ++v44;
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
  int32_t v12; // w0
  ServantChangeEntity_o *v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_40FD03D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD03D = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___),
        v10 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey,
        *(_QWORD *)&v16.fields.fakeValue = *(_QWORD *)&this->fields.id.fields.fakeValue,
        v11 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster,
        *(_QWORD *)&v16.fields.currentCryptoKey = v10,
        v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v16, 0LL),
        !v11) )
  {
    sub_B170D4();
  }
  v13 = ServantChangeMaster__TrueNameEntity(v11, v12, 0LL);
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

  if ( (byte_40FD048 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16197, *(_QWORD *)&limitCount);
    byte_40FD048 = 1;
  }
  ScriptIntArrayParam = ServantEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16197, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_40FD050 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A,
      v5);
    byte_40FD050 = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 5LL, v2);
  v8.fields.value = Field__PrivateImplementationDetails__AEA87BA3ABCCD5D9980E5AFD091725F21D302AB6A2C3E9CB685B8C03384C843A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6,
           this->fields.classId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsCoinRoomCheck(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FD04A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17427, method);
    byte_40FD04A = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_17427, v2);
}


bool __fastcall ServantEntity__IsExtra1(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_40FD04E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913,
      v5);
    byte_40FD04E = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v2);
  v8.fields.value = Field__PrivateImplementationDetails__E6EAABD98BF7C3C83C4BE47DFFE7DAB88C8678CC17213D48C7B62ABF93F4E913;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6,
           this->fields.classId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall ServantEntity__IsExtra2(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  const MethodInfo *v7; // x1
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_40FD04F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA,
      v5);
    byte_40FD04F = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 4LL, v2);
  v9.fields.value = Field__PrivateImplementationDetails__ED0B1052171B7B497721747C13B3FA78DABBC3D49393EEB78155642A20EACDCA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v9, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6,
           this->fields.classId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___)
      || ServantEntity__IsBeast(this, v7);
}


bool __fastcall ServantEntity__IsFourCavalry(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_40FD04D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE,
      v5);
    byte_40FD04D = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 8LL, v2);
  v8.fields.value = Field__PrivateImplementationDetails__5216277D43E44B2AC285818934F801B44410A500FCE72F41C7EEBAEE9AF671EE;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6,
           this->fields.classId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v19; // x1
  __int64 v20; // x2
  int v21; // w8
  __int64 v22; // x9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x22
  __int64 v25; // x23
  ServantLimitAddMaster_o *v26; // x20
  int32_t v27; // w0
  struct System_Int32_array *v28; // x10
  int max_length; // w8
  __int64 v30; // x9
  int32_t *v31; // x10
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_40FD027 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v12);
    byte_40FD027 = 1;
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
  *(_QWORD *)&v34.fields.currentCryptoKey = v15;
  *(_QWORD *)&v34.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  IndividualityList = ServantIndividualityMaster__GetIndividualityList(v17, v16, 0LL);
  if ( !IndividualityList && (IndividualityList = this->fields.individuality) == 0LL
    || (v21 = IndividualityList->max_length, v21 < 1) )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
    v25 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v24 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v26 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v25;
    *(_QWORD *)&v35.fields.fakeValue = v24;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
    if ( v26 )
    {
      IndividualityList = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v26, &entity, v27, v16, 0LL);
      if ( ((unsigned __int8)IndividualityList & 1) == 0 )
        return 0;
      if ( entity )
      {
        v28 = entity->fields.individuality;
        if ( v28 )
        {
          max_length = v28->max_length;
          if ( max_length >= 1 )
          {
            v30 = 0LL;
            v31 = &v28->m_Items[1];
            while ( (unsigned int)v30 < max_length )
            {
              if ( v31[v30] == individuality )
                return 1;
              if ( (int)++v30 >= max_length )
                return 0;
            }
LABEL_37:
            sub_B17100(IndividualityList, v19, v20);
            sub_B170A0();
          }
        }
        return 0;
      }
    }
    sub_B170D4();
  }
  v22 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v22 >= v21 )
      goto LABEL_37;
    if ( IndividualityList->m_Items[v22 + 1] == individuality )
      return 1;
    if ( (int)++v22 >= v21 )
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantEntity__IsIndividuality_30656232(
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
  __int64 v19; // x1
  __int64 v20; // x2
  unsigned __int64 v21; // x9
  unsigned __int64 v22; // x8
  signed int max_length; // w12
  __int64 v24; // x14
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v26; // x22
  __int64 v27; // x23
  ServantLimitAddMaster_o *v28; // x20
  int32_t v29; // w0
  struct System_Int32_array *v30; // x8
  unsigned __int64 v31; // x10
  unsigned __int64 v32; // x9
  signed int v33; // w13
  __int64 v34; // x15
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_40FD028 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v12);
    byte_40FD028 = 1;
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
  *(_QWORD *)&v37.fields.currentCryptoKey = v15;
  *(_QWORD *)&v37.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v37, 0LL);
  if ( (BYTE3(ServantIndividualityMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantIndividualityMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantIndividualityMaster_TypeInfo);
  }
  individuality = ServantIndividualityMaster__GetIndividualityList(v17, v16, 0LL);
  if ( (individuality || (individuality = this->fields.individuality) != 0LL)
    && (int)*(_QWORD *)&individuality->max_length >= 1 )
  {
    v21 = (unsigned int)*(_QWORD *)&individuality->max_length;
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= v21 )
        goto LABEL_48;
      max_length = individualityList->max_length;
      if ( max_length >= 1 )
        break;
LABEL_24:
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_25;
    }
    v24 = 0LL;
    while ( (unsigned int)v24 < max_length )
    {
      if ( individuality->m_Items[v22 + 1] == individualityList->m_Items[v24 + 1] )
        goto LABEL_45;
      if ( (int)++v24 >= max_length )
        goto LABEL_24;
    }
LABEL_48:
    sub_B17100(individuality, v19, v20);
    sub_B170A0();
  }
LABEL_25:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v27 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v26 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v28 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v27;
  *(_QWORD *)&v38.fields.fakeValue = v26;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
  if ( !v28 )
    goto LABEL_49;
  individuality = (System_Int32_array *)ServantLimitAddMaster__TryGetEntity(v28, &entity, v29, v16, 0LL);
  if ( ((unsigned __int8)individuality & 1) != 0 )
  {
    if ( entity )
    {
      v30 = entity->fields.individuality;
      if ( v30 && (int)*(_QWORD *)&v30->max_length >= 1 )
      {
        v31 = (unsigned int)*(_QWORD *)&v30->max_length;
        v32 = 0LL;
        while ( 1 )
        {
          if ( v32 >= v31 )
            goto LABEL_48;
          v33 = individualityList->max_length;
          if ( v33 >= 1 )
            break;
LABEL_43:
          ++v32;
          individuality = 0LL;
          if ( (__int64)v32 >= (int)v31 )
            return (char)individuality;
        }
        v34 = 0LL;
        while ( (unsigned int)v34 < v33 )
        {
          if ( v30->m_Items[v32 + 1] == individualityList->m_Items[v34 + 1] )
            goto LABEL_45;
          if ( (int)++v34 >= v33 )
            goto LABEL_43;
        }
        goto LABEL_48;
      }
      goto LABEL_47;
    }
LABEL_49:
    sub_B170D4();
  }
LABEL_47:
  LOBYTE(individuality) = 0;
  return (char)individuality;
}


bool __fastcall ServantEntity__IsNameHide(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  ServantChangeMaster_o *v9; // x19
  int32_t v10; // w0
  ServantChangeEntity_array *v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_40FD03C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD03C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v8;
  *(_QWORD *)&v13.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
  if ( !v9 || (v11 = ServantChangeMaster__GetEntityList(v9, v10, 0LL)) == 0LL )
LABEL_10:
    sub_B170D4();
  return *(_QWORD *)&v11->max_length != 0LL;
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
  int32_t v10; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_40FD03A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD03A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
  if ( !v9 )
LABEL_9:
    sub_B170D4();
  return ServantChangeMaster__IsNameTrue(v9, v10, 0LL);
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
  int32_t v10; // w0
  ServantChangeEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  ServantChangeEntity_o *v13; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FD03B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD03B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v8 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v9 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v8;
  *(_QWORD *)&v15.fields.fakeValue = v7;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  if ( !v9 )
LABEL_12:
    sub_B170D4();
  v11 = ServantChangeMaster__TrueNameEntity(v9, v10, 0LL);
  if ( v11 && (v13 = v11, ServantChangeEntity__IsEnable(v11, 0LL)) )
    return ServantChangeEntity__HasFlag(v13, 8, 0LL);
  else
    return ServantEntity__IsNameTrue(this, v12);
}


bool __fastcall ServantEntity__IsSvtBuffTurnExtend(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FD04B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22367, method);
    byte_40FD04B = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_22367, v2);
}


bool __fastcall ServantEntity__IsThreeKnights(ServantEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x20
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_40FD04C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, method);
    sub_B16FFC(&int___TypeInfo, v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA,
      v5);
    byte_40FD04C = 1;
  }
  v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 6LL, v2);
  v8.fields.value = Field__PrivateImplementationDetails__485A314493EE28D5201FD3A672746051402D782E01F92E8D48232FB0B05497FA;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v8, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6,
           this->fields.classId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
  sub_B16F98(
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

  if ( (byte_40FD02C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40FD02C = 1;
  }
  Script = ServantEntity__GetScript(this, (const MethodInfo *)key);
  if ( Script )
    LOBYTE(Script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Script;
}


bool __fastcall ServantEntity__checkScript_30658676(
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

  if ( (byte_40FD02D & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FD02D = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      v13 = sub_B173C8(ScriptValue);
      LOBYTE(ScriptValue) = ServantEntity__checkScript_30658828(v9, v10, v11, *(float *)&v13, v12);
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


bool __fastcall ServantEntity__checkScript_30658828(
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

  if ( (byte_40FD02E & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FD02E = 1;
  }
  ScriptValue = ServantEntity__GetScriptValue(this, key, (const MethodInfo *)param);
  if ( ScriptValue )
  {
    if ( ScriptValue->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B173C8(ScriptValue);
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

  if ( (byte_40FD032 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16584, height);
    byte_40FD032 = 1;
  }
  return ServantEntity__checkScript_30658828(this, (System_String_o *)StringLiteral_16584, height, 1000.0, v3);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  EventServantMaster_o *v20; // x22
  int32_t v21; // w0
  EventServantEntity_array *Entities; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int max_length; // w8
  EventServantEntity_array *v26; // x22
  unsigned int v27; // w23
  EventServantEntity_o *v28; // x0
  WebViewManager_o *v29; // x0
  WarQuestSelectionMaster_o *v30; // x0
  __int64 v31; // x22
  __int64 v32; // x23
  ServantChangeMaster_o *v33; // x21
  int32_t v34; // w0
  ServantChangeEntity_o *v35; // x0
  ServantChangeEntity_o *v36; // x21
  WebViewManager_o *v37; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x0
  WebViewManager_o *v40; // x0
  WarQuestSelectionMaster_o *v41; // x0
  __int64 v42; // x22
  __int64 v43; // x23
  ServantLimitAddMaster_o *v44; // x21
  int32_t v45; // w0
  System_String_o *OverwriteServantBattleName; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v47; // x20
  System_String_o *v48; // x0
  WebViewManager_o *v49; // x0
  WarQuestSelectionMaster_o *v50; // x0
  __int64 v51; // x21
  __int64 v52; // x22
  ServantChangeMaster_o *v53; // x20
  int32_t v54; // w0
  ServantChangeEntity_o *v55; // x0
  ServantLimitAddEntity_o *v56; // [xsp+8h] [xbp-48h] BYREF
  WarEntity_o *entity; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *battleName; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40FD039 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventServantMaster___, isTrueNameForce);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40FD039 = 1;
  }
  entity = 0LL;
  battleName = 0LL;
  v56 = 0LL;
  if ( !ServantEntity__GetIsEventJoin(this, (const MethodInfo *)isTrueNameForce)
    && !ServantEntity__GetIsCollectionStatusNotGet(this, v15) )
  {
    goto LABEL_17;
  }
  battleName = (System_String_o *)StringLiteral_1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventServantMaster___);
  v19 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v20 = (EventServantMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v19;
  *(_QWORD *)&v59.fields.fakeValue = v18;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
  if ( !v20 )
    goto LABEL_54;
  Entities = EventServantMaster__GetEntities(v20, v21, 0LL);
  if ( !Entities )
    goto LABEL_54;
  max_length = Entities->max_length;
  v26 = Entities;
  if ( max_length < 1 )
  {
    if ( !isTrueNameForce )
      goto LABEL_29;
LABEL_17:
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v29 )
      goto LABEL_54;
    v30 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v29,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
    v32 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
    v31 = *(_QWORD *)&this->fields.id.fields.fakeValue;
    v33 = (ServantChangeMaster_o *)v30;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v60.fields.currentCryptoKey = v32;
    *(_QWORD *)&v60.fields.fakeValue = v31;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
    if ( !v33 )
      goto LABEL_54;
    v35 = ServantChangeMaster__TrueNameEntity(v33, v34, 0LL);
    if ( !v35 )
      goto LABEL_29;
    v36 = v35;
    v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v37 )
      goto LABEL_54;
    v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v37,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    entity = 0LL;
    if ( !v38 )
      goto LABEL_54;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           v38,
           &entity,
           v36->fields.svtId,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( entity )
        return entity->fields.emptyMessage;
    }
    else
    {
LABEL_29:
      if ( (limitCount & 0x80000000) == 0 )
      {
        v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v40 )
          goto LABEL_54;
        v41 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v40,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
        v56 = 0LL;
        v43 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v42 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v44 = (ServantLimitAddMaster_o *)v41;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v61.fields.currentCryptoKey = v43;
        *(_QWORD *)&v61.fields.fakeValue = v42;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
        if ( !v44 )
          goto LABEL_54;
        ServantLimitAddMaster__TryGetEntity(v44, &v56, v45, limitCount, 0LL);
        if ( v56 )
        {
          OverwriteServantBattleName = ServantLimitAddEntity__GetOverwriteServantBattleName(v56, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(OverwriteServantBattleName, 0LL);
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v47, 0LL);
          if ( !System_String__IsNullOrEmpty(v48, 0LL) )
          {
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
            }
            return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(v47, 0LL);
          }
        }
      }
      v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v49 )
      {
        v50 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v49,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
        v52 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
        v51 = *(_QWORD *)&this->fields.id.fields.fakeValue;
        v53 = (ServantChangeMaster_o *)v50;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v62.fields.currentCryptoKey = v52;
        *(_QWORD *)&v62.fields.fakeValue = v51;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
        if ( v53 )
        {
          v55 = ServantChangeMaster__GetEnableEntity(v53, v54, 0LL);
          if ( v55 )
            return v55->fields.battleName;
          else
            return this->fields.battleName;
        }
      }
    }
LABEL_54:
    sub_B170D4();
  }
  v27 = 0;
  while ( 1 )
  {
    if ( v27 >= max_length )
    {
      sub_B17100(Entities, v23, v24);
      sub_B170A0();
    }
    v28 = v26->m_Items[v27];
    if ( !v28 )
      goto LABEL_54;
    Entities = (EventServantEntity_array *)EventServantEntity__TryGetBattleName(v28, &battleName, 0LL);
    if ( ((unsigned __int8)Entities & 1) != 0 )
      return battleName;
    max_length = v26->max_length;
    if ( (int)++v27 >= max_length )
      goto LABEL_17;
  }
}


int32_t __fastcall ServantEntity__getCameraActionId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD030 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17116, method);
    byte_40FD030 = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30658676(this, (System_String_o *)StringLiteral_17116, &param, v2) )
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD025 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_1, v5);
    byte_40FD025 = 1;
  }
  entity = 0LL;
  p_age = (System_String_o **)&StringLiteral_1;
  if ( !SvtType__IsServantEquip(this->fields.type, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      MasterData_WarQuestSelectionMaster,
      &entity,
      this->fields.classId,
      (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
  __int64 v23; // x2
  System_String_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x2
  System_String_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  WebViewManager_o *Instance; // x0
  SkillEntity_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x23
  __int64 v44; // x25
  __int64 v45; // x26
  __int64 i; // x27
  struct System_Int32_array *v47; // x8
  unsigned __int64 v48; // x19
  int32_t v49; // w24
  System_Int32_array *v50; // x8
  System_String_array *v51; // x8
  System_String_array *v52; // x9
  __int64 v53; // x8

  if ( (byte_40FD029 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&string___TypeInfo, v12);
    byte_40FD029 = 1;
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
  v16 = (System_Int32_array *)sub_B17014(
                                int___TypeInfo,
                                (unsigned int)v15->static_fields->SvtPassiveSkillListMax,
                                titleList);
  *idList = v16;
  sub_B16F98((BattleServantConfConponent_o *)idList, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v24 = (System_String_array *)sub_B17014(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                 v23);
  *titleList = v24;
  sub_B16F98((BattleServantConfConponent_o *)titleList, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v32 = (System_String_array *)sub_B17014(
                                 string___TypeInfo,
                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtPassiveSkillListMax,
                                 v31);
  *explanationList = v32;
  sub_B16F98((BattleServantConfConponent_o *)explanationList, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (SkillEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( max_length >= 1 )
  {
    v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v44 = max_length;
    v45 = 32LL;
    for ( i = 8LL; ; ++i )
    {
      v47 = this->fields.classPassive;
      if ( !v47 )
        break;
      v48 = i - 8;
      if ( i - 8 >= (unsigned __int64)v47->max_length )
        goto LABEL_26;
      if ( !v43 )
        break;
      v49 = *((_DWORD *)&v47->obj.klass + i);
      MasterData_WarQuestSelectionMaster = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              v43,
                                                              v49,
                                                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v50 = *idList;
      if ( !*idList )
        break;
      if ( v48 >= v50->max_length )
        goto LABEL_26;
      *((_DWORD *)&v50->obj.klass + i) = v49;
      if ( MasterData_WarQuestSelectionMaster )
      {
        v51 = *titleList;
        if ( !*titleList )
          break;
        v52 = *explanationList;
        if ( !*explanationList )
          break;
        if ( v48 >= v51->max_length || v48 >= v52->max_length )
        {
LABEL_26:
          sub_B17100(MasterData_WarQuestSelectionMaster, v41, v42);
          sub_B170A0();
        }
        SkillEntity__getSkillMessageInfo(
          MasterData_WarQuestSelectionMaster,
          (System_String_o **)((char *)v51 + v45),
          (System_String_o **)((char *)v52 + v45),
          0,
          0LL);
      }
      v53 = i - 7;
      v45 += 8LL;
      if ( v53 >= v44 )
        return;
    }
LABEL_25:
    sub_B170D4();
  }
}


int32_t __fastcall ServantEntity__getDressId(ServantEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t param; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FD02F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22531, method);
    byte_40FD02F = 1;
  }
  param = 0;
  if ( ServantEntity__checkScript_30658676(this, (System_String_o *)StringLiteral_22531, &param, v2) )
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
  int32_t v13; // w0
  ServantChangeEntity_o *v14; // x0
  const MethodInfo *v15; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FD037 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD037 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v11 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v12 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v11;
  *(_QWORD *)&v18.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  if ( !v12 )
LABEL_14:
    sub_B170D4();
  v14 = ServantChangeMaster__GetHiddenEntity(v12, v13, 0LL);
  if ( v14 )
    return v14->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v15);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(Name, 0LL);
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
  int32_t v22; // w0
  __int64 v23; // x2
  System_Array_o *individuality; // x21
  void *monitor; // x8
  __int64 v26; // x9
  System_Array_o *v27; // x0
  struct System_Int32_array *v28; // x0
  struct System_Int32_array **p_individuality; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_40FD026 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&ServantIndividualityMaster_TypeInfo, v11);
    byte_40FD026 = 1;
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
  *(_QWORD *)&v38.fields.currentCryptoKey = v14;
  *(_QWORD *)&v38.fields.fakeValue = v13;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v38, 0LL);
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
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
  v20 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v19 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v21 = (ServantLimitAddMaster_o *)Master_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = v20;
  *(_QWORD *)&v39.fields.fakeValue = v19;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
  if ( !v21 )
    goto LABEL_33;
  if ( !ServantLimitAddMaster__TryGetEntity(v21, &entity, v22, v15, 0LL) )
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
        individuality = (System_Array_o *)sub_B17014(int___TypeInfo, (unsigned int)(v26 + (_DWORD)monitor), v23);
        System_Array__CopyTo((System_Array_o *)IndividualityList, individuality, 0, 0LL);
        if ( entity )
        {
          v27 = (System_Array_o *)entity->fields.individuality;
          if ( v27 )
          {
            System_Array__CopyTo(v27, individuality, IndividualityList->max_length, 0LL);
            return (System_Int32_array *)individuality;
          }
        }
LABEL_33:
        sub_B170D4();
      }
    }
  }
  else
  {
LABEL_30:
    individuality = (System_Array_o *)IndividualityList;
    if ( !IndividualityList )
    {
      v28 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v23);
      this->fields.individuality = v28;
      p_individuality = &this->fields.individuality;
      sub_B16F98(
        (BattleServantConfConponent_o *)p_individuality,
        (System_Int32_array **)v28,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
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
  int32_t v15; // w0
  ServantChangeEntity_o *v16; // x0
  const MethodInfo *v17; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FD035 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, *(_QWORD *)&limitCount);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FD035 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v13;
  *(_QWORD *)&v20.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  v16 = ServantChangeMaster__GetEnableEntity(v14, v15, 0LL);
  if ( v16 )
    return v16->fields.name;
  Name = ServantEntity__GetName(this, limitCount, 0, imageLimitCount, v17);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(Name, 0LL);
}


System_String_o *__fastcall ServantEntity__getName_30661760(
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
  int32_t v15; // w0
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

  if ( (byte_40FD038 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, ruby);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FD038 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  v13 = *(_QWORD *)&this->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.id.fields.fakeValue;
  v14 = (ServantChangeMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v13;
  *(_QWORD *)&v36.fields.fakeValue = v12;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v36, 0LL);
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  v16 = ServantChangeMaster__GetEnableEntity(v14, v15, 0LL);
  if ( v16 )
  {
    v24 = v16->fields.ruby;
    v25 = v16;
    *ruby = v24;
    sub_B16F98((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v24, v18, v19, v20, v21, v22, v23);
    return v25->fields.name;
  }
  else
  {
    v27 = ServantEntity__GetRuby(this, v17);
    *ruby = v27;
    sub_B16F98((BattleServantConfConponent_o *)ruby, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
    Name = ServantEntity__GetName(this, limitCount, 0, -1, v34);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(Name, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v15; // x19
  System_Collections_Generic_List_object__c *v16; // x1
  __int64 v17; // x9
  ServantEntity___c_c *v18; // x0
  struct ServantEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__127_0; // x20
  Il2CppObject *v21; // x21
  struct ServantEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x0

  if ( (byte_40FD049 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B16FFC(&Method_ServantEntity___c__getScriptIntArrayParam_b__127_0__, v9);
    sub_B16FFC(&ServantEntity___c_TypeInfo, v10);
    byte_40FD049 = 1;
  }
  result = (System_Int32_array *)ServantEntity__GetScriptValue(this, key, method);
  if ( result )
  {
    v15 = (System_Collections_Generic_List_BattleActionData_HealData__o *)result;
    v16 = System_Collections_Generic_List_object__TypeInfo;
    v17 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->obj.klass->_2.bitflags2 + 1) >= (unsigned int)v17
      && (System_Collections_Generic_List_object__c *)result->obj.klass->_2.typeHierarchy[v17 - 1] == System_Collections_Generic_List_object__TypeInfo )
    {
      v18 = ServantEntity___c_TypeInfo;
      if ( (BYTE3(ServantEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantEntity___c_TypeInfo);
        v18 = ServantEntity___c_TypeInfo;
      }
      static_fields = v18->static_fields;
      _9__127_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__127_0;
      if ( !_9__127_0 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          static_fields = ServantEntity___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)static_fields->__9;
        _9__127_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                            System_Converter_object__int__TypeInfo,
                                                                            v16,
                                                                            v12,
                                                                            v13,
                                                                            v14);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__127_0,
          v21,
          Method_ServantEntity___c__getScriptIntArrayParam_b__127_0__,
          (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
        v22 = ServantEntity___c_TypeInfo->static_fields;
        v22->__9__127_0 = (struct System_Converter_object__int__o *)_9__127_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v22->__9__127_0,
          (System_Int32_array **)_9__127_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                        v15,
                                                        (System_Converter_T__TOutput__o *)_9__127_0,
                                                        (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( v29 )
        return System_Collections_Generic_List_int___ToArray(
                 v29,
                 (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    }
    else
    {
      sub_B173C8(result);
    }
    sub_B170D4();
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

  if ( (byte_40FD036 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount);
    byte_40FD036 = 1;
  }
  Name = ServantEntity__GetName(this, limitCount, 0, -1, v3);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(Name, 0LL);
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

  if ( (byte_40FD033 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19808, method);
    byte_40FD033 = 1;
  }
  return ServantEntity__checkScript(this, (System_String_o *)StringLiteral_19808, v2);
}


void __fastcall ServantEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7624 & 1) == 0 )
  {
    sub_B16FFC(&ServantEntity___c_TypeInfo, v1);
    byte_40F7624 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  if ( (byte_40F7625 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, x.fields.key);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v7);
    byte_40F7625 = 1;
  }
  result = this->fields.result;
  if ( !result )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
    (System_Xml_XmlQualifiedName_o *)key,
    (System_Xml_Schema_XmlSchemaObject_o *)value,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
}