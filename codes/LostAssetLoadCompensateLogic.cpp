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

  if ( (byte_4C2979A & 1) == 0 )
  {
    sub_1C2D490(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_4C2979A = 1;
  }
  v7 = sub_1C2D6DC(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)argForShowAll, v10, v11);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 56), (int32_t)finishCallback, v12, v13);
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

  if ( (byte_4C2979B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C2979B = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_1C2D6EC(EffectIdsForShowHeal, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v7);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x21
  unsigned __int64 v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  LostAssetLoadCompensateLogic___c_c *v11; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v13; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v18; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v21; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_T__o *v25; // x22
  System_Collections_Generic_HashSet_int__o *v26; // x20
  LostAssetLoadCompensateLogic___c_c *v27; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v29; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x20
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2979E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_1C2D490(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C2979E = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      0);
    if ( !SideEffectList )
      goto LABEL_65;
    monitor = SideEffectList[1].monitor;
    v8 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)monitor )
          sub_1C2D6F4(SideEffectList, v5, v6);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v8[2].klass + v9),
                                                                          v5);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v8[1].monitor;
        if ( (__int64)++v9 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1C2D6EC(SideEffectList, v5);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0) )
    {
      v11 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v11 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__object__o *)v11->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v13,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v15, v16);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v18->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v21 = (Il2CppObject *)v18->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v21,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0);
        v22 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v22->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v22->__9__5_1, (int32_t)_9__5_1, v23, v24);
      }
      v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v26 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_56862832(
        v26,
        v25,
        (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
      v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v27->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v29 = (Il2CppObject *)v27->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v29,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0);
        v30 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v30->__9__5_2 = _9__5_2;
        sub_1C2D434((CGThumbnailListItem_o *)&v30->__9__5_2, (int32_t)_9__5_2, v31, v32);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v34 = SideEffectList;
      v35 = *(unsigned __int16 *)&SideEffectList->klass->_2.rank;
      if ( *(_WORD *)&SideEffectList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v35;
          p_offset += 4;
          if ( !v35 )
            goto LABEL_37;
        }
        v37 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_37:
        v37 = sub_1C7DCA8(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v37)(
              v34,
              *(_QWORD *)(v37 + 8));
      if ( !v39 )
        sub_1C2D6EC(0, v38);
      while ( 1 )
      {
        v40 = *(_QWORD *)v39;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_44;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_44:
          v43 = sub_1C7DCA8(v39, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
          break;
        v44 = *(_QWORD *)v39;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v46 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_51;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_51:
          v47 = sub_1C7DCA8(v39, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
        if ( !v19 )
          sub_1C2D6EC(v48, v49);
        v50 = DataMasterBase_object__object__int___TryGetEntity(
                v19,
                &entity,
                v48,
                (const MethodInfo_3387DE4 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v50 )
        {
          if ( !entity )
            sub_1C2D6EC(v50, v51);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            HIDWORD(entity[1].klass),
            (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v52 = *(_QWORD *)v39;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_61;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_61:
        v55 = sub_1C7DCA8(v39, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v55)(v39, *(_QWORD *)(v55 + 8));
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
  __int64 v5; // x1
  LostAssetLoadCompensateLogic___c_c *v6; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v8; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v13; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v15; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  LostAssetLoadCompensateLogic___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v23; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  const MethodInfo *v28; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2979C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_1C2D490(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1C2D490(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_1C2D490(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C2979C = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(actionData, -1, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0) )
    {
      v6 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v6 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__object__o *)v6->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v6->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v6);
          v6 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v8 = (Il2CppObject *)v6->static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v8,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v10, v11);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v13->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v15,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0);
        v16 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v16->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__3_1, (int32_t)_9__3_1, v17, v18);
      }
      v19 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v21 = v19;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v20->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v20->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v23,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0);
        v24 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v24->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1C2D434((CGThumbnailListItem_o *)&v24->__9__3_2, (int32_t)_9__3_2, v25, v26);
      }
      v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v21,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v27,
        (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v32.fields._current,
                                                                             v28);
      if ( !v3 )
        sub_1C2D6EC(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0) || BattleActionData__isCommonEnemyAttack(actionData, 0) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v30);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_36:
      sub_1C2D6EC(sideEffectList, v5);
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
  __int64 v7; // x2
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v9; // x22
  unsigned __int64 v10; // x23
  LostAssetLoadCompensateLogic___c_c *v11; // x0
  System_Func_object__object__o *_9__4_0; // x22
  Il2CppObject *v13; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2979D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C2D490(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_1C2D490(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C2979D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
    v9 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)monitor )
          sub_1C2D6F4(SideEffectList, v6, v7);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v9[2].klass + v10),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v10 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_29:
      sub_1C2D6EC(SideEffectList, v6);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0) )
    {
      v11 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v11 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v11->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v13,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v15, v16);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_3107D9C *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_29;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    if ( BattleActionData__get_damagedatalist(actionData, 0) )
    {
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(
                                                                        actionData,
                                                                        0);
      if ( !SideEffectList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)SideEffectList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
        if ( !v17 )
          break;
        if ( !v21.fields._current )
          sub_1C2D6EC(v17, v18);
        v19 = *(unsigned int *)((char *)&v21.fields._current->klass + (unsigned __int64)&qword_A8);
        if ( (int)v19 >= 1 )
        {
          if ( !v3 )
            sub_1C2D6EC(v17, v19);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            v19,
            (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
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
  long double inited; // q0
  _QWORD *v16; // x23
  __int64 v17; // x8
  __int64 v18; // x0
  LostAssetLoadCompensateLogic___c_c *v19; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v21; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_4C29799 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C2D490(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C29799 = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_3308344 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_3308344 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_3308344 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v18 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v18);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v16[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C7DBA4(inited);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v8 )
LABEL_37:
    sub_1C2D6EC(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_363B994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v19->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v21, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v23, v24);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_363BEB8 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v8->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v8,
                                                                 v5,
                                                                 finishCallback,
                                                                 v25);
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
  __int64 v11; // x1
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v12; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v23; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C297A4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C2D490(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1C2D490(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_4C297A4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
    v6 = (Il2CppObject *)sub_1C2D6DC(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v6, 0);
    v4->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v6;
    p__8__1 = &v4->fields.__8__1;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
    if ( !v4->fields.__8__1
      || (v4->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v4->fields.effectIdHashSet) == 0) )
    {
LABEL_26:
      sub_1C2D6EC(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v22,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_363B308 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v10 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v23,
              (const MethodInfo_3510488 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v10 )
        break;
      v12 = *p__8__1;
      if ( !*p__8__1 )
        sub_1C2D6EC(v10, v11);
      current = (int32_t)v23.fields._current;
      _9__0 = v12->fields.__9__0;
      ++v12->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v12,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0);
        v12->fields.__9__0 = _9__0;
        sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.__9__0, (int32_t)_9__0, v15, v16);
      }
      argForShowAll = v4->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1C2D6EC(v10, v11);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_3510484 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(p__2__current, 0, v2, v3);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C2979F & 1) == 0 )
  {
    sub_1C2D490(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4C2979F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C297A3 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C297A3 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C7DBA4(inited);
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
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C297A1 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C297A1 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C7DBA4(inited);
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
    sub_1C2D6EC(this, 0);
  return x->fields.sphit;
}


int32_t LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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

  if ( (byte_4C297A2 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C297A2 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0 )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C7DBA4(inited);
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

  if ( (byte_4C297A0 & 1) == 0 )
  {
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    byte_4C297A0 = 1;
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