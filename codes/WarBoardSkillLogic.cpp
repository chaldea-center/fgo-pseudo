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
  System_Collections_Generic_IEnumerable_TSource__o *IsNullOrEmpty; // x0
  __int64 size; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x21
  System_Collections_Generic_List_object__o *v44; // x20
  System_Collections_Generic_List_object__o *v45; // x22
  bool v46; // zf
  System_Collections_Generic_List_object__o *v47; // x25
  int v48; // w8
  System_Func_object__bool__o *v49; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v50; // x0
  System_Func_TSource__bool__o *v51; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x22
  System_Func_object__bool__o *v53; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v60; // x22
  __int64 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  __int64 v69; // x2
  __int64 v70; // x8
  System_Func_object__bool__o *v71; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Func_object__bool__o *v73; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Func_object__bool__o *v76; // x24
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x1
  Il2CppClass **v81; // x0
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A1A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_1BCAFF8(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v19);
    sub_1BCAFF8(&System_Func_WarBoardPieceData__bool__TypeInfo, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v28);
    sub_1BCAFF8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v29);
    sub_1BCAFF8(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v30);
    sub_1BCAFF8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v31);
    sub_1BCAFF8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v32);
    sub_1BCAFF8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v33);
    sub_1BCAFF8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v34);
    sub_1BCAFF8(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v35);
    sub_1BCAFF8(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v36);
    sub_1BCAFF8(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v37);
    byte_4B1A1A7 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v38 = sub_1BCB244(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_58;
  *(_QWORD *)(v38 + 16) = param;
  v43 = v38 + 16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 16), (int32_t)param, v41, v42);
  *(_DWORD *)(v38 + 24) = npcActorId;
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    v48 = targetType - 1;
    v47 = (System_Collections_Generic_List_object__o *)playerGroupList;
    switch ( v48 )
    {
      case 0:
        if ( !*(_QWORD *)v43 )
          goto LABEL_58;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                               *(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 16LL),
                                                                               0LL);
        v47 = v45;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v49 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v49,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0LL);
        v50 = playerGroupList;
        v51 = (System_Func_TSource__bool__o *)v49;
        goto LABEL_50;
      case 2:
        goto LABEL_27;
      case 3:
        if ( !*(_QWORD *)v43 )
          goto LABEL_58;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                               *(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 16LL),
                                                                               0LL);
        v47 = v45;
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v76 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v76,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0LL);
        v50 = enemyGroupList;
        v51 = (System_Func_TSource__bool__o *)v76;
LABEL_50:
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v50,
                                                                               v51,
                                                                               (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v45 )
          goto LABEL_51;
        goto LABEL_58;
      case 5:
        v47 = (System_Collections_Generic_List_object__o *)enemyGroupList;
        goto LABEL_27;
      case 10:
        if ( !playerGroupList )
          goto LABEL_58;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_26;
        Random = BattleRandom__getRandom(0, size, 0LL);
        v56 = (System_Collections_Generic_List_object__o *)playerGroupList;
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
                                                                             (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !IsNullOrEmpty )
        goto LABEL_58;
      v52 = IsNullOrEmpty;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v53 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v53,
        (Il2CppObject *)v38,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0LL);
      v54 = System_Linq_Enumerable__Where_object_(
              v52,
              (System_Func_TSource__bool__o *)v53,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                             v54,
                                                                             (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      v47 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
    }
    else
    {
      v46 = targetType == 32;
      v47 = v45;
      if ( v46 )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                               (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v47 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      }
    }
LABEL_27:
    if ( !v47 )
      goto LABEL_58;
    goto LABEL_28;
  }
  if ( !enemyGroupList )
    goto LABEL_58;
  size = (unsigned int)enemyGroupList->fields._size;
  if ( (int)size < 1 )
  {
LABEL_26:
    v47 = v45;
    goto LABEL_27;
  }
  Random = BattleRandom__getRandom(0, size, 0LL);
  v56 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_24:
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v56,
                                                                         Random,
                                                                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v45 )
    goto LABEL_58;
LABEL_51:
  items = v45->fields._items;
  v78 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v45->fields._version;
  if ( !items )
    goto LABEL_58;
  v79 = v45->fields._size;
  v80 = IsNullOrEmpty;
  if ( (unsigned int)v79 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v45,
      (Il2CppObject *)IsNullOrEmpty,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &items->obj.klass + v79;
    v45->fields._size = v79 + 1;
    v81[4] = (Il2CppClass *)v80;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v80, v57, v58);
  }
  v47 = v45;
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    v47,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v83 = v82;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v83.fields._current;
    if ( v83.fields._current )
    {
      v60 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1BCB244(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v60, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v44 )
        sub_1BCB254(v61, v62);
      v65 = v44->fields._items;
      v66 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v44->fields._version;
      if ( !v65 )
        sub_1BCB254(v61, v62);
      v67 = v44->fields._size;
      if ( (unsigned int)v67 >= v65->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v60,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &v65->obj.klass + v67;
        v44->fields._size = v67 + 1;
        v68[4] = (Il2CppClass *)v60;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v60, v63, v64);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v43 )
    goto LABEL_58;
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)BasicHelper__IsNullOrEmpty(
                                                                         *(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 40LL),
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !*(_QWORD *)v43 || (v70 = *(_QWORD *)(*(_QWORD *)v43 + 40LL)) == 0 )
LABEL_58:
    sub_1BCB254(IsNullOrEmpty, size);
  if ( !*(_DWORD *)(v70 + 24) )
    sub_1BCB25C(IsNullOrEmpty, size, v69);
  if ( *(_DWORD *)(v70 + 32) != -1 )
  {
    v71 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v71,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0LL);
    v72 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v44,
            (System_Func_TSource__bool__o *)v71,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    IsNullOrEmpty = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                           v72,
                                                                           (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v44 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
  }
LABEL_43:
  if ( !*(_QWORD *)v43 )
    goto LABEL_58;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v43 + 16LL), 0LL) )
  {
    v73 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v73,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0LL);
    v74 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v44,
            (System_Func_TSource__bool__o *)v73,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v74,
                                                                                              (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
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
  __int64 v27; // x2
  Il2CppClass *v28; // x8
  _DWORD *v29; // x9
  __int64 v30; // x22
  _DWORD *v31; // x8
  int32_t v32; // w23
  int32_t npcActorId; // w27
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppClass *v39; // x1
  struct System_Int32_array *funcId; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct DataVals_array *dataVal; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t skillId; // w8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  BattleLogicFunction_WarBoardFunctionArgument_o *v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x1
  char v56; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B1A1A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v8);
    sub_1BCAFF8(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1BCAFF8(&int___TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v11);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__,
      v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_1BCAFF8(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v16);
    byte_4B1A1A8 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  memset(&v58, 0, sizeof(v58));
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    targetList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v56 = 0;
  v59 = v57;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v59.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1BCB254(Instance, v22);
    klass = current[1].klass;
    if ( !klass )
      sub_1BCB254(Instance, v22);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1BCB254(Instance, v22);
    if ( !Instance )
      sub_1BCB254(0LL, v22);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v25 = sub_1BCB0A0(int___TypeInfo, 1LL);
      v28 = current[1].klass;
      if ( !v28 )
        sub_1BCB254(v25, v26);
      v29 = v28->_1.fields;
      if ( !v29 )
        sub_1BCB254(v25, v26);
      v30 = v25;
      if ( !v25 )
        sub_1BCB254(0LL, v26);
      if ( !*(_DWORD *)(v25 + 24) )
        sub_1BCB25C(v25, v26, v27);
      *(_DWORD *)(v25 + 32) = v29[6];
    }
    else
    {
      v28 = current[1].klass;
      if ( !v28 )
        sub_1BCB254(v25, v26);
      v30 = 0LL;
    }
    v31 = v28->_1.fields;
    if ( !v31 )
      sub_1BCB254(v25, v26);
    v32 = v31[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v31[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v34 = sub_1BCB244(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v34, 0LL);
    if ( !v34 )
      sub_1BCB254(v35, v36);
    v39 = current[1].klass;
    *(_QWORD *)(v34 + 16) = v39;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 16), (int32_t)v39, v37, v38);
    *(_DWORD *)(v34 + 24) = npcActorId;
    *(_DWORD *)(v34 + 28) = v32;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v34 + 32) = funcId;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 32), (int32_t)funcId, v41, v42);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v34 + 40) = dataVal;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 40), (int32_t)dataVal, v44, v45);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v34 + 56) = v30;
    *(_DWORD *)(v34 + 48) = skillId;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 56), v30, v47, v48);
    v49 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1BCB244(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v49, v32, 0LL);
    *(_QWORD *)(v34 + 72) = v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 72), (int32_t)v49, v50, v51);
    v52 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v52 )
      sub_1BCB254(0LL, v53);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v52,
           (WarBoardManager_ExecuteProcParam_o *)v34,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v17,
           0LL) )
    {
      v56 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v17 )
LABEL_46:
    sub_1BCB254(targetList, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    v17,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v58.fields._current )
      sub_1BCB254(0LL, v54);
    ((void (*)(void))v58.fields._current->klass->vtable[11].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v56 & 1;
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
    sub_1BCB254(this, x);
  if ( !pieceIndex->max_length )
    sub_1BCB25C(this, x, method);
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
    sub_1BCB254(this, x);
  if ( !pieceIndex->max_length )
    sub_1BCB25C(this, x, method);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1BCB254(this, x);
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
  if ( (byte_4B1A1A9 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_4B1A1A9 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_1BCB254(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4B1A1AA & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4B1A1AA = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_1BCB254(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
}