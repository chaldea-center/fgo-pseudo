void __fastcall UserCommandCodeEntity___ctor(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA18F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42EA18F = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


void __fastcall UserCommandCodeEntity___ctor_28036248(
        UserCommandCodeEntity_o *this,
        UserCommandCodeEntity_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int128 v8; // q1
  __int128 v9; // q1

  if ( (byte_42EA190 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)e, (_DWORD)method, v3);
    byte_42EA190 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
  if ( !e )
    sub_B5D69C(v6, v7);
  v8 = *(_OWORD *)&e->fields.id.fields.fakeValue;
  *(_OWORD *)&this->fields.id.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.id.fields.fakeValue = v8;
  v9 = *(_OWORD *)&e->fields.userId.fields.fakeValue;
  *(_OWORD *)&this->fields.userId.fields.currentCryptoKey = *(_OWORD *)&e->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userId.fields.fakeValue = v9;
  this->fields.commandCodeId = e->fields.commandCodeId;
  this->fields.status = e->fields.status;
  this->fields.createdAt = e->fields.createdAt;
}


int64_t __fastcall UserCommandCodeEntity__CreatePrimaryKey(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-30h]

  if ( (byte_42EA18E & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA18E = 1;
  }
  v5 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v7, 0LL);
}


System_Int32_array *__fastcall UserCommandCodeEntity__GetCategoryIdList(
        UserCommandCodeEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  System_Collections_Generic_HashSet_int__o *v53; // x23
  DataManager_o *Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *skillId; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v57; // x21
  __int64 v58; // x22
  CommandCodeSkillMaster_o *v59; // x20
  CommandCodeSkillEntity_array *CommandCodeSkillList; // x21
  SkillLvMaster_o *v61; // x25
  __int64 v62; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x20
  unsigned __int64 i; // x27
  CommandCodeSkillEntity_o *v65; // x8
  CommandCodeSkillEntity_array *v66; // x22
  SkillLvEntity_o *v67; // x23
  struct System_Int32_array *funcId; // x8
  DataManager_o *v69; // x24
  unsigned __int64 v70; // x19
  unsigned __int64 max_length; // x9
  SkillLvMaster_o *v72; // x21
  DataVals_o *v73; // x25
  int32_t v74; // w1
  int32_t Param; // w26
  int32_t v76; // w1
  int32_t v77; // w0
  System_Collections_Generic_HashSet_int__o *v78; // x21
  _BOOL8 v79; // x0
  __int64 v80; // x1
  _BOOL8 v81; // x0
  __int64 v82; // x1
  __int64 count; // x1
  System_Int32_array *v84; // x19
  __int64 v86; // x0
  System_Collections_Generic_HashSet_int__o *v87; // [xsp+0h] [xbp-B0h]
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_HashSet_Enumerator_T__o v89; // [xsp+10h] [xbp-A0h] BYREF
  WarEntity_o *v90; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v91; // [xsp+30h] [xbp-80h] BYREF
  SkillLvEntity_o *v92; // [xsp+50h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16

  if ( (byte_42EA191 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__CopyTo___68716272, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&int___TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v50, v51, v52);
    byte_42EA191 = 1;
  }
  v92 = 0LL;
  entity = 0LL;
  v90 = 0LL;
  memset(&v91, 0, sizeof(v91));
  v53 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v53,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v58 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v57 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v59 = (CommandCodeSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v94.fields.currentCryptoKey = v58;
  *(_QWORD *)&v94.fields.fakeValue = v57;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v94, 0LL);
  if ( !v59 )
    goto LABEL_58;
  CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(v59, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  v87 = v53;
  v61 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
  if ( !CommandCodeSkillList )
    goto LABEL_58;
  v62 = *(_QWORD *)&CommandCodeSkillList->max_length;
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( (int)v62 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v62; ++i )
    {
      if ( i >= (unsigned int)v62 )
      {
LABEL_59:
        v86 = sub_B5D6C8(Instance);
        sub_B5D668(v86, 0LL);
      }
      v65 = CommandCodeSkillList->m_Items[i];
      v66 = CommandCodeSkillList;
      if ( v65 )
      {
        skillId = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v65->fields.skillId;
        if ( (int)skillId >= 1 )
        {
          if ( !v61 )
            goto LABEL_58;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity(v61, (int32_t)skillId, 1, 0LL);
          if ( Instance )
          {
            skillId = (System_Collections_Generic_IEnumerable_T__o *)Instance->fields.lookup;
            v67 = (SkillLvEntity_o *)Instance;
            if ( skillId )
            {
              Instance = (DataManager_o *)v87;
              if ( !v87 )
                goto LABEL_58;
              System_Collections_Generic_HashSet_int___UnionWith(
                v87,
                skillId,
                (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
              Instance = (DataManager_o *)SkillLvEntity__getDataValsList(v67, 0LL);
              funcId = v67->fields.funcId;
              if ( !funcId )
                goto LABEL_58;
              v69 = Instance;
              v70 = 0LL;
              p_lookup = &Instance->fields.lookup;
              while ( 1 )
              {
                max_length = funcId->max_length;
                if ( (__int64)v70 >= (int)max_length )
                  break;
                if ( v70 >= max_length )
                  goto LABEL_59;
                if ( !v63 )
                  goto LABEL_58;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                              v63,
                                              &entity,
                                              funcId->m_Items[v70 + 1],
                                              (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  if ( !entity )
                    goto LABEL_58;
                  Instance = (DataManager_o *)FuncList__isAddState((int32_t)entity->fields.age, 0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !v69 )
                      goto LABEL_58;
                    if ( v70 >= LODWORD(v69->fields.datalist) )
                      goto LABEL_59;
                    if ( !entity )
                      goto LABEL_58;
                    v72 = v61;
                    v73 = (DataVals_o *)p_lookup[v70];
                    if ( !v73 )
                      goto LABEL_58;
                    DataVals__SetTempType(
                      (DataVals_o *)p_lookup[v70],
                      (FunctionMaster_o *)v63,
                      (int32_t)entity->fields.age,
                      0LL);
                    if ( DataVals__isParam(v73, 26, 0LL) )
                      v74 = 26;
                    else
                      v74 = 3;
                    Param = DataVals__GetParam(v73, v74, 0, 0LL);
                    if ( DataVals__isParam(v73, 27, 0LL) )
                      v76 = 27;
                    else
                      v76 = 4;
                    v77 = DataVals__GetParam(v73, v76, 0, 0LL);
                    v61 = v72;
                    Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(v72, &v92, Param, v77, 0LL);
                    if ( ((unsigned __int8)Instance & 1) != 0 )
                    {
                      if ( !v92 )
                        goto LABEL_58;
                      skillId = (System_Collections_Generic_IEnumerable_T__o *)v92->fields.funcId;
                      if ( skillId )
                        System_Collections_Generic_HashSet_int___UnionWith(
                          v87,
                          skillId,
                          (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                    }
                  }
                }
                funcId = v67->fields.funcId;
                ++v70;
                if ( !funcId )
                  goto LABEL_58;
              }
            }
          }
        }
      }
      LODWORD(v62) = v66->max_length;
      CommandCodeSkillList = v66;
    }
  }
  v78 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v78,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  Instance = (DataManager_o *)v87;
  if ( !v87 )
    goto LABEL_58;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v89,
    v87,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v91 = v89;
  while ( 1 )
  {
    v79 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &v91,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    if ( !v79 )
      break;
    if ( !v63 )
      sub_B5D69C(v79, v80);
    v81 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v63,
            &v90,
            (int32_t)v91.fields._current,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( v81 )
    {
      if ( !v90 )
        sub_B5D69C(v81, v82);
      if ( !v78 )
        sub_B5D69C(v81, v82);
      System_Collections_Generic_HashSet_int___Add(
        v78,
        HIDWORD(v90->fields.emptyMessage),
        (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &v91,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( !v78 )
LABEL_58:
    sub_B5D69C(Instance, skillId);
  count = (unsigned int)v78->fields._count;
  if ( (int)count < 1 )
    return 0LL;
  v84 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, count);
  System_Collections_Generic_HashSet_int___CopyTo_38799776(
    v78,
    v84,
    (const MethodInfo_25009A0 *)Method_System_Collections_Generic_HashSet_int__CopyTo___68716272);
  return v84;
}


int32_t __fastcall UserCommandCodeEntity__GetRarity(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EA195 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA195 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v18 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 16);
}


int32_t __fastcall UserCommandCodeEntity__GetSellMana(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EA197 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA197 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v18 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 18);
}


int32_t __fastcall UserCommandCodeEntity__GetSellQp(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EA196 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA196 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v18 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
  }
  return *((_DWORD *)Instance + 17);
}


int32_t __fastcall UserCommandCodeEntity__GetSellRarePri(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42EA198 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA198 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v18 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v18;
  *(_QWORD *)&v21.fields.fakeValue = v17;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v21, 0LL);
  if ( !v19
    || (Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v19,
                     (int32_t)Instance,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(Instance, v15);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x23
  __int64 v19; // x23
  WarEntity_o *Entity; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x23
  __int64 v23; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EA192 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_CommandCodeMaster___,
      (_DWORD)idList,
      (_DWORD)titleList,
      explanationList);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16, v17);
    byte_42EA192 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AF52C4(v19);
  Entity = **(WarEntity_o ***)(v19 + 184);
  if ( !Entity )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Entity,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  v23 = *(_QWORD *)&this->fields.commandCodeId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.commandCodeId.fields.fakeValue;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v23;
  *(_QWORD *)&v25.fields.fakeValue = v22;
  Entity = (WarEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
  if ( !v24
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v24,
                   (int32_t)Entity,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__)) == 0LL )
  {
LABEL_14:
    sub_B5D69C(Entity, idList);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t UserId; // x0
  __int128 v12; // q1
  int64_t v13; // x20
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  int64_t v16; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-40h]

  if ( (byte_42EA193 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UserCommandCodeNewManager_TypeInfo, v8, v9, v10);
    byte_42EA193 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v12 = *(_OWORD *)&this->fields.userId.fields.fakeValue;
  v13 = UserId;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v12;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v20 = v21;
  if ( v13 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v20, 0LL) )
  {
    v14 = *(_OWORD *)&this->fields.id.fields.fakeValue;
    *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v21.fields.fakeValue = v14;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v19 = v21;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v19, 0LL);
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    return UserCommandCodeNewManager__IsNew(v16, v15);
  }
  else
  {
    return 0;
  }
}


void __fastcall UserCommandCodeEntity__SetOld(UserCommandCodeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int128 v8; // q1
  const MethodInfo *v9; // x1
  int64_t v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-30h]

  if ( (byte_42EA194 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserCommandCodeNewManager_TypeInfo, v5, v6, v7);
    byte_42EA194 = 1;
  }
  v8 = *(_OWORD *)&this->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&this->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v8;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v11, 0LL);
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__SetOld(v10, v9);
}