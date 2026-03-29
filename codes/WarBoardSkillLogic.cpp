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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x21
  System_Collections_Generic_List_object__o *v22; // x20
  System_Collections_Generic_List_object__o *v23; // x22
  bool v24; // zf
  System_Collections_Generic_List_object__o *v25; // x25
  int v26; // w8
  System_Func_object__bool__o *v27; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v28; // x0
  System_Func_TSource__bool__o *v29; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  System_Func_object__bool__o *v31; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  __int64 v55; // x8
  System_Func_object__bool__o *v56; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Func_object__bool__o *v58; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Func_object__bool__o *v61; // x24
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x1
  Il2CppClass **v66; // x0
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2E548 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_1C93AD4(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
    sub_1C93AD4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__);
    sub_1C93AD4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__);
    sub_1C93AD4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__);
    sub_1C93AD4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__);
    sub_1C93AD4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__);
    sub_1C93AD4(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
    sub_1C93AD4(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
    byte_4D2E548 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v12 = sub_1C93D20(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_58;
  *(_QWORD *)(v12 + 16) = param;
  v21 = v12 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)param, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = npcActorId;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    v26 = targetType - 1;
    v25 = (System_Collections_Generic_List_object__o *)playerGroupList;
    switch ( v26 )
    {
      case 0:
        if ( !*(_QWORD *)v21 )
          goto LABEL_58;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                               *(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL),
                                                                               0);
        v25 = v23;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v27 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0);
        v28 = playerGroupList;
        v29 = (System_Func_TSource__bool__o *)v27;
        goto LABEL_50;
      case 2:
        goto LABEL_27;
      case 3:
        if ( !*(_QWORD *)v21 )
          goto LABEL_58;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                               *(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL),
                                                                               0);
        v25 = v23;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v61 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v61,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0);
        v28 = enemyGroupList;
        v29 = (System_Func_TSource__bool__o *)v61;
LABEL_50:
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                               v29,
                                                                               (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v23 )
          goto LABEL_51;
        goto LABEL_58;
      case 5:
        v25 = (System_Collections_Generic_List_object__o *)enemyGroupList;
        goto LABEL_27;
      case 10:
        if ( !playerGroupList )
          goto LABEL_58;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_26;
        Random = BattleRandom__getRandom(0, size, 0);
        v34 = (System_Collections_Generic_List_object__o *)playerGroupList;
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
                                                                             (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !IsNullOrEmpty )
        goto LABEL_58;
      v30 = IsNullOrEmpty;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v31 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v31,
        (Il2CppObject *)v12,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0);
      v32 = System_Linq_Enumerable__Where_object_(
              v30,
              (System_Func_TSource__bool__o *)v31,
              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                             v32,
                                                                             (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      v25 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
    }
    else
    {
      v24 = targetType == 32;
      v25 = v23;
      if ( v24 )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                               (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v25 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      }
    }
LABEL_27:
    if ( !v25 )
      goto LABEL_58;
    goto LABEL_28;
  }
  if ( !enemyGroupList )
    goto LABEL_58;
  size = (unsigned int)enemyGroupList->fields._size;
  if ( (int)size < 1 )
  {
LABEL_26:
    v25 = v23;
    goto LABEL_27;
  }
  Random = BattleRandom__getRandom(0, size, 0);
  v34 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_24:
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v34,
                                                                         Random,
                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v23 )
    goto LABEL_58;
LABEL_51:
  items = v23->fields._items;
  v63 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v23->fields._version;
  if ( !items )
    goto LABEL_58;
  v64 = v23->fields._size;
  v65 = IsNullOrEmpty;
  if ( (unsigned int)v64 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v23,
      (Il2CppObject *)IsNullOrEmpty,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &items->obj.klass + v64;
    v23->fields._size = v64 + 1;
    v66[4] = (Il2CppClass *)v65;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v66 + 4), (int32_t)v65, v35, v36, v37, v38, v39, v40);
  }
  v25 = v23;
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    v25,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v68 = v67;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v68.fields._current;
    if ( v68.fields._current )
    {
      v42 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1C93D20(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v42, (WarBoardPieceData_o *)current, 1, 0);
      if ( !v22 )
        sub_1C93D2C(v43, v44);
      v51 = v22->fields._items;
      v52 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v22->fields._version;
      if ( !v51 )
        sub_1C93D2C(v43, v44);
      v53 = v22->fields._size;
      if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v42,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v51->obj.klass + v53;
        v22->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)v42;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v42, v45, v46, v47, v48, v49, v50);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v21 )
    goto LABEL_58;
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                         *(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 40LL),
                                                                         0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !*(_QWORD *)v21 || (v55 = *(_QWORD *)(*(_QWORD *)v21 + 40LL)) == 0 )
LABEL_58:
    sub_1C93D2C(IsNullOrEmpty, size);
  if ( !*(_DWORD *)(v55 + 24) )
    sub_1C93D34(IsNullOrEmpty);
  if ( *(_DWORD *)(v55 + 32) != -1 )
  {
    v56 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v56,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0);
    v57 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)v56,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v57,
                                                                           (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v22 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
  }
LABEL_43:
  if ( !*(_QWORD *)v21 )
    goto LABEL_58;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL), 0) )
  {
    v58 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v58,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0);
    v59 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)v58,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v59,
                                                                                              (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v22;
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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppClass *v29; // x1
  struct System_Int32_array *funcId; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct DataVals_array *dataVal; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t skillId; // w8
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  BattleLogicFunction_WarBoardFunctionArgument_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x1
  char v62; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D2E549 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_1C93AD4(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    byte_4D2E549 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    targetList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v62 = 0;
  v65 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v65.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1C93D2C(Instance, v9);
    klass = current[1].klass;
    if ( !klass )
      sub_1C93D2C(Instance, v9);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1C93D2C(Instance, v9);
    if ( !Instance )
      sub_1C93D2C(0, v9);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0);
    if ( logicParam->fields.targetType == 1 )
    {
      v12 = sub_1C93B7C(int___TypeInfo, 1);
      v14 = current[1].klass;
      if ( !v14 )
        sub_1C93D2C(v12, v13);
      v15 = v14->_1.fields;
      if ( !v15 )
        sub_1C93D2C(v12, v13);
      v16 = v12;
      if ( !v12 )
        sub_1C93D2C(0, v13);
      if ( !*(_DWORD *)(v12 + 24) )
        sub_1C93D34(v12);
      *(_DWORD *)(v12 + 32) = v15[6];
    }
    else
    {
      v14 = current[1].klass;
      if ( !v14 )
        sub_1C93D2C(v12, v13);
      v16 = 0;
    }
    v17 = v14->_1.fields;
    if ( !v17 )
      sub_1C93D2C(v12, v13);
    v18 = v17[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v17[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v20 = sub_1C93D20(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v20, 0);
    if ( !v20 )
      sub_1C93D2C(v21, v22);
    v29 = current[1].klass;
    *(_QWORD *)(v20 + 16) = v29;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 16), (int32_t)v29, v23, v24, v25, v26, v27, v28);
    *(_DWORD *)(v20 + 24) = npcActorId;
    *(_DWORD *)(v20 + 28) = v18;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v20 + 32) = funcId;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)funcId, v31, v32, v33, v34, v35, v36);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v20 + 40) = dataVal;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 40), (int32_t)dataVal, v38, v39, v40, v41, v42, v43);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v20 + 56) = v16;
    *(_DWORD *)(v20 + 48) = skillId;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 56), v16, v45, v46, v47, v48, v49, v50);
    v51 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1C93D20(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v51, v18, 0);
    *(_QWORD *)(v20 + 72) = v51;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 72), (int32_t)v51, v52, v53, v54, v55, v56, v57);
    v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v58 )
      sub_1C93D2C(0, v59);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v58,
           (WarBoardManager_ExecuteProcParam_o *)v20,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v4,
           0) )
    {
      v62 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v65,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v4 )
LABEL_46:
    sub_1C93D2C(targetList, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    v4,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v64.fields._current )
      sub_1C93D2C(0, v60);
    v64.fields._current->klass->vtable[11].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v62 & 1;
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
    sub_1C93D2C(this, x);
  if ( !LODWORD(pieceIndex->max_length) )
    sub_1C93D34(this);
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
    sub_1C93D2C(this, x);
  if ( !LODWORD(pieceIndex->max_length) )
    sub_1C93D34(this);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[0];
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_1C93D2C(this, x);
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
  if ( (byte_4D2E54C & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2E54C = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0 )
    sub_1C93D2C(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4D2E54D & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2E54D = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0 )
    sub_1C93D2C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}