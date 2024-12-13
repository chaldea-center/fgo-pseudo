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

  if ( (byte_4B393B5 & 1) == 0 )
  {
    sub_1BD3458(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo, argForShowAll);
    byte_4B393B5 = 1;
  }
  v7 = sub_1BD36A4(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)effectIdHashSet, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)argForShowAll, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 56), (int64_t)finishCallback, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4B393B6 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__UnionWith__, method);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_4B393B6 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v6);
  if ( !v5 )
    sub_1BD36B4(EffectIdsForShowHeal, v8);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    EffectIdsForShowHeal,
    (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v9);
  System_Collections_Generic_HashSet_int___UnionWith(
    v5,
    EffectIdsForShowBuff,
    (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v44; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v47; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_T__o *v55; // x22
  System_Collections_Generic_HashSet_int__o *v56; // x20
  LostAssetLoadCompensateLogic___c_c *v57; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v59; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v68; // x20
  __int64 v69; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v72; // x1
  __int64 v73; // x20
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  _BOOL8 v84; // x0
  __int64 v85; // x1
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B393B9 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_AuraEffectMaster___, method);
    sub_1BD3458(&DataManager_TypeInfo, v3);
    sub_1BD3458(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___, v6);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_int___, v7);
    sub_1BD3458(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo, v8);
    sub_1BD3458(&System_Func_int__bool__TypeInfo, v9);
    sub_1BD3458(&System_Func_BattleActionData_BuffData__int__TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor___76899480, v13);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v14);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v15);
    sub_1BD3458(&System_IDisposable_TypeInfo, v16);
    sub_1BD3458(&System_Collections_Generic_IEnumerable_int__TypeInfo, v17);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_int__TypeInfo, v18);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__, v20);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__, v21);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__, v22);
    sub_1BD3458(&LostAssetLoadCompensateLogic___c_TypeInfo, v23);
    byte_4B393B9 = 1;
  }
  entity = 0LL;
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
          sub_1BD36BC(SideEffectList, v27);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v30[2].klass + v31),
                                                                          v27);
        if ( !v24 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v24,
          SideEffectList,
          (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v30[1].monitor;
        if ( (__int64)++v31 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1BD36B4(SideEffectList, v27);
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
        _9__5_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v35,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_2F65330 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v24 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v24,
        SideEffectList,
        (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v44 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v44 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v44->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v44->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v47,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0LL);
        v48 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v48->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v48->__9__5_1, (int64_t)_9__5_1, v49, v50, v51, v52, v53, v54);
      }
      v55 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v56 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_55000520(
        v56,
        v55,
        (const MethodInfo_3473DC8 *)Method_System_Collections_Generic_HashSet_int___ctor___76899480);
      v57 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v57 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v57->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v57->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v59,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0LL);
        v60 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v60->__9__5_2 = _9__5_2;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v60->__9__5_2, (int64_t)_9__5_2, v61, v62, v63, v64, v65, v66);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v56,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_2F7096C *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v68 = SideEffectList;
      v69 = *(unsigned __int16 *)(&SideEffectList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&SideEffectList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v69;
          p_offset += 4;
          if ( !v69 )
            goto LABEL_37;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_37:
        p_method = sub_1C25438(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v73 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
              v68,
              *(_QWORD *)(p_method + 8));
      if ( !v73 )
        sub_1BD36B4(0LL, v72);
      while ( 1 )
      {
        v74 = *(_QWORD *)v73;
        v75 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
        {
          v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v76 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v75;
            v76 += 4;
            if ( !v75 )
              goto LABEL_44;
          }
          v77 = v74 + 16LL * *v76 + 312;
        }
        else
        {
LABEL_44:
          v77 = sub_1C25438(v73, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v77)(v73, *(_QWORD *)(v77 + 8)) & 1) == 0 )
          break;
        v78 = *(_QWORD *)v73;
        v79 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
        {
          v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v80 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v79;
            v80 += 4;
            if ( !v79 )
              goto LABEL_51;
          }
          v81 = v78 + 16LL * *v80 + 312;
        }
        else
        {
LABEL_51:
          v81 = sub_1C25438(v73, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v82 = (*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v73, *(_QWORD *)(v81 + 8));
        if ( !v45 )
          sub_1BD36B4(v82, v83);
        v84 = DataMasterBase_object__object__int___TryGetEntity(
                v45,
                &entity,
                v82,
                (const MethodInfo_31D1F44 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v84 )
        {
          if ( !entity )
            sub_1BD36B4(v84, v85);
          System_Collections_Generic_HashSet_int___Add(
            v24,
            HIDWORD(entity[1].klass),
            (const MethodInfo_3474EDC *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v86 = *(_QWORD *)v73;
      v87 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
      {
        v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v88 - 1) != System_IDisposable_TypeInfo )
        {
          --v87;
          v88 += 4;
          if ( !v87 )
            goto LABEL_61;
        }
        v89 = v86 + 16LL * *v88 + 312;
      }
      else
      {
LABEL_61:
        v89 = sub_1C25438(v73, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v89)(v73, *(_QWORD *)(v89 + 8));
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v34; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v36; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  LostAssetLoadCompensateLogic___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v48; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x0
  const MethodInfo *v57; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B393B7 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___, v3);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__, v7);
    sub_1BD3458(&System_Func_BattleActionData_DamageData__bool__TypeInfo, v8);
    sub_1BD3458(&System_Func_BattleActionData_DamageData__int__TypeInfo, v9);
    sub_1BD3458(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__, v14);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__, v15);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__, v16);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__, v17);
    sub_1BD3458(&LostAssetLoadCompensateLogic___c_TypeInfo, v18);
    byte_4B393B7 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v19,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
        _9__3_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v25,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__3_0,
          (int64_t)_9__3_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_2F65330 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v19 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v19,
        sideEffectList,
        (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
        _9__3_1 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v36,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0LL);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v37->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v37->__9__3_1, (int64_t)_9__3_1, v38, v39, v40, v41, v42, v43);
      }
      v44 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v45 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v46 = v44;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v45 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v45->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v48,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0LL);
        v49 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v49->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v49->__9__3_2, (int64_t)_9__3_2, v50, v51, v52, v53, v54, v55);
      }
      v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v46,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_2F62540 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v19,
        v56,
        (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v62,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v62,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v62.fields._current,
                                                                             v57);
      if ( !v19 )
        sub_1BD36B4(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v19,
        EffectIdsForShowAll,
        (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v62,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v59) || (actionData->fields.type & 0xFFFFFFFE) == 10 )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v60);
      if ( v19 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v19,
          sideEffectList,
          (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v19;
      }
LABEL_36:
      sub_1BD36B4(sideEffectList, v22);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B393B8 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___, method);
    sub_1BD3458(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo, v3);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v5);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__, v7);
    sub_1BD3458(&LostAssetLoadCompensateLogic___c_TypeInfo, v8);
    byte_4B393B8 = 1;
  }
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v9,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
          sub_1BD36BC(SideEffectList, v14);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v16[2].klass + v17),
                                                                          v14);
        if ( !v9 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v9,
          SideEffectList,
          (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v16[1].monitor;
        if ( (__int64)++v17 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_21:
      sub_1BD36B4(SideEffectList, v14);
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
        _9__4_0 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v20,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0LL);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&static_fields->__9__4_0,
          (int64_t)_9__4_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_2F65330 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v9 )
        goto LABEL_21;
      System_Collections_Generic_HashSet_int___UnionWith(
        v9,
        SideEffectList,
        (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  long double inited; // q0
  _QWORD *v25; // x23
  __int64 v26; // x8
  __int64 v27; // x0
  LostAssetLoadCompensateLogic___c_c *v28; // x0
  System_Predicate_int__o *_9__0_0; // x23
  Il2CppObject *v30; // x24
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  const MethodInfo *v38; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_4B393B4 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_Empty_int___, argForShowAll);
    sub_1BD3458(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1BD3458(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1BD3458(&System_Predicate_int__TypeInfo, v13);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, v14);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1BD3458(
                                                                 &LostAssetLoadCompensateLogic___c_TypeInfo,
                                                                 v15);
    byte_4B393B4 = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1BD36A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_3473CD8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_3156260 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_3156260 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v22);
    if ( !v17 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_3156260 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v25 = Method_System_Array_Empty_int___;
    v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v26 )
    {
      sub_1C25390(Method_System_Array_Empty_int___);
      v26 = v25[7];
    }
    v27 = *(_QWORD *)(v26 + 16);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1C25334(inited);
    if ( !*(_DWORD *)(v27 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v27);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v25[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C25334(inited);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v17 )
LABEL_37:
    sub_1BD36B4(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_3474EEC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
  if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
    v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
  }
  _9__0_0 = v28->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__0_0 = (System_Predicate_int__o *)sub_1BD36A4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v30, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0LL);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v32, v33, v34, v35, v36, v37);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v17,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_3475410 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v17->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v17,
                                                                 v5,
                                                                 finishCallback,
                                                                 v38);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w8
  Il2CppObject *v17; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  _BOOL8 v25; // x0
  __int64 v26; // x1
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v27; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v42; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4B393BF & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&BattleEffectUtility_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_1BD3458(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__, v14);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1BD3458(
                                                                   &LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo,
                                                                   v15);
    byte_4B393BF = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
    v17 = (Il2CppObject *)sub_1BD36A4(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v17, 0LL);
    v8->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v17;
    p__8__1 = &v8->fields.__8__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v17, v19, v20, v21, v22, v23, v24);
    if ( !v8->fields.__8__1
      || (v8->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v8->fields.effectIdHashSet) == 0LL) )
    {
LABEL_26:
      sub_1BD36B4(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v41,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_3474860 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v42 = v41;
    while ( 1 )
    {
      v25 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v42,
              (const MethodInfo_3331B1C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v25 )
        break;
      v27 = *p__8__1;
      if ( !*p__8__1 )
        sub_1BD36B4(v25, v26);
      current = (int32_t)v42.fields._current;
      _9__0 = v27->fields.__9__0;
      ++v27->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v27,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0LL);
        v27->fields.__9__0 = _9__0;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v27->fields.__9__0, (int64_t)_9__0, v30, v31, v32, v33, v34, v35);
      }
      argForShowAll = v8->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1BD36B4(v25, v26);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0LL);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v42,
      (const MethodInfo_3331B18 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1BD33FC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B393BA & 1) == 0 )
  {
    sub_1BD3458(&LostAssetLoadCompensateLogic___c_TypeInfo, v1);
    byte_4B393BA = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B393BE & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1BD3458(&Method_System_Array_Empty_int___, x);
    byte_4B393BE = 1;
  }
  if ( !x )
    sub_1BD36B4(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C25390(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C25334(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C25334(inited);
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
    sub_1BD36B4(this, 0LL);
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

  if ( (byte_4B393BC & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1BD3458(&Method_System_Array_Empty_int___, x);
    byte_4B393BC = 1;
  }
  if ( !x )
    sub_1BD36B4(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C25390(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C25334(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C25334(inited);
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
    sub_1BD36B4(this, 0LL);
  return x->fields.sphit;
}


int32_t __fastcall LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
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

  if ( (byte_4B393BD & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1BD3458(&Method_System_Array_Empty_int___, x);
    byte_4B393BD = 1;
  }
  if ( !x )
    sub_1BD36B4(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0LL )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C25390(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C25334(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C25334(inited);
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

  if ( (byte_4B393BB & 1) == 0 )
  {
    sub_1BD3458(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    byte_4B393BB = 1;
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