void __fastcall UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B14B4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42B14B4 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserCommandCodeEntity___ctor_27419008(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1

  if ( (byte_42B14B5 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42B14B5 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B52A5C(v5, v6);
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
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_42B14B3 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B14B3 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v5, 0LL);
}


System_Int32_array *__fastcall UserCommandCodeEntity__GetCategoryIdList(
        UserCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x23
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *skillId; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  CommandCodeSkillMaster_o *v9; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  SkillLvMaster_o *v11; // x25
  __int64 v12; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  unsigned __int64 i; // x27
  CommandCodeSkillEntity_o *v15; // x8
  CommandCodeSkillEntity_array *v16; // x22
  SkillLvEntity_o *v17; // x23
  struct System_Int32_array *funcId; // x8
  DataManager_o *v19; // x24
  unsigned __int64 v20; // x19
  unsigned __int64 max_length; // x9
  SkillLvMaster_o *v22; // x21
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
  __int64 v36; // x0
  System_Collections_Generic_HashSet_int__o *v37; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v39; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v40; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v41; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v42; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_42B14B6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B14B6 = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  v40 = 0LL;
  memset(&v41, 0, sizeof(v41));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v8 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v9 = (CommandCodeSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v44.fields.currentCryptoKey = v8;
  *(_QWORD *)&v44.fields.fakeValue = v7;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v44, 0LL);
  if ( !v9 )
    goto LABEL_58;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v9, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  v37 = v3;
  v11 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_58;
  v12 = *(_QWORD *)&CommandCodeSkillList->max_length;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( (int)v12 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v12; ++i )
    {
      if ( i >= (unsigned int)v12 )
      {
LABEL_59:
        v36 = sub_B52A88(Instance);
        sub_B52A28(v36, 0LL);
      }
      v15 = CommandCodeSkillList->m_Items[i];
      v16 = CommandCodeSkillList;
      if ( v15 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v15->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v11 )
            goto LABEL_58;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity(v11, (int32_t)skillId, 1, 0LL);
          if ( Instance )
          {
            skillId = (System_Collections_Generic_IEnumerable_T__o *)Instance->fields.lookup;
            v17 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v37;
              if ( !v37 )
                goto LABEL_58;
              System_Collections_Generic_HashSet_int___UnionWith(
                v37,
                skillId,
                (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v17, 0LL);
              funcId = v17->fields.funcId;
              if ( !funcId )
                goto LABEL_58;
              v19 = Instance;
              v20 = 0LL;
              p_lookup = &Instance->fields.lookup;
              while ( 1 )
              {
                max_length = funcId->max_length;
                if ( (__int64)v20 >= (int)max_length )
                  break;
                if ( v20 >= max_length )
                  goto LABEL_59;
                if ( !v13 )
                  goto LABEL_58;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              v13,
                                              &entity,
                                              funcId->m_Items[v20 + 1],
                                              (const MethodInfo_23E2334 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_58;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v19 )
                      goto LABEL_58;
                    if ( v20 >= LODWORD(v19->fields.datalist) )
                      goto LABEL_59;
                    if ( !entity )
                      goto LABEL_58;
                    v22 = v11;
                    v23 = (DataVals_o *)p_lookup[v20];
                    if ( !v23 )
                      goto LABEL_58;
                    DataVals__SetTempType(
                      (DataVals_o *)p_lookup[v20],
                      (FunctionMaster_o *)v13,
                      (int32_t)entity->fields.age,
                      0LL);
                    if ( DataVals__isParam(v23, 26, 0LL) )
                      v24 = 26;
                    else
                      v24 = 3;
                    Param = DataVals__GetParam(v23, v24, 0, 0LL);
                    if ( DataVals__isParam(v23, 27, 0LL) )
                      v26 = 27;
                    else
                      v26 = 4;
                    v27 = DataVals__GetParam(v23, v26, 0, 0LL);
                    v11 = v22;
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(v22, &v42, Param, v27, 0LL);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v42 )
                        goto LABEL_58;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v42->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v37,
                          skillId,
                          (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v17->fields.funcId;
                ++v20;
                if ( !funcId )
                  goto LABEL_58;
              }
            }
          }
        }
      }
      LODWORD(v12) = v16->max_length;
      CommandCodeSkillList = v16;
    }
  }
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  Instance = (DataManager_o *)v37;
  if ( !v37 )
    goto LABEL_58;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v39,
    v37,
    (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v41 = v39;
  while ( 1 )
  {
    v29 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v41,
            (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v13 )
      sub_B52A5C(v29, v30);
    v31 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v13,
            &v40,
            (int32_t)v41.fields._current,
            (const MethodInfo_23E2334 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v31 )
    {
      if ( !v40 )
        sub_B52A5C(v31, v32);
      if ( !v28 )
        sub_B52A5C(v31, v32);
      System_Collections_Generic_HashSet_int___Add(
        v28,
        HIDWORD(v40->fields.emptyMessage),
        (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v41,
    (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v28 )
LABEL_58:
    sub_B52A5C(Instance, skillId);
  count = (unsigned int)v28->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v34 = (System_Int32_array *)sub_B5299C(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_38644592(
    v28,
    v34,
    (const MethodInfo_24DAB70 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68488992);
  return v34;
}


int32_t __fastcall UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42B14BA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B14BA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 16);
}


int32_t __fastcall UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42B14BC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B14BC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 18);
}


int32_t __fastcall UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42B14BB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B14BB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 17);
}


int32_t __fastcall UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42B14BD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B14BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v7 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
  if ( !v8
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     (int32_t)Instance,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B52A5C(Instance, v4);
  }
  return *((_DWORD *)Instance + 19);
}


void __fastcall UserCommandCodeEntity__GetSkillInfo(
        UserCommandCodeEntity_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x23
  WarEntity_o *Entity; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_42B14B7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B14B7 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AEB684(v10);
  Entity = **(WarEntity_o ***)(v10 + 184);
  if ( !Entity )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entity,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v14 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v14;
  *(_QWORD *)&v16.fields.fakeValue = v13;
  Entity = (WarEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v16, 0LL);
  if ( !v15
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v15,
                   (int32_t)Entity,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B52A5C(Entity, idList);
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
  __int128 v4; // q1
  int64_t v5; // x20
  __int128 v6; // q0
  const MethodInfo *v7; // x1
  int64_t v8; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]

  if ( (byte_42B14B8 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14B8 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v4 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v5 = UserId;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  if ( v5 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v12, 0LL) )
  {
    v6 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v13.fields.fakeValue = v6;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v11 = v13;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v11, 0LL);
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    return UserCommandCodeNewManager__IsNew(v8, v7);
  }
  else
  {
    return 0;
  }
}


void __fastcall UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  const MethodInfo *v4; // x1
  int64_t v5; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_42B14B9 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14B9 = 1;
  }
  v3 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v6, 0LL);
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__SetOld(v5, v4);
}