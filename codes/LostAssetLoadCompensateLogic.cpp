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

  if ( (byte_48E47D3 & 1) == 0 )
  {
    sub_1B00CCC(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll);
    byte_48E47D3 = 1;
  }
  v7 = sub_1B00F18(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)argForShowAll, v10, v11);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)finishCallback, v12, v13);
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

  if ( (byte_48E47D4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_48E47D4 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v6);
  if ( !v5 )
    sub_1B00F28(EffectIdsForShowHeal, v8);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    EffectIdsForShowHeal,
    (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v9);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    EffectIdsForShowBuff,
    (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  System_Collections_Generic_HashSet_int__o *v24; // x19
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v30; // x21
  unsigned __int64 v31; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  LostAssetLoadCompensateLogic___c_c *v33; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v35; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v40; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v43; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Collections_Generic_IEnumerable_T__o *v47; // x22
  System_Collections_Generic_HashSet_int__o *v48; // x20
  LostAssetLoadCompensateLogic___c_c *v49; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v51; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v56; // x20
  __int64 v57; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v60; // x1
  __int64 v61; // x20
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x1
  _BOOL8 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E47D7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v4);
    sub_1B00CCC(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v5);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v6);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1B00CCC(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v8);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v9);
    sub_1B00CCC(&System_Func_BattleActionData_BuffData__int__TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor___74510056, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v14);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v16);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v17);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v18);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v20);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v21);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v22);
    sub_1B00CCC(&LostAssetLoadCompensateLogic___c_TypeInfo, v23);
    byte_48E47D7 = 1;
  }
  entity = 0LL;
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v25);
    if ( !SideEffectList )
      goto LABEL_65;
    monitor = SideEffectList[1].monitor;
    v30 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)monitor )
          sub_1B00F30(SideEffectList, v27);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v30[2].klass + v31),
                                                                          v27);
        if ( !v24 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v24,
          SideEffectList,
          (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v30[1].monitor;
        if ( (__int64)++v31 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1B00F28(SideEffectList, v27);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, v28);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__object__o *)v33->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v33 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v35 = (Il2CppObject *)v33->static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v35,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v37, v38);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_2D91F24 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v24 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v24,
        SideEffectList,
        (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v40 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v41 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v40 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v40->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v40->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v43,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0LL);
        v44 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v44->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v44->__9__5_1, (int32_t)_9__5_1, v45, v46);
      }
      v47 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v48 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_52928300(
        v48,
        v47,
        (const MethodInfo_3279F2C *)Method_System_Collections_Generic_HashSet_int___ctor___74510056);
      v49 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v49 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v49->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v49->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v49);
          v49 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v51 = (Il2CppObject *)v49->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v51,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0LL);
        v52 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v52->__9__5_2 = _9__5_2;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v52->__9__5_2, (int32_t)_9__5_2, v53, v54);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_2D9CD80 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v56 = SideEffectList;
      v57 = *(unsigned __int16 *)(&SideEffectList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SideEffectList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v57;
          p_offset += 4;
          if ( !v57 )
            goto LABEL_37;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_37:
        p_method = sub_1B52CAC(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v61 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v56,
              *(_QWORD *)(p_method + 8));
      if ( !v61 )
        sub_1B00F28(0LL, v60);
      while ( 1 )
      {
        v62 = *(_QWORD *)v61;
        v63 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
        {
          v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v63;
            v64 += 4;
            if ( !v63 )
              goto LABEL_44;
          }
          v65 = v62 + 16LL * *v64 + 312;
        }
        else
        {
LABEL_44:
          v65 = sub_1B52CAC(v61, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8)) & 1) == 0 )
          break;
        v66 = *(_QWORD *)v61;
        v67 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
        {
          v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v68 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v67;
            v68 += 4;
            if ( !v67 )
              goto LABEL_51;
          }
          v69 = v66 + 16LL * *v68 + 312;
        }
        else
        {
LABEL_51:
          v69 = sub_1B52CAC(v61, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v61, *(_QWORD *)(v69 + 8));
        if ( !v41 )
          sub_1B00F28(v70, v71);
        v72 = DataMasterBase_object__object__int___TryGetEntity(
                v41,
                &entity,
                v70,
                (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v72 )
        {
          if ( !entity )
            sub_1B00F28(v72, v73);
          System_Collections_Generic_HashSet_int___Add(
            v24,
            HIDWORD(entity[1].klass),
            (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v74 = *(_QWORD *)v61;
      v75 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
      {
        v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
        {
          --v75;
          v76 += 4;
          if ( !v75 )
            goto LABEL_61;
        }
        v77 = v74 + 16LL * *v76 + 312;
      }
      else
      {
LABEL_61:
        v77 = sub_1B52CAC(v61, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v77)(v61, *(_QWORD *)(v77 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v24;
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
  System_Collections_Generic_HashSet_int__o *v19; // x20
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v22; // x1
  LostAssetLoadCompensateLogic___c_c *v23; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v25; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v30; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v32; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  LostAssetLoadCompensateLogic___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v40; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  const MethodInfo *v45; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E47D5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v7);
    sub_1B00CCC(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v8);
    sub_1B00CCC(&System_Func_BattleActionData_DamageData__int__TypeInfo, v9);
    sub_1B00CCC(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v14);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v15);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v16);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v17);
    sub_1B00CCC(&LostAssetLoadCompensateLogic___c_TypeInfo, v18);
    byte_48E47D5 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        v20);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v23 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v23 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__object__o *)v23->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v25 = (Il2CppObject *)v23->static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v25,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v27, v28);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_2D91F24 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v19 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v19,
        sideEffectList,
        (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v30->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v32,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0LL);
        v33 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v33->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v33->__9__3_1, (int32_t)_9__3_1, v34, v35);
      }
      v36 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v38 = v36;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v37->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v37->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v40,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0LL);
        v41 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v41->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v41->__9__3_2, (int32_t)_9__3_2, v42, v43);
      }
      v44 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v38,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v19,
        v44,
        (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v50.fields._current,
                                                                             v45);
      if ( !v19 )
        sub_1B00F28(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v19,
        EffectIdsForShowAll,
        (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v47) || (actionData->fields.type & 0xFFFFFFFE) == 10 )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v48);
      if ( v19 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v19,
          sideEffectList,
          (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v19;
      }
LABEL_36:
      sub_1B00F28(sideEffectList, v22);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v19;
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
  System_Collections_Generic_HashSet_int__o *v9; // x19
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v14; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x21
  unsigned __int64 v17; // x22
  LostAssetLoadCompensateLogic___c_c *v18; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v20; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_48E47D6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method);
    sub_1B00CCC(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v7);
    sub_1B00CCC(&LostAssetLoadCompensateLogic___c_TypeInfo, v8);
    byte_48E47D6 = 1;
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, v10);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v12);
    if ( !SideEffectList )
      goto LABEL_21;
    monitor = SideEffectList[1].monitor;
    v16 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)monitor )
          sub_1B00F30(SideEffectList, v14);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v16[2].klass + v17),
                                                                          v14);
        if ( !v9 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v9,
          SideEffectList,
          (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v16[1].monitor;
        if ( (__int64)++v17 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_21:
      sub_1B00F28(SideEffectList, v14);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v18->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v20,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v22, v23);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_2D91F24 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v9 )
        goto LABEL_21;
      System_Collections_Generic_HashSet_int___UnionWith(
        v9,
        SideEffectList,
        (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v9;
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
  BitValue_T__o *EffectTypeBit_k__BackingField; // x23
  System_Collections_Generic_HashSet_int__o *v17; // x22
  BattleActionData_o *ActionDataFromActObj; // x0
  const MethodInfo *v19; // x1
  struct BattlePerformance_o *Perf_k__BackingField; // x8
  BattleActionData_o *nowAction; // x24
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  _QWORD *v24; // x23
  __int64 v25; // x8
  __int64 v26; // x0
  LostAssetLoadCompensateLogic___c_c *v27; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v29; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_48E47D2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_int___, argForShowAll);
    sub_1B00CCC(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1B00CCC(&System_Predicate_int__TypeInfo, v13);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v14);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1B00CCC(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v15);
    byte_48E47D2 = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_2F6B450 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
                                                                 v19);
    if ( !v17 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_2F6B450 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v22);
    if ( !v17 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_2F6B450 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                 nowAction,
                                                                 v23);
    if ( !v17 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v24 = Method_System_Array_Empty_int___;
    v25 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v25 )
    {
      sub_1B52C04(Method_System_Array_Empty_int___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1B52BA8(v26);
    if ( !*(_DWORD *)(v26 + 224) )
      j_il2cpp_runtime_class_init_0(v26);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v24[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1B52BA8(fsmStateAction);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v17 )
LABEL_37:
    sub_1B00F28(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_327B050 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v27->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1B00F18(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v29, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0LL);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v31, v32);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v17,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_327B574 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v17->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v17,
                                                                 v5,
                                                                 finishCallback,
                                                                 v33);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  Il2CppObject *v13; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  _BOOL8 v17; // x0
  __int64 v18; // x1
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v19; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_48E47DD & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&BattleEffectUtility_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v9);
    sub_1B00CCC(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v10);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1B00CCC(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v11);
    byte_48E47DD = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
    v13 = (Il2CppObject *)sub_1B00F18(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v13, 0LL);
    v4->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v13;
    p__8__1 = &v4->fields.__8__1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v13, v15, v16);
    if ( !v4->fields.__8__1
      || (v4->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v4->fields.effectIdHashSet) == 0LL) )
    {
LABEL_26:
      sub_1B00F28(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v29,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_327A9C4 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v17 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v30,
              (const MethodInfo_3139EE4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v17 )
        break;
      v19 = *p__8__1;
      if ( !*p__8__1 )
        sub_1B00F28(v17, v18);
      current = (int32_t)v30.fields._current;
      _9__0 = v19->fields.__9__0;
      ++v19->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v19,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v19->fields.__9__0 = _9__0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&v19->fields.__9__0, (int32_t)_9__0, v22, v23);
      }
      argForShowAll = v4->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1B00F28(v17, v18);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v30,
      (const MethodInfo_3139EE0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B00C70(p__2__current, 0, v2, v3);
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

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E47D8 & 1) == 0 )
  {
    sub_1B00CCC(&LostAssetLoadCompensateLogic___c_TypeInfo, v1);
    byte_48E47D8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_48E47DC & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B00CCC(&Method_System_Array_Empty_int___, x);
    byte_48E47DC = 1;
  }
  if ( !x )
    sub_1B00F28(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1B52C04(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1B52BA8(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1B52BA8(v8);
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
    sub_1B00F28(this, 0LL);
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

  if ( (byte_48E47DA & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B00CCC(&Method_System_Array_Empty_int___, x);
    byte_48E47DA = 1;
  }
  if ( !x )
    sub_1B00F28(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1B52C04(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1B52BA8(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1B52BA8(v8);
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
    sub_1B00F28(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
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

  if ( (byte_48E47DB & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B00CCC(&Method_System_Array_Empty_int___, x);
    byte_48E47DB = 1;
  }
  if ( !x )
    sub_1B00F28(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1B52C04(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1B52BA8(v8);
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1B52BA8(v9);
    return **(System_Collections_Generic_IEnumerable_int__o ***)(v9 + 184);
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

  if ( (byte_48E47D9 & 1) == 0 )
  {
    sub_1B00CCC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    byte_48E47D9 = 1;
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