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
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  __int64 size; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x21
  System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  System_Func_object__bool__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Func_object__bool__o *v36; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v37; // x0
  System_Func_TSource__bool__o *v38; // x1
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  System_Func_object__bool__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Func_object__bool__o *v57; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Func_object__bool__o *v60; // x24
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x1
  Il2CppClass **v65; // x0
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596E34F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_2213A60(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    sub_2213A60(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
    sub_2213A60(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__);
    sub_2213A60(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__);
    sub_2213A60(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__);
    sub_2213A60(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__);
    sub_2213A60(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__);
    sub_2213A60(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
    byte_596E34F = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v12 = sub_2213CCC(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_63;
  *(_QWORD *)(v12 + 16) = param;
  v21 = v12 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)param, v15, v16, v17, v18, v19, v20);
  v22 = System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo;
  *(_DWORD *)(v12 + 24) = npcActorId;
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType > 11 )
  {
    if ( targetType != 13 )
    {
      if ( targetType == 26 )
      {
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
        if ( !Item )
          goto LABEL_63;
        v27 = Item;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)Item,
          (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
        v28 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v28,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
          0);
        v29 = System_Linq_Enumerable__Where_object_(
                v27,
                (System_Func_TSource__bool__o *)v28,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v29,
                                                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      }
      else
      {
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
        if ( targetType == 32 )
        {
          Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                        (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
          if ( !Item )
            goto LABEL_63;
          v24 = (System_Collections_Generic_List_object__o *)Item;
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)Item,
            (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
          goto LABEL_37;
        }
      }
      goto LABEL_36;
    }
    if ( !enemyGroupList )
      goto LABEL_63;
    size = (unsigned int)enemyGroupList->fields._size;
    if ( (int)size >= 1 )
    {
      Random = BattleRandom__getRandom(0, size, 0);
      v26 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_28:
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v26,
                                                                    Random,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
      if ( !v24 )
        goto LABEL_63;
      goto LABEL_58;
    }
    goto LABEL_35;
  }
  if ( targetType <= 3 )
  {
    if ( targetType != 1 )
    {
      if ( targetType != 2 )
      {
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList;
        if ( targetType == 3 )
        {
LABEL_36:
          v24 = (System_Collections_Generic_List_object__o *)Item;
          if ( !Item )
            goto LABEL_63;
          goto LABEL_37;
        }
      }
      goto LABEL_35;
    }
    if ( !*(_QWORD *)v21 )
      goto LABEL_63;
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL), 0) )
      goto LABEL_35;
    v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
      0);
    v37 = playerGroupList;
    v38 = (System_Func_TSource__bool__o *)v36;
  }
  else
  {
    if ( targetType > 5 )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)enemyGroupList;
      if ( targetType == 6 )
        goto LABEL_36;
      if ( targetType == 11 )
      {
        if ( !playerGroupList )
          goto LABEL_63;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size >= 1 )
        {
          Random = BattleRandom__getRandom(0, size, 0);
          v26 = (System_Collections_Generic_List_object__o *)playerGroupList;
          goto LABEL_28;
        }
      }
      goto LABEL_35;
    }
    if ( targetType != 4 )
      goto LABEL_35;
    if ( !*(_QWORD *)v21 )
      goto LABEL_63;
    if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL), 0) )
    {
LABEL_35:
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
      goto LABEL_36;
    }
    v60 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v60,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
      0);
    v37 = enemyGroupList;
    v38 = (System_Func_TSource__bool__o *)v60;
  }
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                                v38,
                                                                (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( !v24 )
    goto LABEL_63;
LABEL_58:
  items = v24->fields._items;
  v62 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_63;
  v63 = v24->fields._size;
  v64 = Item;
  if ( (unsigned int)v63 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)Item,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &items->obj.klass + v63;
    v24->fields._size = v63 + 1;
    v65[4] = (Il2CppClass *)v64;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)v64, v30, v31, v32, v33, v34, v35);
  }
LABEL_37:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v24,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v67 = v66;
  v66.fields._list = 0;
  *(_QWORD *)&v66.fields._index = &v67;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v67.fields._current;
    if ( v67.fields._current )
    {
      v40 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_2213CCC(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v40, (WarBoardPieceData_o *)current, 1, 0);
      if ( !v23
        || (v49 = v23->fields._items,
            v50 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__,
            ++v23->fields._version,
            !v49) )
      {
        sub_2213CDC(v41, v42);
      }
      v51 = v23->fields._size;
      if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v40,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v49->obj.klass + v51;
        v23->fields._size = v51 + 1;
        v52[4] = (Il2CppClass *)v40;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v40, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v21 )
    goto LABEL_63;
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                *(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 40LL),
                                                                0);
  v53 = *(_QWORD *)v21;
  if ( ((unsigned __int8)Item & 1) != 0 )
    goto LABEL_52;
  if ( !v53 )
    goto LABEL_63;
  v54 = *(_QWORD *)(v53 + 40);
  if ( !v54 )
    goto LABEL_63;
  if ( !*(_DWORD *)(v54 + 24) )
    sub_2213CE4(Item);
  if ( *(_DWORD *)(v54 + 32) != -1 )
  {
    v55 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v55,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0);
    v56 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (System_Func_TSource__bool__o *)v55,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v56,
                                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v53 = *(_QWORD *)(v12 + 16);
    v23 = (System_Collections_Generic_List_object__o *)Item;
LABEL_52:
    if ( v53 )
      goto LABEL_53;
LABEL_63:
    sub_2213CDC(Item, size);
  }
LABEL_53:
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v53 + 16), 0) )
  {
    v57 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v57,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0);
    v58 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v23,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v58,
                                                                                              (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v23;
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
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppClass *v29; // x1
  struct System_Int32_array *funcId; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct DataVals_array *dataVal; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t skillId; // w8
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  BattleLogicFunction_WarBoardFunctionArgument_o *v51; // x22
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x1
  char v62; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_596E350 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_2213A60(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    byte_596E350 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  memset(&v64, 0, sizeof(v64));
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    targetList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v62 = 0;
  v65 = v63;
  v63.fields._list = 0;
  *(_QWORD *)&v63.fields._index = &v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v65,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v65.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_2213CDC(Instance, v9);
    klass = current[1].klass;
    if ( !klass )
      sub_2213CDC(Instance, v9);
    fields = klass->_1.fields;
    if ( !fields )
      sub_2213CDC(Instance, v9);
    if ( !Instance )
      sub_2213CDC(0, v9);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0);
    if ( logicParam->fields.targetType == 1 )
    {
      v12 = sub_2213B20(int___TypeInfo, 1);
      v14 = current[1].klass;
      if ( !v14 )
        sub_2213CDC(v12, v13);
      v15 = v14->_1.fields;
      if ( !v15 )
        sub_2213CDC(v12, v13);
      v16 = v12;
      if ( !v12 )
        sub_2213CDC(0, v13);
      if ( !*(_DWORD *)(v12 + 24) )
        sub_2213CE4(v12);
      *(_DWORD *)(v12 + 32) = v15[6];
    }
    else
    {
      v14 = current[1].klass;
      if ( !v14 )
        sub_2213CDC(v12, v13);
      v16 = 0;
    }
    v17 = v14->_1.fields;
    if ( !v17 )
      sub_2213CDC(v12, v13);
    v18 = v17[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v17[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v20 = sub_2213CCC(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v20, 0);
    if ( !v20 )
      sub_2213CDC(v21, v22);
    v29 = current[1].klass;
    *(_QWORD *)(v20 + 16) = v29;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 16), (int32_t)v29, v23, v24, v25, v26, v27, v28);
    *(_DWORD *)(v20 + 24) = npcActorId;
    *(_DWORD *)(v20 + 28) = v18;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v20 + 32) = funcId;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)funcId, v31, v32, v33, v34, v35, v36);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v20 + 40) = dataVal;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 40), (int32_t)dataVal, v38, v39, v40, v41, v42, v43);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v20 + 56) = v16;
    *(_DWORD *)(v20 + 48) = skillId;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 56), v16, v45, v46, v47, v48, v49, v50);
    v51 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_2213CCC(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v51, v18, 0);
    *(_QWORD *)(v20 + 72) = v51;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 72), (int32_t)v51, v52, v53, v54, v55, v56, v57);
    v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v58 )
      sub_2213CDC(0, v59);
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
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v4 )
LABEL_46:
    sub_2213CDC(targetList, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    v4,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v63.fields._list = 0;
  *(_QWORD *)&v63.fields._index = &v64;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v64,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v64.fields._current )
      sub_2213CDC(0, v60);
    v64.fields._current->klass->vtable[11].methodPtr();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v64,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
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
    sub_2213CDC(this, x);
  if ( !LODWORD(pieceIndex->max_length) )
    sub_2213CE4(this);
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
    sub_2213CDC(this, x);
  if ( !LODWORD(pieceIndex->max_length) )
    sub_2213CE4(this);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[0];
}


bool WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_2213CDC(this, x);
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
  if ( (byte_596E353 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596E353 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0 )
    sub_2213CDC(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_596E354 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_596E354 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0 )
    sub_2213CDC(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}