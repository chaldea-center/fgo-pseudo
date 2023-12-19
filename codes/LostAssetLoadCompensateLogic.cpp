System_Collections_IEnumerator_o *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
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

  if ( (byte_40F8DEC & 1) == 0 )
  {
    sub_B16FFC(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll);
    byte_40F8DEC = 1;
  }
  v8 = sub_B170CC(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll, finishCallback, method, v4);
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
    (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = effectIdHashSet;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 32),
    (System_Int32_array **)effectIdHashSet,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_QWORD *)(v8 + 40) = argForShowAll;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 40),
    (System_Int32_array **)argForShowAll,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v8 + 56) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 56),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_HashSet_int__o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_40F8DED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v6);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    byte_40F8DED = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v9);
  if ( !v8 )
    sub_B170D4();
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    EffectIdsForShowHeal,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v11);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    EffectIdsForShowBuff,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v8;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_HashSet_int__o *v30; // x19
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  LostAssetLoadCompensateLogic___c_c *v36; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x20
  Il2CppObject *v39; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_T__o *v47; // x0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  LostAssetLoadCompensateLogic___c_c *v53; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x20
  struct LostAssetLoadCompensateLogic___c_StaticFields *v55; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x22
  Il2CppObject *v57; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_IEnumerable_T__o *v65; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_Collections_Generic_HashSet_int__o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  LostAssetLoadCompensateLogic___c_c *v75; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v76; // x8
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v78; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x21
  unsigned __int64 v89; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v92; // x21
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  __int64 v97; // x8
  unsigned __int64 v98; // x10
  int *v99; // x11
  __int64 v100; // x0
  int32_t v101; // w0
  __int64 v102; // x8
  unsigned __int64 v103; // x10
  int *v104; // x11
  __int64 v105; // x0
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F8DF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B16FFC(&Method_System_Func_BattleActionData_BuffData__int___ctor__, v11);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v12);
    sub_B16FFC(&Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__, v13);
    sub_B16FFC(&System_Func_BattleActionData_BuffData__int__TypeInfo, v14);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713952, v19);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v20);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v21);
    sub_B16FFC(&System_IDisposable_TypeInfo, v22);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v23);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v24);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v26);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v27);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v28);
    sub_B16FFC(&LostAssetLoadCompensateLogic___c_TypeInfo, v29);
    byte_40F8DF0 = 1;
  }
  entity = 0LL;
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( actionData )
  {
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v36->static_fields;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v39 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                    System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo,
                                                                                                    v32,
                                                                                                    v33,
                                                                                                    v34,
                                                                                                    v35);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__5_0,
          v39,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          (const MethodInfo_2B6C28C *)Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__);
        v40 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v40->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v40->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      v47 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                             BuffList,
                                                             (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                             (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v30 )
        goto LABEL_68;
      System_Collections_Generic_HashSet_int___UnionWith(
        v30,
        v47,
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v53 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v53 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v55 = v53->static_fields;
      _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v55->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v55 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)v55->__9;
        _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleActionData_BuffData__int__TypeInfo,
                                                                                    v49,
                                                                                    v50,
                                                                                    v51,
                                                                                    v52);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__5_1,
          v57,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
        v58 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v58->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v58->__9__5_1,
          (System_Int32_array **)_9__5_1,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
      }
      v65 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v70 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v66,
                                                           v67,
                                                           v68,
                                                           v69);
      System_Collections_Generic_HashSet_int____ctor_35487824(
        v70,
        v65,
        (const MethodInfo_21D8050 *)Method_System_Collections_Generic_HashSet_int___ctor___66713952);
      v75 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v75 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v76 = v75->static_fields;
      _9__5_2 = v76->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v76 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v78 = (Il2CppObject *)v76->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v71, v72, v73, v74);
        System_Func_int__bool____ctor(
          _9__5_2,
          v78,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        v79 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v79->__9__5_2 = _9__5_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v79->__9__5_2,
          (System_Int32_array **)_9__5_2,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
      v86 = System_Linq_Enumerable__Where_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v70,
              (System_Func_TSource__bool__o *)_9__5_2,
              (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !v86 )
LABEL_68:
        sub_B170D4();
      klass = v86->klass;
      v88 = v86;
      if ( *(_WORD *)&v86->klass->_2.bitflags1 )
      {
        v89 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          ++v89;
          p_offset += 4;
          if ( v89 >= *(unsigned __int16 *)&v86->klass->_2.bitflags1 )
            goto LABEL_38;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_38:
        p_method = sub_AAFEF8(v86, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v92 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v88,
              *(_QWORD *)(p_method + 8));
      if ( !v92 )
        sub_B170D4();
      while ( 1 )
      {
        v93 = *(_QWORD *)v92;
        if ( *(_WORD *)(*(_QWORD *)v92 + 298LL) )
        {
          v94 = 0LL;
          v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v95 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v94;
            v95 += 4;
            if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v92 + 298LL) )
              goto LABEL_45;
          }
          v96 = v93 + 16LL * *v95 + 312;
        }
        else
        {
LABEL_45:
          v96 = sub_AAFEF8(v92, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v92, *(_QWORD *)(v96 + 8)) & 1) == 0 )
          break;
        v97 = *(_QWORD *)v92;
        if ( *(_WORD *)(*(_QWORD *)v92 + 298LL) )
        {
          v98 = 0LL;
          v99 = (int *)(*(_QWORD *)(v97 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v99 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            ++v98;
            v99 += 4;
            if ( v98 >= *(unsigned __int16 *)(*(_QWORD *)v92 + 298LL) )
              goto LABEL_52;
          }
          v100 = v97 + 16LL * *v99 + 312;
        }
        else
        {
LABEL_52:
          v100 = sub_AAFEF8(v92, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v101 = (*(__int64 (__fastcall **)(__int64, _QWORD))v100)(v92, *(_QWORD *)(v100 + 8));
        if ( !v54 )
          sub_B170D4();
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v54,
               &entity,
               v101,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_B170D4();
          System_Collections_Generic_HashSet_int___Add(
            v30,
            *(&entity->fields.id + 1),
            (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v102 = *(_QWORD *)v92;
      if ( *(_WORD *)(*(_QWORD *)v92 + 298LL) )
      {
        v103 = 0LL;
        v104 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
        {
          ++v103;
          v104 += 4;
          if ( v103 >= *(unsigned __int16 *)(*(_QWORD *)v92 + 298LL) )
            goto LABEL_62;
        }
        v105 = v102 + 16LL * *v104 + 312;
      }
      else
      {
LABEL_62:
        v105 = sub_AAFEF8(v92, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v105)(v92, *(_QWORD *)(v105 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v30;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_HashSet_int__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  LostAssetLoadCompensateLogic___c_c *v31; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v34; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  LostAssetLoadCompensateLogic___c_c *v47; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v48; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__3_1; // x22
  Il2CppObject *v50; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  LostAssetLoadCompensateLogic___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x21
  struct LostAssetLoadCompensateLogic___c_StaticFields *v65; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v67; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_T__o *v75; // x0
  struct System_Collections_Generic_List_BattleActionData__o *sideEffectList; // x0
  const MethodInfo *v77; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x1
  const MethodInfo *v79; // x1
  System_Collections_Generic_IEnumerable_T__o *v80; // x0
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8DEE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v10);
    sub_B16FFC(&Method_System_Func_BattleActionData_DamageData__int___ctor__, v11);
    sub_B16FFC(&Method_System_Func_BattleActionData_DamageData__bool___ctor__, v12);
    sub_B16FFC(&Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__, v13);
    sub_B16FFC(&System_Func_BattleActionData_DamageData__int__TypeInfo, v14);
    sub_B16FFC(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v18);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v20);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v21);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v22);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v23);
    sub_B16FFC(&LostAssetLoadCompensateLogic___c_TypeInfo, v24);
    byte_40F8DEE = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v31 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v31 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                    System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo,
                                                                                                    v27,
                                                                                                    v28,
                                                                                                    v29,
                                                                                                    v30);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__3_0,
          v34,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          (const MethodInfo_2B6C28C *)Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__);
        v35 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v35->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v35->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                             DamageList,
                                                             (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                             (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v25 )
        goto LABEL_42;
      System_Collections_Generic_HashSet_int___UnionWith(
        v25,
        v42,
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v47 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v47 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v48 = v47->static_fields;
      _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v48->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          v48 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v50 = (Il2CppObject *)v48->__9;
        _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_BattleActionData_DamageData__bool__TypeInfo,
                                                                                       v43,
                                                                                       v44,
                                                                                       v45,
                                                                                       v46);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__3_1,
          v50,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
        v51 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v51->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v51->__9__3_1,
          (System_Int32_array **)_9__3_1,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v63 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v64 = v58;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v63 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v65 = v63->static_fields;
      _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v65->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          v65 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v67 = (Il2CppObject *)v65->__9;
        _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleActionData_DamageData__int__TypeInfo,
                                                                                    v59,
                                                                                    v60,
                                                                                    v61,
                                                                                    v62);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_2,
          v67,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
        v68 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v68->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v68->__9__3_2,
          (System_Int32_array **)_9__3_2,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
      }
      v75 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             v64,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v25,
        v75,
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v82,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sideEffectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v82,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v82.fields.current,
                                                                             v77);
      if ( !v25 )
        sub_B170D4();
      System_Collections_Generic_HashSet_int___UnionWith(
        v25,
        EffectIdsForShowAll,
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v82,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0LL) || BattleActionData__isCommonEnemyAttack(actionData, 0LL) )
    {
      v80 = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                             actionData,
                                                             v79);
      if ( v25 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v25,
          v80,
          (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v25;
      }
LABEL_42:
      sub_B170D4();
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v25;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_HashSet_int__o *v13; // x19
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  LostAssetLoadCompensateLogic___c_c *v19; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v22; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_T__o *v30; // x0

  if ( (byte_40F8DEF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method);
    sub_B16FFC(&Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__, v6);
    sub_B16FFC(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v9);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v10);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v11);
    sub_B16FFC(&LostAssetLoadCompensateLogic___c_TypeInfo, v12);
    byte_40F8DEF = 1;
  }
  v13 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v13,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                    System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo,
                                                                                                    v15,
                                                                                                    v16,
                                                                                                    v17,
                                                                                                    v18);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__4_0,
          v22,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          (const MethodInfo_2B6C28C *)Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__);
        v23 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v23->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v23->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                             HealList,
                                                             (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                             (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v13 )
        sub_B170D4();
      System_Collections_Generic_HashSet_int___UnionWith(
        v13,
        v30,
        (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v13;
}


void __fastcall LostAssetLoadCompensateLogic__SearchAndLoad(
        HutongGames_PlayMaker_FsmStateAction_o *fsmStateAction,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v19; // x22
  BattlePerformance_o *Perf_k__BackingField; // x0
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowDamage; // x0
  struct BattlePerformance_o *v24; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v26; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  const MethodInfo *v28; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0
  System_Collections_Generic_IEnumerable_T__o *ExtraEffectIdArray_k__BackingField; // x1
  _QWORD **v31; // x24
  __int64 v32; // x23
  __int16 v33; // w8
  __int64 v34; // x23
  __int64 v35; // x23
  __int64 v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  LostAssetLoadCompensateLogic___c_c *v41; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v44; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x3
  System_Collections_IEnumerator_o *CompensateLogic__CoroutineLoad; // x0

  if ( (byte_40F8DEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, argForShowAll);
    sub_B16FFC(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v12);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v14);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v15);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v16);
    sub_B16FFC(&LostAssetLoadCompensateLogic___c_TypeInfo, v17);
    byte_40F8DEB = 1;
  }
  if ( !argForShowAll )
    goto LABEL_42;
  EffectTypeBit_k__BackingField = argForShowAll->fields._EffectTypeBit_k__BackingField;
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       argForShowAll,
                                                       finishCallback,
                                                       method,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_42;
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         1,
         (const MethodInfo_29023FC *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      goto LABEL_42;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             Perf_k__BackingField,
                             argForShowAll->fields._ActObj_k__BackingField,
                             0LL);
    EffectIdsForShowDamage = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                              ActionDataFromActObj,
                                                                              v22);
    if ( !v19 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v19,
      EffectIdsForShowDamage,
      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  v24 = argForShowAll->fields._Perf_k__BackingField;
  if ( !v24 )
    goto LABEL_42;
  nowAction = v24->fields.nowAction;
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_29023FC *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                            nowAction,
                                                                            v26);
    if ( !v19 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v19,
      EffectIdsForShowHeal,
      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         4,
         (const MethodInfo_29023FC *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                            nowAction,
                                                                            v28);
    if ( !v19 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v19,
      EffectIdsForShowBuff,
      (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  ExtraEffectIdArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)argForShowAll->fields._ExtraEffectIdArray_k__BackingField;
  if ( !ExtraEffectIdArray_k__BackingField )
  {
    v31 = (_QWORD **)Method_System_Array_Empty_int___;
    v32 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v33 = *(_WORD *)(v32 + 306);
    if ( (v33 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v33 = *(_WORD *)(v32 + 306);
    }
    if ( (v33 & 0x400) != 0 )
    {
      v34 = *v31[6];
      if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
        sub_AAFCFC(*v31[6]);
      if ( !*(_DWORD *)(v34 + 224) )
      {
        v35 = *v31[6];
        if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
          sub_AAFCFC(*v31[6]);
        j_il2cpp_runtime_class_init_0(v35);
      }
    }
    v36 = *v31[6];
    if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
      sub_AAFCFC(*v31[6]);
    ExtraEffectIdArray_k__BackingField = **(System_Collections_Generic_IEnumerable_T__o ***)(v36 + 184);
  }
  if ( !v19 )
LABEL_42:
    sub_B170D4();
  System_Collections_Generic_HashSet_int___UnionWith(
    v19,
    ExtraEffectIdArray_k__BackingField,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v41 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v41 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v37, v38, v39, v40);
    System_Predicate_int____ctor(
      _9__0_0,
      v44,
      Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__,
      (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
    v45 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    v45->__9__0_0 = _9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v45->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v19,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_21D96DC *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v19->fields._count > 0 )
  {
    CompensateLogic__CoroutineLoad = LostAssetLoadCompensateLogic__CoroutineLoad(
                                       v19,
                                       argForShowAll,
                                       finishCallback,
                                       v52);
    if ( fsmStateAction )
    {
      HutongGames_PlayMaker_FsmStateAction__StartCoroutine(fsmStateAction, CompensateLogic__CoroutineLoad, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  Il2CppObject *v17; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  System_Collections_Generic_HashSet_int__o *effectIdHashSet; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t current; // w21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v32; // x24
  System_Action_o *_9__0; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F690D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B16FFC(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v14);
    sub_B16FFC(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo, v15);
    byte_40F690D = 1;
  }
  memset(&v45, 0, sizeof(v45));
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v17 = (Il2CppObject *)sub_B170CC(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo, method, v2, v3, v4);
    System_Object___ctor(v17, 0LL);
    p__8__1 = &this->fields.__8__1;
    this->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v17,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    _8__1 = this->fields.__8__1;
    if ( !_8__1 || (_8__1->fields.checkCount = 0, (effectIdHashSet = this->fields.effectIdHashSet) == 0LL) )
LABEL_29:
      sub_B170D4();
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v44,
      effectIdHashSet,
      (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v45,
              (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
    {
      if ( !*p__8__1 )
        sub_B170D4();
      current = (int32_t)v45.fields._current;
      ++(*p__8__1)->fields.checkCount;
      v32 = *p__8__1;
      if ( !*p__8__1 )
        sub_B170D4();
      _9__0 = v32->fields.__9__0;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v32,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v32->fields.__9__0 = _9__0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v32->fields.__9__0,
          (System_Int32_array **)_9__0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      argForShowAll = this->fields.argForShowAll;
      if ( !argForShowAll )
        sub_B170D4();
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v45,
      (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( (*p__8__1)->fields.checkCount > 0 )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6908 & 1) == 0 )
  {
    sub_B16FFC(&LostAssetLoadCompensateLogic___c_TypeInfo, v1);
    byte_40F6908 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(LostAssetLoadCompensateLogic___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F690C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, x);
    byte_40F690C = 1;
  }
  if ( !x )
    sub_B170D4();
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AAFCFC(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AAFCFC(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AAFCFC(*v5[6]);
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
    sub_B170D4();
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

  if ( (byte_40F690A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, x);
    byte_40F690A = 1;
  }
  if ( !x )
    sub_B170D4();
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AAFCFC(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AAFCFC(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AAFCFC(*v5[6]);
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
    sub_B170D4();
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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

  if ( (byte_40F690B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, x);
    byte_40F690B = 1;
  }
  if ( !x )
    sub_B170D4();
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AAFCFC(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AAFCFC(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AAFCFC(*v6[6]);
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

  if ( (byte_40F6909 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    byte_40F6909 = 1;
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