System_Collections_IEnumerator_o *LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C454A2 & 1) == 0 )
  {
    sub_1C37058(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_4C454A2 = 1;
  }
  v7 = sub_1C372A4(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)argForShowAll, v10, v11);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 56), (int32_t)finishCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_4C454A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C454A3 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_1C372B4(EffectIdsForShowHeal);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v5; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x21
  unsigned __int64 v8; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  LostAssetLoadCompensateLogic___c_c *v10; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v12; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v17; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v20; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  System_Collections_Generic_HashSet_int__o *v25; // x20
  LostAssetLoadCompensateLogic___c_c *v26; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v28; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v33; // x20
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x20
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x0
  _BOOL8 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C454A6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C37058(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor___78034736);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_1C37058(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C454A6 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0);
    if ( !SideEffectList )
      goto LABEL_65;
    monitor = SideEffectList[1].monitor;
    v7 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)monitor )
          sub_1C372BC(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v7[2].klass + v8),
                                                                          v5);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v7[1].monitor;
        if ( (__int64)++v8 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1C372B4(SideEffectList);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0) )
    {
      v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__object__o *)v10->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v12,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v17->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v17->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v20,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0);
        v21 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v21->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v21->__9__5_1, (int32_t)_9__5_1, v22, v23);
      }
      v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v25 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_56966008(
        v25,
        v24,
        (const MethodInfo_3653B78 *)Method_System_Collections_Generic_HashSet_int___ctor___78034736);
      v26 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v26 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v26->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v28,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0);
        v29 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v29->__9__5_2 = _9__5_2;
        sub_1C36FFC((CGThumbnailListItem_o *)&v29->__9__5_2, (int32_t)_9__5_2, v30, v31);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_312DE68 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v33 = SideEffectList;
      v34 = *(unsigned __int16 *)&SideEffectList->klass->_2.rank;
      if ( *(_WORD *)&SideEffectList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v34;
          p_offset += 4;
          if ( !v34 )
            goto LABEL_37;
        }
        v36 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_37:
        v36 = sub_1C87870(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v36)(
              v33,
              *(_QWORD *)(v36 + 8));
      if ( !v37 )
        sub_1C372B4(0);
      while ( 1 )
      {
        v38 = *(_QWORD *)v37;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_44;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_44:
          v41 = sub_1C87870(v37, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
          break;
        v42 = *(_QWORD *)v37;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v44 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_51;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_51:
          v45 = sub_1C87870(v37, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
        if ( !v18 )
          sub_1C372B4(v46);
        v47 = DataMasterBase_object__object__int___TryGetEntity(
                v18,
                &entity,
                v46,
                (const MethodInfo_33A10EC *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v47 )
        {
          if ( !entity )
            sub_1C372B4(v47);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            HIDWORD(entity[1].klass),
            (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v48 = *(_QWORD *)v37;
      v49 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
      {
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_61;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_61:
        v51 = sub_1C87870(v37, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v51)(v37, *(_QWORD *)(v51 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  LostAssetLoadCompensateLogic___c_c *v5; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v7; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v12; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v14; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  LostAssetLoadCompensateLogic___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v22; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C454A4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_1C37058(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C37058(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1C37058(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_1C37058(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C454A4 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(actionData, -1, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0) )
    {
      v5 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v5 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__object__o *)v5->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v7 = (Il2CppObject *)v5->static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v7,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v9, v10);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v12->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v14,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0);
        v15 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v15->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v15->__9__3_1, (int32_t)_9__3_1, v16, v17);
      }
      v18 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v20 = v18;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v19->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v19->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v22,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0);
        v23 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v23->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1C36FFC((CGThumbnailListItem_o *)&v23->__9__3_2, (int32_t)_9__3_2, v24, v25);
      }
      v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v20,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v26,
        (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v31.fields._current,
                                                                             v27);
      if ( !v3 )
        sub_1C372B4(EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0) || BattleActionData__isCommonEnemyAttack(actionData, 0) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v29);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_36:
      sub_1C372B4(sideEffectList);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x21
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v6; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x22
  unsigned __int64 v9; // x23
  LostAssetLoadCompensateLogic___c_c *v10; // x0
  System_Func_object__object__o *_9__4_0; // x22
  Il2CppObject *v12; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  int32_t v17; // w1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C454A5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C37058(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_1C37058(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C454A5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, 0);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0);
    if ( !SideEffectList )
      goto LABEL_29;
    monitor = SideEffectList[1].monitor;
    v8 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)monitor )
          sub_1C372BC(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v8[2].klass + v9),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v8[1].monitor;
        if ( (__int64)++v9 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_29:
      sub_1C372B4(SideEffectList);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0) )
    {
      v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v10->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v12,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v14, v15);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_29;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    if ( BattleActionData__get_damagedatalist(actionData, 0) )
    {
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(
                                                                        actionData,
                                                                        0);
      if ( !SideEffectList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)SideEffectList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v19,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
        if ( !v16 )
          break;
        if ( !v19.fields._current )
          sub_1C372B4(v16);
        v17 = *(_DWORD *)((char *)&v19.fields._current->klass + (unsigned __int64)&qword_A8);
        if ( v17 >= 1 )
        {
          if ( !v3 )
            sub_1C372B4(v16);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            v17,
            (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v19,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
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
  HutongGames_PlayMaker_FsmStateAction_o *v6; // x19
  BitValue_T__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v8; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v10; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  long double inited; // q0
  System_Collections_Generic_IEnumerable_T__o *ExtraEffectIdArray_k__BackingField; // x1
  _QWORD *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x0
  LostAssetLoadCompensateLogic___c_c *v20; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v22; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  v6 = fsmStateAction;
  if ( (byte_4C454A1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C37058(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C454A1 = 1;
  }
  if ( !argForShowAll )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)argForShowAll->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_332164C *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)argForShowAll->fields._Perf_k__BackingField;
    if ( !fsmStateAction )
      goto LABEL_37;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             (BattlePerformance_o *)fsmStateAction,
                             argForShowAll->fields._ActObj_k__BackingField,
                             0);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                 ActionDataFromActObj,
                                                                 v10);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_332164C *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_332164C *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  ExtraEffectIdArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)argForShowAll->fields._ExtraEffectIdArray_k__BackingField;
  if ( !ExtraEffectIdArray_k__BackingField )
  {
    v17 = Method_System_Array_Empty_int___;
    v18 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v18 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v17[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C8776C(inited);
    ExtraEffectIdArray_k__BackingField = **(System_Collections_Generic_IEnumerable_T__o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v8 )
LABEL_37:
    sub_1C372B4(fsmStateAction);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    ExtraEffectIdArray_k__BackingField,
    (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v20->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v22, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v24, v25);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_36551C0 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v8->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v8,
                                                                 argForShowAll,
                                                                 finishCallback,
                                                                 v26);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *v6; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v11; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C454AC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1C37058(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_4C454AC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v6 = (Il2CppObject *)sub_1C372A4(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v6, 0);
    v4->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v6;
    p__8__1 = &v4->fields.__8__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
    if ( !v4->fields.__8__1
      || (v4->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v4->fields.effectIdHashSet) == 0) )
    {
LABEL_26:
      sub_1C372B4(this);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v21,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v10 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v22,
              (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v10 )
        break;
      v11 = *p__8__1;
      if ( !*p__8__1 )
        sub_1C372B4(v10);
      current = (int32_t)v22.fields._current;
      _9__0 = v11->fields.__9__0;
      ++v11->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v11,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0);
        v11->fields.__9__0 = _9__0;
        sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields.__9__0, (int32_t)_9__0, v14, v15);
      }
      argForShowAll = v4->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1C372B4(v10);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v22,
      (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C36FFC(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  ActionExtensions__Call(v4->fields.finishCallback, 0);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C454A7 & 1) == 0 )
  {
    sub_1C37058(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C454A7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  long double inited; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4C454AB & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C37058(&Method_System_Array_Empty_int___);
    byte_4C454AB = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
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
    sub_1C372B4(this);
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
  long double inited; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4C454A9 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C37058(&Method_System_Array_Empty_int___);
    byte_4C454A9 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
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
    sub_1C372B4(this);
  return x->fields.sphit;
}


int32_t LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.sphitEffectId;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowHeal_b__4_0(
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

  if ( (byte_4C454AA & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C37058(&Method_System_Array_Empty_int___);
    byte_4C454AA = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0 )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8776C(inited);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v10 + 184);
  }
  return result;
}


bool LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_String_o *effectPath; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C454A8 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    byte_4C454A8 = 1;
  }
  effectPath = 0;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
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