System_Collections_IEnumerator_o *LostAssetLoadCompensateLogic__CoroutineLoad(
        System_Collections_Generic_HashSet_int__o *effectIdHashSet,
        CompensateArgForShowAll_o *argForShowAll,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D32F00 & 1) == 0 )
  {
    sub_1C93AD4(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_4D32F00 = 1;
  }
  v7 = sub_1C93D20(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)argForShowAll, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)finishCallback, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4D32F01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D32F01 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_1C93D2C(EffectIdsForShowHeal, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v7);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x20
  LostAssetLoadCompensateLogic___c_c *v12; // x0
  System_Func_object__object__o *_9__5_0; // x21
  Il2CppObject *v14; // x22
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v26; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_T__o *v34; // x22
  System_Collections_Generic_HashSet_int__o *v35; // x20
  LostAssetLoadCompensateLogic___c_c *v36; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v38; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v47; // x20
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x20
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  _BOOL8 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D32F04 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor___78987192);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_1C93AD4(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4D32F04 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)monitor )
          sub_1C93D34(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v9[2].klass + v10),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v9[1].monitor;
        if ( (__int64)++v10 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1C93D2C(SideEffectList, v6);
    }
LABEL_10:
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getBuffList(actionData, -1, v7);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)BuffList, 0) )
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
        _9__5_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v14,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
          (int32_t)_9__5_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_31DD360 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v23 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v23 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v23->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v23->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v23);
          v23 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v23->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v26,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0);
        v27 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v27->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->__9__5_1, (int32_t)_9__5_1, v28, v29, v30, v31, v32, v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v35 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_57824408(
        v35,
        v34,
        (const MethodInfo_3725498 *)Method_System_Collections_Generic_HashSet_int___ctor___78987192);
      v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v36->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          v36 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v38 = (Il2CppObject *)v36->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v38,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0);
        v39 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v39->__9__5_2 = _9__5_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v39->__9__5_2, (int32_t)_9__5_2, v40, v41, v42, v43, v44, v45);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v47 = SideEffectList;
      v48 = *(unsigned __int16 *)&SideEffectList->klass->_2.rank;
      if ( *(_WORD *)&SideEffectList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v48;
          p_offset += 4;
          if ( !v48 )
            goto LABEL_37;
        }
        v50 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_37:
        v50 = sub_1C69E5C(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v50)(
              v47,
              *(_QWORD *)(v50 + 8));
      if ( !v52 )
        sub_1C93D2C(0, v51);
      while ( 1 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_44;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_44:
          v56 = sub_1C69E5C(v52, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
          break;
        v57 = *(_QWORD *)v52;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_51;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_51:
          v60 = sub_1C69E5C(v52, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
        if ( !v24 )
          sub_1C93D2C(v61, v62);
        v63 = DataMasterBase_object__object__int___TryGetEntity(
                v24,
                &entity,
                v61,
                (const MethodInfo_34632C0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v63 )
        {
          if ( !entity )
            sub_1C93D2C(v63, v64);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            HIDWORD(entity[1].klass),
            (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v65 = *(_QWORD *)v52;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_61;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_61:
        v68 = sub_1C69E5C(v52, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v68)(v52, *(_QWORD *)(v68 + 8));
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
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v9; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v18; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v20; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  LostAssetLoadCompensateLogic___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v32; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  const MethodInfo *v41; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D32F02 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_1C93AD4(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1C93AD4(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_1C93AD4(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4D32F02 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( actionData )
  {
    DamageList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionData__getDamageList(
                                                                        actionData,
                                                                        -1,
                                                                        v4);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)DamageList, 0) )
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
        _9__3_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v9,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0,
          (int32_t)_9__3_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_31DD360 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v18->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v20 = (Il2CppObject *)v18->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v20,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0);
        v21 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v21->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21->__9__3_1, (int32_t)_9__3_1, v22, v23, v24, v25, v26, v27);
      }
      v28 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v29 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v30 = v28;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v29 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v29->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v29->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v32,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0);
        v33 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v33->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v33->__9__3_2, (int32_t)_9__3_2, v34, v35, v36, v37, v38, v39);
      }
      v40 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v30,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v40,
        (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v46.fields._current,
                                                                             v41);
      if ( !v3 )
        sub_1C93D2C(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, v43) || (actionData->fields.type & 0xFFFFFFFE) == 0xA )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v44);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_36:
      sub_1C93D2C(sideEffectList, v6);
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
  System_Func_object__object__o *_9__4_0; // x22
  Il2CppObject *v15; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D32F03 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C93AD4(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_1C93AD4(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4D32F03 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
          sub_1C93D34(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v10[2].klass + v11),
                                                                          v8);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v10[1].monitor;
        if ( (__int64)++v11 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_29:
      sub_1C93D2C(SideEffectList, v8);
    }
LABEL_10:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)HealList, 0) )
    {
      v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__4_0 = (System_Func_object__object__o *)v13->static_fields->__9__4_0;
      if ( !_9__4_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__4_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v15,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
          (int32_t)_9__4_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_31DD360 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_29;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    if ( BattleActionData__get_damagedatalist(actionData, v12) )
    {
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(
                                                                        actionData,
                                                                        v23);
      if ( !SideEffectList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        (System_Collections_Generic_List_object__o *)SideEffectList,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
        if ( !v24 )
          break;
        if ( !v28.fields._current )
          sub_1C93D2C(v24, v25);
        v26 = *(unsigned int *)((char *)&v28.fields._current->klass + (unsigned __int64)&qword_A8);
        if ( (int)v26 >= 1 )
        {
          if ( !v3 )
            sub_1C93D2C(v24, v26);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            v26,
            (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x3

  v5 = argForShowAll;
  v6 = fsmStateAction;
  if ( (byte_4D32EFF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C93AD4(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4D32EFF = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_33E3570 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_33E3570 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_33E3570 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v18 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v18);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v16[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C69B68(inited);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v8 )
LABEL_37:
    sub_1C93D2C(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
    _9__0_0 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v21, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v23, v24, v25, v26, v27, v28);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_3726AE0 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  if ( v8->fields._count > 0 )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__CoroutineLoad(
                                                                 v8,
                                                                 v5,
                                                                 finishCallback,
                                                                 v29);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o **p__8__1; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  _BOOL8 v18; // x0
  __int64 v19; // x1
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *v20; // x24
  int32_t current; // w21
  System_Action_o *_9__0; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct CompensateArgForShowAll_o *argForShowAll; // x8
  BattlePerformance_o *Perf_k__BackingField; // x23
  struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *_8__1; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4D32F0A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1C93AD4(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_4D32F0A = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
    v10 = (Il2CppObject *)sub_1C93D20(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v10, 0);
    v8->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v10;
    p__8__1 = &v8->fields.__8__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
    if ( !v8->fields.__8__1
      || (v8->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v8->fields.effectIdHashSet) == 0) )
    {
LABEL_26:
      sub_1C93D2C(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v34,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v35,
              (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v18 )
        break;
      v20 = *p__8__1;
      if ( !*p__8__1 )
        sub_1C93D2C(v18, v19);
      current = (int32_t)v35.fields._current;
      _9__0 = v20->fields.__9__0;
      ++v20->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v20,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0);
        v20->fields.__9__0 = _9__0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->fields.__9__0, (int32_t)_9__0, v23, v24, v25, v26, v27, v28);
      }
      argForShowAll = v8->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1C93D2C(v18, v19);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v35,
      (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32F05 & 1) == 0 )
  {
    sub_1C93AD4(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4D32F05 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)LostAssetLoadCompensateLogic___c_TypeInfo->static_fields,
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
  long double inited; // q0
  System_Collections_Generic_IEnumerable_int__o *result; // x0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4D32F09 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C93AD4(&Method_System_Array_Empty_int___);
    byte_4D32F09 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C69B68(inited);
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
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D32F07 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C93AD4(&Method_System_Array_Empty_int___);
    byte_4D32F07 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C69B68(inited);
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
    sub_1C93D2C(this, 0);
  return x->fields.sphit;
}


int32_t LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D32F08 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C93AD4(&Method_System_Array_Empty_int___);
    byte_4D32F08 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0 )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C69B68(inited);
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

  if ( (byte_4D32F06 & 1) == 0 )
  {
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    byte_4D32F06 = 1;
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