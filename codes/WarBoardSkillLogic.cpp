void WarBoardSkillLogic___ctor(WarBoardSkillLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *WarBoardSkillLogic__GetTargetList(
        WarBoardSkillLogic_o *this,
        int32_t targetType,
        System_Collections_Generic_List_WarBoardPieceData__o *playerGroupList,
        System_Collections_Generic_List_WarBoardPieceData__o *enemyGroupList,
        WarBoardManager_WarBoardOnBoardSkillParam_o *param,
        int32_t npcActorId,
        const MethodInfo *method)
{
  __int64 v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *IsNullOrEmpty; // x0
  __int64 size; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  System_Collections_Generic_List_object__o *v18; // x20
  System_Collections_Generic_List_object__o *v19; // x22
  bool v20; // zf
  System_Collections_Generic_List_object__o *v21; // x25
  int v22; // w8
  System_Func_object__bool__o *v23; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v24; // x0
  System_Func_TSource__bool__o *v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x22
  System_Func_object__bool__o *v27; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  System_Func_object__bool__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Func_object__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Func_object__bool__o *v49; // x24
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x1
  Il2CppClass **v54; // x0
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB3EDC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_1C6BA08(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    sub_1C6BA08(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
    sub_1C6BA08(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__);
    sub_1C6BA08(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__);
    sub_1C6BA08(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__);
    sub_1C6BA08(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__);
    sub_1C6BA08(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__);
    sub_1C6BA08(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
    sub_1C6BA08(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
    byte_4CB3EDC = 1;
  }
  memset(&v56, 0, sizeof(v56));
  v12 = sub_1C6BC54(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 16) = param;
  v17 = v12 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)param, v15, v16);
  *(_DWORD *)(v12 + 24) = npcActorId;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    v22 = targetType - 1;
    v21 = (System_Collections_Generic_List_object__o *)playerGroupList;
    switch ( v22 )
    {
      case 0:
        if ( !*(_QWORD *)v17 )
          goto LABEL_58;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                               *(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 16LL),
                                                                               0);
        v21 = v19;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v23 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v23,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0);
        v24 = playerGroupList;
        v25 = (System_Func_TSource__bool__o *)v23;
        goto LABEL_50;
      case 2:
        goto LABEL_27;
      case 3:
        if ( !*(_QWORD *)v17 )
          goto LABEL_58;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                               *(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 16LL),
                                                                               0);
        v21 = v19;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v49 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v49,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0);
        v24 = enemyGroupList;
        v25 = (System_Func_TSource__bool__o *)v49;
LABEL_50:
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                                               v25,
                                                                               (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v19 )
          goto LABEL_51;
        goto LABEL_58;
      case 5:
        v21 = (System_Collections_Generic_List_object__o *)enemyGroupList;
        goto LABEL_27;
      case 10:
        if ( !playerGroupList )
          goto LABEL_58;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_26;
        Random = BattleRandom__getRandom(0, size, 0);
        v30 = (System_Collections_Generic_List_object__o *)playerGroupList;
        goto LABEL_24;
      default:
        goto LABEL_26;
    }
  }
  if ( targetType != 13 )
  {
    if ( targetType == 26 )
    {
      IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                             (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !IsNullOrEmpty )
        goto LABEL_58;
      v26 = IsNullOrEmpty;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v27 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)v12,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0);
      v28 = System_Linq_Enumerable__Where_object_(
              v26,
              (System_Func_TSource__bool__o *)v27,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                             v28,
                                                                             (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      v21 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
    }
    else
    {
      v20 = targetType == 32;
      v21 = v19;
      if ( v20 )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                               (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v21 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      }
    }
LABEL_27:
    if ( !v21 )
      goto LABEL_58;
    goto LABEL_28;
  }
  if ( !enemyGroupList )
    goto LABEL_58;
  size = (unsigned int)enemyGroupList->fields._size;
  if ( (int)size < 1 )
  {
LABEL_26:
    v21 = v19;
    goto LABEL_27;
  }
  Random = BattleRandom__getRandom(0, size, 0);
  v30 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_24:
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v30,
                                                                         Random,
                                                                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v19 )
    goto LABEL_58;
LABEL_51:
  items = v19->fields._items;
  v51 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_58;
  v52 = v19->fields._size;
  v53 = IsNullOrEmpty;
  if ( (unsigned int)v52 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)IsNullOrEmpty,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + v52;
    v19->fields._size = v52 + 1;
    v54[4] = (Il2CppClass *)v53;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v53, v31, v32);
  }
  v21 = v19;
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v21,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v56 = v55;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v56.fields._current;
    if ( v56.fields._current )
    {
      v34 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1C6BC54(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v34, (WarBoardPieceData_o *)current, 1, 0);
      if ( !v18 )
        sub_1C6BC60(v35, v36);
      v39 = v18->fields._items;
      v40 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v18->fields._version;
      if ( !v39 )
        sub_1C6BC60(v35, v36);
      v41 = v18->fields._size;
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v34,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &v39->obj.klass + v41;
        v18->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)v34;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v34, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v17 )
    goto LABEL_58;
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                         *(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 40LL),
                                                                         0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !*(_QWORD *)v17 || (v43 = *(_QWORD *)(*(_QWORD *)v17 + 40LL)) == 0 )
LABEL_58:
    sub_1C6BC60(IsNullOrEmpty, size);
  if ( !*(_DWORD *)(v43 + 24) )
    sub_1C6BC68(IsNullOrEmpty);
  if ( *(_DWORD *)(v43 + 32) != -1 )
  {
    v44 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v44,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0);
    v45 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
            (System_Func_TSource__bool__o *)v44,
            (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v45,
                                                                           (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v18 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
  }
LABEL_43:
  if ( !*(_QWORD *)v17 )
    goto LABEL_58;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 16LL), 0) )
  {
    v46 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v46,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0);
    v47 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
            (System_Func_TSource__bool__o *)v46,
            (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v47,
                                                                                              (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v18;
}


bool WarBoardSkillLogic__UseSkill(
        WarBoardSkillLogic_o *this,
        WarBoardSkillLogic_WarBoardSkillLogicParam_o *logicParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *targetList; // x0
  Il2CppObject *current; // x26
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  Il2CppClass *v14; // x8
  _DWORD *v15; // x9
  __int64 v16; // x22
  _DWORD *v17; // x8
  int32_t v18; // w23
  int32_t npcActorId; // w27
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppClass *v25; // x1
  struct System_Int32_array *funcId; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct DataVals_array *dataVal; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t skillId; // w8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  BattleLogicFunction_WarBoardFunctionArgument_o *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  char v42; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4CB3EDD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_1C6BA08(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C6BA08(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    byte_4CB3EDD = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    targetList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v42 = 0;
  v45 = v43;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v45.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1C6BC60(Instance, v9);
    klass = current[1].klass;
    if ( !klass )
      sub_1C6BC60(Instance, v9);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1C6BC60(Instance, v9);
    if ( !Instance )
      sub_1C6BC60(0, v9);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0);
    if ( logicParam->fields.targetType == 1 )
    {
      v12 = sub_1C6BAB0(int___TypeInfo, 1);
      v14 = current[1].klass;
      if ( !v14 )
        sub_1C6BC60(v12, v13);
      v15 = v14->_1.fields;
      if ( !v15 )
        sub_1C6BC60(v12, v13);
      v16 = v12;
      if ( !v12 )
        sub_1C6BC60(0, v13);
      if ( !*(_DWORD *)(v12 + 24) )
        sub_1C6BC68(v12);
      *(_DWORD *)(v12 + 32) = v15[6];
    }
    else
    {
      v14 = current[1].klass;
      if ( !v14 )
        sub_1C6BC60(v12, v13);
      v16 = 0;
    }
    v17 = v14->_1.fields;
    if ( !v17 )
      sub_1C6BC60(v12, v13);
    v18 = v17[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v17[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v20 = sub_1C6BC54(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v20, 0);
    if ( !v20 )
      sub_1C6BC60(v21, v22);
    v25 = current[1].klass;
    *(_QWORD *)(v20 + 16) = v25;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 16), (int32_t)v25, v23, v24);
    *(_DWORD *)(v20 + 24) = npcActorId;
    *(_DWORD *)(v20 + 28) = v18;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v20 + 32) = funcId;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)funcId, v27, v28);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v20 + 40) = dataVal;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 40), (int32_t)dataVal, v30, v31);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v20 + 56) = v16;
    *(_DWORD *)(v20 + 48) = skillId;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 56), v16, v33, v34);
    v35 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1C6BC54(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v35, v18, 0);
    *(_QWORD *)(v20 + 72) = v35;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 72), (int32_t)v35, v36, v37);
    v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v38 )
      sub_1C6BC60(0, v39);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v38,
           (WarBoardManager_ExecuteProcParam_o *)v20,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v4,
           0) )
    {
      v42 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v45,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v4 )
LABEL_46:
    sub_1C6BC60(targetList, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    v4,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v44.fields._current )
      sub_1C6BC60(0, v40);
    v44.fields._current->klass->vtable[11].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v42 & 1;
}


void WarBoardSkillLogic___c__DisplayClass1_0___ctor(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__0(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct System_Int32_array *pieceIndex; // x8

  if ( !x || (param = this->fields.param) == 0 || (pieceIndex = param->fields.pieceIndex) == 0 )
    sub_1C6BC60(this, x);
  if ( !LODWORD(pieceIndex->max_length) )
    sub_1C6BC68(this);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[0];
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__1(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct System_Int32_array *pieceIndex; // x8

  if ( !x || (param = this->fields.param) == 0 || (pieceIndex = param->fields.pieceIndex) == 0 )
    sub_1C6BC60(this, x);
  if ( !LODWORD(pieceIndex->max_length) )
    sub_1C6BC68(this);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[0];
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_1C6BC60(this, x);
  return battleServant_k__BackingField->fields.uniqueId != this->fields.npcActorId;
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__3(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *n,
        const MethodInfo *method)
{
  WarBoardSkillLogic___c__DisplayClass1_0_o *v4; // x20
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  v4 = this;
  if ( (byte_4CB3EE0 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB3EE0 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0 )
    sub_1C6BC60(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__4(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *x,
        const MethodInfo *method)
{
  WarBoardSkillLogic___c__DisplayClass1_0_o *v4; // x20
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  v4 = this;
  if ( (byte_4CB3EE1 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB3EE1 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0 )
    sub_1C6BC60(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}