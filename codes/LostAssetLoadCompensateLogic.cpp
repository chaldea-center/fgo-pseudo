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

  if ( (byte_418629A & 1) == 0 )
  {
    sub_B2C35C(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll);
    byte_418629A = 1;
  }
  v7 = sub_B2C42C(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
    (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)effectIdHashSet,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)argForShowAll,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *v5; // x20
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_418629B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v3);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_418629B = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v6);
  if ( !v5 )
    sub_B2C434(EffectIdsForShowHeal, v8);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    EffectIdsForShowHeal,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v9);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    EffectIdsForShowBuff,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v5;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_HashSet_int__o *v27; // x19
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v29; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v31; // x21
  unsigned __int64 v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x21
  LostAssetLoadCompensateLogic___c_c *v34; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x20
  Il2CppObject *v37; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  LostAssetLoadCompensateLogic___c_c *v46; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v47; // x20
  struct LostAssetLoadCompensateLogic___c_StaticFields *v48; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x22
  Il2CppObject *v50; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_T__o *v58; // x22
  System_Collections_Generic_HashSet_int__o *v59; // x21
  LostAssetLoadCompensateLogic___c_c *v60; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v61; // x8
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v63; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v71; // x3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v73; // x21
  unsigned __int64 v74; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v77; // x1
  __int64 v78; // x3
  __int64 v79; // x21
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  __int64 v84; // x3
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  _BOOL8 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  __int64 v98; // x0
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_418629E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_B2C35C(&Method_System_Func_BattleActionData_BuffData__int___ctor__, v8);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__, v10);
    sub_B2C35C(&System_Func_BattleActionData_BuffData__int__TypeInfo, v11);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v12);
    sub_B2C35C(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v16);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v17);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v18);
    sub_B2C35C(&System_IDisposable_TypeInfo, v19);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_int__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_int__TypeInfo, v21);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v22);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v23);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v24);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v25);
    sub_B2C35C(&LostAssetLoadCompensateLogic___c_TypeInfo, v26);
    byte_418629E = 1;
  }
  entity = 0LL;
  v27 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v27,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0LL);
    if ( !SideEffectList )
      goto LABEL_72;
    monitor = SideEffectList[1].monitor;
    v31 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)monitor )
        {
          v98 = sub_B2C460(SideEffectList);
          sub_B2C400(v98, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v31[2].klass + v32),
                                                                          v29);
        if ( !v27 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v27,
          SideEffectList,
          (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v31[1].monitor;
        if ( (__int64)++v32 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_72:
      sub_B2C434(SideEffectList, v29);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__5_0,
          v37,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          (const MethodInfo_2713350 *)Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__);
        v38 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v38->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v38->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v27 )
        goto LABEL_72;
      System_Collections_Generic_HashSet_int___UnionWith(
        v27,
        SideEffectList,
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v46 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v47 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v46 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v48 = v46->static_fields;
      _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v48->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v48 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v50 = (Il2CppObject *)v48->__9;
        _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__5_1,
          v50,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          (const MethodInfo_27127B0 *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
        v51 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v51->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v51->__9__5_1,
          (System_Int32_array **)_9__5_1,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v59 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_47731024(
        v59,
        v58,
        (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
      v60 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v60 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v61 = v60->static_fields;
      _9__5_2 = v61->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v60);
          v61 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v63 = (Il2CppObject *)v61->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v63,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        v64 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v64->__9__5_2 = _9__5_2;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v64->__9__5_2,
          (System_Int32_array **)_9__5_2,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v59,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_72;
      klass = SideEffectList->klass;
      v73 = SideEffectList;
      if ( *(_WORD *)&SideEffectList->klass->_2.bitflags1 )
      {
        v74 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          ++v74;
          p_offset += 4;
          if ( v74 >= *(unsigned __int16 *)&SideEffectList->klass->_2.bitflags1 )
            goto LABEL_44;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_44:
        p_method = sub_AC5258(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v71);
      }
      v79 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v73,
              *(_QWORD *)(p_method + 8));
      if ( !v79 )
        sub_B2C434(0LL, v77);
      while ( 1 )
      {
        v80 = *(_QWORD *)v79;
        if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
        {
          v81 = 0LL;
          v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v82 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v81;
            v82 += 4;
            if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
              goto LABEL_51;
          }
          v83 = v80 + 16LL * *v82 + 312;
        }
        else
        {
LABEL_51:
          v83 = sub_AC5258(v79, System_Collections_IEnumerator_TypeInfo, 0LL, v78);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8)) & 1) == 0 )
          break;
        v85 = *(_QWORD *)v79;
        if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
        {
          v86 = 0LL;
          v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v87 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            ++v86;
            v87 += 4;
            if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
              goto LABEL_58;
          }
          v88 = v85 + 16LL * *v87 + 312;
        }
        else
        {
LABEL_58:
          v88 = sub_AC5258(v79, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v84);
        }
        v89 = (*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v79, *(_QWORD *)(v88 + 8));
        if ( !v47 )
          sub_B2C434(v89, v90);
        v91 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                v47,
                &entity,
                v89,
                (const MethodInfo_24E412C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v91 )
        {
          if ( !entity )
            sub_B2C434(v91, v92);
          System_Collections_Generic_HashSet_int___Add(
            v27,
            *(&entity->fields.id + 1),
            (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v93 = *(_QWORD *)v79;
      if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
      {
        v94 = 0LL;
        v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
        {
          ++v94;
          v95 += 4;
          if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
            goto LABEL_68;
        }
        v96 = v93 + 16LL * *v95 + 312;
      }
      else
      {
LABEL_68:
        v96 = sub_AC5258(v79, System_IDisposable_TypeInfo, 0LL, v84);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v96)(v79, *(_QWORD *)(v96 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v27;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_HashSet_int__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v24; // x1
  LostAssetLoadCompensateLogic___c_c *v25; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v28; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v37; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v38; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__3_1; // x22
  Il2CppObject *v40; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  LostAssetLoadCompensateLogic___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x21
  struct LostAssetLoadCompensateLogic___c_StaticFields *v51; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v53; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  const MethodInfo *v62; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v64; // x1
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418629C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v7);
    sub_B2C35C(&Method_System_Func_BattleActionData_DamageData__int___ctor__, v8);
    sub_B2C35C(&Method_System_Func_BattleActionData_DamageData__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__, v10);
    sub_B2C35C(&System_Func_BattleActionData_DamageData__int__TypeInfo, v11);
    sub_B2C35C(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v12);
    sub_B2C35C(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v15);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v17);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v18);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v19);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v20);
    sub_B2C35C(&LostAssetLoadCompensateLogic___c_TypeInfo, v21);
    byte_418629C = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v25 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v25 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v28 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__3_0,
          v28,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          (const MethodInfo_2713350 *)Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__);
        v29 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v29->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v29->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v22 )
        goto LABEL_42;
      System_Collections_Generic_HashSet_int___UnionWith(
        v22,
        sideEffectList,
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v38 = v37->static_fields;
      _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v38->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v38 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)v38->__9;
        _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__3_1,
          v40,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          (const MethodInfo_2711C04 *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
        v41 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v41->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v41->__9__3_1,
          (System_Int32_array **)_9__3_1,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      v48 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v49 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v50 = v48;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v49 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v51 = v49->static_fields;
      _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v51->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v51 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)v51->__9;
        _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_2,
          v53,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          (const MethodInfo_27127B0 *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
        v54 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v54->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v54->__9__3_2,
          (System_Int32_array **)_9__3_2,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      v61 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                             v50,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v22,
        v61,
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v66,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sideEffectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v66,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v66.fields.current,
                                                                             v62);
      if ( !v22 )
        sub_B2C434(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v22,
        EffectIdsForShowAll,
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v66,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0LL) || BattleActionData__isCommonEnemyAttack(actionData, 0LL) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v64);
      if ( v22 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v22,
          sideEffectList,
          (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v22;
      }
LABEL_42:
      sub_B2C434(sideEffectList, v24);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v22;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_HashSet_int__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v13; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  unsigned __int64 v16; // x22
  LostAssetLoadCompensateLogic___c_c *v17; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v20; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v29; // x0

  if ( (byte_418629D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method);
    sub_B2C35C(&Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__, v3);
    sub_B2C35C(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v6);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v8);
    sub_B2C35C(&LostAssetLoadCompensateLogic___c_TypeInfo, v9);
    byte_418629D = 1;
  }
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
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
    v15 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)monitor )
        {
          v29 = sub_B2C460(SideEffectList);
          sub_B2C400(v29, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v15[2].klass + v16),
                                                                          v13);
        if ( !v10 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v10,
          SideEffectList,
          (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v15[1].monitor;
        if ( (__int64)++v16 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_23:
      sub_B2C434(SideEffectList, v13);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__4_0,
          v20,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          (const MethodInfo_2713350 *)Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__);
        v21 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v21->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v21->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v10 )
        goto LABEL_23;
      System_Collections_Generic_HashSet_int___UnionWith(
        v10,
        SideEffectList,
        (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v10;
}


void __fastcall LostAssetLoadCompensateLogic__SearchAndLoad(
        HutongGames_PlayMaker_FsmStateAction_o *fsmStateAction,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  CompensateArgForShowAll_o *v5; // x21
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
  _QWORD **v25; // x24
  __int64 v26; // x23
  __int16 v27; // w8
  __int64 v28; // x23
  __int64 v29; // x23
  __int64 v30; // x23
  LostAssetLoadCompensateLogic___c_c *v31; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v34; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_4186299 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, argForShowAll);
    sub_B2C35C(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v13);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v14);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v15);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_B2C35C(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v16);
    byte_4186299 = 1;
  }
  if ( !v5 )
    goto LABEL_42;
  EffectTypeBit_k__BackingField = v5->fields._EffectTypeBit_k__BackingField;
  v18 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v18,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_42;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_2A0219C *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
                                                                 v20);
    if ( !v18 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_42;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_2A0219C *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v23);
    if ( !v18 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v18,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_2A0219C *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v25 = (_QWORD **)Method_System_Array_Empty_int___;
    v26 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v27 = *(_WORD *)(v26 + 306);
    if ( (v27 & 1) == 0 )
    {
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___
                                                                             + 6));
      v27 = *(_WORD *)(v26 + 306);
    }
    if ( (v27 & 0x400) != 0 )
    {
      v28 = *v25[6];
      if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
        fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AC505C(*v25[6]);
      if ( !*(_DWORD *)(v28 + 224) )
      {
        v29 = *v25[6];
        if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
          sub_AC505C(*v25[6]);
        j_il2cpp_runtime_class_init_0(v29);
      }
    }
    v30 = *v25[6];
    if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AC505C(*v25[6]);
    argForShowAll = **(CompensateArgForShowAll_o ***)(v30 + 184);
  }
  if ( !v18 )
LABEL_42:
    sub_B2C434(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v31 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v31 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__0_0,
      v34,
      Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__,
      (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
    v35 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    v35->__9__0_0 = _9__0_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v18,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_2D867DC *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v18->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v18,
                                                                 v5,
                                                                 finishCallback,
                                                                 v42);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  Il2CppObject *v11; // x21
  Il2CppObject **p__8__1; // x20
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t current; // w21
  Il2CppObject *v17; // x24
  System_Action_o *monitor; // x22
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v24; // [xsp+20h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4184223 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v7);
    sub_B2C35C(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v8);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_B2C35C(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v9);
    byte_4184223 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
    v11 = (Il2CppObject *)sub_B2C42C(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v11, 0LL);
    p__8__1 = (Il2CppObject **)&v2->fields.__8__1;
    v2->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v11;
    sub_B2C2F8(&v2->fields.__8__1, v11);
    _8__1 = v2->fields.__8__1;
    if ( !_8__1
      || (_8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v2->fields.effectIdHashSet) == 0LL) )
    {
LABEL_29:
      sub_B2C434(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v23,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v14 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v24,
              (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v14 )
        break;
      if ( !*p__8__1 )
        sub_B2C434(v14, v15);
      current = (int32_t)v24.fields._current;
      ++LODWORD((*p__8__1)[1].klass);
      v17 = *p__8__1;
      if ( !*p__8__1 )
        sub_B2C434(v14, v15);
      monitor = (System_Action_o *)v17[1].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          monitor,
          v17,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v17[1].monitor = monitor;
        sub_B2C2F8(&v17[1].monitor, monitor);
      }
      argForShowAll = v2->fields.argForShowAll;
      if ( !argForShowAll )
        sub_B2C434(v14, v15);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, monitor, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v24,
      (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( SLODWORD((*p__8__1)[1].klass) > 0 )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = &v2->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0

  if ( (byte_418421E & 1) == 0 )
  {
    sub_B2C35C(&LostAssetLoadCompensateLogic___c_TypeInfo, v1);
    byte_418421E = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184222 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B2C35C(&Method_System_Array_Empty_int___, x);
    byte_4184222 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AC505C(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AC505C(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AC505C(*v5[6]);
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
    sub_B2C434(this, 0LL);
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

  if ( (byte_4184220 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B2C35C(&Method_System_Array_Empty_int___, x);
    byte_4184220 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_int___;
    v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AC505C(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AC505C(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AC505C(*v5[6]);
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
    sub_B2C434(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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

  if ( (byte_4184221 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B2C35C(&Method_System_Array_Empty_int___, x);
    byte_4184221 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AC505C(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AC505C(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AC505C(*v6[6]);
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

  if ( (byte_418421F & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    byte_418421F = 1;
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