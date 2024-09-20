void __fastcall WarBoardSkillLogic___ctor(WarBoardSkillLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *__fastcall WarBoardSkillLogic__GetTargetList(
        WarBoardSkillLogic_o *this,
        int32_t targetType,
        System_Collections_Generic_List_WarBoardPieceData__o *playerGroupList,
        System_Collections_Generic_List_WarBoardPieceData__o *enemyGroupList,
        WarBoardManager_WarBoardOnBoardSkillParam_o *param,
        int32_t npcActorId,
        const MethodInfo *method)
{
  __int64 v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  __int64 size; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x21
  System_Collections_Generic_List_object__o *v18; // x20
  System_Collections_Generic_List_object__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Func_object__bool__o *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  bool IsNullOrEmpty; // w8
  System_Func_object__bool__o *v24; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v25; // x0
  System_Func_TSource__bool__o *v26; // x1
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  bool v31; // w8
  System_Func_object__bool__o *v32; // x24
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x1
  Il2CppClass **v37; // x0
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  System_Func_object__bool__o *v49; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Func_object__bool__o *v51; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A58FF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_1B885B0(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
    sub_1B885B0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__);
    sub_1B885B0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__);
    sub_1B885B0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__);
    sub_1B885B0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__);
    sub_1B885B0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__);
    sub_1B885B0(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
    sub_1B885B0(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
    byte_4A58FF4 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v12 = sub_1B887FC(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_55;
  *(_QWORD *)(v12 + 16) = param;
  v17 = v12 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)param, v15, v16);
  *(_DWORD *)(v12 + 24) = npcActorId;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v17 )
          goto LABEL_55;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 16LL), 0LL);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
        if ( IsNullOrEmpty )
          goto LABEL_23;
        v24 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0LL);
        v25 = playerGroupList;
        v26 = (System_Func_TSource__bool__o *)v24;
        goto LABEL_28;
      case 3:
        goto LABEL_23;
      case 4:
        if ( !*(_QWORD *)v17 )
          goto LABEL_55;
        v31 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 16LL), 0LL);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
        if ( v31 )
          goto LABEL_23;
        v32 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v32,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0LL);
        v25 = enemyGroupList;
        v26 = (System_Func_TSource__bool__o *)v32;
LABEL_28:
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                                      v26,
                                                                      (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v19 )
          goto LABEL_29;
        goto LABEL_55;
      case 6:
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)enemyGroupList;
        goto LABEL_23;
      case 11:
        if ( !playerGroupList )
          goto LABEL_55;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_22;
        Random = BattleRandom__getRandom(0, size, 0LL);
        v28 = (System_Collections_Generic_List_object__o *)playerGroupList;
        goto LABEL_20;
      default:
        goto LABEL_22;
    }
  }
  if ( targetType != 13 )
  {
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    if ( targetType == 26 )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !Item )
        goto LABEL_55;
      v20 = Item;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)Item,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v21 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v21,
        (Il2CppObject *)v12,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0LL);
      v22 = System_Linq_Enumerable__Where_object_(
              v20,
              (System_Func_TSource__bool__o *)v21,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v22,
                                                                    (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    }
LABEL_23:
    if ( !Item )
      goto LABEL_55;
    goto LABEL_34;
  }
  if ( !enemyGroupList )
    goto LABEL_55;
  size = (unsigned int)enemyGroupList->fields._size;
  if ( (int)size < 1 )
  {
LABEL_22:
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
    goto LABEL_23;
  }
  Random = BattleRandom__getRandom(0, size, 0LL);
  v28 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_20:
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                v28,
                                                                Random,
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v19 )
    goto LABEL_55;
LABEL_29:
  items = v19->fields._items;
  v34 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_55;
  v35 = v19->fields._size;
  v36 = Item;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)Item,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + v35;
    v19->fields._size = v35 + 1;
    v37[4] = (Il2CppClass *)v36;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v29, v30);
  }
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
LABEL_34:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_object__o *)Item,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v55 = v54;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v55.fields._current;
    if ( v55.fields._current )
    {
      v39 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1B887FC(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v39, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v18 )
        sub_1B8880C(v40, v41);
      v44 = v18->fields._items;
      v45 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v18->fields._version;
      if ( !v44 )
        sub_1B8880C(v40, v41);
      v46 = v18->fields._size;
      if ( (unsigned int)v46 >= v44->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v39,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &v44->obj.klass + v46;
        v18->fields._size = v46 + 1;
        v47[4] = (Il2CppClass *)v39;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v39, v42, v43);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v17 )
    goto LABEL_55;
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                *(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 40LL),
                                                                0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
    goto LABEL_49;
  if ( !*(_QWORD *)v17 || (v48 = *(_QWORD *)(*(_QWORD *)v17 + 40LL)) == 0 )
LABEL_55:
    sub_1B8880C(Item, size);
  if ( !*(_DWORD *)(v48 + 24) )
    sub_1B88814(Item, size);
  if ( *(_DWORD *)(v48 + 32) != -1 )
  {
    v49 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v49,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0LL);
    v50 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v50,
                                                                  (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v18 = (System_Collections_Generic_List_object__o *)Item;
  }
LABEL_49:
  if ( !*(_QWORD *)v17 )
    goto LABEL_55;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v17 + 16LL), 0LL) )
  {
    v51 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v51,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0LL);
    v52 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v18,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v52,
                                                                                              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v18;
}


bool __fastcall WarBoardSkillLogic__UseSkill(
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
  Il2CppClass *v25; // x1
  struct System_Int32_array *funcId; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  struct DataVals_array *dataVal; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t skillId; // w8
  int32_t v33; // w2
  int32_t v34; // w3
  BattleLogicFunction_WarBoardFunctionArgument_o *v35; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  char v42; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A58FF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_1B885B0(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    byte_4A58FF5 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  memset(&v44, 0, sizeof(v44));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    targetList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v42 = 0;
  v45 = v43;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v45,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v45.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1B8880C(Instance, v9);
    klass = current[1].klass;
    if ( !klass )
      sub_1B8880C(Instance, v9);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1B8880C(Instance, v9);
    if ( !Instance )
      sub_1B8880C(0LL, v9);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v12 = sub_1B88658(int___TypeInfo, 1LL);
      v14 = current[1].klass;
      if ( !v14 )
        sub_1B8880C(v12, v13);
      v15 = v14->_1.fields;
      if ( !v15 )
        sub_1B8880C(v12, v13);
      v16 = v12;
      if ( !v12 )
        sub_1B8880C(0LL, v13);
      if ( !*(_DWORD *)(v12 + 24) )
        sub_1B88814(v12, v13);
      *(_DWORD *)(v12 + 32) = v15[6];
    }
    else
    {
      v14 = current[1].klass;
      if ( !v14 )
        sub_1B8880C(v12, v13);
      v16 = 0LL;
    }
    v17 = v14->_1.fields;
    if ( !v17 )
      sub_1B8880C(v12, v13);
    v18 = v17[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v17[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v20 = sub_1B887FC(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v20, 0LL);
    if ( !v20 )
      sub_1B8880C(v21, v22);
    v25 = current[1].klass;
    *(_QWORD *)(v20 + 16) = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)v25, v23, v24);
    *(_DWORD *)(v20 + 24) = npcActorId;
    *(_DWORD *)(v20 + 28) = v18;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v20 + 32) = funcId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 32), (int32_t)funcId, v27, v28);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v20 + 40) = dataVal;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 40), (int32_t)dataVal, v30, v31);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v20 + 56) = v16;
    *(_DWORD *)(v20 + 48) = skillId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 56), v16, v33, v34);
    v35 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1B887FC(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v35, v18, 0LL);
    *(_QWORD *)(v20 + 72) = v35;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 72), (int32_t)v35, v36, v37);
    v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v38 )
      sub_1B8880C(0LL, v39);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v38,
           (WarBoardManager_ExecuteProcParam_o *)v20,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v4,
           0LL) )
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v4 )
LABEL_46:
    sub_1B8880C(targetList, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    v4,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v44.fields._current )
      sub_1B8880C(0LL, v40);
    ((void (*)(void))v44.fields._current->klass->vtable[11].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v42 & 1;
}


void __fastcall WarBoardSkillLogic___c__DisplayClass1_0___ctor(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__0(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct System_Int32_array *pieceIndex; // x8

  if ( !x || (param = this->fields.param) == 0LL || (pieceIndex = param->fields.pieceIndex) == 0LL )
    sub_1B8880C(this, x);
  if ( !pieceIndex->max_length )
    sub_1B88814(this, x);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__1(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct System_Int32_array *pieceIndex; // x8

  if ( !x || (param = this->fields.param) == 0LL || (pieceIndex = param->fields.pieceIndex) == 0LL )
    sub_1B8880C(this, x);
  if ( !pieceIndex->max_length )
    sub_1B88814(this, x);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1B8880C(this, x);
  return battleServant_k__BackingField->fields.uniqueId != this->fields.npcActorId;
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__3(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *n,
        const MethodInfo *method)
{
  WarBoardSkillLogic___c__DisplayClass1_0_o *v4; // x20
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  v4 = this;
  if ( (byte_4A58FF6 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A58FF6 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_1B8880C(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__4(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *x,
        const MethodInfo *method)
{
  WarBoardSkillLogic___c__DisplayClass1_0_o *v4; // x20
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  v4 = this;
  if ( (byte_4A58FF7 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A58FF7 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_1B8880C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}