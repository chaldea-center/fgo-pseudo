System_Collections_IEnumerator_o *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4212F7C & 1) == 0 )
  {
    sub_B0D8A4(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll);
    byte_4212F7C = 1;
  }
  v7 = sub_B0D974(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll, finishCallback);
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
    (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)effectIdHashSet,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)argForShowAll,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 56),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *v6; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_4212F7D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v4);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4212F7D = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v7);
  if ( !v6 )
    sub_B0D97C(EffectIdsForShowHeal);
  System_Collections_Generic_HashSet_int___UnionWith(
    v6,
    EffectIdsForShowHeal,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v9);
  System_Collections_Generic_HashSet_int___UnionWith(
    v6,
    EffectIdsForShowBuff,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v6;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  System_Collections_Generic_HashSet_int__o *v28; // x19
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v30; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v32; // x21
  unsigned __int64 v33; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  LostAssetLoadCompensateLogic___c_c *v37; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x20
  Il2CppObject *v40; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  LostAssetLoadCompensateLogic___c_c *v51; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v52; // x20
  struct LostAssetLoadCompensateLogic___c_StaticFields *v53; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x22
  Il2CppObject *v55; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_IEnumerable_T__o *v63; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  System_Collections_Generic_HashSet_int__o *v66; // x21
  __int64 v67; // x1
  __int64 v68; // x2
  LostAssetLoadCompensateLogic___c_c *v69; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v70; // x8
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v72; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v81; // x21
  unsigned __int64 v82; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v85; // x21
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  __int64 v94; // x0
  _BOOL8 v95; // x0
  __int64 v96; // x8
  unsigned __int64 v97; // x10
  int *v98; // x11
  __int64 v99; // x0
  __int64 v101; // x0
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4212F80 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BuffData__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__, v11);
    sub_B0D8A4(&System_Func_BattleActionData_BuffData__int__TypeInfo, v12);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861304, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v18);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v24);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v25);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v26);
    sub_B0D8A4(&LostAssetLoadCompensateLogic___c_TypeInfo, v27);
    byte_4212F80 = 1;
  }
  entity = 0LL;
  v28 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v28,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0LL);
    if ( !SideEffectList )
      goto LABEL_72;
    monitor = SideEffectList[1].monitor;
    v32 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v33 >= (unsigned int)monitor )
        {
          v101 = sub_B0D9A8(SideEffectList);
          sub_B0D948(v101, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v32[2].klass + v33),
                                                                          v30);
        if ( !v28 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v28,
          SideEffectList,
          (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v32[1].monitor;
        if ( (__int64)++v33 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_72:
      sub_B0D97C(SideEffectList);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo,
                                                                                                    v35,
                                                                                                    v36);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__5_0,
          v40,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          (const MethodInfo_261A104 *)Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__);
        v41 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v41->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v41->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v28 )
        goto LABEL_72;
      System_Collections_Generic_HashSet_int___UnionWith(
        v28,
        SideEffectList,
        (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v51 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v52 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v51 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v53 = v51->static_fields;
      _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v53->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v51);
          v53 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v55 = (Il2CppObject *)v53->__9;
        _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleActionData_BuffData__int__TypeInfo,
                                                                                    v49,
                                                                                    v50);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__5_1,
          v55,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
        v56 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v56->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v56->__9__5_1,
          (System_Int32_array **)_9__5_1,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
      }
      v63 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v66 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v64,
                                                           v65);
      System_Collections_Generic_HashSet_int____ctor_46616780(
        v66,
        v63,
        (const MethodInfo_2C750CC *)Method_System_Collections_Generic_HashSet_int___ctor___67861304);
      v69 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v69 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v70 = v69->static_fields;
      _9__5_2 = v70->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v69);
          v70 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v72 = (Il2CppObject *)v70->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v67, v68);
        System_Func_int__bool____ctor(
          _9__5_2,
          v72,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        v73 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v73->__9__5_2 = _9__5_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v73->__9__5_2,
          (System_Int32_array **)_9__5_2,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v66,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_72;
      klass = SideEffectList->klass;
      v81 = SideEffectList;
      if ( *(_WORD *)&SideEffectList->klass->_2.bitflags1 )
      {
        v82 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          ++v82;
          p_offset += 4;
          if ( v82 >= *(unsigned __int16 *)&SideEffectList->klass->_2.bitflags1 )
            goto LABEL_44;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_44:
        p_method = sub_AA67A0(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v85 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v81,
              *(_QWORD *)(p_method + 8));
      if ( !v85 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v86 = *(_QWORD *)v85;
        if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
        {
          v87 = 0LL;
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v88 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v87;
            v88 += 4;
            if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
              goto LABEL_51;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_51:
          v89 = sub_AA67A0(v85, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8)) & 1) == 0 )
          break;
        v90 = *(_QWORD *)v85;
        if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
        {
          v91 = 0LL;
          v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v92 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            ++v91;
            v92 += 4;
            if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
              goto LABEL_58;
          }
          v93 = v90 + 16LL * *v92 + 312;
        }
        else
        {
LABEL_58:
          v93 = sub_AA67A0(v85, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v94 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v85, *(_QWORD *)(v93 + 8));
        if ( !v52 )
          sub_B0D97C(v94);
        v95 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v52,
                &entity,
                v94,
                (const MethodInfo_2669C30 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v95 )
        {
          if ( !entity )
            sub_B0D97C(v95);
          System_Collections_Generic_HashSet_int___Add(
            v28,
            *(&entity->fields.id + 1),
            (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v96 = *(_QWORD *)v85;
      if ( *(_WORD *)(*(_QWORD *)v85 + 298LL) )
      {
        v97 = 0LL;
        v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
        {
          ++v97;
          v98 += 4;
          if ( v97 >= *(unsigned __int16 *)(*(_QWORD *)v85 + 298LL) )
            goto LABEL_68;
        }
        v99 = v96 + 16LL * *v98 + 312;
      }
      else
      {
LABEL_68:
        v99 = sub_AA67A0(v85, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v99)(v85, *(_QWORD *)(v99 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v28;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_HashSet_int__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  LostAssetLoadCompensateLogic___c_c *v27; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v30; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  LostAssetLoadCompensateLogic___c_c *v41; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v42; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__3_1; // x22
  Il2CppObject *v44; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  LostAssetLoadCompensateLogic___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  struct LostAssetLoadCompensateLogic___c_StaticFields *v57; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v59; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_T__o *v67; // x0
  const MethodInfo *v68; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v70; // x1
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4212F7E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v8);
    sub_B0D8A4(&Method_System_Func_BattleActionData_DamageData__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_BattleActionData_DamageData__bool___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__, v11);
    sub_B0D8A4(&System_Func_BattleActionData_DamageData__int__TypeInfo, v12);
    sub_B0D8A4(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v16);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v18);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v19);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v20);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v21);
    sub_B0D8A4(&LostAssetLoadCompensateLogic___c_TypeInfo, v22);
    byte_4212F7E = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v23,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v27->static_fields;
      _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo,
                                                                                                    v25,
                                                                                                    v26);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__3_0,
          v30,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          (const MethodInfo_261A104 *)Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__);
        v31 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v31->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v31->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v23 )
        goto LABEL_42;
      System_Collections_Generic_HashSet_int___UnionWith(
        v23,
        sideEffectList,
        (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v41 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v41 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v42 = v41->static_fields;
      _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v42->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v42 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)v42->__9;
        _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_BattleActionData_DamageData__bool__TypeInfo,
                                                                                       v39,
                                                                                       v40);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__3_1,
          v44,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
        v45 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v45->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v45->__9__3_1,
          (System_Int32_array **)_9__3_1,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      v52 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v55 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v56 = v52;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v55 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v57 = v55->static_fields;
      _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v57->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          v57 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v59 = (Il2CppObject *)v57->__9;
        _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleActionData_DamageData__int__TypeInfo,
                                                                                    v53,
                                                                                    v54);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_2,
          v59,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          (const MethodInfo_2619564 *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
        v60 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v60->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v60->__9__3_2,
          (System_Int32_array **)_9__3_2,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
      }
      v67 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             v56,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v23,
        v67,
        (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v72,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sideEffectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v72,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v72.fields.current,
                                                                             v68);
      if ( !v23 )
        sub_B0D97C(EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v23,
        EffectIdsForShowAll,
        (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v72,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0LL) || BattleActionData__isCommonEnemyAttack(actionData, 0LL) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v70);
      if ( v23 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v23,
          sideEffectList,
          (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v23;
      }
LABEL_42:
      sub_B0D97C(sideEffectList);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v23;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_HashSet_int__o *v11; // x19
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v14; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x21
  unsigned __int64 v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  LostAssetLoadCompensateLogic___c_c *v20; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v23; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v32; // x0

  if ( (byte_4212F7F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method);
    sub_B0D8A4(&Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__, v4);
    sub_B0D8A4(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v7);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v9);
    sub_B0D8A4(&LostAssetLoadCompensateLogic___c_TypeInfo, v10);
    byte_4212F7F = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, 0LL);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0LL);
    if ( !SideEffectList )
      goto LABEL_23;
    monitor = SideEffectList[1].monitor;
    v16 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)monitor )
        {
          v32 = sub_B0D9A8(SideEffectList);
          sub_B0D948(v32, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v16[2].klass + v17),
                                                                          v14);
        if ( !v11 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v11,
          SideEffectList,
          (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v16[1].monitor;
        if ( (__int64)++v17 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_23:
      sub_B0D97C(SideEffectList);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v20->static_fields;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo,
                                                                                                    v18,
                                                                                                    v19);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__4_0,
          v23,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          (const MethodInfo_261A104 *)Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__);
        v24 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v24->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v24->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v11 )
        goto LABEL_23;
      System_Collections_Generic_HashSet_int___UnionWith(
        v11,
        SideEffectList,
        (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v11;
}


void __fastcall LostAssetLoadCompensateLogic__SearchAndLoad(
        HutongGames_PlayMaker_FsmStateAction_o *fsmStateAction,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_FsmStateAction_o *v6; // x19
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
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v18; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v20; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  System_Collections_Generic_IEnumerable_T__o *ExtraEffectIdArray_k__BackingField; // x1
  _QWORD **v26; // x24
  __int64 v27; // x23
  __int16 v28; // w8
  __int64 v29; // x23
  __int64 v30; // x23
  __int64 v31; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  LostAssetLoadCompensateLogic___c_c *v34; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v37; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x3

  v6 = fsmStateAction;
  if ( (byte_4212F7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, argForShowAll);
    sub_B0D8A4(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v13);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v14);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v15);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_B0D8A4(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v16);
    byte_4212F7B = 1;
  }
  if ( !argForShowAll )
    goto LABEL_42;
  EffectTypeBit_k__BackingField = argForShowAll->fields._EffectTypeBit_k__BackingField;
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       argForShowAll,
                                                       finishCallback);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_42;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_2AA95CC *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)argForShowAll->fields._Perf_k__BackingField;
    if ( !fsmStateAction )
      goto LABEL_42;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             (BattlePerformance_o *)fsmStateAction,
                             argForShowAll->fields._ActObj_k__BackingField,
                             0LL);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                 ActionDataFromActObj,
                                                                 v20);
    if ( !v18 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_42;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_2AA95CC *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v23);
    if ( !v18 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_2AA95CC *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                 nowAction,
                                                                 v24);
    if ( !v18 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  ExtraEffectIdArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)argForShowAll->fields._ExtraEffectIdArray_k__BackingField;
  if ( !ExtraEffectIdArray_k__BackingField )
  {
    v26 = (_QWORD **)Method_System_Array_Empty_int___;
    v27 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v28 = *(_WORD *)(v27 + 306);
    if ( (v28 & 1) == 0 )
    {
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___
                                                                             + 6));
      v28 = *(_WORD *)(v27 + 306);
    }
    if ( (v28 & 0x400) != 0 )
    {
      v29 = *v26[6];
      if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
        fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AA65A4(*v26[6]);
      if ( !*(_DWORD *)(v29 + 224) )
      {
        v30 = *v26[6];
        if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
          sub_AA65A4(*v26[6]);
        j_il2cpp_runtime_class_init_0(v30);
      }
    }
    v31 = *v26[6];
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AA65A4(*v26[6]);
    ExtraEffectIdArray_k__BackingField = **(System_Collections_Generic_IEnumerable_T__o ***)(v31 + 184);
  }
  if ( !v18 )
LABEL_42:
    sub_B0D97C(fsmStateAction);
  System_Collections_Generic_HashSet_int___UnionWith(
    v18,
    ExtraEffectIdArray_k__BackingField,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v32, v33);
    System_Predicate_int____ctor(
      _9__0_0,
      v37,
      Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__,
      (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
    v38 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    v38->__9__0_0 = _9__0_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v18,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_2C76758 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v18->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v18,
                                                                 argForShowAll,
                                                                 finishCallback,
                                                                 v45);
    if ( v6 )
    {
      HutongGames_PlayMaker_FsmStateAction__StartCoroutine(v6, (System_Collections_IEnumerator_o *)fsmStateAction, 0LL);
      return;
    }
    goto LABEL_42;
  }
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall LostAssetLoadCompensateLogic__CoroutineLoad_d__1__MoveNext(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  Il2CppObject *v12; // x21
  Il2CppObject **p__8__1; // x20
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t current; // w21
  Il2CppObject *v19; // x24
  System_Action_o *monitor; // x22
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4210FA4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v8);
    sub_B0D8A4(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v9);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_B0D8A4(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v10);
    byte_4210FA4 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v12 = (Il2CppObject *)sub_B0D974(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo, method, v2);
    System_Object___ctor(v12, 0LL);
    p__8__1 = (Il2CppObject **)&v3->fields.__8__1;
    v3->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v12;
    sub_B0D840(&v3->fields.__8__1, v12);
    _8__1 = v3->fields.__8__1;
    if ( !_8__1
      || (_8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v3->fields.effectIdHashSet) == 0LL) )
    {
LABEL_29:
      sub_B0D97C(this);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v25,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v15 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v26,
              (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v15 )
        break;
      if ( !*p__8__1 )
        sub_B0D97C(v15);
      current = (int32_t)v26.fields._current;
      ++LODWORD((*p__8__1)[1].klass);
      v19 = *p__8__1;
      if ( !*p__8__1 )
        sub_B0D97C(v15);
      monitor = (System_Action_o *)v19[1].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
        System_Action___ctor(
          monitor,
          v19,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v19[1].monitor = monitor;
        sub_B0D840(&v19[1].monitor, monitor);
      }
      argForShowAll = v3->fields.argForShowAll;
      if ( !argForShowAll )
        sub_B0D97C(v15);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, monitor, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v26,
      (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( SLODWORD((*p__8__1)[1].klass) > 0 )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = &v3->fields.__2__current;
    sub_B0D840(p__2__current, 0LL);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(v3->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_Collections_IEnumerator_Reset(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_Collections_IEnumerator_get_Current(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_IDisposable_Dispose(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall LostAssetLoadCompensateLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0

  if ( (byte_4210F9F & 1) == 0 )
  {
    sub_B0D8A4(&LostAssetLoadCompensateLogic___c_TypeInfo, v1);
    byte_4210F9F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(LostAssetLoadCompensateLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall LostAssetLoadCompensateLogic___c___ctor(
        LostAssetLoadCompensateLogic___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD **v5; // x20
  __int64 v6; // x19
  __int16 v7; // w8
  __int64 v8; // x19
  __int64 v9; // x19
  __int64 v10; // x19

  if ( (byte_4210FA3 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B0D8A4(&Method_System_Array_Empty_int___, x);
    byte_4210FA3 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AA65A4(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AA65A4(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AA65A4(*v5[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v10 + 184);
  }
  return result;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.auraEffectId;
}


bool __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_2(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD **v5; // x20
  __int64 v6; // x19
  __int16 v7; // w8
  __int64 v8; // x19
  __int64 v9; // x19
  __int64 v10; // x19

  if ( (byte_4210FA1 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B0D8A4(&Method_System_Array_Empty_int___, x);
    byte_4210FA1 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AA65A4(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AA65A4(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AA65A4(*v5[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v10 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.sphitEffectId;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowHeal_b__4_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_BuffData_o *effect; // x8
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19

  if ( (byte_4210FA2 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B0D8A4(&Method_System_Array_Empty_int___, x);
    byte_4210FA2 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AA65A4(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AA65A4(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AA65A4(*v6[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v11 + 184);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_String_o *effectPath; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4210FA0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    byte_4210FA0 = 1;
  }
  effectPath = 0LL;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  return !BattleEffectUtility__IsEffectNotLoadedYet(x, &effectPath, 0LL);
}


void __fastcall LostAssetLoadCompensateLogic___c__DisplayClass1_0___ctor(
        LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LostAssetLoadCompensateLogic___c__DisplayClass1_0___CoroutineLoad_b__0(
        LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  --this->fields.checkCount;
}