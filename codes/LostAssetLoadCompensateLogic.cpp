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

  if ( (byte_49FE48A & 1) == 0 )
  {
    sub_1B640C8(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll);
    byte_49FE48A = 1;
  }
  v7 = sub_1B64314(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll, finishCallback);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)argForShowAll, v10, v11);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)finishCallback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *v6; // x20
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowHeal; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowBuff; // x0

  if ( (byte_49FE48B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_49FE48B = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v7);
  if ( !v6 )
    sub_1B64324(EffectIdsForShowHeal);
  System_Collections_Generic_HashSet_int___UnionWith(
    v6,
    EffectIdsForShowHeal,
    (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v9);
  System_Collections_Generic_HashSet_int___UnionWith(
    v6,
    EffectIdsForShowBuff,
    (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  return (System_Collections_Generic_IEnumerable_int__o *)v6;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_HashSet_int__o *v25; // x19
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v31; // x21
  unsigned __int64 v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  LostAssetLoadCompensateLogic___c_c *v36; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v38; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  Il2CppObject *Master_object; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  LostAssetLoadCompensateLogic___c_c *v45; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v46; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v48; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_T__o *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_HashSet_int__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  LostAssetLoadCompensateLogic___c_c *v58; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v60; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v65; // x20
  __int64 v66; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v69; // x20
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x0
  _BOOL8 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FE48E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1B640C8(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v9);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleActionData_BuffData__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v14);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v15);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_1B640C8(&System_IDisposable_TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v18);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v19);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v21);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v22);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v23);
    sub_1B640C8(&LostAssetLoadCompensateLogic___c_TypeInfo, v24);
    byte_49FE48E = 1;
  }
  entity = 0LL;
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v26);
    if ( !SideEffectList )
      goto LABEL_65;
    monitor = SideEffectList[1].monitor;
    v31 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)monitor )
          sub_1B6432C(SideEffectList, v28);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v31[2].klass + v32),
                                                                          v28);
        if ( !v25 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v25,
          SideEffectList,
          (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v31[1].monitor;
        if ( (__int64)++v32 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1B64324(SideEffectList);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, v29);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0LL) )
    {
      v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_0 = (System_Func_object__object__o *)v36->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v36->static_fields->__9;
        _9__5_0 = (System_Func_object__object__o *)sub_1B64314(
                                                     System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo,
                                                     v34,
                                                     v35);
        System_Func_object__object____ctor(
          _9__5_0,
          v38,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v40, v41);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v25 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v25,
        SideEffectList,
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v45 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v46 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v45 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v45->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1B64314(
                                                  System_Func_BattleActionData_BuffData__int__TypeInfo,
                                                  v43,
                                                  v44);
        System_Func_object__int____ctor(
          _9__5_1,
          v48,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0LL);
        v49 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v49->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v49->__9__5_1, (int32_t)_9__5_1, v50, v51);
      }
      v52 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v55 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v53,
                                                           v54);
      System_Collections_Generic_HashSet_int____ctor_53885596(
        v55,
        v52,
        (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
      v58 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v58 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v58->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v58->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v58);
          v58 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v60 = (Il2CppObject *)v58->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v56, v57);
        System_Func_int__bool____ctor(
          _9__5_2,
          v60,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0LL);
        v61 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v61->__9__5_2 = _9__5_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->__9__5_2, (int32_t)_9__5_2, v62, v63);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v55,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v65 = SideEffectList;
      v66 = *(unsigned __int16 *)(&SideEffectList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SideEffectList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v66;
          p_offset += 4;
          if ( !v66 )
            goto LABEL_37;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_37:
        p_method = sub_1BB60A8(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v69 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v65,
              *(_QWORD *)(p_method + 8));
      if ( !v69 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v70 = *(_QWORD *)v69;
        v71 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
        {
          v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v72 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v71;
            v72 += 4;
            if ( !v71 )
              goto LABEL_44;
          }
          v73 = v70 + 16LL * *v72 + 312;
        }
        else
        {
LABEL_44:
          v73 = sub_1BB60A8(v69, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8)) & 1) == 0 )
          break;
        v74 = *(_QWORD *)v69;
        v75 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
        {
          v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v76 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v75;
            v76 += 4;
            if ( !v75 )
              goto LABEL_51;
          }
          v77 = v74 + 16LL * *v76 + 312;
        }
        else
        {
LABEL_51:
          v77 = sub_1BB60A8(v69, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v78 = (*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v69, *(_QWORD *)(v77 + 8));
        if ( !v46 )
          sub_1B64324(v78);
        v79 = DataMasterBase_object__object__int___TryGetEntity(
                v46,
                &entity,
                v78,
                (const MethodInfo_30D3EF8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v79 )
        {
          if ( !entity )
            sub_1B64324(v79);
          System_Collections_Generic_HashSet_int___Add(
            v25,
            HIDWORD(entity[1].klass),
            (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v80 = *(_QWORD *)v69;
      v81 = *(unsigned __int16 *)(*(_QWORD *)v69 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v69 + 302LL) )
      {
        v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
        {
          --v81;
          v82 += 4;
          if ( !v81 )
            goto LABEL_61;
        }
        v83 = v80 + 16LL * *v82 + 312;
      }
      else
      {
LABEL_61:
        v83 = sub_1BB60A8(v69, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v83)(v69, *(_QWORD *)(v83 + 8));
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v25;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_HashSet_int__o *v20; // x20
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerable_TSource__o *DamageList; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  LostAssetLoadCompensateLogic___c_c *v25; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v27; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  LostAssetLoadCompensateLogic___c_c *v34; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v36; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  LostAssetLoadCompensateLogic___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v46; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  const MethodInfo *v51; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FE48C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v8);
    sub_1B640C8(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v9);
    sub_1B640C8(&System_Func_BattleActionData_DamageData__int__TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v15);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v16);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v17);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v18);
    sub_1B640C8(&LostAssetLoadCompensateLogic___c_TypeInfo, v19);
    byte_49FE48C = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v20,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        v21);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0LL) )
    {
      v25 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v25 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__object__o *)v25->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__3_0 = (System_Func_object__object__o *)sub_1B64314(
                                                     System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo,
                                                     v23,
                                                     v24);
        System_Func_object__object____ctor(
          _9__3_0,
          v27,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v29, v30);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v20 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v20,
        sideEffectList,
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v34->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v34->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                   System_Func_BattleActionData_DamageData__bool__TypeInfo,
                                                   v32,
                                                   v33);
        System_Func_object__bool____ctor(
          _9__3_1,
          v36,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0LL);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v37->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->__9__3_1, (int32_t)_9__3_1, v38, v39);
      }
      v40 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v43 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v44 = v40;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v43 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v43->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v43->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1B64314(
                                                  System_Func_BattleActionData_DamageData__int__TypeInfo,
                                                  v41,
                                                  v42);
        System_Func_object__int____ctor(
          _9__3_2,
          v46,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0LL);
        v47 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v47->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v47->__9__3_2, (int32_t)_9__3_2, v48, v49);
      }
      v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v44,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v20,
        v50,
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v56,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v56.fields._current,
                                                                             v51);
      if ( !v20 )
        sub_1B64324(EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v20,
        EffectIdsForShowAll,
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v56,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v53) || (actionData->fields.type & 0xFFFFFFFE) == 10 )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v54);
      if ( v20 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v20,
          sideEffectList,
          (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v20;
      }
LABEL_36:
      sub_1B64324(sideEffectList);
    }
  }
  return (System_Collections_Generic_IEnumerable_int__o *)v20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_HashSet_int__o *v10; // x19
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *HealList; // x20
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x0
  const MethodInfo *v15; // x1
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x21
  unsigned __int64 v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  LostAssetLoadCompensateLogic___c_c *v21; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v23; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FE48D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method);
    sub_1B640C8(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v8);
    sub_1B640C8(&LostAssetLoadCompensateLogic___c_TypeInfo, v9);
    byte_49FE48D = 1;
  }
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_HashSet_int____ctor(
    v10,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    HealList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getHealList(actionData, -1, v11);
    SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                      actionData,
                                                                      4,
                                                                      v13);
    if ( !SideEffectList )
      goto LABEL_21;
    monitor = SideEffectList[1].monitor;
    v17 = SideEffectList;
    if ( (int)monitor >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)monitor )
          sub_1B6432C(SideEffectList, v15);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v17[2].klass + v18),
                                                                          v15);
        if ( !v10 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v10,
          SideEffectList,
          (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v17[1].monitor;
        if ( (__int64)++v18 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_21:
      sub_1B64324(SideEffectList);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0LL) )
    {
      v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v21->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1B64314(
                                                     System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo,
                                                     v19,
                                                     v20);
        System_Func_object__object____ctor(
          _9__4_0,
          v23,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v25, v26);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v10 )
        goto LABEL_21;
      System_Collections_Generic_HashSet_int___UnionWith(
        v10,
        SideEffectList,
        (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  System_Collections_Generic_IEnumerable_T__o *ExtraEffectIdArray_k__BackingField; // x1
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  LostAssetLoadCompensateLogic___c_c *v30; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v32; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x3

  v6 = fsmStateAction;
  if ( (byte_49FE489 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, argForShowAll);
    sub_1B640C8(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v13);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v14);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1B640C8(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v15);
    byte_49FE489 = 1;
  }
  if ( !argForShowAll )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)argForShowAll->fields._EffectTypeBit_k__BackingField;
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       argForShowAll,
                                                       finishCallback);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_30588A8 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
  if ( ((unsigned __int8)fsmStateAction & 1) != 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)argForShowAll->fields._Perf_k__BackingField;
    if ( !fsmStateAction )
      goto LABEL_37;
    ActionDataFromActObj = BattlePerformance__GetActionDataFromActObj(
                             (BattlePerformance_o *)fsmStateAction,
                             argForShowAll->fields._ActObj_k__BackingField,
                             0LL);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowDamage(
                                                                 ActionDataFromActObj,
                                                                 v19);
    if ( !v17 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_30588A8 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v22);
    if ( !v17 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_30588A8 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  ExtraEffectIdArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)argForShowAll->fields._ExtraEffectIdArray_k__BackingField;
  if ( !ExtraEffectIdArray_k__BackingField )
  {
    v25 = Method_System_Array_Empty_int___;
    v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v26 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BB5FA4(v27);
    if ( !*(_DWORD *)(v27 + 224) )
      j_il2cpp_runtime_class_init_0(v27);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v25[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1BB5FA4(fsmStateAction);
    ExtraEffectIdArray_k__BackingField = **(System_Collections_Generic_IEnumerable_T__o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v17 )
LABEL_37:
    sub_1B64324(fsmStateAction);
  System_Collections_Generic_HashSet_int___UnionWith(
    v17,
    ExtraEffectIdArray_k__BackingField,
    (const MethodInfo_3364BC0 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v30->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v28, v29);
    System_Predicate_int____ctor(_9__0_0, v32, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0LL);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v34, v35);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v17,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_33650E4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v17->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v17,
                                                                 argForShowAll,
                                                                 finishCallback,
                                                                 v36);
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
  __int64 v2; // x2
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
  __int64 v19; // x2
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v20; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v31; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_49FE494 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&BattleEffectUtility_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v9);
    sub_1B640C8(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v10);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1B640C8(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v11);
    byte_49FE494 = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
    v13 = (Il2CppObject *)sub_1B64314(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo, method, v2);
    System_Object___ctor(v13, 0LL);
    v4->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v13;
    p__8__1 = &v4->fields.__8__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v13, v15, v16);
    if ( !v4->fields.__8__1
      || (v4->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v4->fields.effectIdHashSet) == 0LL) )
    {
LABEL_26:
      sub_1B64324(this);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v30,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v17 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v31,
              (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v17 )
        break;
      v20 = *p__8__1;
      if ( !*p__8__1 )
        sub_1B64324(v17);
      current = (int32_t)v31.fields._current;
      _9__0 = v20->fields.__9__0;
      ++v20->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v20,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v20->fields.__9__0 = _9__0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->fields.__9__0, (int32_t)_9__0, v23, v24);
      }
      argForShowAll = v4->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1B64324(v17);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v31,
      (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v4->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(p__2__current, 0, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE48F & 1) == 0 )
  {
    sub_1B640C8(&LostAssetLoadCompensateLogic___c_TypeInfo, v1);
    byte_49FE48F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(LostAssetLoadCompensateLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FE493 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B640C8(&Method_System_Array_Empty_int___, x);
    byte_49FE493 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BB5FA4(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BB5FA4(v8);
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
    sub_1B64324(this);
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

  if ( (byte_49FE491 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B640C8(&Method_System_Array_Empty_int___, x);
    byte_49FE491 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BB5FA4(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BB5FA4(v8);
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
    sub_1B64324(this);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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

  if ( (byte_49FE492 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1B640C8(&Method_System_Array_Empty_int___, x);
    byte_49FE492 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BB5FA4(v8);
    if ( !*(_DWORD *)(v8 + 224) )
      j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BB5FA4(v9);
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

  if ( (byte_49FE490 & 1) == 0 )
  {
    sub_1B640C8(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    byte_49FE490 = 1;
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