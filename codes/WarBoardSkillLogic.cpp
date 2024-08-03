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
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_List_object__o *v48; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  System_Func_object__bool__o *v52; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  bool IsNullOrEmpty; // w8
  System_Func_object__bool__o *v57; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v58; // x0
  System_Func_TSource__bool__o *v59; // x1
  int v60; // w1
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v62; // x0
  int size; // w1
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x1
  __int64 v67; // x2
  bool v68; // w8
  System_Func_object__bool__o *v69; // x24
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x1
  Il2CppClass **v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v78; // x22
  __int64 v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x8
  System_Func_object__bool__o *v89; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  System_Func_object__bool__o *v93; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FA2DC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_1B640C8(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v19);
    sub_1B640C8(&System_Func_WarBoardPieceData__bool__TypeInfo, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v28);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v29);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v30);
    sub_1B640C8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v31);
    sub_1B640C8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v32);
    sub_1B640C8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v33);
    sub_1B640C8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v34);
    sub_1B640C8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v35);
    sub_1B640C8(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v36);
    sub_1B640C8(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v37);
    byte_49FA2DC = 1;
  }
  memset(&v97, 0, sizeof(v97));
  v38 = sub_1B64314(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&targetType, playerGroupList);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_55;
  *(_QWORD *)(v38 + 16) = param;
  v42 = v38 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 16), (int32_t)param, v40, v41);
  *(_DWORD *)(v38 + 24) = npcActorId;
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v48 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v46,
                                                       v47);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v42 )
          goto LABEL_55;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v42 + 16LL), 0LL);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
        if ( IsNullOrEmpty )
          goto LABEL_23;
        v57 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v54, v55);
        System_Func_object__bool____ctor(
          v57,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0LL);
        v58 = playerGroupList;
        v59 = (System_Func_TSource__bool__o *)v57;
        goto LABEL_28;
      case 3:
        goto LABEL_23;
      case 4:
        if ( !*(_QWORD *)v42 )
          goto LABEL_55;
        v68 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v42 + 16LL), 0LL);
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
        if ( v68 )
          goto LABEL_23;
        v69 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v66, v67);
        System_Func_object__bool____ctor(
          v69,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0LL);
        v58 = enemyGroupList;
        v59 = (System_Func_TSource__bool__o *)v69;
LABEL_28:
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v58,
                                                                      v59,
                                                                      (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v48 )
          goto LABEL_29;
        goto LABEL_55;
      case 6:
        Item = (System_Collections_Generic_IEnumerable_TSource__o *)enemyGroupList;
        goto LABEL_23;
      case 11:
        if ( !playerGroupList )
          goto LABEL_55;
        size = playerGroupList->fields._size;
        if ( size < 1 )
          goto LABEL_22;
        Random = BattleRandom__getRandom(0, size, 0LL);
        v62 = (System_Collections_Generic_List_object__o *)playerGroupList;
        goto LABEL_20;
      default:
        goto LABEL_22;
    }
  }
  if ( targetType != 13 )
  {
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
    if ( targetType == 26 )
    {
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !Item )
        goto LABEL_55;
      v49 = Item;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)Item,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v52 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPieceData__bool__TypeInfo, v50, v51);
      System_Func_object__bool____ctor(
        v52,
        (Il2CppObject *)v38,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0LL);
      v53 = System_Linq_Enumerable__Where_object_(
              v49,
              (System_Func_TSource__bool__o *)v52,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v53,
                                                                    (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    }
LABEL_23:
    if ( !Item )
      goto LABEL_55;
    goto LABEL_34;
  }
  if ( !enemyGroupList )
    goto LABEL_55;
  v60 = enemyGroupList->fields._size;
  if ( v60 < 1 )
  {
LABEL_22:
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
    goto LABEL_23;
  }
  Random = BattleRandom__getRandom(0, v60, 0LL);
  v62 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_20:
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                v62,
                                                                Random,
                                                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v48 )
    goto LABEL_55;
LABEL_29:
  items = v48->fields._items;
  v71 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v48->fields._version;
  if ( !items )
    goto LABEL_55;
  v72 = v48->fields._size;
  v73 = Item;
  if ( (unsigned int)v72 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v48,
      (Il2CppObject *)Item,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &items->obj.klass + v72;
    v48->fields._size = v72 + 1;
    v74[4] = (Il2CppClass *)v73;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v73, v64, v65);
  }
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
LABEL_34:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    (System_Collections_Generic_List_object__o *)Item,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v97.fields._current;
    if ( v97.fields._current )
    {
      v78 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1B64314(
                                                              WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo,
                                                              v75,
                                                              v76);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v78, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v45 )
        sub_1B64324(v79);
      v82 = v45->fields._items;
      v83 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v45->fields._version;
      if ( !v82 )
        sub_1B64324(v79);
      v84 = v45->fields._size;
      if ( (unsigned int)v84 >= v82->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)v78,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
      }
      else
      {
        v85 = &v82->obj.klass + v84;
        v45->fields._size = v84 + 1;
        v85[4] = (Il2CppClass *)v78;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v78, v80, v81);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v42 )
    goto LABEL_55;
  Item = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                *(System_Collections_ICollection_o **)(*(_QWORD *)v42 + 40LL),
                                                                0LL);
  if ( ((unsigned __int8)Item & 1) != 0 )
    goto LABEL_49;
  if ( !*(_QWORD *)v42 || (v88 = *(_QWORD *)(*(_QWORD *)v42 + 40LL)) == 0 )
LABEL_55:
    sub_1B64324(Item);
  if ( !*(_DWORD *)(v88 + 24) )
    sub_1B6432C(Item, v86);
  if ( *(_DWORD *)(v88 + 32) != -1 )
  {
    v89 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                           v86,
                                           v87);
    System_Func_object__bool____ctor(
      v89,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0LL);
    v90 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v45,
            (System_Func_TSource__bool__o *)v89,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    Item = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v90,
                                                                  (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v45 = (System_Collections_Generic_List_object__o *)Item;
  }
LABEL_49:
  if ( !*(_QWORD *)v42 )
    goto LABEL_55;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v42 + 16LL), 0LL) )
  {
    v93 = (System_Func_object__bool__o *)sub_1B64314(
                                           System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                           v91,
                                           v92);
    System_Func_object__bool____ctor(
      v93,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0LL);
    v94 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v45,
            (System_Func_TSource__bool__o *)v93,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v94,
                                                                                              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v45;
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
  System_Collections_Generic_List_object__o *targetList; // x0
  Il2CppObject *current; // x26
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppClass *v26; // x8
  _DWORD *v27; // x9
  __int64 v28; // x22
  _DWORD *v29; // x8
  int32_t v30; // w23
  int32_t npcActorId; // w27
  __int64 v32; // x21
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppClass *v36; // x1
  struct System_Int32_array *funcId; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  struct DataVals_array *dataVal; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t skillId; // w8
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  __int64 v47; // x2
  BattleLogicFunction_WarBoardFunctionArgument_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x0
  char v53; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FA2DD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v8);
    sub_1B640C8(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__,
      v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_1B640C8(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v16);
    byte_49FA2DD = 1;
  }
  memset(&v56, 0, sizeof(v56));
  memset(&v55, 0, sizeof(v55));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       logicParam,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    targetList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v53 = 0;
  v56 = v54;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v56,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v56.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1B64324(Instance);
    klass = current[1].klass;
    if ( !klass )
      sub_1B64324(Instance);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1B64324(Instance);
    if ( !Instance )
      sub_1B64324(0LL);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v23 = sub_1B64170(int___TypeInfo, 1LL);
      v26 = current[1].klass;
      if ( !v26 )
        sub_1B64324(v23);
      v27 = v26->_1.fields;
      if ( !v27 )
        sub_1B64324(v23);
      v28 = v23;
      if ( !v23 )
        sub_1B64324(0LL);
      if ( !*(_DWORD *)(v23 + 24) )
        sub_1B6432C(v23, v24);
      *(_DWORD *)(v23 + 32) = v27[6];
    }
    else
    {
      v26 = current[1].klass;
      if ( !v26 )
        sub_1B64324(v23);
      v28 = 0LL;
    }
    v29 = v26->_1.fields;
    if ( !v29 )
      sub_1B64324(v23);
    v30 = v29[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v29[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v32 = sub_1B64314(WarBoardManager_ExecuteProcParam_TypeInfo, v24, v25);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v32, 0LL);
    if ( !v32 )
      sub_1B64324(v33);
    v36 = current[1].klass;
    *(_QWORD *)(v32 + 16) = v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 16), (int32_t)v36, v34, v35);
    *(_DWORD *)(v32 + 24) = npcActorId;
    *(_DWORD *)(v32 + 28) = v30;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v32 + 32) = funcId;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)funcId, v38, v39);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v32 + 40) = dataVal;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 40), (int32_t)dataVal, v41, v42);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v32 + 56) = v28;
    *(_DWORD *)(v32 + 48) = skillId;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 56), v28, v44, v45);
    v48 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1B64314(
                                                              BattleLogicFunction_WarBoardFunctionArgument_TypeInfo,
                                                              v46,
                                                              v47);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v48, v30, 0LL);
    *(_QWORD *)(v32 + 72) = v48;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 72), (int32_t)v48, v49, v50);
    v51 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v51 )
      sub_1B64324(0LL);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v51,
           (WarBoardManager_ExecuteProcParam_o *)v32,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v17,
           0LL) )
    {
      v53 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v56,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v17 )
LABEL_46:
    sub_1B64324(targetList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    v17,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v55.fields._current )
      sub_1B64324(0LL);
    ((void (*)(void))v55.fields._current->klass->vtable[11].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v53 & 1;
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
    sub_1B64324(this);
  if ( !pieceIndex->max_length )
    sub_1B6432C(this, x);
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
    sub_1B64324(this);
  if ( !pieceIndex->max_length )
    sub_1B6432C(this, x);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1B64324(this);
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
  if ( (byte_49FA2DE & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_49FA2DE = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_1B64324(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_49FA2DF & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_49FA2DF = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_1B64324(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}