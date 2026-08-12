void UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971638 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_long___ctor__);
    byte_5971638 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3F0E560 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserCommandCodeEntity__CreatePrimaryKey(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  if ( (byte_5971637 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5971637 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v6, 0);
}


System_Int32_array *UserCommandCodeEntity__GetCategoryIdList(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x23
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *skillId; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  CommandCodeSkillMaster_o *v10; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  Il2CppObject *v12; // x22
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

  if ( (byte_5971639 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__CopyTo__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971639 = 1;
  }
  v40 = 0;
  entity = 0;
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v10 = (CommandCodeSkillMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
  *(_QWORD *)&v42.fields.currentCryptoKey = v8;
  *(_QWORD *)&v42.fields.fakeValue = v9;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v42, 0);
  if ( !v10 )
    goto LABEL_57;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v10, (int32_t)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  v36 = v3;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
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
        sub_2213CE4(Instance);
      v16 = CommandCodeSkillList->m_Items[v15];
      if ( v16 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v16->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v12 )
            goto LABEL_57;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)v12, (int32_t)skillId, 1, 0);
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
                (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
                                              (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
                    if ( DataVals__isParam(v23, 28, 0) )
                      v24 = 28;
                    else
                      v24 = 3;
                    Param = DataVals__GetParam(v23, v24, 0, 0);
                    if ( DataVals__isParam(v23, 29, 0) )
                      v26 = 29;
                    else
                      v26 = 4;
                    v27 = DataVals__GetParam(v23, v26, 0, 0);
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v12, &v40, Param, v27, 0);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v40 )
                        goto LABEL_57;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v40->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v36,
                          skillId,
                          (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  Instance = (DataManager_o *)v36;
  if ( !v36 )
    goto LABEL_57;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v37,
    v36,
    (const MethodInfo_42B49B4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v39 = v37;
  v37.fields._set = 0;
  *(_QWORD *)&v37.fields._index = &v39;
  while ( 1 )
  {
    v29 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_40F5A3C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v14 )
      sub_2213CDC(v29, v30);
    v31 = DataMasterBase_object__object__int___TryGetEntity(
            v14,
            &v38,
            (int32_t)v39.fields._current,
            (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v31 )
    {
      if ( !v38 )
        sub_2213CDC(v31, v32);
      if ( !v28 )
        sub_2213CDC(v31, v32);
      System_Collections_Generic_HashSet_int___Add(
        v28,
        HIDWORD(v38[4].monitor),
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_40F5A38 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v28 )
LABEL_57:
    sub_2213CDC(Instance, skillId);
  count = (unsigned int)v28->fields._count;
  if ( (int)count <= 0 )
    return 0;
  v34 = (System_Int32_array *)sub_2213B20(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_69948224(
    v28,
    v34,
    (const MethodInfo_42B5340 *)Method_System_Collections_Generic_HashSet_int__CopyTo__);
  return v34;
}


int32_t UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_597163D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597163D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return (int32_t)Instance[4].klass;
}


int32_t UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_597163F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597163F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return (int32_t)Instance[4].monitor;
}


int32_t UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_597163E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597163E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
  }
  return HIDWORD(Instance[4].klass);
}


int32_t UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_5971640 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971640 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0);
  if ( !v9
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     (int32_t)Instance,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_2213CDC(Instance, v4);
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
  __int64 v14; // x1
  __int64 v15; // x23
  __int64 v16; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_597163A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_597163A = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v5);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908(v5);
  Entity = **(Il2CppObject ***)(v11 + 184);
  if ( !Entity )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Entity,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v15 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v18, 0);
  if ( !v17
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   v17,
                   (int32_t)Entity,
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0 )
  {
LABEL_13:
    sub_2213CDC(Entity, idList);
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
  __int128 v4; // q1
  int v5; // w10
  int64_t userIdNumber; // x21
  __int64 v7; // x1
  __int128 v8; // q1
  int v9; // w8
  __int64 v10; // x1
  int64_t v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-40h]

  if ( (byte_597163B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserCommandCodeNewManager_TypeInfo);
    byte_597163B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v5 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  userIdNumber = v3->static_fields->userIdNumber;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v4;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v15 = v16;
  if ( userIdNumber == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v15, 0) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    v9 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
    *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v16.fields.fakeValue = v8;
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    v14 = v16;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v10);
    return UserCommandCodeNewManager__IsNew(v11, 0);
  }
  else
  {
    return 0;
  }
}


void UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  int v4; // w8
  __int64 v5; // x1
  int64_t v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  if ( (byte_597163C & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserCommandCodeNewManager_TypeInfo);
    byte_597163C = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  v4 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v3;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0);
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v5);
  UserCommandCodeNewManager__SetOld(v6, 0);
}