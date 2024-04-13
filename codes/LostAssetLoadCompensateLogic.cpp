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

  if ( (byte_42E724A & 1) == 0 )
  {
    sub_B5D5C4(
      &LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo,
      (_DWORD)argForShowAll,
      (_DWORD)finishCallback,
      method);
    byte_42E724A = 1;
  }
  v7 = sub_B5D694(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
    (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)effectIdHashSet,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)argForShowAll,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_HashSet_int__o *v11; // x20
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_42E724B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v8, v9, v10);
    byte_42E724B = 1;
  }
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v11,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v12);
  if ( !v11 )
    sub_B5D69C(EffectIdsForShowHeal, v14);
  System_Collections_Generic_HashSet_int___UnionWith(
    v11,
    EffectIdsForShowHeal,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v15);
  System_Collections_Generic_HashSet_int___UnionWith(
    v11,
    EffectIdsForShowBuff,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v11;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
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
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  System_Collections_Generic_HashSet_int__o *v77; // x19
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v79; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v81; // x21
  unsigned __int64 v82; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x21
  LostAssetLoadCompensateLogic___c_c *v84; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x20
  Il2CppObject *v87; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  LostAssetLoadCompensateLogic___c_c *v96; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v97; // x20
  struct LostAssetLoadCompensateLogic___c_StaticFields *v98; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x22
  Il2CppObject *v100; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Collections_Generic_IEnumerable_T__o *v108; // x22
  System_Collections_Generic_HashSet_int__o *v109; // x21
  LostAssetLoadCompensateLogic___c_c *v110; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v111; // x8
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v113; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  __int64 v121; // x3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v123; // x21
  unsigned __int64 v124; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v127; // x1
  __int64 v128; // x3
  __int64 v129; // x21
  __int64 v130; // x8
  unsigned __int64 v131; // x10
  int *v132; // x11
  __int64 v133; // x0
  __int64 v134; // x3
  __int64 v135; // x8
  unsigned __int64 v136; // x10
  int *v137; // x11
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x1
  _BOOL8 v141; // x0
  __int64 v142; // x1
  __int64 v143; // x8
  unsigned __int64 v144; // x10
  int *v145; // x11
  __int64 v146; // x0
  __int64 v148; // x0
  WarEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E724E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_AuraEffectMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BuffData__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_BattleActionData_BuffData__int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_int__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_int__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v65, v66, v67);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v68, v69, v70);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v71, v72, v73);
    sub_B5D5C4(&LostAssetLoadCompensateLogic___c_TypeInfo, v74, v75, v76);
    byte_42E724E = 1;
  }
  entity = 0LL;
  v77 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v77,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0LL);
    if ( !SideEffectList )
      goto LABEL_72;
    monitor = SideEffectList[1].monitor;
    v81 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v82 = 0LL;
      while ( 1 )
      {
        if ( v82 >= (unsigned int)monitor )
        {
          v148 = sub_B5D6C8(SideEffectList);
          sub_B5D668(v148, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v81[2].klass + v82),
                                                                          v79);
        if ( !v77 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v77,
          SideEffectList,
          (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v81[1].monitor;
        if ( (__int64)++v82 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_72:
      sub_B5D69C(SideEffectList, v79);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v84 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v84 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v84->static_fields;
      _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v84);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v87 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__5_0,
          v87,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          (const MethodInfo_2C3041C *)Method_System_Func_BattleActionData_BuffData__IEnumerable_int____ctor__);
        v88 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v88->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v88->__9__5_0,
          (System_Int32_array **)_9__5_0,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v77 )
        goto LABEL_72;
      System_Collections_Generic_HashSet_int___UnionWith(
        v77,
        SideEffectList,
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v96 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v97 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v96 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v98 = v96->static_fields;
      _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v98->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v96);
          v98 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v100 = (Il2CppObject *)v98->__9;
        _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__5_1,
          v100,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_BuffData__int___ctor__);
        v101 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v101->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v101->__9__5_1,
          (System_Int32_array **)_9__5_1,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
      v108 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                              BuffList,
                                                              (System_Func_TSource__TResult__o *)_9__5_1,
                                                              (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v109 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_38794568(
        v109,
        v108,
        (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
      v110 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v110 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v111 = v110->static_fields;
      _9__5_2 = v111->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v110);
          v111 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v113 = (Il2CppObject *)v111->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v113,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        v114 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v114->__9__5_2 = _9__5_2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v114->__9__5_2,
          (System_Int32_array **)_9__5_2,
          v115,
          v116,
          v117,
          v118,
          v119,
          v120);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v109,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_72;
      klass = SideEffectList->klass;
      v123 = SideEffectList;
      if ( *(_WORD *)&SideEffectList->klass->_2.bitflags1 )
      {
        v124 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          ++v124;
          p_offset += 4;
          if ( v124 >= *(unsigned __int16 *)&SideEffectList->klass->_2.bitflags1 )
            goto LABEL_44;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_44:
        p_method = sub_AF54C0(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL, v121);
      }
      v129 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
               v123,
               *(_QWORD *)(p_method + 8));
      if ( !v129 )
        sub_B5D69C(0LL, v127);
      while ( 1 )
      {
        v130 = *(_QWORD *)v129;
        if ( *(_WORD *)(*(_QWORD *)v129 + 298LL) )
        {
          v131 = 0LL;
          v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v132 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v131;
            v132 += 4;
            if ( v131 >= *(unsigned __int16 *)(*(_QWORD *)v129 + 298LL) )
              goto LABEL_51;
          }
          v133 = v130 + 16LL * *v132 + 312;
        }
        else
        {
LABEL_51:
          v133 = sub_AF54C0(v129, System_Collections_IEnumerator_TypeInfo, 0LL, v128);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8)) & 1) == 0 )
          break;
        v135 = *(_QWORD *)v129;
        if ( *(_WORD *)(*(_QWORD *)v129 + 298LL) )
        {
          v136 = 0LL;
          v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v137 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            ++v136;
            v137 += 4;
            if ( v136 >= *(unsigned __int16 *)(*(_QWORD *)v129 + 298LL) )
              goto LABEL_58;
          }
          v138 = v135 + 16LL * *v137 + 312;
        }
        else
        {
LABEL_58:
          v138 = sub_AF54C0(v129, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL, v134);
        }
        v139 = (*(__int64 (__fastcall **)(__int64, _QWORD))v138)(v129, *(_QWORD *)(v138 + 8));
        if ( !v97 )
          sub_B5D69C(v139, v140);
        v141 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v97,
                 &entity,
                 v139,
                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v141 )
        {
          if ( !entity )
            sub_B5D69C(v141, v142);
          System_Collections_Generic_HashSet_int___Add(
            v77,
            *(&entity->fields.id + 1),
            (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v143 = *(_QWORD *)v129;
      if ( *(_WORD *)(*(_QWORD *)v129 + 298LL) )
      {
        v144 = 0LL;
        v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v145 - 1) != System_IDisposable_TypeInfo )
        {
          ++v144;
          v145 += 4;
          if ( v144 >= *(unsigned __int16 *)(*(_QWORD *)v129 + 298LL) )
            goto LABEL_68;
        }
        v146 = v143 + 16LL * *v145 + 312;
      }
      else
      {
LABEL_68:
        v146 = sub_AF54C0(v129, System_IDisposable_TypeInfo, 0LL, v134);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v146)(v129, *(_QWORD *)(v146 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v77;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
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
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  System_Collections_Generic_HashSet_int__o *v62; // x20
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v64; // x1
  LostAssetLoadCompensateLogic___c_c *v65; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x22
  Il2CppObject *v68; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v77; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v78; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__3_1; // x22
  Il2CppObject *v80; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  LostAssetLoadCompensateLogic___c_c *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x21
  struct LostAssetLoadCompensateLogic___c_StaticFields *v91; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v93; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Collections_Generic_IEnumerable_T__o *v101; // x0
  const MethodInfo *v102; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v104; // x1
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E724C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleActionData_DamageData__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_BattleActionData_DamageData__bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_BattleActionData_DamageData__int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v47, v48, v49);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v50, v51, v52);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v53, v54, v55);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v56, v57, v58);
    sub_B5D5C4(&LostAssetLoadCompensateLogic___c_TypeInfo, v59, v60, v61);
    byte_42E724C = 1;
  }
  memset(&v106, 0, sizeof(v106));
  v62 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v62,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v65 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v65 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v65->static_fields;
      _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v68 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__3_0,
          v68,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          (const MethodInfo_2C3041C *)Method_System_Func_BattleActionData_DamageData__IEnumerable_int____ctor__);
        v69 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v69->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v69->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v62 )
        goto LABEL_42;
      System_Collections_Generic_HashSet_int___UnionWith(
        v62,
        sideEffectList,
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v77 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v77 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v78 = v77->static_fields;
      _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v78->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v78 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v80 = (Il2CppObject *)v78->__9;
        _9__3_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__3_1,
          v80,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_DamageData__bool___ctor__);
        v81 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v81->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v81->__9__3_1,
          (System_Int32_array **)_9__3_1,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
      }
      v88 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v89 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v90 = v88;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v89 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v91 = v89->static_fields;
      _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v91->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v89);
          v91 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v93 = (Il2CppObject *)v91->__9;
        _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_2,
          v93,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          (const MethodInfo_2C2F87C *)Method_System_Func_BattleActionData_DamageData__int___ctor__);
        v94 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v94->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v94->__9__3_2,
          (System_Int32_array **)_9__3_2,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100);
      }
      v101 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                              v90,
                                                              (System_Func_TSource__TResult__o *)_9__3_2,
                                                              (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v62,
        v101,
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_42;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v106,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)sideEffectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v106,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v106.fields.current,
                                                                             v102);
      if ( !v62 )
        sub_B5D69C(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v62,
        EffectIdsForShowAll,
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v106,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0LL) || BattleActionData__isCommonEnemyAttack(actionData, 0LL) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v104);
      if ( v62 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v62,
          sideEffectList,
          (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v62;
      }
LABEL_42:
      sub_B5D69C(sideEffectList, v64);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v62;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
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
  System_Collections_Generic_HashSet_int__o *v26; // x19
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v29; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v31; // x21
  unsigned __int64 v32; // x22
  LostAssetLoadCompensateLogic___c_c *v33; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__4_0; // x21
  Il2CppObject *v36; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v45; // x0

  if ( (byte_42E724D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v20, v21, v22);
    sub_B5D5C4(&LostAssetLoadCompensateLogic___c_TypeInfo, v23, v24, v25);
    byte_42E724D = 1;
  }
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
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
    v31 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)monitor )
        {
          v45 = sub_B5D6C8(SideEffectList);
          sub_B5D668(v45, 0LL);
        }
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v31[2].klass + v32),
                                                                          v29);
        if ( !v26 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v26,
          SideEffectList,
          (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v31[1].monitor;
        if ( (__int64)++v32 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_23:
      sub_B5D69C(SideEffectList, v29);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
          _9__4_0,
          v36,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          (const MethodInfo_2C3041C *)Method_System_Func_BattleActionData_HealData__IEnumerable_int____ctor__);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v37->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v37->__9__4_0,
          (System_Int32_array **)_9__4_0,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v26 )
        goto LABEL_23;
      System_Collections_Generic_HashSet_int___UnionWith(
        v26,
        SideEffectList,
        (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v26;
}


void __fastcall LostAssetLoadCompensateLogic__SearchAndLoad(
        HutongGames_PlayMaker_FsmStateAction_o *fsmStateAction,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  CompensateArgForShowAll_o *v5; // x21
  HutongGames_PlayMaker_FsmStateAction_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v38; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v40; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  _QWORD **v45; // x24
  __int64 v46; // x23
  __int16 v47; // w8
  __int64 v48; // x23
  __int64 v49; // x23
  __int64 v50; // x23
  LostAssetLoadCompensateLogic___c_c *v51; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v54; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_42E7249 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)argForShowAll, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v31, v32, v33);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_B5D5C4(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v34,
                                                                 v35,
                                                                 v36);
    byte_42E7249 = 1;
  }
  if ( !v5 )
    goto LABEL_42;
  EffectTypeBit_k__BackingField = v5->fields._EffectTypeBit_k__BackingField;
  v38 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v38,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_42;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_2BABDB4 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
                                                                 v40);
    if ( !v38 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v38,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_42;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_CompensateArgForShowAll_EffectType___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_2BABDB4 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v43);
    if ( !v38 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v38,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_CompensateArgForShowAll_EffectType___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_2BABDB4 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                 nowAction,
                                                                 v44);
    if ( !v38 )
      goto LABEL_42;
    System_Collections_Generic_HashSet_int___UnionWith(
      v38,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v45 = (_QWORD **)Method_System_Array_Empty_int___;
    v46 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v47 = *(_WORD *)(v46 + 306);
    if ( (v47 & 1) == 0 )
    {
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___
                                                                             + 6));
      v47 = *(_WORD *)(v46 + 306);
    }
    if ( (v47 & 0x400) != 0 )
    {
      v48 = *v45[6];
      if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
        fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AF52C4(*v45[6]);
      if ( !*(_DWORD *)(v48 + 224) )
      {
        v49 = *v45[6];
        if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
          sub_AF52C4(*v45[6]);
        j_il2cpp_runtime_class_init_0(v49);
      }
    }
    v50 = *v45[6];
    if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_AF52C4(*v45[6]);
    argForShowAll = **(CompensateArgForShowAll_o ***)(v50 + 184);
  }
  if ( !v38 )
LABEL_42:
    sub_B5D69C(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v51 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( (BYTE3(LostAssetLoadCompensateLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v51 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__0_0,
      v54,
      Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__,
      (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
    v55 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    v55->__9__0_0 = _9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v38,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_2500BD4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v38->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v38,
                                                                 v5,
                                                                 finishCallback,
                                                                 v62);
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
  int v2; // w2
  __int64 v3; // x3
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v4; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *v27; // x21
  Il2CppObject **p__8__1; // x20
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t current; // w21
  Il2CppObject *v33; // x24
  System_Action_o *monitor; // x22
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_42E5EE0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v20, v21, v22);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_B5D5C4(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v23,
                                                                   v24,
                                                                   v25);
    byte_42E5EE0 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v27 = (Il2CppObject *)sub_B5D694(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v27, 0LL);
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v27;
    sub_B5D560(&v4->fields.__8__1);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1
      || (_8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v4->fields.effectIdHashSet) == 0LL) )
    {
LABEL_29:
      sub_B5D69C(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v39,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v40 = v39;
    while ( 1 )
    {
      v30 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v40,
              (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v30 )
        break;
      if ( !*p__8__1 )
        sub_B5D69C(v30, v31);
      current = (int32_t)v40.fields._current;
      ++LODWORD((*p__8__1)[1].klass);
      v33 = *p__8__1;
      if ( !*p__8__1 )
        sub_B5D69C(v30, v31);
      monitor = (System_Action_o *)v33[1].monitor;
      if ( !monitor )
      {
        monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          monitor,
          v33,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v33[1].monitor = monitor;
        sub_B5D560(&v33[1].monitor);
      }
      argForShowAll = v4->fields.argForShowAll;
      if ( !argForShowAll )
        sub_B5D69C(v30, v31);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, monitor, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v40,
      (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  if ( !*p__8__1 )
    goto LABEL_29;
  if ( SLODWORD((*p__8__1)[1].klass) > 0 )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = &v4->fields.__2__current;
    sub_B5D560(p__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  ActionExtensions__Call(v4->fields.finishCallback, 0LL);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EDB & 1) == 0 )
  {
    sub_B5D5C4(&LostAssetLoadCompensateLogic___c_TypeInfo, v1, v2, v3);
    byte_42E5EDB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19

  if ( (byte_42E5EDF & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B5D5C4(
                                                   &Method_System_Array_Empty_int___,
                                                   (_DWORD)x,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E5EDF = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AF52C4(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AF52C4(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AF52C4(*v6[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v11 + 184);
  }
  return result;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19

  if ( (byte_42E5EDD & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B5D5C4(
                                                   &Method_System_Array_Empty_int___,
                                                   (_DWORD)x,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E5EDD = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_int___;
    v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AF52C4(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AF52C4(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AF52C4(*v6[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v11 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.sphitEffectId;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowHeal_b__4_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BattleActionData_BuffData_o *effect; // x8
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD **v7; // x20
  __int64 v8; // x19
  __int16 v9; // w8
  __int64 v10; // x19
  __int64 v11; // x19
  __int64 v12; // x19

  if ( (byte_42E5EDE & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_B5D5C4(
                                                   &Method_System_Array_Empty_int___,
                                                   (_DWORD)x,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E5EDE = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v7 = (_QWORD **)Method_System_Array_Empty_int___;
    v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v9 = *(_WORD *)(v8 + 306);
    if ( (v9 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v9 = *(_WORD *)(v8 + 306);
    }
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *v7[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AF52C4(*v7[6]);
      if ( !*(_DWORD *)(v10 + 224) )
      {
        v11 = *v7[6];
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AF52C4(*v7[6]);
        j_il2cpp_runtime_class_init_0(v11);
      }
    }
    v12 = *v7[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AF52C4(*v7[6]);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v12 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *effectPath; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5EDC & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, x, (_DWORD)method, v3);
    byte_42E5EDC = 1;
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