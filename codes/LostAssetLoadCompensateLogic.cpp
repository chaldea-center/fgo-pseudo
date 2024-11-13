System_Collections_IEnumerator_o *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B183E4 & 1) == 0 )
  {
    sub_1BCA7E0(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll, finishCallback);
    byte_4B183E4 = 1;
  }
  v7 = sub_1BCAA2C(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)effectIdHashSet, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)argForShowAll, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 56), (int64_t)finishCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_HashSet_int__o *v9; // x20
  const MethodInfo *v10; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_4B183E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8);
    byte_4B183E5 = 1;
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v10);
  if ( !v9 )
    sub_1BCAA3C(EffectIdsForShowHeal, v12);
  System_Collections_Generic_HashSet_int___UnionWith(
    v9,
    EffectIdsForShowHeal,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v13);
  System_Collections_Generic_HashSet_int___UnionWith(
    v9,
    EffectIdsForShowBuff,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v9;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  System_Collections_Generic_HashSet_int__o *v47; // x19
  const MethodInfo *v48; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x2
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v53; // x21
  unsigned __int64 v54; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  LostAssetLoadCompensateLogic___c_c *v59; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v61; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  Il2CppObject *Master_object; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  LostAssetLoadCompensateLogic___c_c *v74; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v77; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerable_T__o *v85; // x22
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_HashSet_int__o *v89; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  LostAssetLoadCompensateLogic___c_c *v93; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v95; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v104; // x20
  __int64 v105; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v108; // x1
  __int64 v109; // x20
  __int64 v110; // x8
  __int64 v111; // x9
  int *v112; // x10
  __int64 v113; // x0
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  _BOOL8 v120; // x0
  __int64 v121; // x1
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B183E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_AuraEffectMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v13, v14);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_BattleActionData_BuffData__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v27, v28);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v29, v30);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_int__TypeInfo, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_int__TypeInfo, v35, v36);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v39, v40);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v41, v42);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v43, v44);
    sub_1BCA7E0(&LostAssetLoadCompensateLogic___c_TypeInfo, v45, v46);
    byte_4B183E8 = 1;
  }
  entity = 0LL;
  v47 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v47,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v48);
    if ( !SideEffectList )
      goto LABEL_65;
    monitor = SideEffectList[1].monitor;
    v53 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v54 = 0LL;
      while ( 1 )
      {
        if ( v54 >= (unsigned int)monitor )
          sub_1BCAA44(SideEffectList, v50);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v53[2].klass + v54),
                                                                          v50);
        if ( !v47 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v47,
          SideEffectList,
          (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v53[1].monitor;
        if ( (__int64)++v54 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1BCAA3C(SideEffectList, v50);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, v51);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v59 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v56);
        v59 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__object__o *)v59->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59, v56);
          v59 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v61 = (Il2CppObject *)v59->static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                     System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo,
                                                     v56,
                                                     v57,
                                                     v58);
        System_Func_object__object____ctor(
          _9__5_0,
          v61,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v47 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v47,
        SideEffectList,
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v69);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v74 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v75 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v71);
        v74 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v74->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v74->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v74, v71);
          v74 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v74->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_BattleActionData_BuffData__int__TypeInfo,
                                                  v71,
                                                  v72,
                                                  v73);
        System_Func_object__int____ctor(
          _9__5_1,
          v77,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0LL);
        v78 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v78->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v78->__9__5_1, (int64_t)_9__5_1, v79, v80, v81, v82, v83, v84);
      }
      v85 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v89 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v86,
                                                           v87,
                                                           v88);
      System_Collections_Generic_HashSet_int____ctor_54873236(
        v89,
        v85,
        (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
      v93 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v90);
        v93 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v93->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v93->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v93, v90);
          v93 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v95 = (Il2CppObject *)v93->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v90, v91, v92);
        System_Func_int__bool____ctor(
          _9__5_2,
          v95,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0LL);
        v96 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v96->__9__5_2 = _9__5_2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v96->__9__5_2, (int64_t)_9__5_2, v97, v98, v99, v100, v101, v102);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v89,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v104 = SideEffectList;
      v105 = *(unsigned __int16 *)(&SideEffectList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SideEffectList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v105;
          p_offset += 4;
          if ( !v105 )
            goto LABEL_37;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_37:
        p_method = sub_1C1C7C0(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v109 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
               v104,
               *(_QWORD *)(p_method + 8));
      if ( !v109 )
        sub_1BCAA3C(0LL, v108);
      while ( 1 )
      {
        v110 = *(_QWORD *)v109;
        v111 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
        {
          v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v112 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v111;
            v112 += 4;
            if ( !v111 )
              goto LABEL_44;
          }
          v113 = v110 + 16LL * *v112 + 312;
        }
        else
        {
LABEL_44:
          v113 = sub_1C1C7C0(v109, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8)) & 1) == 0 )
          break;
        v114 = *(_QWORD *)v109;
        v115 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
        {
          v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v116 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v115;
            v116 += 4;
            if ( !v115 )
              goto LABEL_51;
          }
          v117 = v114 + 16LL * *v116 + 312;
        }
        else
        {
LABEL_51:
          v117 = sub_1C1C7C0(v109, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v118 = (*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v109, *(_QWORD *)(v117 + 8));
        if ( !v75 )
          sub_1BCAA3C(v118, v119);
        v120 = DataMasterBase_object__object__int___TryGetEntity(
                 v75,
                 &entity,
                 v118,
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v120 )
        {
          if ( !entity )
            sub_1BCAA3C(v120, v121);
          System_Collections_Generic_HashSet_int___Add(
            v47,
            HIDWORD(entity[1].klass),
            (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v122 = *(_QWORD *)v109;
      v123 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
      {
        v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v124 - 1) != System_IDisposable_TypeInfo )
        {
          --v123;
          v124 += 4;
          if ( !v123 )
            goto LABEL_61;
        }
        v125 = v122 + 16LL * *v124 + 312;
      }
      else
      {
LABEL_61:
        v125 = sub_1C1C7C0(v109, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v125)(v109, *(_QWORD *)(v125 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v47;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_HashSet_int__o *v37; // x20
  const MethodInfo *v38; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  LostAssetLoadCompensateLogic___c_c *v43; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v45; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  LostAssetLoadCompensateLogic___c_c *v57; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v59; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  LostAssetLoadCompensateLogic___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v74; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_IEnumerable_T__o *v82; // x0
  const MethodInfo *v83; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x1
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B183E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v13, v14);
    sub_1BCA7E0(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_BattleActionData_DamageData__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v29, v30);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v31, v32);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v33, v34);
    sub_1BCA7E0(&LostAssetLoadCompensateLogic___c_TypeInfo, v35, v36);
    byte_4B183E6 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v37 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v37,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        v38);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v43 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v40);
        v43 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__object__o *)v43->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43, v40);
          v43 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v45 = (Il2CppObject *)v43->static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                     System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo,
                                                     v40,
                                                     v41,
                                                     v42);
        System_Func_object__object____ctor(
          _9__3_0,
          v45,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
          (int64_t)_9__3_0,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v37 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v37,
        sideEffectList,
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v57 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v54);
        v57 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v57->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57, v54);
          v57 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v57->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_BattleActionData_DamageData__bool__TypeInfo,
                                                   v54,
                                                   v55,
                                                   v56);
        System_Func_object__bool____ctor(
          _9__3_1,
          v59,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0LL);
        v60 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v60->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1BCA784((PartyOrganizationUtility_o *)&v60->__9__3_1, (int64_t)_9__3_1, v61, v62, v63, v64, v65, v66);
      }
      v67 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v71 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v72 = v67;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v68);
        v71 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v71->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v71->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v71, v68);
          v71 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v74 = (Il2CppObject *)v71->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_BattleActionData_DamageData__int__TypeInfo,
                                                  v68,
                                                  v69,
                                                  v70);
        System_Func_object__int____ctor(
          _9__3_2,
          v74,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0LL);
        v75 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v75->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v75->__9__3_2, (int64_t)_9__3_2, v76, v77, v78, v79, v80, v81);
      }
      v82 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v72,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v37,
        v82,
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v88,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v88,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v88.fields._current,
                                                                             v83);
      if ( !v37 )
        sub_1BCAA3C(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v37,
        EffectIdsForShowAll,
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v88,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v85) || (actionData->fields.type & 0xFFFFFFFE) == 10 )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v86);
      if ( v37 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v37,
          sideEffectList,
          (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v37;
      }
LABEL_36:
      sub_1BCAA3C(sideEffectList, v40);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v37;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_HashSet_int__o *v17; // x19
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v22; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  unsigned __int64 v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  LostAssetLoadCompensateLogic___c_c *v29; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v31; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B183E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method, v2);
    sub_1BCA7E0(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v13, v14);
    sub_1BCA7E0(&LostAssetLoadCompensateLogic___c_TypeInfo, v15, v16);
    byte_4B183E7 = 1;
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, v18);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v20);
    if ( !SideEffectList )
      goto LABEL_21;
    monitor = SideEffectList[1].monitor;
    v24 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)monitor )
          sub_1BCAA44(SideEffectList, v22);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v24[2].klass + v25),
                                                                          v22);
        if ( !v17 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v17,
          SideEffectList,
          (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v24[1].monitor;
        if ( (__int64)++v25 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_21:
      sub_1BCAA3C(SideEffectList, v22);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v29 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v26);
        v29 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v29->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29, v26);
          v29 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v29->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                     System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo,
                                                     v26,
                                                     v27,
                                                     v28);
        System_Func_object__object____ctor(
          _9__4_0,
          v31,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
          (int64_t)_9__4_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v17 )
        goto LABEL_21;
      System_Collections_Generic_HashSet_int___UnionWith(
        v17,
        SideEffectList,
        (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v17;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  BitValue_T__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v26; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v28; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  long double inited; // q0
  _QWORD *v34; // x23
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  LostAssetLoadCompensateLogic___c_c *v40; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v42; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  const MethodInfo *v50; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_4B183E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, argForShowAll, finishCallback);
    sub_1BCA7E0(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v21, v22);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1BCA7E0(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v23,
                                                                 v24);
    byte_4B183E3 = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       argForShowAll,
                                                       finishCallback,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_31371B0 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)v5->fields._Perf_k__BackingField;
    if ( !fsmStateAction )
      goto LABEL_37;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             (BattlePerformance_o *)fsmStateAction,
                             v5->fields._ActObj_k__BackingField,
                             0LL);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                 ActionDataFromActObj,
                                                                 v28);
    if ( !v26 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_31371B0 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v31);
    if ( !v26 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_31371B0 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                 nowAction,
                                                                 v32);
    if ( !v26 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v26,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v34 = Method_System_Array_Empty_int___;
    v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v35 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, 0LL);
      v35 = v34[7];
    }
    v36 = *(_QWORD *)(v35 + 16);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v36 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v36, argForShowAll);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v34[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C1C6BC(inited);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v26 )
LABEL_37:
    sub_1BCAA3C(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v40 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v37);
    v40 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v40->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40, v37);
      v40 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v40->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v37, v38, v39);
    System_Predicate_int____ctor(_9__0_0, v42, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0LL);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v44, v45, v46, v47, v48, v49);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v26,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_34562DC *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v26->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v26,
                                                                 v5,
                                                                 finishCallback,
                                                                 v50);
    if ( v6 )
    {
      HutongGames_PlayMaker_FsmStateAction__StartCoroutine(v6, (System_Collections_IEnumerator_o *)fsmStateAction, 0LL);
      return;
    }
    goto LABEL_37;
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
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t _1__state; // w8
  Il2CppObject *v24; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  _BOOL8 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v36; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v51; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B183EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v19, v20);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1BCA7E0(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v21,
                                                                   v22);
    byte_4B183EE = 1;
  }
  memset(&v51, 0, sizeof(v51));
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v24 = (Il2CppObject *)sub_1BCAA2C(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v24, 0LL);
    v8->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v24;
    p__8__1 = &v8->fields.__8__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v24, v26, v27, v28, v29, v30, v31);
    if ( !v8->fields.__8__1
      || (v8->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v8->fields.effectIdHashSet) == 0LL) )
    {
LABEL_26:
      sub_1BCAA3C(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v50,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_345572C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v51 = v50;
    while ( 1 )
    {
      v32 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v51,
              (const MethodInfo_33129E8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v32 )
        break;
      v36 = *p__8__1;
      if ( !*p__8__1 )
        sub_1BCAA3C(v32, v33);
      current = (int32_t)v51.fields._current;
      _9__0 = v36->fields.__9__0;
      ++v36->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v36,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v36->fields.__9__0 = _9__0;
        sub_1BCA784((PartyOrganizationUtility_o *)&v36->fields.__9__0, (int64_t)_9__0, v39, v40, v41, v42, v43, v44);
      }
      argForShowAll = v8->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1BCAA3C(v32, v33);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v33);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v51,
      (const MethodInfo_33129E4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  ActionExtensions__Call(v8->fields.finishCallback, 0LL);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B183E9 & 1) == 0 )
  {
    sub_1BCA7E0(&LostAssetLoadCompensateLogic___c_TypeInfo, v1, v2);
    byte_4B183E9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(LostAssetLoadCompensateLogic___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  long double inited; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4B183ED & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1BCA7E0(&Method_System_Array_Empty_int___, x, method);
    byte_4B183ED = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, x);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8, x);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C1C6BC(inited);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v9 + 184);
  }
  return result;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
  long double inited; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4B183EB & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1BCA7E0(&Method_System_Array_Empty_int___, x, method);
    byte_4B183EB = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, x);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8, x);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C1C6BC(inited);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v9 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.sphitEffectId;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowHeal_b__4_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  long double inited; // q0
  struct BattleActionData_BuffData_o *effect; // x8
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4B183EC & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1BCA7E0(&Method_System_Array_Empty_int___, x, method);
    byte_4B183EC = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, x);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9, x);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1C6BC(inited);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v10 + 184);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_String_o *effectPath; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B183EA & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x, method);
    byte_4B183EA = 1;
  }
  effectPath = 0LL;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
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