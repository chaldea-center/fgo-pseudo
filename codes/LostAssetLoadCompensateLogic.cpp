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

  if ( (byte_4CC992E & 1) == 0 )
  {
    sub_1C713B0(&LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
    byte_4CC992E = 1;
  }
  v7 = sub_1C715FC(LostAssetLoadCompensateLogic__CoroutineLoad_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = effectIdHashSet;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)effectIdHashSet, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = argForShowAll;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)argForShowAll, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 56) = finishCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)finishCallback, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4CC992F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CC992F = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  EffectIdsForShowHeal = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                          actionData,
                                                                          v4);
  if ( !v3 )
    sub_1C71608(EffectIdsForShowHeal, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowHeal,
    (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  EffectIdsForShowBuff = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowBuff(
                                                                          actionData,
                                                                          v7);
  System_Collections_Generic_HashSet_int___UnionWith(
    v3,
    EffectIdsForShowBuff,
    (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Master_object; // x0
  LostAssetLoadCompensateLogic___c_c *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  System_Func_object__int__o *_9__5_1; // x22
  Il2CppObject *v24; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_T__o *v32; // x22
  System_Collections_Generic_HashSet_int__o *v33; // x20
  LostAssetLoadCompensateLogic___c_c *v34; // x0
  System_Func_int__bool__o *_9__5_2; // x22
  Il2CppObject *v36; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v45; // x20
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x20
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC9932 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_AuraEffectMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C713B0(&System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleActionData_BuffData__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor___78566240);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__);
    sub_1C713B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4CC9932 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
          sub_1C71610(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v7[2].klass + v8),
                                                                          v5);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v7[1].monitor;
        if ( (__int64)++v8 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_65:
      sub_1C71608(SideEffectList, v5);
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
        _9__5_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleActionData_BuffData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__5_0,
          v12,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Func_BattleActionData_BuffData__IEnumerable_int___o *)_9__5_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
          (int32_t)_9__5_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        BuffList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__5_0,
                                                                        (const MethodInfo_3184634 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_BuffData__int___);
      if ( !v3 )
        goto LABEL_65;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_AuraEffectMaster___);
      v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_1 = (System_Func_object__int__o *)v21->static_fields->__9__5_1;
      if ( !_9__5_1 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v21->static_fields->__9;
        _9__5_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleActionData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__5_1,
          v24,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_1__,
          0);
        v25 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v25->__9__5_1 = (struct System_Func_BattleActionData_BuffData__int__o *)_9__5_1;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v25->__9__5_1, (int32_t)_9__5_1, v26, v27, v28, v29, v30, v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             BuffList,
                                                             (System_Func_TSource__TResult__o *)_9__5_1,
                                                             (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_BattleActionData_BuffData__int___);
      v33 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor_57413200(
        v33,
        v32,
        (const MethodInfo_36C0E50 *)Method_System_Collections_Generic_HashSet_int___ctor___78566240);
      v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__5_2 = v34->static_fields->__9__5_2;
      if ( !_9__5_2 )
      {
        if ( !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          v34 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v34->static_fields->__9;
        _9__5_2 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__5_2,
          v36,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowBuff_b__5_2__,
          0);
        v37 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v37->__9__5_2 = _9__5_2;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v37->__9__5_2, (int32_t)_9__5_2, v38, v39, v40, v41, v42, v43);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                                        (System_Func_TSource__bool__o *)_9__5_2,
                                                                        (const MethodInfo_3191B60 *)Method_System_Linq_Enumerable_Where_int___);
      if ( !SideEffectList )
        goto LABEL_65;
      klass = SideEffectList->klass;
      v45 = SideEffectList;
      v46 = *(unsigned __int16 *)&SideEffectList->klass->_2.rank;
      if ( *(_WORD *)&SideEffectList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v46;
          p_offset += 4;
          if ( !v46 )
            goto LABEL_37;
        }
        v48 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_37:
        v48 = sub_1C47738(SideEffectList, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v50 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v48)(
              v45,
              *(_QWORD *)(v48 + 8));
      if ( !v50 )
        sub_1C71608(0, v49);
      while ( 1 )
      {
        v51 = *(_QWORD *)v50;
        v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
        {
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v52;
            v53 += 4;
            if ( !v52 )
              goto LABEL_44;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_44:
          v54 = sub_1C47738(v50, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
          break;
        v55 = *(_QWORD *)v50;
        v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
        {
          v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v57 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v56;
            v57 += 4;
            if ( !v56 )
              goto LABEL_51;
          }
          v58 = v55 + 16LL * *v57 + 312;
        }
        else
        {
LABEL_51:
          v58 = sub_1C47738(v50, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
        if ( !v22 )
          sub_1C71608(v59, v60);
        v61 = DataMasterBase_object__object__int___TryGetEntity(
                v22,
                &entity,
                v59,
                (const MethodInfo_3408ECC *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__TryGetEntity__);
        if ( v61 )
        {
          if ( !entity )
            sub_1C71608(v61, v62);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            HIDWORD(entity[1].klass),
            (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      v63 = *(_QWORD *)v50;
      v64 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
      {
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_61;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_61:
        v66 = sub_1C47738(v50, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v66)(v50, *(_QWORD *)(v66 + 8));
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_T__o *sideEffectList; // x0
  LostAssetLoadCompensateLogic___c_c *v17; // x0
  System_Func_object__bool__o *_9__3_1; // x22
  Il2CppObject *v19; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  LostAssetLoadCompensateLogic___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v31; // x23
  struct LostAssetLoadCompensateLogic___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  const MethodInfo *v40; // x1
  System_Collections_Generic_IEnumerable_T__o *EffectIdsForShowAll; // x0
  const MethodInfo *v42; // x1
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC9930 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData__get_Current__);
    sub_1C713B0(&System_Func_BattleActionData_DamageData__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleActionData_DamageData__int__TypeInfo);
    sub_1C713B0(&System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__);
    sub_1C713B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4CC9930 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
        _9__3_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleActionData_DamageData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__3_0,
          v8,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleActionData_DamageData__IEnumerable_int___o *)_9__3_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0,
          (int32_t)_9__3_0,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15);
      }
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        DamageList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__3_0,
                                                                        (const MethodInfo_3184634 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_DamageData__int___);
      if ( !v3 )
        goto LABEL_36;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        sideEffectList,
        (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
      v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_1 = (System_Func_object__bool__o *)v17->static_fields->__9__3_1;
      if ( !_9__3_1 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v17->static_fields->__9;
        _9__3_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleActionData_DamageData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_1,
          v19,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_1__,
          0);
        v20 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v20->__9__3_1 = (struct System_Func_BattleActionData_DamageData__bool__o *)_9__3_1;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->__9__3_1, (int32_t)_9__3_1, v21, v22, v23, v24, v25, v26);
      }
      v27 = System_Linq_Enumerable__Where_object_(
              DamageList,
              (System_Func_TSource__bool__o *)_9__3_1,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleActionData_DamageData___);
      v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
      v29 = v27;
      if ( !LostAssetLoadCompensateLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LostAssetLoadCompensateLogic___c_TypeInfo);
        v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
      }
      _9__3_2 = (System_Func_object__int__o *)v28->static_fields->__9__3_2;
      if ( !_9__3_2 )
      {
        if ( !v28->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v28);
          v28 = LostAssetLoadCompensateLogic___c_TypeInfo;
        }
        v31 = (Il2CppObject *)v28->static_fields->__9;
        _9__3_2 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleActionData_DamageData__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__3_2,
          v31,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowDamage_b__3_2__,
          0);
        v32 = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        v32->__9__3_2 = (struct System_Func_BattleActionData_DamageData__int__o *)_9__3_2;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v32->__9__3_2, (int32_t)_9__3_2, v33, v34, v35, v36, v37, v38);
      }
      v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                             v29,
                                                             (System_Func_TSource__TResult__o *)_9__3_2,
                                                             (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_BattleActionData_DamageData__int___);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        v39,
        (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)actionData->fields.sideEffectList;
    if ( !sideEffectList )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)sideEffectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleActionData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__MoveNext__) )
    {
      EffectIdsForShowAll = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                             (BattleActionData_o *)v44.fields._current,
                                                                             v40);
      if ( !v3 )
        sub_1C71608(EffectIdsForShowAll, EffectIdsForShowAll);
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        EffectIdsForShowAll,
        (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData__Dispose__);
    if ( BattleActionData__isCommandAttack(actionData, 0) || BattleActionData__isCommonEnemyAttack(actionData, 0) )
    {
      sideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                        actionData,
                                                                        v42);
      if ( v3 )
      {
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          sideEffectList,
          (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        return (System_Collections_Generic_IEnumerable_int__o *)v3;
      }
LABEL_36:
      sub_1C71608(sideEffectList, v5);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC9931 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__get_Current__);
    sub_1C713B0(&System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__);
    sub_1C713B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4CC9931 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
          sub_1C71610(SideEffectList);
        SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowAll(
                                                                          *((BattleActionData_o **)&v8[2].klass + v9),
                                                                          v6);
        if ( !v3 )
          break;
        System_Collections_Generic_HashSet_int___UnionWith(
          v3,
          SideEffectList,
          (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
        LODWORD(monitor) = v8[1].monitor;
        if ( (__int64)++v9 >= (int)monitor )
          goto LABEL_10;
      }
LABEL_29:
      sub_1C71608(SideEffectList, v6);
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
        _9__4_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleActionData_HealData__IEnumerable_int___TypeInfo);
        System_Func_object__object____ctor(
          _9__4_0,
          v12,
          Method_LostAssetLoadCompensateLogic___c__ExtractEffectIdsForShowHeal_b__4_0__,
          0);
        static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
        static_fields->__9__4_0 = (struct System_Func_BattleActionData_HealData__IEnumerable_int___o *)_9__4_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0,
          (int32_t)_9__4_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                        HealList,
                                                                        (System_Func_TSource__IEnumerable_TResult___o *)_9__4_0,
                                                                        (const MethodInfo_3184634 *)Method_System_Linq_Enumerable_SelectMany_BattleActionData_HealData__int___);
      if ( !v3 )
        goto LABEL_29;
      System_Collections_Generic_HashSet_int___UnionWith(
        v3,
        SideEffectList,
        (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    }
    if ( BattleActionData__get_damagedatalist(actionData, 0) )
    {
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__get_damagedatalist(
                                                                        actionData,
                                                                        0);
      if ( !SideEffectList )
        goto LABEL_29;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)SideEffectList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleActionData_DamageData__GetEnumerator__);
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__MoveNext__);
        if ( !v20 )
          break;
        if ( !v24.fields._current )
          sub_1C71608(v20, v21);
        v22 = *(unsigned int *)((char *)&v24.fields._current->klass + (unsigned __int64)&qword_A8);
        if ( (int)v22 >= 1 )
        {
          if ( !v3 )
            sub_1C71608(v20, v22);
          System_Collections_Generic_HashSet_int___Add(
            v3,
            v22,
            (const MethodInfo_36C1F64 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_DamageData__Dispose__);
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
  if ( (byte_4CC992D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&System_Predicate_int__TypeInfo);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__);
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C713B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4CC992D = 1;
  }
  if ( !v5 )
    goto LABEL_37;
  EffectTypeBit_k__BackingField = (BitValue_T__o *)v5->fields._EffectTypeBit_k__BackingField;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_36C0D60 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !EffectTypeBit_k__BackingField )
    goto LABEL_37;
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               1,
                                                               (const MethodInfo_3388D44 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  Perf_k__BackingField = v5->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_37;
  nowAction = Perf_k__BackingField->fields.nowAction;
  if ( BitValue_Int32Enum___Check(
         EffectTypeBit_k__BackingField,
         2,
         (const MethodInfo_3388D44 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__) )
  {
    fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)LostAssetLoadCompensateLogic__ExtractEffectIdsForShowHeal(
                                                                 nowAction,
                                                                 v13);
    if ( !v8 )
      goto LABEL_37;
    System_Collections_Generic_HashSet_int___UnionWith(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)fsmStateAction,
      (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)BitValue_Int32Enum___Check(
                                                               EffectTypeBit_k__BackingField,
                                                               4,
                                                               (const MethodInfo_3388D44 *)Method_BitValue_CompensateArgForShowAll_EffectType__Check__);
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
      (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
  argForShowAll = (CompensateArgForShowAll_o *)v5->fields._ExtraEffectIdArray_k__BackingField;
  if ( !argForShowAll )
  {
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v18 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v18);
    fsmStateAction = *(HutongGames_PlayMaker_FsmStateAction_o **)(v16[7] + 16LL);
    if ( (BYTE5(fsmStateAction[3].fields._DisplayName_k__BackingField) & 1) == 0 )
      fsmStateAction = (HutongGames_PlayMaker_FsmStateAction_o *)sub_1C47444(inited);
    argForShowAll = **(CompensateArgForShowAll_o ***)&fsmStateAction[2].fields.enabled;
  }
  if ( !v8 )
LABEL_37:
    sub_1C71608(fsmStateAction, argForShowAll);
  System_Collections_Generic_HashSet_int___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)argForShowAll,
    (const MethodInfo_36C1F74 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
    _9__0_0 = (System_Predicate_int__o *)sub_1C715FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__0_0, v21, Method_LostAssetLoadCompensateLogic___c__SearchAndLoad_b__0_0__, 0);
    static_fields = LostAssetLoadCompensateLogic___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = _9__0_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v23, v24, v25, v26, v27, v28);
  }
  System_Collections_Generic_HashSet_int___RemoveWhere(
    v8,
    (System_Predicate_T__o *)_9__0_0,
    (const MethodInfo_36C2498 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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
  bool result; // w0
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+20h] [xbp-80h] BYREF

  v8 = this;
  if ( (byte_4CC9938 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BattleEffectUtility_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C713B0(&Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__);
    this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)sub_1C713B0(&LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    byte_4CC9938 = 1;
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
    v10 = (Il2CppObject *)sub_1C715FC(LostAssetLoadCompensateLogic___c__DisplayClass1_0_TypeInfo);
    System_Object___ctor(v10, 0);
    v8->fields.__8__1 = (struct LostAssetLoadCompensateLogic___c__DisplayClass1_0_o *)v10;
    p__8__1 = &v8->fields.__8__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
    if ( !v8->fields.__8__1
      || (v8->fields.__8__1->fields.checkCount = 0,
          (this = (LostAssetLoadCompensateLogic__CoroutineLoad_d__1_o *)v8->fields.effectIdHashSet) == 0) )
    {
LABEL_26:
      sub_1C71608(this, method);
    }
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v34,
      (System_Collections_Generic_HashSet_int__o *)this,
      (const MethodInfo_36C18E8 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v18 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v35,
              (const MethodInfo_3592248 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v18 )
        break;
      v20 = *p__8__1;
      if ( !*p__8__1 )
        sub_1C71608(v18, v19);
      current = (int32_t)v35.fields._current;
      _9__0 = v20->fields.__9__0;
      ++v20->fields.checkCount;
      if ( !_9__0 )
      {
        _9__0 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__0,
          (Il2CppObject *)v20,
          Method_LostAssetLoadCompensateLogic___c__DisplayClass1_0__CoroutineLoad_b__0__,
          0);
        v20->fields.__9__0 = _9__0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->fields.__9__0, (int32_t)_9__0, v23, v24, v25, v26, v27, v28);
      }
      argForShowAll = v8->fields.argForShowAll;
      if ( !argForShowAll )
        sub_1C71608(v18, v19);
      Perf_k__BackingField = argForShowAll->fields._Perf_k__BackingField;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__LoadEffectAssetIfNotYet(current, _9__0, Perf_k__BackingField, 0);
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v35,
      (const MethodInfo_3592244 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  }
  _8__1 = v8->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_26;
  if ( _8__1->fields.checkCount > 0 )
  {
    v8->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C71354(p__2__current, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_LostAssetLoadCompensateLogic__CoroutineLoad_d__1_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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

  if ( (byte_4CC9933 & 1) == 0 )
  {
    sub_1C713B0(&LostAssetLoadCompensateLogic___c_TypeInfo);
    byte_4CC9933 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(LostAssetLoadCompensateLogic___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LostAssetLoadCompensateLogic___c_TypeInfo->static_fields->__9 = (struct LostAssetLoadCompensateLogic___c_o *)v1;
  sub_1C71354(
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

  if ( (byte_4CC9937 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C713B0(&Method_System_Array_Empty_int___);
    byte_4CC9937 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.effectList;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C47444(inited);
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
    sub_1C71608(this, 0);
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

  if ( (byte_4CC9935 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C713B0(&Method_System_Array_Empty_int___);
    byte_4CC9935 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  result = (System_Collections_Generic_IEnumerable_int__o *)x->fields.damageValueEffectIds;
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C47444(inited);
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
    sub_1C71608(this, 0);
  return x->fields.sphit;
}


int32_t LostAssetLoadCompensateLogic___c___ExtractEffectIdsForShowDamage_b__3_2(
        LostAssetLoadCompensateLogic___c_o *this,
        BattleActionData_DamageData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
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

  if ( (byte_4CC9936 & 1) == 0 )
  {
    this = (LostAssetLoadCompensateLogic___c_o *)sub_1C713B0(&Method_System_Array_Empty_int___);
    byte_4CC9936 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  effect = x->fields.effect;
  if ( !effect || (result = (System_Collections_Generic_IEnumerable_int__o *)effect->fields.effectList) == 0 )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C47444(inited);
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

  if ( (byte_4CC9934 & 1) == 0 )
  {
    sub_1C713B0(&BattleEffectUtility_TypeInfo);
    byte_4CC9934 = 1;
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