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
  int64_t IsNullOrEmpty; // x0
  __int64 size; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x21
  System_Collections_Generic_List_object__o *v48; // x20
  System_Collections_Generic_List_object__o *v49; // x22
  bool v50; // zf
  System_Collections_Generic_List_object__o *v51; // x25
  int v52; // w8
  System_Func_object__bool__o *v53; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v54; // x0
  System_Func_TSource__bool__o *v55; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x22
  System_Func_object__bool__o *v57; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v68; // x22
  __int64 v69; // x0
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x8
  System_Func_object__bool__o *v82; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Func_object__bool__o *v84; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Func_object__bool__o *v87; // x24
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  int64_t v91; // x1
  Il2CppClass **v92; // x0
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C1FD0D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_1C3B764(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v19);
    sub_1C3B764(&System_Func_WarBoardPieceData__bool__TypeInfo, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v28);
    sub_1C3B764(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v29);
    sub_1C3B764(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v30);
    sub_1C3B764(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v31);
    sub_1C3B764(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v32);
    sub_1C3B764(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v33);
    sub_1C3B764(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v34);
    sub_1C3B764(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v35);
    sub_1C3B764(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v36);
    sub_1C3B764(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v37);
    byte_4C1FD0D = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v38 = sub_1C3B9B0(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
    goto LABEL_58;
  *(_QWORD *)(v38 + 16) = param;
  v47 = v38 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)param, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v38 + 24) = npcActorId;
  v48 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v49 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    v52 = targetType - 1;
    v51 = (System_Collections_Generic_List_object__o *)playerGroupList;
    switch ( v52 )
    {
      case 0:
        if ( !*(_QWORD *)v47 )
          goto LABEL_58;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 16LL), 0LL);
        v51 = v49;
        if ( (IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v53 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v53,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0LL);
        v54 = playerGroupList;
        v55 = (System_Func_TSource__bool__o *)v53;
        goto LABEL_50;
      case 2:
        goto LABEL_27;
      case 3:
        if ( !*(_QWORD *)v47 )
          goto LABEL_58;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 16LL), 0LL);
        v51 = v49;
        if ( (IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v87 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v87,
          (Il2CppObject *)v38,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0LL);
        v54 = enemyGroupList;
        v55 = (System_Func_TSource__bool__o *)v87;
LABEL_50:
        IsNullOrEmpty = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__50415372(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                                   v55,
                                   (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v49 )
          goto LABEL_51;
        goto LABEL_58;
      case 5:
        v51 = (System_Collections_Generic_List_object__o *)enemyGroupList;
        goto LABEL_27;
      case 10:
        if ( !playerGroupList )
          goto LABEL_58;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_26;
        Random = BattleRandom__getRandom(0, size, 0LL);
        v60 = (System_Collections_Generic_List_object__o *)playerGroupList;
        goto LABEL_24;
      default:
        goto LABEL_26;
    }
  }
  if ( targetType != 13 )
  {
    if ( targetType == 26 )
    {
      IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                 (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !IsNullOrEmpty )
        goto LABEL_58;
      v56 = (System_Collections_Generic_IEnumerable_TSource__o *)IsNullOrEmpty;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v57 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarBoardPieceData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v57,
        (Il2CppObject *)v38,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0LL);
      v58 = System_Linq_Enumerable__Where_object_(
              v56,
              (System_Func_TSource__bool__o *)v57,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                                 v58,
                                 (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      v51 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
    }
    else
    {
      v50 = targetType == 32;
      v51 = v49;
      if ( v50 )
      {
        IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                   (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v51 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
          (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      }
    }
LABEL_27:
    if ( !v51 )
      goto LABEL_58;
    goto LABEL_28;
  }
  if ( !enemyGroupList )
    goto LABEL_58;
  size = (unsigned int)enemyGroupList->fields._size;
  if ( (int)size < 1 )
  {
LABEL_26:
    v51 = v49;
    goto LABEL_27;
  }
  Random = BattleRandom__getRandom(0, size, 0LL);
  v60 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_24:
  IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                             v60,
                             Random,
                             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v49 )
    goto LABEL_58;
LABEL_51:
  items = v49->fields._items;
  v89 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v49->fields._version;
  if ( !items )
    goto LABEL_58;
  v90 = v49->fields._size;
  v91 = IsNullOrEmpty;
  if ( (unsigned int)v90 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)IsNullOrEmpty,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &items->obj.klass + v90;
    v49->fields._size = v90 + 1;
    v92[4] = (Il2CppClass *)v91;
    sub_1C3B708((PartyOrganizationUtility_o *)(v92 + 4), v91, v61, v62, v63, v64, v65, v66);
  }
  v51 = v49;
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    v51,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v94 = v93;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v94.fields._current;
    if ( v94.fields._current )
    {
      v68 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1C3B9B0(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v68, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v48 )
        sub_1C3B9C0(v69, v70);
      v77 = v48->fields._items;
      v78 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v48->fields._version;
      if ( !v77 )
        sub_1C3B9C0(v69, v70);
      v79 = v48->fields._size;
      if ( (unsigned int)v79 >= v77->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)v68,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v80 = &v77->obj.klass + v79;
        v48->fields._size = v79 + 1;
        v80[4] = (Il2CppClass *)v68;
        sub_1C3B708((PartyOrganizationUtility_o *)(v80 + 4), (int64_t)v68, v71, v72, v73, v74, v75, v76);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v47 )
    goto LABEL_58;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 40LL), 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !*(_QWORD *)v47 || (v81 = *(_QWORD *)(*(_QWORD *)v47 + 40LL)) == 0 )
LABEL_58:
    sub_1C3B9C0(IsNullOrEmpty, size);
  if ( !*(_DWORD *)(v81 + 24) )
    sub_1C3B9C8(IsNullOrEmpty, size);
  if ( *(_DWORD *)(v81 + 32) != -1 )
  {
    v82 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v82,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0LL);
    v83 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v48,
            (System_Func_TSource__bool__o *)v82,
            (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                               v83,
                               (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v48 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
  }
LABEL_43:
  if ( !*(_QWORD *)v47 )
    goto LABEL_58;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 16LL), 0LL) )
  {
    v84 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v84,
      (Il2CppObject *)v38,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0LL);
    v85 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v48,
            (System_Func_TSource__bool__o *)v84,
            (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v85,
                                                                                              (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v48;
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
  int64_t v29; // x22
  _DWORD *v30; // x8
  int32_t v31; // w23
  int32_t npcActorId; // w27
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  struct System_Int32_array *funcId; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct DataVals_array *dataVal; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int32_t skillId; // w8
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattleLogicFunction_WarBoardFunctionArgument_o *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x1
  char v75; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C1FD0E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v5);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v6);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v8);
    sub_1C3B764(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_1C3B764(&int___TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__,
      v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v14);
    sub_1C3B764(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_1C3B764(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v16);
    byte_4C1FD0E = 1;
  }
  memset(&v78, 0, sizeof(v78));
  memset(&v77, 0, sizeof(v77));
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    targetList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v75 = 0;
  v78 = v76;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v78.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1C3B9C0(Instance, v22);
    klass = current[1].klass;
    if ( !klass )
      sub_1C3B9C0(Instance, v22);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1C3B9C0(Instance, v22);
    if ( !Instance )
      sub_1C3B9C0(0LL, v22);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v25 = sub_1C3B80C(int___TypeInfo, 1LL);
      v27 = current[1].klass;
      if ( !v27 )
        sub_1C3B9C0(v25, v26);
      v28 = v27->_1.fields;
      if ( !v28 )
        sub_1C3B9C0(v25, v26);
      v29 = v25;
      if ( !v25 )
        sub_1C3B9C0(0LL, v26);
      if ( !*(_DWORD *)(v25 + 24) )
        sub_1C3B9C8(v25, v26);
      *(_DWORD *)(v25 + 32) = v28[6];
    }
    else
    {
      v27 = current[1].klass;
      if ( !v27 )
        sub_1C3B9C0(v25, v26);
      v29 = 0LL;
    }
    v30 = v27->_1.fields;
    if ( !v30 )
      sub_1C3B9C0(v25, v26);
    v31 = v30[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v30[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v33 = sub_1C3B9B0(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v33, 0LL);
    if ( !v33 )
      sub_1C3B9C0(v34, v35);
    v42 = (int64_t)current[1].klass;
    *(_QWORD *)(v33 + 16) = v42;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 16), v42, v36, v37, v38, v39, v40, v41);
    *(_DWORD *)(v33 + 24) = npcActorId;
    *(_DWORD *)(v33 + 28) = v31;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v33 + 32) = funcId;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)funcId, v44, v45, v46, v47, v48, v49);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v33 + 40) = dataVal;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 40), (int64_t)dataVal, v51, v52, v53, v54, v55, v56);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v33 + 56) = v29;
    *(_DWORD *)(v33 + 48) = skillId;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 56), v29, v58, v59, v60, v61, v62, v63);
    v64 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1C3B9B0(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v64, v31, 0LL);
    *(_QWORD *)(v33 + 72) = v64;
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 72), (int64_t)v64, v65, v66, v67, v68, v69, v70);
    v71 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v71 )
      sub_1C3B9C0(0LL, v72);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v71,
           (WarBoardManager_ExecuteProcParam_o *)v33,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v17,
           0LL) )
    {
      v75 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v17 )
LABEL_46:
    sub_1C3B9C0(targetList, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    v17,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v77.fields._current )
      sub_1C3B9C0(0LL, v73);
    ((void (*)(void))v77.fields._current->klass->vtable[11].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v75 & 1;
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
    sub_1C3B9C0(this, x);
  if ( !pieceIndex->max_length )
    sub_1C3B9C8(this, x);
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
    sub_1C3B9C0(this, x);
  if ( !pieceIndex->max_length )
    sub_1C3B9C8(this, x);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1C3B9C0(this, x);
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
  if ( (byte_4C1FD0F & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_4C1FD0F = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_1C3B9C0(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4C1FD10 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4C1FD10 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_1C3B9C0(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
}