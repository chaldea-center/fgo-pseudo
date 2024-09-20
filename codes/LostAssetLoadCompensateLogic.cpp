System_Collections_IEnumerator_o *__fastcall LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5D30F & 1) == 0 )
  {
    sub_1B885B0(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_4A5D30F = 1;
  }
  v7 = sub_1B887FC(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)argForShowAll, v10, v11);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)finishCallback, v12, v13);
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

  if ( (byte_4A5D310 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A5D310 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_1B8880C(EffectIdsForShowHeal, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v7);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
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
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  LostAssetLoadCompensateLogic___c_c *v12; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v14; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v19; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v22; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *v26; // x22
  System_Collections_Generic_HashSet_int__o *v27; // x20
  LostAssetLoadCompensateLogic___c_c *v28; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v30; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v35; // x20
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x20
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  _BOOL8 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D313 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_1B885B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4A5D313 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v4);
    if ( !SideEffectList )
      goto LABEL_65;
    monitor = SideEffectList[1].monitor;
    v9 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)monitor )
          sub_1B88814(SideEffectList, v6);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v9[2].klass + v10),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v10 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1B8880C(SideEffectList, v6);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, v7);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__object__o *)v12->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v14,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v16, v17);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_2EB2920 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v19->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v19 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v19->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v22,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0LL);
        v23 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v23->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->__9__5_1, (int32_t)_9__5_1, v24, v25);
      }
      v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v27 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_54209644(
        v27,
        v26,
        (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
      v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v28->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v30 = (Il2CppObject *)v28->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v30,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0LL);
        v31 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v31->__9__5_2 = _9__5_2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__5_2, (int32_t)_9__5_2, v32, v33);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v35 = SideEffectList;
      v36 = *(unsigned __int16 *)(&SideEffectList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SideEffectList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_37;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_37:
        p_method = sub_1BDA590(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v35,
              *(_QWORD *)(p_method + 8));
      if ( !v40 )
        sub_1B8880C(0LL, v39);
      while ( 1 )
      {
        v41 = *(_QWORD *)v40;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_44;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_44:
          v44 = sub_1BDA590(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
          break;
        v45 = *(_QWORD *)v40;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v47 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_51;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_51:
          v48 = sub_1BDA590(v40, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
        if ( !v20 )
          sub_1B8880C(v49, v50);
        v51 = DataMasterBase_object__object__int___TryGetEntity(
                v20,
                &entity,
                v49,
                (const MethodInfo_311D988 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v51 )
        {
          if ( !entity )
            sub_1B8880C(v51, v52);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            HIDWORD(entity[1].klass),
            (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v53 = *(_QWORD *)v40;
      v54 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
      {
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
        {
          --v54;
          v55 += 4;
          if ( !v54 )
            goto LABEL_61;
        }
        v56 = v53 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_61:
        v56 = sub_1BDA590(v40, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v40, *(_QWORD *)(v56 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v6; // x1
  LostAssetLoadCompensateLogic___c_c *v7; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v9; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v14; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v16; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  LostAssetLoadCompensateLogic___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v24; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D311 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_1B885B0(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_1B885B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4A5D311 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        v4);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v7 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v7 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__object__o *)v7->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          v7 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v9 = (Il2CppObject *)v7->static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v9,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v11, v12);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_2EB2920 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v14 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v14 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v14->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v16 = (Il2CppObject *)v14->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v16,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0LL);
        v17 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v17->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__3_1, (int32_t)_9__3_1, v18, v19);
      }
      v20 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v22 = v20;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v21->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v24,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0LL);
        v25 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v25->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__3_2, (int32_t)_9__3_2, v26, v27);
      }
      v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v22,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v28,
        (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v34,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v34.fields._current,
                                                                             v29);
      if ( !v3 )
        sub_1B8880C(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v31) || (actionData->fields.type & 0xFFFFFFFE) == 10 )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v32);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_36:
      sub_1B8880C(sideEffectList, v6);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x19
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  const MethodInfo *v6; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v8; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x21
  unsigned __int64 v11; // x22
  LostAssetLoadCompensateLogic___c_c *v12; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v14; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5D312 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_1B885B0(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_1B885B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4A5D312 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, v4);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v6);
    if ( !SideEffectList )
      goto LABEL_21;
    monitor = SideEffectList[1].monitor;
    v10 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)monitor )
          sub_1B88814(SideEffectList, v8);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v10[2].klass + v11),
                                                                          v8);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v10[1].monitor;
        if ( (__int64)++v11 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_21:
      sub_1B8880C(SideEffectList, v8);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v12->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v14,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v16, v17);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_2EB2920 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_21;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  BitValue_T__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v8; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v10; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  _QWORD *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x0
  LostAssetLoadCompensateLogic___c_c *v18; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v20; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_4A5D30E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1B885B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4A5D30E = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_30A2320 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
                                                                 v10);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_30A2320 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_30A2320 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v15 = Method_System_Array_Empty_int___;
    v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v16 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v16 = v15[7];
    }
    v17 = *(_QWORD *)(v16 + 16);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1BDA48C(v17);
    if ( !*(_DWORD *)(v17 + 224) )
      j_il2cpp_runtime_class_init_0(v17);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v15[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1BDA48C(fsmStateAction);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v8 )
LABEL_37:
    sub_1B8880C(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v18->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v20, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0LL);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v22, v23);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_33B42B4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v8->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v8,
                                                                 v5,
                                                                 finishCallback,
                                                                 v24);
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
  int32_t v2; // w2
  int32_t v3; // w3
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *v6; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  _BOOL8 v10; // x0
  __int64 v11; // x1
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v12; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v23; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4A5D319 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1B885B0(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_4A5D319 = 1;
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
    v6 = (Il2CppObject *)sub_1B887FC(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v6, 0LL);
    v4->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v6;
    p__8__1 = &v4->fields.__8__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
    if ( !v4->fields.__8__1
      || (v4->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v4->fields.effectIdHashSet) == 0LL) )
    {
LABEL_26:
      sub_1B8880C(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v22,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v10 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v23,
              (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v10 )
        break;
      v12 = *p__8__1;
      if ( !*p__8__1 )
        sub_1B8880C(v10, v11);
      current = (int32_t)v23.fields._current;
      _9__0 = v12->fields.__9__0;
      ++v12->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v12,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v12->fields.__9__0 = _9__0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.__9__0, (int32_t)_9__0, v15, v16);
      }
      argForShowAll = v4->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1B8880C(v10, v11);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D314 & 1) == 0 )
  {
    sub_1B885B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4A5D314 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4A5D318 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D318 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v8 + 184);
  }
  return result;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowBuff_b__5_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4A5D316 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D316 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v8 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_1(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.sphitEffectId;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowHeal_b__4_0(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_HealData_o *x,
        const MethodInfo *method)
{
  struct BattleActionData_BuffData_o *effect; // x8
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4A5D317 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D317 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v9 + 184);
  }
  return result;
}


bool __fastcall LostAssetLoadCompensateLogic___c___SearchAndLoad_b__0_0(
        LostAssetLoadCompensateLogic___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_String_o *effectPath; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D315 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    byte_4A5D315 = 1;
  }
  effectPath = 0LL;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
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