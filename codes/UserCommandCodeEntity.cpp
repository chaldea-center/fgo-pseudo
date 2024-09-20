void __fastcall UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD39 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BD39 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserCommandCodeEntity___ctor_40046908(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0

  if ( (byte_4A5BD3A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BD3A = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A5BD38 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BD38 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v5, 0LL);
}


System_Int32_array *__fastcall UserCommandCodeEntity__GetCategoryIdList(
        UserCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x23
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *skillId; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  CommandCodeSkillMaster_o *v9; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  Il2CppObject *v11; // x22
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  unsigned __int64 v14; // x27
  CommandCodeSkillEntity_o *v15; // x8
  SkillLvEntity_o *v16; // x23
  struct System_Int32_array *funcId; // x8
  DataManager_o *v18; // x24
  unsigned __int64 v19; // x28
  bool *p_DispLog; // x19
  unsigned __int64 max_length; // x9
  DataVals_o *v22; // x25
  int32_t v23; // w1
  int32_t Param; // w26
  int32_t v25; // w1
  int32_t v26; // w0
  System_Collections_Generic_HashSet_int__o *v27; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 count; // x1
  System_Int32_array *v33; // x19
  System_Collections_Generic_HashSet_int__o *v35; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v36; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v37; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v38; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v39; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A5BD3B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD3B = 1;
  }
  v39 = 0LL;
  entity = 0LL;
  memset(&v38, 0, sizeof(v38));
  v37 = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v8;
  *(_QWORD *)&v41.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v41, 0LL);
  if ( !v9 )
    goto LABEL_57;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v9, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v35 = v3;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_57;
  v12 = *(_QWORD *)&CommandCodeSkillList->max_length;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v12 )
LABEL_58:
        sub_1B88814(Instance, skillId);
      v15 = CommandCodeSkillList->m_Items[v14];
      if ( v15 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v15->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v11 )
            goto LABEL_57;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v11, (int32_t)skillId, 1, 0LL);
          if ( Instance )
          {
            skillId = *(System_Collections_Generic_IEnumerable_T__o **)&Instance->fields._DispLog;
            v16 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v35;
              if ( !v35 )
                goto LABEL_57;
              System_Collections_Generic_HashSet_int___UnionWith(
                v35,
                skillId,
                (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v16, 0LL);
              funcId = v16->fields.funcId;
              if ( !funcId )
                goto LABEL_57;
              v18 = Instance;
              v19 = 0LL;
              p_DispLog = &Instance->fields._DispLog;
              while ( 1 )
              {
                max_length = funcId->max_length;
                if ( (__int64)v19 >= (int)max_length )
                  break;
                if ( v19 >= max_length )
                  goto LABEL_58;
                if ( !v13 )
                  goto LABEL_57;
                Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v13,
                                              &entity,
                                              funcId->m_Items[v19 + 1],
                                              (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_57;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity[1].monitor, 0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v18 )
                      goto LABEL_57;
                    if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
                      goto LABEL_58;
                    if ( !entity )
                      goto LABEL_57;
                    v22 = *(DataVals_o **)&p_DispLog[8 * v19];
                    if ( !v22 )
                      goto LABEL_57;
                    DataVals__SetTempType(
                      *(DataVals_o **)&p_DispLog[8 * v19],
                      (FunctionMaster_o *)v13,
                      (int32_t)entity[1].monitor,
                      0LL);
                    if ( DataVals__isParam(v22, 26, 0LL) )
                      v23 = 26;
                    else
                      v23 = 3;
                    Param = DataVals__GetParam(v22, v23, 0, 0LL);
                    if ( DataVals__isParam(v22, 27, 0LL) )
                      v25 = 27;
                    else
                      v25 = 4;
                    v26 = DataVals__GetParam(v22, v25, 0, 0LL);
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(
                                                  (SkillLvMaster_o *)v11,
                                                  &v39,
                                                  Param,
                                                  v26,
                                                  0LL);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v39 )
                        goto LABEL_57;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v39->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v35,
                          skillId,
                          (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v16->fields.funcId;
                ++v19;
                if ( !funcId )
                  goto LABEL_57;
              }
            }
          }
        }
      }
      LODWORD(v12) = CommandCodeSkillList->max_length;
    }
    while ( (__int64)++v14 < (int)v12 );
  }
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)v35;
  if ( !v35 )
    goto LABEL_57;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v36,
    v35,
    (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v28 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v28 )
      break;
    if ( !v13 )
      sub_1B8880C(v28, v29);
    v30 = DataMasterBase_object__object__int___TryGetEntity(
            v13,
            &v37,
            (int32_t)v38.fields._current,
            (const MethodInfo_311D988 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v30 )
    {
      if ( !v37 )
        sub_1B8880C(v30, v31);
      if ( !v27 )
        sub_1B8880C(v30, v31);
      System_Collections_Generic_HashSet_int___Add(
        v27,
        HIDWORD(v37[4].monitor),
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v27 )
LABEL_57:
    sub_1B8880C(Instance, skillId);
  count = (unsigned int)v27->fields._count;
  if ( (int)count <= 0 )
    return 0LL;
  v33 = (System_Int32_array *)sub_1B88658(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_54214840(
    v27,
    v33,
    (const MethodInfo_33B40B8 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v33;
}


int32_t __fastcall UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BD3F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return (int32_t)Instance[4].klass;
}


int32_t __fastcall UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BD41 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return (int32_t)Instance[4].monitor;
}


int32_t __fastcall UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BD40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  return HIDWORD(Instance[4].klass);
}


int32_t __fastcall UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4A5BD42 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
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
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5BD3C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BD3C = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  Entity = **(Il2CppObject ***)(v10 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v14 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v15,
                   (int32_t)Entity,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(Entity, idList);
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
  int64_t UserId; // x0
  __int128 v4; // q0
  int64_t v5; // x20
  __int128 v6; // q0
  int64_t v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_4A5BD3D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    byte_4A5BD3D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v5 = UserId;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  if ( v5 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v11, 0LL) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v12;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v10, 0LL);
    if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    return UserCommandCodeNewManager__IsNew(v7, 0LL);
  }
  else
  {
    return 0;
  }
}


void __fastcall UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5BD3E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserCommandCodeNewManager_TypeInfo);
    byte_4A5BD3E = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v5, 0LL);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__SetOld(v4, 0LL);
}