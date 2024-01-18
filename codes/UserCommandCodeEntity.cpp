void __fastcall UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188AC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, method);
    byte_4188AC7 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserCommandCodeEntity___ctor_26967348(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1

  if ( (byte_4188AC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_long___ctor__, e);
    byte_4188AC8 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_24E3FD4 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B2C434(v5, v6);
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

  if ( (byte_4188AC6 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4188AC6 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v5, 0LL);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x21
  __int64 v24; // x22
  CommandCodeSkillMaster_o *v25; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  SkillLvMaster_o *v27; // x25
  __int64 v28; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x20
  unsigned __int64 i; // x27
  CommandCodeSkillEntity_o *v31; // x8
  CommandCodeSkillEntity_array *v32; // x22
  SkillLvEntity_o *v33; // x23
  struct System_Int32_array *funcId; // x8
  DataManager_o *v35; // x24
  unsigned __int64 v36; // x19
  unsigned __int64 max_length; // x9
  SkillLvMaster_o *v38; // x21
  DataVals_o *v39; // x25
  int32_t v40; // w1
  int32_t Param; // w26
  int32_t v42; // w1
  int32_t v43; // w0
  System_Collections_Generic_HashSet_int__o *v44; // x21
  _BOOL8 v45; // x0
  __int64 v46; // x1
  _BOOL8 v47; // x0
  __int64 v48; // x1
  __int64 count; // x1
  System_Int32_array *v50; // x19
  __int64 v52; // x0
  System_Collections_Generic_HashSet_int__o *v53; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v55; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v56; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v57; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v58; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4188AC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__CopyTo___67287864, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v14);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_B2C35C(&int___TypeInfo, v16);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_4188AC9 = 1;
  }
  v58 = 0LL;
  entity = 0LL;
  v56 = 0LL;
  memset(&v57, 0, sizeof(v57));
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v24 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v25 = (CommandCodeSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v24;
  *(_QWORD *)&v60.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v60, 0LL);
  if ( !v25 )
    goto LABEL_58;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v25, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  v53 = v19;
  v27 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_58;
  v28 = *(_QWORD *)&CommandCodeSkillList->max_length;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( (int)v28 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v28; ++i )
    {
      if ( i >= (unsigned int)v28 )
      {
LABEL_59:
        v52 = sub_B2C460(Instance);
        sub_B2C400(v52, 0LL);
      }
      v31 = CommandCodeSkillList->m_Items[i];
      v32 = CommandCodeSkillList;
      if ( v31 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v31->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v27 )
            goto LABEL_58;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity(v27, (int32_t)skillId, 1, 0LL);
          if ( Instance )
          {
            skillId = (System_Collections_Generic_IEnumerable_T__o *)Instance->fields.lookup;
            v33 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v53;
              if ( !v53 )
                goto LABEL_58;
              System_Collections_Generic_HashSet_int___UnionWith(
                v53,
                skillId,
                (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v33, 0LL);
              funcId = v33->fields.funcId;
              if ( !funcId )
                goto LABEL_58;
              v35 = Instance;
              v36 = 0LL;
              p_lookup = &Instance->fields.lookup;
              while ( 1 )
              {
                max_length = funcId->max_length;
                if ( (__int64)v36 >= (int)max_length )
                  break;
                if ( v36 >= max_length )
                  goto LABEL_59;
                if ( !v29 )
                  goto LABEL_58;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              v29,
                                              &entity,
                                              funcId->m_Items[v36 + 1],
                                              (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_58;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v35 )
                      goto LABEL_58;
                    if ( v36 >= LODWORD(v35->fields.datalist) )
                      goto LABEL_59;
                    if ( !entity )
                      goto LABEL_58;
                    v38 = v27;
                    v39 = (DataVals_o *)p_lookup[v36];
                    if ( !v39 )
                      goto LABEL_58;
                    DataVals__SetTempType(
                      (DataVals_o *)p_lookup[v36],
                      (FunctionMaster_o *)v29,
                      (int32_t)entity->fields.age,
                      0LL);
                    if ( DataVals__isParam(v39, 26, 0LL) )
                      v40 = 26;
                    else
                      v40 = 3;
                    Param = DataVals__GetParam(v39, v40, 0, 0LL);
                    if ( DataVals__isParam(v39, 27, 0LL) )
                      v42 = 27;
                    else
                      v42 = 4;
                    v43 = DataVals__GetParam(v39, v42, 0, 0LL);
                    v27 = v38;
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(v38, &v58, Param, v43, 0LL);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v58 )
                        goto LABEL_58;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v58->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v53,
                          skillId,
                          (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v33->fields.funcId;
                ++v36;
                if ( !funcId )
                  goto LABEL_58;
              }
            }
          }
        }
      }
      LODWORD(v28) = v32->max_length;
      CommandCodeSkillList = v32;
    }
  }
  v44 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v44,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  Instance = (DataManager_o *)v53;
  if ( !v53 )
    goto LABEL_58;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v55,
    v53,
    (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v57 = v55;
  while ( 1 )
  {
    v45 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v57,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v45 )
      break;
    if ( !v29 )
      sub_B2C434(v45, v46);
    v47 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v29,
            &v56,
            (int32_t)v57.fields._current,
            (const MethodInfo_24E412C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v47 )
    {
      if ( !v56 )
        sub_B2C434(v47, v48);
      if ( !v44 )
        sub_B2C434(v47, v48);
      System_Collections_Generic_HashSet_int___Add(
        v44,
        HIDWORD(v56->fields.emptyMessage),
        (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v57,
    (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v44 )
LABEL_58:
    sub_B2C434(Instance, skillId);
  count = (unsigned int)v44->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v50 = (System_Int32_array *)sub_B2C374(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_47736232(
    v44,
    v50,
    (const MethodInfo_2D865A8 *)Method_System_Collections_Generic_HashSet_int__CopyTo___67287864);
  return v50;
}


int32_t __fastcall UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4188ACD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188ACD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 16);
}


int32_t __fastcall UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4188ACF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188ACF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 18);
}


int32_t __fastcall UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4188ACE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188ACE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
  }
  return *((_DWORD *)Instance + 17);
}


int32_t __fastcall UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x20
  __int64 v10; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4188AD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4188AD0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v10 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
  if ( !v11
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v11,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(Instance, v7);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x23
  WarEntity_o *Entity; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4188ACA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, idList);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_4188ACA = 1;
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v13 = **(_QWORD **)(v12 + 192);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AC505C(v13);
  Entity = **(WarEntity_o ***)(v13 + 184);
  if ( !Entity )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entity,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v17;
  *(_QWORD *)&v19.fields.fakeValue = v16;
  Entity = (WarEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v18
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v18,
                   (int32_t)Entity,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Entity, idList);
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
  __int128 v6; // q1
  int64_t v7; // x20
  __int128 v8; // q0
  const MethodInfo *v9; // x1
  int64_t v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-40h]

  if ( (byte_4188ACB & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v3);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v4);
    byte_4188ACB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v6 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v7 = UserId;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  if ( v7 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v14, 0LL) )
  {
    v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v13 = v15;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v13, 0LL);
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    return UserCommandCodeNewManager__IsNew(v10, v9);
  }
  else
  {
    return 0;
  }
}


void __fastcall UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int128 v4; // q1
  const MethodInfo *v5; // x1
  int64_t v6; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_4188ACC & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v3);
    byte_4188ACC = 1;
  }
  v4 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v7, 0LL);
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__SetOld(v6, v5);
}