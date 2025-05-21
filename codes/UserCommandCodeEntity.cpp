void __fastcall UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45785 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_long___ctor__, method);
    byte_4B45785 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32DF9A0 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserCommandCodeEntity___ctor_41945240(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0

  if ( (byte_4B45786 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_long___ctor__, e);
    byte_4B45786 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32DF9A0 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1BDBAD4(v5, v6);
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

  if ( (byte_4B45784 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4B45784 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v5, 0LL);
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
  __int64 v28; // x2
  const MethodInfo *v29; // x3
  __int64 v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  unsigned __int64 v32; // x27
  CommandCodeSkillEntity_o *v33; // x8
  SkillLvEntity_o *v34; // x23
  const MethodInfo *v35; // x1
  struct System_Int32_array *funcId; // x8
  DataManager_o *v37; // x24
  unsigned __int64 v38; // x28
  bool *p_DispLog; // x19
  unsigned __int64 max_length; // x9
  DataVals_o *v41; // x25
  int32_t v42; // w1
  int32_t Param; // w26
  int32_t v44; // w1
  int32_t v45; // w0
  const MethodInfo *v46; // x4
  System_Collections_Generic_HashSet_int__o *v47; // x21
  _BOOL8 v48; // x0
  __int64 v49; // x1
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 count; // x1
  System_Int32_array *v53; // x19
  System_Collections_Generic_HashSet_int__o *v55; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v56; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v57; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v58; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v59; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4B45787 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_FunctionMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_1BDB878(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__CopyTo__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1BDB878(&int___TypeInfo, v16);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4B45787 = 1;
  }
  v59 = 0LL;
  entity = 0LL;
  memset(&v58, 0, sizeof(v58));
  v57 = 0LL;
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v24 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v25 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v61.fields.currentCryptoKey = v24;
  *(_QWORD *)&v61.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v61, 0LL);
  if ( !v25 )
    goto LABEL_57;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v25, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v55 = v19;
  v27 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_57;
  v30 = *(_QWORD *)&CommandCodeSkillList->max_length;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( (int)v30 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v30 )
LABEL_58:
        sub_1BDBADC(Instance, skillId, v28);
      v33 = CommandCodeSkillList->m_Items[v32];
      if ( v33 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v33->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v27 )
            goto LABEL_57;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v27, (int32_t)skillId, 1, v29);
          if ( Instance )
          {
            skillId = *(System_Collections_Generic_IEnumerable_T__o **)&Instance->fields._DispLog;
            v34 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v55;
              if ( !v55 )
                goto LABEL_57;
              System_Collections_Generic_HashSet_int___UnionWith(
                v55,
                skillId,
                (const MethodInfo_358CBB4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v34, v35);
              funcId = v34->fields.funcId;
              if ( !funcId )
                goto LABEL_57;
              v37 = Instance;
              v38 = 0LL;
              p_DispLog = &Instance->fields._DispLog;
              while ( 1 )
              {
                max_length = funcId->max_length;
                if ( (__int64)v38 >= (int)max_length )
                  break;
                if ( v38 >= max_length )
                  goto LABEL_58;
                if ( !v31 )
                  goto LABEL_57;
                Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v31,
                                              &entity,
                                              funcId->m_Items[v38 + 1],
                                              (const MethodInfo_32E1E88 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_57;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v37 )
                      goto LABEL_57;
                    if ( v38 >= LODWORD(v37->fields.m_CancellationTokenSource) )
                      goto LABEL_58;
                    if ( !entity )
                      goto LABEL_57;
                    v41 = *(DataVals_o **)&p_DispLog[8 * v38];
                    if ( !v41 )
                      goto LABEL_57;
                    DataVals__SetTempType(
                      *(DataVals_o **)&p_DispLog[8 * v38],
                      (FunctionMaster_o *)v31,
                      (int32_t)entity[1].monitor,
                      0LL);
                    if ( DataVals__isParam(v41, 26, 0LL) )
                      v42 = 26;
                    else
                      v42 = 3;
                    Param = DataVals__GetParam(v41, v42, 0, 0LL);
                    if ( DataVals__isParam(v41, 27, 0LL) )
                      v44 = 27;
                    else
                      v44 = 4;
                    v45 = DataVals__GetParam(v41, v44, 0, 0LL);
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(
                                                  (SkillLvMaster_o *)v27,
                                                  &v59,
                                                  Param,
                                                  v45,
                                                  v46);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v59 )
                        goto LABEL_57;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v59->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v55,
                          skillId,
                          (const MethodInfo_358CBB4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v34->fields.funcId;
                ++v38;
                if ( !funcId )
                  goto LABEL_57;
              }
            }
          }
        }
      }
      LODWORD(v30) = CommandCodeSkillList->max_length;
    }
    while ( (__int64)++v32 < (int)v30 );
  }
  v47 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v47,
    (const MethodInfo_358B9A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)v55;
  if ( !v55 )
    goto LABEL_57;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v56,
    v55,
    (const MethodInfo_358C528 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v58 = v56;
  while ( 1 )
  {
    v48 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v58,
            (const MethodInfo_3465F70 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v48 )
      break;
    if ( !v31 )
      sub_1BDBAD4(v48, v49);
    v50 = DataMasterBase_object__object__int___TryGetEntity(
            v31,
            &v57,
            (int32_t)v58.fields._current,
            (const MethodInfo_32E1E88 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v50 )
    {
      if ( !v57 )
        sub_1BDBAD4(v50, v51);
      if ( !v47 )
        sub_1BDBAD4(v50, v51);
      System_Collections_Generic_HashSet_int___Add(
        v47,
        HIDWORD(v57[4].monitor),
        (const MethodInfo_358CBA4 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v58,
    (const MethodInfo_3465F6C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v47 )
LABEL_57:
    sub_1BDBAD4(Instance, skillId);
  count = (unsigned int)v47->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v53 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_56151772(
    v47,
    v53,
    (const MethodInfo_358CEDC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v53;
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

  if ( (byte_4B4578B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B4578B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BDBAD4(Instance, v7);
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

  if ( (byte_4B4578D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B4578D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BDBAD4(Instance, v7);
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

  if ( (byte_4B4578C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B4578C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BDBAD4(Instance, v7);
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

  if ( (byte_4B4578E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B4578E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1BDBAD4(Instance, v7);
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
  long double v5; // q0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4B45788 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_CommandCodeMaster___, idList);
    sub_1BDB878(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12);
    byte_4B45788 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C2BF08(v5);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C2BF08(v5);
  Entity = **(Il2CppObject ***)(v14 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v18 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v18;
  *(_QWORD *)&v20.fields.fakeValue = v17;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v20, 0LL);
  if ( !v19
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v19,
                   (int32_t)Entity,
                   (const MethodInfo_32E1E3C *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_1BDBAD4(Entity, idList);
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
  NetworkManager_c *v5; // x0
  __int128 v6; // q0
  int64_t userIdNumber; // x20
  __int128 v8; // q0
  int64_t v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4B45789 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_1BDB878(&UserCommandCodeNewManager_TypeInfo, v4);
    byte_4B45789 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    byte_4B3ED56 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  userIdNumber = v5->static_fields->userIdNumber;
  *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v14.fields.fakeValue = v6;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v13 = v14;
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v13, 0LL) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v14;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v12, 0LL);
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

  if ( (byte_4B4578A & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1BDB878(&UserCommandCodeNewManager_TypeInfo, v3);
    byte_4B4578A = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v6, 0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__SetOld(v5, 0LL);
}