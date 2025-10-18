void UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43D2C & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    byte_4C43D2C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
}


void UserCommandCodeEntity___ctor_43004988(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int128 v6; // q0
  __int128 v7; // q0

  if ( (byte_4C43D2D & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    byte_4C43D2D = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_1C372B4(v5);
  v6 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v6;
  v7 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v7;
  this->fields.commandCodeId = e->fields.commandCodeId;
  this->fields.status = e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


int64_t UserCommandCodeEntity__CreatePrimaryKey(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4C43D2B & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C43D2B = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v5, 0);
}


System_Int32_array *UserCommandCodeEntity__GetCategoryIdList(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x23
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  CommandCodeSkillMaster_o *v8; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  Il2CppObject *v10; // x22
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  unsigned __int64 v13; // x27
  CommandCodeSkillEntity_o *v14; // x8
  int32_t skillId; // w1
  System_Collections_Generic_IEnumerable_T__o *v16; // x1
  SkillLvEntity_o *v17; // x23
  struct System_Int32_array *funcId; // x8
  unsigned int *v19; // x24
  unsigned __int64 v20; // x28
  char *v21; // x19
  unsigned __int64 max_length_low; // x9
  DataVals_o *v23; // x25
  int32_t v24; // w1
  int32_t Param; // w26
  int32_t v26; // w1
  int32_t v27; // w0
  System_Collections_Generic_IEnumerable_T__o *v28; // x1
  System_Collections_Generic_HashSet_int__o *v29; // x21
  _BOOL8 v30; // x0
  _BOOL8 v31; // x0
  __int64 count; // x1
  System_Int32_array *v33; // x19
  System_Collections_Generic_HashSet_int__o *v35; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v36; // [xsp+10h] [xbp-B0h] BYREF
  Il2CppObject *v37; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v38; // [xsp+30h] [xbp-90h] BYREF
  SkillLvEntity_o *v39; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4C43D2E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D2E = 1;
  }
  v39 = 0;
  entity = 0;
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v7;
  *(_QWORD *)&v41.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0);
  if ( !v8 )
    goto LABEL_57;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v8, (int32_t)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v35 = v3;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_57;
  max_length = CommandCodeSkillList->max_length;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
LABEL_58:
        sub_1C372BC(Instance);
      v14 = CommandCodeSkillList->m_Items[v13];
      if ( v14 )
      {
        skillId = v14->fields.skillId;
        if ( skillId >= 1 )
        {
          if ( !v10 )
            goto LABEL_57;
          Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)v10, skillId, 1, 0);
          if ( Instance )
          {
            v16 = (System_Collections_Generic_IEnumerable_T__o *)*((_QWORD *)Instance + 4);
            v17 = (SkillLvEntity_o *)Instance;
            if ( v16 )
            {
              Instance = v35;
              if ( !v35 )
                goto LABEL_57;
              System_Collections_Generic_HashSet_int___UnionWith(
                v35,
                v16,
                (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = SkillLvEntity__getDataValsList(v17, 0);
              funcId = v17->fields.funcId;
              if ( !funcId )
                goto LABEL_57;
              v19 = (unsigned int *)Instance;
              v20 = 0;
              v21 = (char *)Instance + 32;
              while ( 1 )
              {
                max_length_low = LODWORD(funcId->max_length);
                if ( (__int64)v20 >= (int)max_length_low )
                  break;
                if ( v20 >= max_length_low )
                  goto LABEL_58;
                if ( !v12 )
                  goto LABEL_57;
                Instance = (void *)DataMasterBase_object__object__int___TryGetEntity(
                                     v12,
                                     &entity,
                                     funcId->m_Items[v20],
                                     (const MethodInfo_33A10EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_57;
                  Instance = (void *)FuncList__isAddState((int32_t)entity[1].monitor, 0);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v19 )
                      goto LABEL_57;
                    if ( v20 >= v19[6] )
                      goto LABEL_58;
                    if ( !entity )
                      goto LABEL_57;
                    v23 = *(DataVals_o **)&v21[8 * v20];
                    if ( !v23 )
                      goto LABEL_57;
                    DataVals__SetTempType(
                      *(DataVals_o **)&v21[8 * v20],
                      (FunctionMaster_o *)v12,
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
                    Instance = (void *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v10, &v39, Param, v27, 0);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v39 )
                        goto LABEL_57;
                      v28 = (System_Collections_Generic_IEnumerable_T__o *)v39->fields.funcId;
                      if ( v28 )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v35,
                          v28,
                          (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
    while ( (__int64)++v13 < (int)max_length );
  }
  v29 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v29,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = v35;
  if ( !v35 )
    goto LABEL_57;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v36,
    v35,
    (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v30 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v30 )
      break;
    if ( !v12 )
      sub_1C372B4(v30);
    v31 = DataMasterBase_object__object__int___TryGetEntity(
            v12,
            &v37,
            (int32_t)v38.fields._current,
            (const MethodInfo_33A10EC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v31 )
    {
      if ( !v37 )
        sub_1C372B4(v31);
      if ( !v29 )
        sub_1C372B4(v31);
      System_Collections_Generic_HashSet_int___Add(
        v29,
        HIDWORD(v37[4].monitor),
        (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v29 )
LABEL_57:
    sub_1C372B4(Instance);
  count = (unsigned int)v29->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v33 = (System_Int32_array *)sub_1C37100(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_56971204(
    v29,
    v33,
    (const MethodInfo_3654FC4 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v33;
}


int32_t UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C43D32 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
  if ( !v7
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v7,
                     (int32_t)Instance,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C372B4(Instance);
  }
  return (int32_t)Instance[4].klass;
}


int32_t UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C43D34 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D34 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
  if ( !v7
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v7,
                     (int32_t)Instance,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C372B4(Instance);
  }
  return (int32_t)Instance[4].monitor;
}


int32_t UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C43D33 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D33 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
  if ( !v7
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v7,
                     (int32_t)Instance,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C372B4(Instance);
  }
  return HIDWORD(Instance[4].klass);
}


int32_t UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C43D35 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C43D35 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v5;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
  if ( !v7
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v7,
                     (int32_t)Instance,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C372B4(Instance);
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

  if ( (byte_4C43D2F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C43D2F = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C8776C(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8776C(v5);
  Entity = **(Il2CppObject ***)(v11 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v15 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v15;
  *(_QWORD *)&v17.fields.fakeValue = v14;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v17, 0);
  if ( !v16
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v16,
                   (int32_t)Entity,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_13:
    sub_1C372B4(Entity);
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

  if ( (byte_4C43D30 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&UserCommandCodeNewManager_TypeInfo);
    byte_4C43D30 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
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
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v11, 0) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v12.fields.fakeValue = v6;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v10 = v12;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v10, 0);
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

  if ( (byte_4C43D31 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&UserCommandCodeNewManager_TypeInfo);
    byte_4C43D31 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v5, 0);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__SetOld(v4, 0);
}