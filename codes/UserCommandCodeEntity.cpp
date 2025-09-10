void UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28030 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_long___ctor__);
    byte_4C28030 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_33858FC *)Method_DataEntityBase_long___ctor__);
}


void UserCommandCodeEntity___ctor_42770400(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q0
  __int128 v8; // q0

  if ( (byte_4C28031 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_long___ctor__);
    byte_4C28031 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_33858FC *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1C2D6EC(v5, v6);
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


int64_t UserCommandCodeEntity__CreatePrimaryKey(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4C2802F & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C2802F = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v5, 0);
}


System_Int32_array *UserCommandCodeEntity__GetCategoryIdList(UserCommandCodeEntity_o *this, const MethodInfo *method)
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
  __int64 v12; // x2
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  unsigned __int64 v15; // x27
  CommandCodeSkillEntity_o *v16; // x8
  SkillLvEntity_o *v17; // x23
  struct System_Int32_array *funcId; // x8
  DataManager_o *v19; // x24
  unsigned __int64 v20; // x28
  bool *p_DispLog; // x19
  unsigned __int64 max_length_low; // x9
  DataVals_o *v23; // x25
  int32_t v24; // w1
  int32_t Param; // w26
  int32_t v26; // w1
  int32_t v27; // w0
  System_Collections_Generic_HashSet_int__o *v28; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 count; // x1
  System_Int32_array *v34; // x19
  System_Collections_Generic_HashSet_int__o *v36; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v37; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v38; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v39; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v40; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4C28032 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28032 = 1;
  }
  v40 = 0;
  entity = 0;
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v8;
  *(_QWORD *)&v42.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v42, 0);
  if ( !v9 )
    goto LABEL_57;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v9, (int32_t)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v36 = v3;
  v11 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_57;
  max_length = CommandCodeSkillList->max_length;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
LABEL_58:
        sub_1C2D6F4(Instance, skillId, v12);
      v16 = CommandCodeSkillList->m_Items[v15];
      if ( v16 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v16->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v11 )
            goto LABEL_57;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v11, (int32_t)skillId, 1, 0);
          if ( Instance )
          {
            skillId = *(System_Collections_Generic_IEnumerable_T__o **)&Instance->fields._DispLog;
            v17 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v36;
              if ( !v36 )
                goto LABEL_57;
              System_Collections_Generic_HashSet_int___UnionWith(
                v36,
                skillId,
                (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v17, 0);
              funcId = v17->fields.funcId;
              if ( !funcId )
                goto LABEL_57;
              v19 = Instance;
              v20 = 0;
              p_DispLog = &Instance->fields._DispLog;
              while ( 1 )
              {
                max_length_low = LODWORD(funcId->max_length);
                if ( (__int64)v20 >= (int)max_length_low )
                  break;
                if ( v20 >= max_length_low )
                  goto LABEL_58;
                if ( !v14 )
                  goto LABEL_57;
                Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              v14,
                                              &entity,
                                              funcId->m_Items[v20],
                                              (const MethodInfo_3387DE4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_57;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v19 )
                      goto LABEL_57;
                    if ( v20 >= LODWORD(v19->fields.m_CancellationTokenSource) )
                      goto LABEL_58;
                    if ( !entity )
                      goto LABEL_57;
                    v23 = *(DataVals_o **)&p_DispLog[8 * v20];
                    if ( !v23 )
                      goto LABEL_57;
                    DataVals__SetTempType(
                      *(DataVals_o **)&p_DispLog[8 * v20],
                      (FunctionMaster_o *)v14,
                      (int32_t)entity[1].monitor,
                      0);
                    if ( DataVals__isParam(v23, 26, 0) )
                      v24 = 26;
                    else
                      v24 = 3;
                    Param = DataVals__GetParam(v23, v24, 0, 0);
                    if ( DataVals__isParam(v23, 27, 0) )
                      v26 = 27;
                    else
                      v26 = 4;
                    v27 = DataVals__GetParam(v23, v26, 0, 0);
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v11, &v40, Param, v27, 0);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v40 )
                        goto LABEL_57;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v40->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v36,
                          skillId,
                          (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v17->fields.funcId;
                ++v20;
                if ( !funcId )
                  goto LABEL_57;
              }
            }
          }
        }
      }
      LODWORD(max_length) = CommandCodeSkillList->max_length;
    }
    while ( (__int64)++v15 < (int)max_length );
  }
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)v36;
  if ( !v36 )
    goto LABEL_57;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v37,
    v36,
    (const MethodInfo_363B308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v39 = v37;
  while ( 1 )
  {
    v29 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_3510488 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v14 )
      sub_1C2D6EC(v29, v30);
    v31 = DataMasterBase_object__object__int___TryGetEntity(
            v14,
            &v38,
            (int32_t)v39.fields._current,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v31 )
    {
      if ( !v38 )
        sub_1C2D6EC(v31, v32);
      if ( !v28 )
        sub_1C2D6EC(v31, v32);
      System_Collections_Generic_HashSet_int___Add(
        v28,
        HIDWORD(v38[4].monitor),
        (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_3510484 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v28 )
LABEL_57:
    sub_1C2D6EC(Instance, skillId);
  count = (unsigned int)v28->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v34 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_56868028(
    v28,
    v34,
    (const MethodInfo_363BCBC *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v34;
}


int32_t UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C28036 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28036 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  }
  return (int32_t)Instance[4].klass;
}


int32_t UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C28038 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28038 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  }
  return (int32_t)Instance[4].monitor;
}


int32_t UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C28037 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28037 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  }
  return HIDWORD(Instance[4].klass);
}


int32_t UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C28039 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C28039 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  if ( !v8
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  }
  return HIDWORD(Instance[4].monitor);
}


void UserCommandCodeEntity__GetSkillInfo(
        UserCommandCodeEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  long double v5; // q0
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4C28033 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C28033 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C7DBA4(v5);
  Entity = **(Il2CppObject ***)(v11 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v15 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v17, 0);
  if ( !v16
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v16,
                   (int32_t)Entity,
                   (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_13:
    sub_1C2D6EC(Entity, idList);
  }
  CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)Entity, idList, titleList, explanationList, 0);
}


bool UserCommandCodeEntity__HasStatus(UserCommandCodeEntity_o *this, int32_t statusFlag, const MethodInfo *method)
{
  return (this->fields.status & statusFlag) != 0;
}


bool UserCommandCodeEntity__IsChoice(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 4) & 1;
}


bool UserCommandCodeEntity__IsLock(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}


bool UserCommandCodeEntity__IsModifyChoice(UserCommandCodeEntity_o *this, bool isChoice, const MethodInfo *method)
{
  return (isChoice ^ (LOBYTE(this->fields.status) >> 4)) & 1;
}


bool UserCommandCodeEntity__IsModifyLock(UserCommandCodeEntity_o *this, bool isLock, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) ^ isLock) & 1;
}


bool UserCommandCodeEntity__IsNew(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int128 v4; // q0
  int64_t userIdNumber; // x20
  __int128 v6; // q0
  int64_t v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_4C28034 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserCommandCodeNewManager_TypeInfo);
    byte_4C28034 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  userIdNumber = v3->static_fields->userIdNumber;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v11 = v12;
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v11, 0) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v12;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v10, 0);
    if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    return UserCommandCodeNewManager__IsNew(v7, 0);
  }
  else
  {
    return 0;
  }
}


void UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  int64_t v4; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4C28035 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserCommandCodeNewManager_TypeInfo);
    byte_4C28035 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v5, 0);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__SetOld(v4, 0);
}