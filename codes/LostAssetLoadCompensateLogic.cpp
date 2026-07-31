System_Collections_IEnumerator_o *LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_593AC56 & 1) == 0 )
  {
    sub_21FFC50(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_593AC56 = 1;
  }
  v7 = sub_21FFEBC(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)argForShowAll, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 56), (int32_t)finishCallback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_593AC57 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_593AC57 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_21FFECC(EffectIdsForShowHeal, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v7);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v9; // x21
  unsigned __int64 v10; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x21
  __int64 v12; // x1
  LostAssetLoadCompensateLogic___c_c *v13; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__5_0; // x20
  Il2CppObject *v16; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  Il2CppObject *Master_object; // x0
  __int64 v26; // x1
  LostAssetLoadCompensateLogic___c_c *v27; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x20
  struct LostAssetLoadCompensateLogic___c_StaticFields *v29; // x9
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v31; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_T__o *v39; // x22
  System_Collections_Generic_HashSet_int__o *v40; // x21
  __int64 v41; // x1
  LostAssetLoadCompensateLogic___c_c *v42; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v43; // x8
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v45; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v54; // x21
  __int64 v55; // x9
  int32_t *p_offset; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x21
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x21
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x21
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  Il2CppObject *entity; // [xsp+10h] [xbp-50h] BYREF
  __int64 v81; // [xsp+18h] [xbp-48h]

  if ( (byte_593AC5A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_21FFC50(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_593AC5A = 1;
  }
  entity = 0;
  v81 = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v4);
    if ( !SideEffectList )
      goto LABEL_70;
    monitor = SideEffectList[1].monitor;
    v9 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)monitor )
          sub_21FFED4(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v9[2].klass + v10),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v10 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_70:
      sub_21FFECC(SideEffectList, v6);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, v7);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0) )
    {
      v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v12);
        v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v13->static_fields;
      _9__5_0 = (System_Func_object__object__o *)static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, v12);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v16,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0);
        v17 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v17->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->__9__5_0, (int32_t)_9__5_0, v18, v19, v20, v21, v22, v23);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_70;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v26);
        v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v29 = v27->static_fields;
      _9__5_1 = (System_Func_object__int__o *)v29->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !*(&v27->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v27, v26);
          v29 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)v29->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v31,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0);
        v32 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v32->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->__9__5_1, (int32_t)_9__5_1, v33, v34, v35, v36, v37, v38);
      }
      v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v40 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_69731156(
        v40,
        v39,
        (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
      v42 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v41);
        v42 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v43 = v42->static_fields;
      _9__5_2 = v43->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !*(&v42->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v42, v41);
          v43 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v45 = (Il2CppObject *)v43->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v45,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0);
        v46 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v46->__9__5_2 = _9__5_2;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v46->__9__5_2, (int32_t)_9__5_2, v47, v48, v49, v50, v51, v52);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_70;
      klass = SideEffectList->klass;
      v54 = SideEffectList;
      v55 = *(unsigned __int16 *)&SideEffectList->klass->_2.rank;
      if ( *(_WORD *)&SideEffectList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v55;
          p_offset += 4;
          if ( !v55 )
            goto LABEL_37;
        }
        v57 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_37:
        v57 = sub_2237E2C(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v57)(
              v54,
              *(_QWORD *)(v57 + 8));
      v81 = v58;
      if ( !v58 )
LABEL_60:
        sub_21FFECC(v58, v59);
      v60 = v58;
      while ( 1 )
      {
        v61 = *(_QWORD *)v60;
        v62 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
        {
          v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v62;
            v63 += 4;
            if ( !v62 )
              goto LABEL_45;
          }
          v64 = v61 + 16LL * *v63 + 312;
        }
        else
        {
LABEL_45:
          v64 = sub_2237E2C(v60, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v65 = (*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
        if ( (v65 & 1) == 0 )
          break;
        v67 = v81;
        if ( !v81 )
          sub_21FFECC(v65, v66);
        v68 = *(_QWORD *)v81;
        v69 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
        {
          v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v70 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v69;
            v70 += 4;
            if ( !v69 )
              goto LABEL_53;
          }
          v71 = v68 + 16LL * *v70 + 312;
        }
        else
        {
LABEL_53:
          v71 = sub_2237E2C(v81, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v72 = (*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
        if ( !v28 )
          sub_21FFECC(v72, v73);
        v58 = DataMasterBase_object__object__int___TryGetEntity(
                v28,
                &entity,
                v72,
                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( (v58 & 1) != 0 )
        {
          if ( !entity )
            sub_21FFECC(v58, v59);
          v58 = System_Collections_Generic_HashSet_int___Add(
                  v3,
                  HIDWORD(entity[1].klass),
                  (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        v60 = v81;
        if ( !v81 )
          goto LABEL_60;
      }
      v74 = v81;
      if ( v81 )
      {
        v75 = *(_QWORD *)v81;
        v76 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
        {
          v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
          {
            --v76;
            v77 += 4;
            if ( !v76 )
              goto LABEL_66;
          }
          v78 = v75 + 16LL * *v77 + 312;
        }
        else
        {
LABEL_66:
          v78 = sub_2237E2C(v81, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
      }
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v6; // x1
  LostAssetLoadCompensateLogic___c_c *v7; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v10; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  __int64 v19; // x1
  LostAssetLoadCompensateLogic___c_c *v20; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *v21; // x8
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v23; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  LostAssetLoadCompensateLogic___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  struct LostAssetLoadCompensateLogic___c_StaticFields *v35; // x9
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v37; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_IEnumerable_T__o *v45; // x0
  const MethodInfo *v46; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593AC58 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_21FFC50(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_21FFC50(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_21FFC50(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_593AC58 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        v4);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0) )
    {
      v7 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v6);
        v7 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v7->static_fields;
      _9__3_0 = (System_Func_object__object__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !*(&v7->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v7, v6);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v10 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v10,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0);
        v11 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v11->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__3_0, (int32_t)_9__3_0, v12, v13, v14, v15, v16, v17);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v19);
        v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v21 = v20->static_fields;
      _9__3_1 = (System_Func_object__bool__o *)v21->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !*(&v20->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v20, v19);
          v21 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)v21->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v23,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0);
        v24 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v24->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__3_1, (int32_t)_9__3_1, v25, v26, v27, v28, v29, v30);
      }
      v31 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v34 = v31;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v32);
        v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      v35 = v33->static_fields;
      _9__3_2 = (System_Func_object__int__o *)v35->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !*(&v33->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v33, v32);
          v35 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)v35->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v37,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0);
        v38 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v38->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__3_2, (int32_t)_9__3_2, v39, v40, v41, v42, v43, v44);
      }
      v45 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v34,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v45,
        (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v51.fields._current,
                                                                             v46);
      if ( !v3 )
        sub_21FFECC(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v48) || (actionData->fields.type & 0xFFFFFFFE) == 0xA )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v49);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_36:
      sub_21FFECC(sideEffectList, v6);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x21
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v8; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x22
  unsigned __int64 v11; // x23
  const MethodInfo *v12; // x1
  LostAssetLoadCompensateLogic___c_c *v13; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__4_0; // x22
  Il2CppObject *v16; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v29; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v30; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593AC59 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_21FFC50(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_21FFC50(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_593AC59 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, v4);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v6);
    if ( !SideEffectList )
      goto LABEL_29;
    monitor = SideEffectList[1].monitor;
    v10 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)monitor )
          sub_21FFED4(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v10[2].klass + v11),
                                                                          v8);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v10[1].monitor;
        if ( (__int64)++v11 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_29:
      sub_21FFECC(SideEffectList, v8);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0) )
    {
      v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v12);
        v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      static_fields = v13->static_fields;
      _9__4_0 = (System_Func_object__object__o *)static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, v12);
          static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v16,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0);
        v17 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v17->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->__9__4_0, (int32_t)_9__4_0, v18, v19, v20, v21, v22, v23);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_29;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    if ( BattleActionData__get_damagedatalist(actionData, v12) )
    {
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(
                                                                        actionData,
                                                                        v24);
      if ( !SideEffectList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        (System_Collections_Generic_List_object__o *)SideEffectList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
      v29 = 0;
      v30 = &v31;
      while ( 1 )
      {
        v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
        if ( !v25 )
          break;
        if ( !v31.fields._current )
          sub_21FFECC(v25, v26);
        v27 = *(unsigned int *)((char *)&v31.fields._current->klass + (unsigned __int64)&qword_B8);
        if ( (int)v27 >= 1 )
        {
          if ( !v3 )
            sub_21FFECC(v25, v27);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            v27,
            (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


void LostAssetLoadCompensateLogic__SearchAndLoad(
        HutongGames_PlayMaker_FsmStateAction_o *fsmStateAction,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  CompensateArgForShowAll_o *v5; // x21
  HutongGames_PlayMaker_FsmStateAction_o *v6; // x19
  BitValue_T__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v8; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v10; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  long double v15; // q0
  _QWORD *v16; // x23
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x1
  LostAssetLoadCompensateLogic___c_c *v20; // x0
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x8
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v23; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_593AC55 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_Predicate_int__TypeInfo);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_21FFC50(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_593AC55 = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_3E43658 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)v5->fields._Perf_k__BackingField;
    if ( !fsmStateAction )
      goto LABEL_37;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             (BattlePerformance_o *)fsmStateAction,
                             v5->fields._ActObj_k__BackingField,
                             0);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                 ActionDataFromActObj,
                                                                 v10);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_3E43658 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_3E43658 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                 nowAction,
                                                                 v14);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_2237AF8(v15);
    if ( !*(_DWORD *)(v18 + 228) )
      *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v18, argForShowAll);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v16[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)&fsmStateAction[3].fields._DisplayName_k__BackingField + 5) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_2237AF8(v15);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v8 )
LABEL_37:
    sub_21FFECC(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !*(&LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo, v19);
    v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__0_0 = static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_21FFEBC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v23, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0);
    v24 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    v24->__9__0_0 = _9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__0_0, (int32_t)_9__0_0, v25, v26, v27, v28, v29, v30);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_42819A8 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v8->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v8,
                                                                 v5,
                                                                 finishCallback,
                                                                 v31);
    if ( v6 )
    {
      HutongGames_PlayMaker_FsmStateAction__StartCoroutine(v6, (System_Collections_IEnumerator_o *)fsmStateAction, 0);
      return;
    }
    goto LABEL_37;
  }
  ActionExtensions__Call(finishCallback, 0);
}


void LostAssetLoadCompensateLogic__CoroutineLoad_d__1___ctor(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool LostAssetLoadCompensateLogic__CoroutineLoad_d__1__MoveNext(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v20; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_593AC60 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_21FFC50(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_593AC60 = 1;
  }
  _1__state = v8->fields.__1__state;
  memset(&v35, 0, sizeof(v35));
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    v10 = (Il2CppObject *)sub_21FFEBC(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v10, 0);
    v8->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v10;
    p__8__1 = &v8->fields.__8__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
    if ( !v8->fields.__8__1
      || (v8->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v8->fields.effectIdHashSet) == 0) )
    {
LABEL_26:
      sub_21FFECC(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v34,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v35 = v34;
    v34.fields._set = 0;
    *(_QWORD *)&v34.fields._index = &v35;
    while ( 1 )
    {
      v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v35,
              (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v18 )
        break;
      v20 = *p__8__1;
      if ( !*p__8__1 )
        sub_21FFECC(v18, v19);
      current = (int32_t)v35.fields._current;
      _9__0 = v20->fields.__9__0;
      ++v20->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v20,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0);
        v20->fields.__9__0 = _9__0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v20->fields.__9__0,
          (int32_t)_9__0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      argForShowAll = v8->fields.argForShowAll;
      if ( !argForShowAll )
        sub_21FFECC(v18, v19);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v19);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v35,
      (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v8->fields.__2__current = 0;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_21FFBF4(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
    return result;
  }
  ActionExtensions__Call(v8->fields.finishCallback, 0);
  return 0;
}


Il2CppObject *LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_Collections_IEnumerator_Reset(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_Collections_IEnumerator_get_Current(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void LostAssetLoadCompensateLogic__CoroutineLoad_d__1__System_IDisposable_Dispose(
        LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *this,
        const MethodInfo *method)
{
  ;
}


void LostAssetLoadCompensateLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AC5B & 1) == 0 )
  {
    sub_21FFC50(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_593AC5B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LostAssetLoadCompensateLogic___c___ctor(LostAssetLoadCompensateLogic___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  long double v3; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_593AC5F & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_593AC5F = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v3);
    if ( !*(_DWORD *)(v8 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v8, x);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v3);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v9 + 184);
  }
  return result;
}


int32_t LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.auraEffectId;
}


bool LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_2(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x > 0;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  long double v3; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_593AC5D & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_593AC5D = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v3);
    if ( !*(_DWORD *)(v8 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v8, x);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v3);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v9 + 184);
  }
  return result;
}


bool LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.sphit;
}


int32_t LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.sphitEffectId;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowHeal_b__4_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  long double v3; // q0
  struct BattleActionData_BuffData_o *effect; // x8
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_593AC5E & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_593AC5E = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0 )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v3);
    if ( !*(_DWORD *)(v9 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v9, x);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_2237AF8(v3);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v10 + 184);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_String_o *effectPath; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593AC5C & 1) == 0 )
  {
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    byte_593AC5C = 1;
  }
  effectPath = 0;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
  return !BattleEffectUtility__IsEffectNotLoadedYet(x, &effectPath, 0);
}


void LostAssetLoadCompensateLogic___c__DisplayClass1_0___ctor(
        LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LostAssetLoadCompensateLogic___c__DisplayClass1_0___CoroutineLoad_b__0(
        LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  --this->fields.checkCount;
}