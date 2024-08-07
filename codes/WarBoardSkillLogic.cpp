void __fastcall WarBoardSkillLogic___ctor(WarBoardSkillLogic_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *__fastcall WarBoardSkillLogic__GetTargetList(
        WarBoardSkillLogic_o *this,
        int32_t targetType,
        System_Collections_Generic_List_WarBoardPieceData__o *playerGroupList,
        System_Collections_Generic_List_WarBoardPieceData__o *enemyGroupList,
        WarBoardManager_WarBoardOnBoardSkillParam_o *param,
        int32_t npcActorId,
        const MethodInfo *method)
{
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Item; // x0
  __int64 size; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x21
  System_Collections_Generic_List_object__o *v44; // x20
  System_Collections_Generic_List_object__o *v45; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x22
  System_Func_object__bool__o *v47; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  bool IsNullOrEmpty; // w8
  System_Func_object__bool__o *v50; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v51; // x0
  System_Func_TSource__bool__o *v52; // x1
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  bool v57; // w8
  System_Func_object__bool__o *v58; // x24
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x1
  Il2CppClass **v63; // x0
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  __int64 v74; // x8
  System_Func_object__bool__o *v75; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Func_object__bool__o *v77; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FC9F1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_1B64A00(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v19);
    sub_1B64A00(&System_Func_WarBoardPieceData__bool__TypeInfo, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v23);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v28);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v29);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v30);
    sub_1B64A00(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v31);
    sub_1B64A00(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v32);
    sub_1B64A00(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v33);
    sub_1B64A00(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v34);
    sub_1B64A00(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v35);
    sub_1B64A00(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v36);
    sub_1B64A00(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v37);
    byte_49FC9F1 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v38 = sub_1B64C4C(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_55;
  *(_QWORD *)(v38 + 16) = param;
  v43 = v38 + 16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)param, v41, v42);
  *(_DWORD *)(v38 + 24) = npcActorId;
  v44 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v43 )
          goto LABEL_55;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 16LL), 0LL);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
        if ( IsNullOrEmpty )
          goto LABEL_23;
        v50 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v50,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0LL);
        v51 = playerGroupList;
        v52 = (System_Func_TSource__bool__o *)v50;
        goto LABEL_28;
      case 3:
        goto LABEL_23;
      case 4:
        if ( !*(_QWORD *)v43 )
          goto LABEL_55;
        v57 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 16LL), 0LL);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
        if ( v57 )
          goto LABEL_23;
        v58 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v58,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0LL);
        v51 = enemyGroupList;
        v52 = (System_Func_TSource__bool__o *)v58;
LABEL_28:
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__48628184(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                                                      v52,
                                                                      (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v45 )
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
        v54 = (System_Collections_Generic_List_object__o *)playerGroupList;
        goto LABEL_20;
      default:
        goto LABEL_22;
    }
  }
  if ( targetType != 13 )
  {
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
    if ( targetType == 26 )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !Item )
        goto LABEL_55;
      v46 = Item;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)Item,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v47 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v47,
        (Il2CppObject *)v38,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0LL);
      v48 = System_Linq_Enumerable__Where_object_(
              v46,
              (System_Func_TSource__bool__o *)v47,
              (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v48,
                                                                    (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
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
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
    goto LABEL_23;
  }
  Random = BattleRandom__getRandom(0, size, 0LL);
  v54 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_20:
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                v54,
                                                                Random,
                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v45 )
    goto LABEL_55;
LABEL_29:
  items = v45->fields._items;
  v60 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v45->fields._version;
  if ( !items )
    goto LABEL_55;
  v61 = v45->fields._size;
  v62 = Item;
  if ( (unsigned int)v61 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v45,
      (Il2CppObject *)Item,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &items->obj.klass + v61;
    v45->fields._size = v61 + 1;
    v63[4] = (Il2CppClass *)v62;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v62, v55, v56);
  }
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
LABEL_34:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    (System_Collections_Generic_List_object__o *)Item,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v81 = v80;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v81.fields._current;
    if ( v81.fields._current )
    {
      v65 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1B64C4C(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v65, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v44 )
        sub_1B64C5C(v66, v67);
      v70 = v44->fields._items;
      v71 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v44->fields._version;
      if ( !v70 )
        sub_1B64C5C(v66, v67);
      v72 = v44->fields._size;
      if ( (unsigned int)v72 >= v70->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v65,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &v70->obj.klass + v72;
        v44->fields._size = v72 + 1;
        v73[4] = (Il2CppClass *)v65;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v65, v68, v69);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v43 )
    goto LABEL_55;
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                *(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 40LL),
                                                                0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
    goto LABEL_49;
  if ( !*(_QWORD *)v43 || (v74 = *(_QWORD *)(*(_QWORD *)v43 + 40LL)) == 0 )
LABEL_55:
    sub_1B64C5C(Item, size);
  if ( !*(_DWORD *)(v74 + 24) )
    sub_1B64C64(Item, size);
  if ( *(_DWORD *)(v74 + 32) != -1 )
  {
    v75 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v75,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0LL);
    v76 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v44,
            (System_Func_TSource__bool__o *)v75,
            (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v76,
                                                                  (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v44 = (System_Collections_Generic_List_object__o *)Item;
  }
LABEL_49:
  if ( !*(_QWORD *)v43 )
    goto LABEL_55;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 16LL), 0LL) )
  {
    v77 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v77,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0LL);
    v78 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v44,
            (System_Func_TSource__bool__o *)v77,
            (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v78,
                                                                                              (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v44;
}


bool __fastcall WarBoardSkillLogic__UseSkill(
        WarBoardSkillLogic_o *this,
        WarBoardSkillLogic_WarBoardSkillLogicParam_o *logicParam,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *targetList; // x0
  Il2CppObject *current; // x26
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v25; // x0
  __int64 v26; // x1
  Il2CppClass *v27; // x8
  _DWORD *v28; // x9
  __int64 v29; // x22
  _DWORD *v30; // x8
  int32_t v31; // w23
  int32_t npcActorId; // w27
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppClass *v38; // x1
  struct System_Int32_array *funcId; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct DataVals_array *dataVal; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t skillId; // w8
  int32_t v46; // w2
  int32_t v47; // w3
  BattleLogicFunction_WarBoardFunctionArgument_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  char v55; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FC9F2 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v5);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v6);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v8);
    sub_1B64A00(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1B64A00(&int___TypeInfo, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v11);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__,
      v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v13);
    sub_1B64A00(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_1B64A00(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v16);
    byte_49FC9F2 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    targetList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v55 = 0;
  v58 = v56;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v58.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1B64C5C(Instance, v22);
    klass = current[1].klass;
    if ( !klass )
      sub_1B64C5C(Instance, v22);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1B64C5C(Instance, v22);
    if ( !Instance )
      sub_1B64C5C(0LL, v22);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v25 = sub_1B64AA8(int___TypeInfo, 1LL);
      v27 = current[1].klass;
      if ( !v27 )
        sub_1B64C5C(v25, v26);
      v28 = v27->_1.fields;
      if ( !v28 )
        sub_1B64C5C(v25, v26);
      v29 = v25;
      if ( !v25 )
        sub_1B64C5C(0LL, v26);
      if ( !*(_DWORD *)(v25 + 24) )
        sub_1B64C64(v25, v26);
      *(_DWORD *)(v25 + 32) = v28[6];
    }
    else
    {
      v27 = current[1].klass;
      if ( !v27 )
        sub_1B64C5C(v25, v26);
      v29 = 0LL;
    }
    v30 = v27->_1.fields;
    if ( !v30 )
      sub_1B64C5C(v25, v26);
    v31 = v30[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v30[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v33 = sub_1B64C4C(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v33, 0LL);
    if ( !v33 )
      sub_1B64C5C(v34, v35);
    v38 = current[1].klass;
    *(_QWORD *)(v33 + 16) = v38;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v38, v36, v37);
    *(_DWORD *)(v33 + 24) = npcActorId;
    *(_DWORD *)(v33 + 28) = v31;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v33 + 32) = funcId;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)funcId, v40, v41);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v33 + 40) = dataVal;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 40), (int32_t)dataVal, v43, v44);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v33 + 56) = v29;
    *(_DWORD *)(v33 + 48) = skillId;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 56), v29, v46, v47);
    v48 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1B64C4C(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v48, v31, 0LL);
    *(_QWORD *)(v33 + 72) = v48;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v33 + 72), (int32_t)v48, v49, v50);
    v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v51 )
      sub_1B64C5C(0LL, v52);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v51,
           (WarBoardManager_ExecuteProcParam_o *)v33,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v17,
           0LL) )
    {
      v55 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v17 )
LABEL_46:
    sub_1B64C5C(targetList, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v17,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v57.fields._current )
      sub_1B64C5C(0LL, v53);
    ((void (*)(void))v57.fields._current->klass->vtable[11].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v55 & 1;
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
    sub_1B64C5C(this, x);
  if ( !pieceIndex->max_length )
    sub_1B64C64(this, x);
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
    sub_1B64C5C(this, x);
  if ( !pieceIndex->max_length )
    sub_1B64C64(this, x);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1B64C5C(this, x);
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
  if ( (byte_49FC9F3 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_49FC9F3 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_1B64C5C(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_49FC9F4 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_49FC9F4 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_1B64C5C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
}