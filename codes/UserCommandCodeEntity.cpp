void __fastcall UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A09743 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_long___ctor__, method);
    byte_4A09743 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30E4308 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserCommandCodeEntity___ctor_39696588(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0

  if ( (byte_4A09744 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_long___ctor__, e);
    byte_4A09744 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30E4308 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1B68930(v5, v6);
  v7 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v7;
  v8 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v8;
  this->fields.commandCodeId = e->fields.commandCodeId;
  this->fields.status = e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


int64_t __fastcall UserCommandCodeEntity__CreatePrimaryKey(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A09742 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A09742 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v5, 0LL);
}


System_Int32_array *__fastcall UserCommandCodeEntity__GetCategoryIdList(
        UserCommandCodeEntity_o *this,
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
  System_Collections_Generic_HashSet_int__o *v19; // x23
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *skillId; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v23; // x21
  __int64 v24; // x22
  CommandCodeSkillMaster_o *v25; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  Il2CppObject *v27; // x22
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x20
  unsigned __int64 v31; // x27
  CommandCodeSkillEntity_o *v32; // x8
  SkillLvEntity_o *v33; // x23
  const MethodInfo *v34; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *v36; // x24
  unsigned __int64 v37; // x28
  bool *p_DispLog; // x19
  unsigned __int64 max_length; // x9
  DataVals_o *v40; // x25
  int32_t v41; // w1
  int32_t Param; // w26
  int32_t v43; // w1
  int32_t v44; // w0
  const MethodInfo *v45; // x4
  System_Collections_Generic_HashSet_int__o *v46; // x21
  _BOOL8 v47; // x0
  __int64 v48; // x1
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 count; // x1
  System_Int32_array *v52; // x19
  System_Collections_Generic_HashSet_int__o *v54; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v55; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v56; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v57; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v58; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4A09745 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, method);
    sub_1B686D4(&Method_DataManager_GetMasterData_FunctionMaster___, v3);
    sub_1B686D4(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_1B686D4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v10);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1B686D4(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1B686D4(&int___TypeInfo, v16);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4A09745 = 1;
  }
  v58 = 0LL;
  entity = 0LL;
  memset(&v57, 0, sizeof(v57));
  v56 = 0LL;
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_3374AEC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v24 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v25 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v24;
  *(_QWORD *)&v60.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v60, 0LL);
  if ( !v25 )
    goto LABEL_57;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v25, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v54 = v19;
  v27 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_57;
  v29 = *(_QWORD *)&CommandCodeSkillList->max_length;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( (int)v29 >= 1 )
  {
    v31 = 0LL;
    do
    {
      if ( v31 >= (unsigned int)v29 )
LABEL_58:
        sub_1B68938(Instance, skillId);
      v32 = CommandCodeSkillList->m_Items[v31];
      if ( v32 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v32->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v27 )
            goto LABEL_57;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v27, (int32_t)skillId, 1, v28);
          if ( Instance )
          {
            skillId = *(System_Collections_Generic_IEnumerable_T__o **)&Instance->fields._DispLog;
            v33 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v54;
              if ( !v54 )
                goto LABEL_57;
              System_Collections_Generic_HashSet_int___UnionWith(
                v54,
                skillId,
                (const MethodInfo_3375D00 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v33, v34);
              funcId = v33->fields.funcId;
              if ( !funcId )
                goto LABEL_57;
              v36 = Instance;
              v37 = 0LL;
              p_DispLog = &Instance->fields._DispLog;
              while ( 1 )
              {
                max_length = funcId->max_length;
                if ( (__int64)v37 >= (int)max_length )
                  break;
                if ( v37 >= max_length )
                  goto LABEL_58;
                if ( !v30 )
                  goto LABEL_57;
                Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v30,
                                              &entity,
                                              funcId->m_Items[v37 + 1],
                                              (const MethodInfo_30E4514 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_57;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v36 )
                      goto LABEL_57;
                    if ( v37 >= LODWORD(v36->fields.m_CancellationTokenSource) )
                      goto LABEL_58;
                    if ( !entity )
                      goto LABEL_57;
                    v40 = *(DataVals_o **)&p_DispLog[8 * v37];
                    if ( !v40 )
                      goto LABEL_57;
                    DataVals__SetTempType(
                      *(DataVals_o **)&p_DispLog[8 * v37],
                      (FunctionMaster_o *)v30,
                      (int32_t)entity[1].monitor,
                      0LL);
                    if ( DataVals__isParam(v40, 26, 0LL) )
                      v41 = 26;
                    else
                      v41 = 3;
                    Param = DataVals__GetParam(v40, v41, 0, 0LL);
                    if ( DataVals__isParam(v40, 27, 0LL) )
                      v43 = 27;
                    else
                      v43 = 4;
                    v44 = DataVals__GetParam(v40, v43, 0, 0LL);
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(
                                                  (SkillLvMaster_o *)v27,
                                                  &v58,
                                                  Param,
                                                  v44,
                                                  v45);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v58 )
                        goto LABEL_57;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v58->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v54,
                          skillId,
                          (const MethodInfo_3375D00 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v33->fields.funcId;
                ++v37;
                if ( !funcId )
                  goto LABEL_57;
              }
            }
          }
        }
      }
      LODWORD(v29) = CommandCodeSkillList->max_length;
    }
    while ( (__int64)++v31 < (int)v29 );
  }
  v46 = (System_Collections_Generic_HashSet_int__o *)sub_1B68920(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v46,
    (const MethodInfo_3374AEC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)v54;
  if ( !v54 )
    goto LABEL_57;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v55,
    v54,
    (const MethodInfo_3375674 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v57 = v55;
  while ( 1 )
  {
    v47 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v57,
            (const MethodInfo_32364EC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v47 )
      break;
    if ( !v30 )
      sub_1B68930(v47, v48);
    v49 = DataMasterBase_object__object__int___TryGetEntity(
            v30,
            &v56,
            (int32_t)v57.fields._current,
            (const MethodInfo_30E4514 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v49 )
    {
      if ( !v56 )
        sub_1B68930(v49, v50);
      if ( !v46 )
        sub_1B68930(v49, v50);
      System_Collections_Generic_HashSet_int___Add(
        v46,
        HIDWORD(v56[4].monitor),
        (const MethodInfo_3375CF0 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v57,
    (const MethodInfo_32364E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v46 )
LABEL_57:
    sub_1B68930(Instance, skillId);
  count = (unsigned int)v46->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v52 = (System_Int32_array *)sub_1B6877C(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_53960744(
    v46,
    v52,
    (const MethodInfo_3376028 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v52;
}


int32_t __fastcall UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A09749 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A09749 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B68930(Instance, v7);
  }
  return (int32_t)Instance[4].klass;
}


int32_t __fastcall UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A0974B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0974B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B68930(Instance, v7);
  }
  return (int32_t)Instance[4].monitor;
}


int32_t __fastcall UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A0974A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0974A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B68930(Instance, v7);
  }
  return HIDWORD(Instance[4].klass);
}


int32_t __fastcall UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A0974C & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1B686D4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A0974C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_30E44C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B68930(Instance, v7);
  }
  return HIDWORD(Instance[4].monitor);
}


void __fastcall UserCommandCodeEntity__GetSkillInfo(
        UserCommandCodeEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A09746 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMasterData_CommandCodeMaster___, idList);
    sub_1B686D4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B686D4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_4A09746 = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BBA5B0(v12);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BBA5B0(v13);
  Entity = **(Il2CppObject ***)(v13 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_2E49D50 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v17;
  *(_QWORD *)&v19.fields.fakeValue = v16;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v19, 0LL);
  if ( !v18
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v18,
                   (int32_t)Entity,
                   (const MethodInfo_30E44C0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_1B68930(Entity, idList);
  }
  CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)Entity, idList, titleList, explanationList, 0LL);
}


bool __fastcall UserCommandCodeEntity__HasStatus(
        UserCommandCodeEntity_o *this,
        int32_t statusFlag,
        const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool __fastcall UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool __fastcall UserCommandCodeEntity__IsLock(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool __fastcall UserCommandCodeEntity__IsModifyChoice(
        UserCommandCodeEntity_o *this,
        bool isChoice,
        const MethodInfo *method)
{
  return (isChoice ^ (LOBYTE(this->fields.status) >> 4)) & 1;
}


bool __fastcall UserCommandCodeEntity__IsModifyLock(
        UserCommandCodeEntity_o *this,
        bool isLock,
        const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) ^ isLock) & 1;
}


bool __fastcall UserCommandCodeEntity__IsNew(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t UserId; // x0
  __int128 v6; // q0
  int64_t v7; // x20
  __int128 v8; // q0
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4A09747 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1B686D4(&UserCommandCodeNewManager_TypeInfo, v4);
    byte_4A09747 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = UserId;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  if ( v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v13, 0LL) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v14;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v12, 0LL);
    if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    return UserCommandCodeNewManager__IsNew(v9, 0LL);
  }
  else
  {
    return 0;
  }
}


void __fastcall UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q0
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_4A09748 & 1) == 0 )
  {
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1B686D4(&UserCommandCodeNewManager_TypeInfo, v3);
    byte_4A09748 = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46242940(&v6, 0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__SetOld(v5, 0LL);
}