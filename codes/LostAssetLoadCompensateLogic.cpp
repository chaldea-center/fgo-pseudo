System_Collections_IEnumerator_o *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42AE627 & 1) == 0 )
  {
    sub_B52984(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_42AE627 = 1;
  }
  v7 = sub_B52A54(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
    (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)effectIdHashSet,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)argForShowAll,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v7 + 56),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_42AE628 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_42AE628 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_B52A5C(EffectIdsForShowHeal, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v7);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v5; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x21
  unsigned __int64 v8; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x21
  LostAssetLoadCompensateLogic___c_c *v10; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x20
  Il2CppObject *v13; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  LostAssetLoadCompensateLogic___c_c *v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x20
  struct LostAssetLoadCompensateLogic___c_StaticFields *v24; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x22
  Il2CppObject *v26; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_T__o *v34; // x22
  System_Collections_Generic_HashSet_int__o *v35; // x21
  LostAssetLoadCompensateLogic___c_c *v36; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v37; // x8
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v39; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v49; // x21
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  __int64 v55; // x21
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  __int64 v60; // x3
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  _BOOL8 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v74; // x0
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AE62B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_int___);
    sub_B52984(&Method_System_Func_BattleActionData_BuffData__int___ctor__);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__);
    sub_B52984(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488960);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_B52984(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_42AE62B = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0LL);
    if ( !SideEffectList )
      goto LABEL_72;
    monitor = SideEffectList[1].monitor;
    v7 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)monitor )
        {
          v74 = sub_B52A88(SideEffectList);
          sub_B52A28(v74, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v7[2].klass + v8),
                                                                          v5);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v7[1].monitor;
        if ( (__int64)++v8 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_72:
      sub_B52A5C(SideEffectList, v5);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v10->static_fields;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__5_0,
          v13,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          (const MethodInfo_2BCA808 *)Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__);
        v14 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v14->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v14->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_1B6B6E8 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_72;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v22 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v22 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v24 = v22->static_fields;
      _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v24->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v24 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)v24->__9;
        _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__5_1,
          v26,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
        v27 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v27->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v27->__9__5_1,
          (System_Int32_array **)_9__5_1,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v35 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_38639384(
        v35,
        v34,
        (const MethodInfo_24D9718 *)Method_System_Collections_Generic_HashSet_int___ctor___68488960);
      v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v37 = v36->static_fields;
      _9__5_2 = v37->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v37 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v39 = (Il2CppObject *)v37->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v39,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
        v40 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v40->__9__5_2 = _9__5_2;
        sub_B52920(
          (BattleServantConfConponent_o *)&v40->__9__5_2,
          (System_Int32_array **)_9__5_2,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_1B72A2C *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_72;
      klass = SideEffectList->klass;
      v49 = SideEffectList;
      if ( *(_WORD *)&SideEffectList->klass->_2.bitflags1 )
      {
        v50 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          ++v50;
          p_offset += 4;
          if ( v50 >= *(unsigned __int16 *)&SideEffectList->klass->_2.bitflags1 )
            goto LABEL_44;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_44:
        p_method = sub_AEB880(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v47);
      }
      v55 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v49,
              *(_QWORD *)(p_method + 8));
      if ( !v55 )
        sub_B52A5C(0LL, v53);
      while ( 1 )
      {
        v56 = *(_QWORD *)v55;
        if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
        {
          v57 = 0LL;
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v57;
            v58 += 4;
            if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
              goto LABEL_51;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_51:
          v59 = sub_AEB880(v55, System_Collections_IEnumerator_TypeInfo, 0LL, v54);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8)) & 1) == 0 )
          break;
        v61 = *(_QWORD *)v55;
        if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
        {
          v62 = 0LL;
          v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v63 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            ++v62;
            v63 += 4;
            if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
              goto LABEL_58;
          }
          v64 = v61 + 16LL * *v63 + 312;
        }
        else
        {
LABEL_58:
          v64 = sub_AEB880(v55, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v60);
        }
        v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v55, *(_QWORD *)(v64 + 8));
        if ( !v23 )
          sub_B52A5C(v65, v66);
        v67 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v23,
                &entity,
                v65,
                (const MethodInfo_23E2334 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v67 )
        {
          if ( !entity )
            sub_B52A5C(v67, v68);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            *(&entity->fields.id + 1),
            (const MethodInfo_24DA824 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v69 = *(_QWORD *)v55;
      if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
            goto LABEL_68;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_68:
        v72 = sub_AEB880(v55, System_IDisposable_TypeInfo, 0LL, v60);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v72)(v55, *(_QWORD *)(v72 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v5; // x1
  LostAssetLoadCompensateLogic___c_c *v6; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v9; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v18; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v19; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__3_1; // x22
  Il2CppObject *v21; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  LostAssetLoadCompensateLogic___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  struct LostAssetLoadCompensateLogic___c_StaticFields *v32; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v34; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  const MethodInfo *v43; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AE629 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_B52984(&Method_System_Func_BattleActionData_DamageData__int___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData_DamageData__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__);
    sub_B52984(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_B52984(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_B52984(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_B52984(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_42AE629 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v6 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v6 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v6->static_fields;
      _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v9 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__3_0,
          v9,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          (const MethodInfo_2BCA808 *)Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__);
        v10 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v10->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v10->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_1B6B6E8 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_42;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v19 = v18->static_fields;
      _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v19->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v19 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)v19->__9;
        _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__3_1,
          v21,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          (const MethodInfo_2BC90BC *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
        v22 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v22->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_B52920(
          (BattleServantConfConponent_o *)&v22->__9__3_1,
          (System_Int32_array **)_9__3_1,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v31 = v29;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v32 = v30->static_fields;
      _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v32->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v32 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)v32->__9;
        _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_2,
          v34,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
        v35 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v35->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_B52920(
          (BattleServantConfConponent_o *)&v35->__9__3_2,
          (System_Int32_array **)_9__3_2,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             v31,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v42,
        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v47,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sideEffectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v47,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v47.fields.current,
                                                                             v43);
      if ( !v3 )
        sub_B52A5C(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v47,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0LL) || BattleActionData__isCommonEnemyAttack(actionData, 0LL) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v45);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_42:
      sub_B52A5C(sideEffectList, v5);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v6; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x21
  unsigned __int64 v9; // x22
  LostAssetLoadCompensateLogic___c_c *v10; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v13; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v22; // x0

  if ( (byte_42AE62A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_B52984(&Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__);
    sub_B52984(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_B52984(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_42AE62A = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
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
    v8 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)monitor )
        {
          v22 = sub_B52A88(SideEffectList);
          sub_B52A28(v22, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v8[2].klass + v9),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v8[1].monitor;
        if ( (__int64)++v9 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_23:
      sub_B52A5C(SideEffectList, v6);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v10->static_fields;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__4_0,
          v13,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          (const MethodInfo_2BCA808 *)Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__);
        v14 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v14->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v14->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_1B6B6E8 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_23;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


void __fastcall LostAssetLoadCompensateLogic__SearchAndLoad(
        HutongGames_PlayMaker_FsmStateAction_o *fsmStateAction,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  CompensateArgForShowAll_o *v5; // x21
  HutongGames_PlayMaker_FsmStateAction_o *v6; // x19
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v8; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v10; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  _QWORD **v15; // x24
  __int64 v16; // x23
  __int16 v17; // w8
  __int64 v18; // x23
  __int64 v19; // x23
  __int64 v20; // x23
  LostAssetLoadCompensateLogic___c_c *v21; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v24; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_42AE626 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int___ctor___68488952);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B52984(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B52984(&Method_System_Predicate_int___ctor__);
    sub_B52984(&System_Predicate_int__TypeInfo);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_B52984(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_42AE626 = 1;
  }
  if ( !v5 )
    goto LABEL_42;
  EffectTypeBit_k__BackingField = v5->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B52A54(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_24D9648 *)Method_System_Collections_Generic_HashSet_int___ctor___68488952);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_42;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_2B8BD48 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)v5->fields._Perf_k__BackingField;
    if ( !fsmStateAction )
      goto LABEL_42;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             (BattlePerformance_o *)fsmStateAction,
                             v5->fields._ActObj_k__BackingField,
                             0LL);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                 ActionDataFromActObj,
                                                                 v10);
    if ( !v8 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_42;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_2B8BD48 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_2B8BD48 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                 nowAction,
                                                                 v14);
    if ( !v8 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v15 = (_QWORD **)Method_System_Array_Empty_int___;
    v16 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v17 = *(_WORD *)(v16 + 306);
    if ( (v17 & 1) == 0 )
    {
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___
                                                                             + 6));
      v17 = *(_WORD *)(v16 + 306);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = *v15[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AEB684(*v15[6]);
      if ( !*(_DWORD *)(v18 + 224) )
      {
        v19 = *v15[6];
        if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
          sub_AEB684(*v15[6]);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = *v15[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AEB684(*v15[6]);
    argForShowAll = **(CompensateArgForShowAll_o ***)(v20 + 184);
  }
  if ( !v8 )
LABEL_42:
    sub_B52A5C(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_24DA848 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_B52A54(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__0_0,
      v24,
      Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__,
      (const MethodInfo_28D16F8 *)Method_System_Predicate_int___ctor__);
    v25 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    v25->__9__0_0 = _9__0_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v25->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_24DADA4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v8->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v8,
                                                                 v5,
                                                                 finishCallback,
                                                                 v32);
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
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  Il2CppObject **p__8__1; // x20
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t current; // w21
  Il2CppObject *v10; // x24
  System_Action_o *monitor; // x22
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v17; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_42ACE72 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BattleEffectUtility_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B52984(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_B52984(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_42ACE72 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_B52A54(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v4, 0LL);
    p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
    v2->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v4;
    sub_B52920(&v2->fields.__8__1);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1
      || (_8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v2->fields.effectIdHashSet) == 0LL) )
    {
LABEL_29:
      sub_B52A5C(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v16,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_24DA150 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
             &v17,
             (const MethodInfo_200F134 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v7 )
        break;
      if ( !*p__8__1 )
        sub_B52A5C(v7, v8);
      current = (int32_t)v17.fields._current;
      ++LODWORD((*p__8__1)[1].klass);
      v10 = *p__8__1;
      if ( !*p__8__1 )
        sub_B52A5C(v7, v8);
      monitor = (System_Action_o *)v10[1].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          monitor,
          v10,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v10[1].monitor = monitor;
        sub_B52920(&v10[1].monitor);
      }
      argForShowAll = v2->fields.argForShowAll;
      if ( !argForShowAll )
        sub_B52A5C(v7, v8);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, monitor, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v17,
      (const MethodInfo_200F130 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( SLODWORD((*p__8__1)[1].klass) > 0 )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    sub_B52920(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE6D & 1) == 0 )
  {
    sub_B52984(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_42ACE6D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42ACE71 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B52984(&Method_System_Array_Empty_int___);
    byte_42ACE71 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
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
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42ACE6F & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B52984(&Method_System_Array_Empty_int___);
    byte_42ACE6F = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
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
    sub_B52A5C(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42ACE70 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B52984(&Method_System_Array_Empty_int___);
    byte_42ACE70 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AEB684(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AEB684(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AEB684(*v6[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v11 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_String_o *effectPath; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ACE6E & 1) == 0 )
  {
    sub_B52984(&BattleEffectUtility_TypeInfo);
    byte_42ACE6E = 1;
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