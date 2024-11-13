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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x19
  int64_t IsNullOrEmpty; // x0
  __int64 size; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x21
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Collections_Generic_List_object__o *v77; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x22
  bool v82; // zf
  System_Collections_Generic_List_object__o *v83; // x25
  int v84; // w8
  __int64 v85; // x2
  __int64 v86; // x3
  System_Func_object__bool__o *v87; // x23
  System_Collections_Generic_List_WarBoardPieceData__o *v88; // x0
  System_Func_TSource__bool__o *v89; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x22
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Func_object__bool__o *v94; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  int32_t Random; // w1
  System_Collections_Generic_List_object__o *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v108; // x22
  __int64 v109; // x0
  __int64 v110; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x8
  System_Func_object__bool__o *v124; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  System_Func_object__bool__o *v129; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x0
  __int64 v132; // x2
  __int64 v133; // x3
  System_Func_object__bool__o *v134; // x24
  struct System_Object_array *items; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  int64_t v138; // x1
  Il2CppClass **v139; // x0
  System_Collections_Generic_List_Enumerator_object__o v140; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v141; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B14025 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___,
      *(_QWORD *)&targetType,
      playerGroupList);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v16, v17);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v24, v25);
    sub_1BCA7E0(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v44, v45);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v48, v49);
    sub_1BCA7E0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v50, v51);
    sub_1BCA7E0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v52, v53);
    sub_1BCA7E0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v54, v55);
    sub_1BCA7E0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v56, v57);
    sub_1BCA7E0(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v58, v59);
    sub_1BCA7E0(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v60, v61);
    sub_1BCA7E0(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v62, v63);
    byte_4B14025 = 1;
  }
  memset(&v141, 0, sizeof(v141));
  v64 = sub_1BCAA2C(
          WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo,
          *(_QWORD *)&targetType,
          playerGroupList,
          enemyGroupList);
  System_Object___ctor((Il2CppObject *)v64, 0LL);
  if ( !v64 )
    goto LABEL_58;
  *(_QWORD *)(v64 + 16) = param;
  v73 = v64 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 16), (int64_t)param, v67, v68, v69, v70, v71, v72);
  *(_DWORD *)(v64 + 24) = npcActorId;
  v77 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo,
                                                       v74,
                                                       v75,
                                                       v76);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       v78,
                                                       v79,
                                                       v80);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    v84 = targetType - 1;
    v83 = (System_Collections_Generic_List_object__o *)playerGroupList;
    switch ( v84 )
    {
      case 0:
        if ( !*(_QWORD *)v73 )
          goto LABEL_58;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v73 + 16LL), 0LL);
        v83 = v81;
        if ( (IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v87 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, size, v85, v86);
        System_Func_object__bool____ctor(
          v87,
          (Il2CppObject *)v64,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          0LL);
        v88 = playerGroupList;
        v89 = (System_Func_TSource__bool__o *)v87;
        goto LABEL_50;
      case 2:
        goto LABEL_27;
      case 3:
        if ( !*(_QWORD *)v73 )
          goto LABEL_58;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v73 + 16LL), 0LL);
        v83 = v81;
        if ( (IsNullOrEmpty & 1) != 0 )
          goto LABEL_27;
        v134 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_WarBoardPieceData__bool__TypeInfo,
                                                size,
                                                v132,
                                                v133);
        System_Func_object__bool____ctor(
          v134,
          (Il2CppObject *)v64,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          0LL);
        v88 = enemyGroupList;
        v89 = (System_Func_TSource__bool__o *)v134;
LABEL_50:
        IsNullOrEmpty = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)v88,
                                   v89,
                                   (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( v81 )
          goto LABEL_51;
        goto LABEL_58;
      case 5:
        v83 = (System_Collections_Generic_List_object__o *)enemyGroupList;
        goto LABEL_27;
      case 10:
        if ( !playerGroupList )
          goto LABEL_58;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_26;
        Random = BattleRandom__getRandom(0, size, 0LL);
        v97 = (System_Collections_Generic_List_object__o *)playerGroupList;
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
                                 (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      if ( !IsNullOrEmpty )
        goto LABEL_58;
      v90 = (System_Collections_Generic_IEnumerable_TSource__o *)IsNullOrEmpty;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
        (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      v94 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, v91, v92, v93);
      System_Func_object__bool____ctor(
        v94,
        (Il2CppObject *)v64,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
        0LL);
      v95 = System_Linq_Enumerable__Where_object_(
              v90,
              (System_Func_TSource__bool__o *)v94,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                                 v95,
                                 (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
      v83 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
    }
    else
    {
      v82 = targetType == 32;
      v83 = v81;
      if ( v82 )
      {
        IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                   (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
        if ( !IsNullOrEmpty )
          goto LABEL_58;
        v83 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
          (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
      }
    }
LABEL_27:
    if ( !v83 )
      goto LABEL_58;
    goto LABEL_28;
  }
  if ( !enemyGroupList )
    goto LABEL_58;
  size = (unsigned int)enemyGroupList->fields._size;
  if ( (int)size < 1 )
  {
LABEL_26:
    v83 = v81;
    goto LABEL_27;
  }
  Random = BattleRandom__getRandom(0, size, 0LL);
  v97 = (System_Collections_Generic_List_object__o *)enemyGroupList;
LABEL_24:
  IsNullOrEmpty = (int64_t)System_Collections_Generic_List_object___get_Item(
                             v97,
                             Random,
                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
  if ( !v81 )
    goto LABEL_58;
LABEL_51:
  items = v81->fields._items;
  v136 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v81->fields._version;
  if ( !items )
    goto LABEL_58;
  v137 = v81->fields._size;
  v138 = IsNullOrEmpty;
  if ( (unsigned int)v137 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v81,
      (Il2CppObject *)IsNullOrEmpty,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
  }
  else
  {
    v139 = &items->obj.klass + v137;
    v81->fields._size = v137 + 1;
    v139[4] = (Il2CppClass *)v138;
    sub_1BCA784((PartyOrganizationUtility_o *)(v139 + 4), v138, v98, v99, v100, v101, v102, v103);
  }
  v83 = v81;
LABEL_28:
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v140,
    v83,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v141 = v140;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v141,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v141.fields._current;
    if ( v141.fields._current )
    {
      v108 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_1BCAA2C(
                                                               WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo,
                                                               v104,
                                                               v105,
                                                               v106);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v108, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v77 )
        sub_1BCAA3C(v109, v110);
      v117 = v77->fields._items;
      v118 = Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__;
      ++v77->fields._version;
      if ( !v117 )
        sub_1BCAA3C(v109, v110);
      v119 = v77->fields._size;
      if ( (unsigned int)v119 >= v117->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v77,
          (Il2CppObject *)v108,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v117->obj.klass + v119;
        v77->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)v108;
        sub_1BCA784((PartyOrganizationUtility_o *)(v120 + 4), (int64_t)v108, v111, v112, v113, v114, v115, v116);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v141,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v73 )
    goto LABEL_58;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v73 + 40LL), 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    goto LABEL_43;
  if ( !*(_QWORD *)v73 || (v123 = *(_QWORD *)(*(_QWORD *)v73 + 40LL)) == 0 )
LABEL_58:
    sub_1BCAA3C(IsNullOrEmpty, size);
  if ( !*(_DWORD *)(v123 + 24) )
    sub_1BCAA44(IsNullOrEmpty, size);
  if ( *(_DWORD *)(v123 + 32) != -1 )
  {
    v124 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                            size,
                                            v121,
                                            v122);
    System_Func_object__bool____ctor(
      v124,
      (Il2CppObject *)v64,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
      0LL);
    v125 = System_Linq_Enumerable__Where_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v77,
             (System_Func_TSource__bool__o *)v124,
             (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    IsNullOrEmpty = (int64_t)System_Linq_Enumerable__ToList_object_(
                               v125,
                               (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    v77 = (System_Collections_Generic_List_object__o *)IsNullOrEmpty;
  }
LABEL_43:
  if ( !*(_QWORD *)v73 )
    goto LABEL_58;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v73 + 16LL), 0LL) )
  {
    v129 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                            v126,
                                            v127,
                                            v128);
    System_Func_object__bool____ctor(
      v129,
      (Il2CppObject *)v64,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      0LL);
    v130 = System_Linq_Enumerable__Where_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v77,
             (System_Func_TSource__bool__o *)v129,
             (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_object_(
                                                                                              v130,
                                                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v77;
}


bool __fastcall WarBoardSkillLogic__UseSkill(
        WarBoardSkillLogic_o *this,
        WarBoardSkillLogic_WarBoardSkillLogicParam_o *logicParam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_object__o *v31; // x20
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *targetList; // x0
  Il2CppObject *current; // x26
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  Il2CppClass *v43; // x8
  _DWORD *v44; // x9
  int64_t v45; // x22
  _DWORD *v46; // x8
  int32_t v47; // w23
  int32_t npcActorId; // w27
  __int64 v49; // x21
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  struct System_Int32_array *funcId; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct DataVals_array *dataVal; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int32_t skillId; // w8
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  BattleLogicFunction_WarBoardFunctionArgument_o *v83; // x22
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  Il2CppObject *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x1
  char v94; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+10h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B14026 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam, method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v5,
      v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v9,
      v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v13, v14);
    sub_1BCA7E0(&WarBoardManager_ExecuteProcParam_TypeInfo, v15, v16);
    sub_1BCA7E0(&int___TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v19, v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__,
      v21,
      v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v29, v30);
    byte_4B14026 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  memset(&v96, 0, sizeof(v96));
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                       logicParam,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = (System_Collections_Generic_List_object__o *)logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_46;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    targetList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v94 = 0;
  v97 = v95;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v97.fields._current;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_1BCAA3C(Instance, v36);
    klass = current[1].klass;
    if ( !klass )
      sub_1BCAA3C(Instance, v36);
    fields = klass->_1.fields;
    if ( !fields )
      sub_1BCAA3C(Instance, v36);
    if ( !Instance )
      sub_1BCAA3C(0LL, v36);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v39 = sub_1BCA888(int___TypeInfo, 1LL);
      v43 = current[1].klass;
      if ( !v43 )
        sub_1BCAA3C(v39, v40);
      v44 = v43->_1.fields;
      if ( !v44 )
        sub_1BCAA3C(v39, v40);
      v45 = v39;
      if ( !v39 )
        sub_1BCAA3C(0LL, v40);
      if ( !*(_DWORD *)(v39 + 24) )
        sub_1BCAA44(v39, v40);
      *(_DWORD *)(v39 + 32) = v44[6];
    }
    else
    {
      v43 = current[1].klass;
      if ( !v43 )
        sub_1BCAA3C(v39, v40);
      v45 = 0LL;
    }
    v46 = v43->_1.fields;
    if ( !v46 )
      sub_1BCAA3C(v39, v40);
    v47 = v46[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v46[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v49 = sub_1BCAA2C(WarBoardManager_ExecuteProcParam_TypeInfo, v40, v41, v42);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v49, 0LL);
    if ( !v49 )
      sub_1BCAA3C(v50, v51);
    v58 = (int64_t)current[1].klass;
    *(_QWORD *)(v49 + 16) = v58;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), v58, v52, v53, v54, v55, v56, v57);
    *(_DWORD *)(v49 + 24) = npcActorId;
    *(_DWORD *)(v49 + 28) = v47;
    funcId = logicParam->fields.funcId;
    *(_QWORD *)(v49 + 32) = funcId;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 32), (int64_t)funcId, v60, v61, v62, v63, v64, v65);
    dataVal = logicParam->fields.dataVal;
    *(_QWORD *)(v49 + 40) = dataVal;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 40), (int64_t)dataVal, v67, v68, v69, v70, v71, v72);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v49 + 56) = v45;
    *(_DWORD *)(v49 + 48) = skillId;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 56), v45, v74, v75, v76, v77, v78, v79);
    v83 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_1BCAA2C(
                                                              BattleLogicFunction_WarBoardFunctionArgument_TypeInfo,
                                                              v80,
                                                              v81,
                                                              v82);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v83, v47, 0LL);
    *(_QWORD *)(v49 + 72) = v83;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 72), (int64_t)v83, v84, v85, v86, v87, v88, v89);
    v90 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v90 )
      sub_1BCAA3C(0LL, v91);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v90,
           (WarBoardManager_ExecuteProcParam_o *)v49,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           (System_Collections_Generic_List_WarBoardPieceData__o *)v31,
           0LL) )
    {
      v94 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  if ( !v31 )
LABEL_46:
    sub_1BCAA3C(targetList, v32);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v96,
    v31,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v96.fields._current )
      sub_1BCAA3C(0LL, v92);
    ((void (*)(void))v96.fields._current->klass->vtable[11].method)();
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  return v94 & 1;
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
    sub_1BCAA3C(this, x);
  if ( !pieceIndex->max_length )
    sub_1BCAA44(this, x);
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
    sub_1BCAA3C(this, x);
  if ( !pieceIndex->max_length )
    sub_1BCAA44(this, x);
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B14027 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1BCA7E0(
                                                          &Method_System_Linq_Enumerable_Contains_int___,
                                                          n,
                                                          method);
    byte_4B14027 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_1BCAA3C(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4B14028 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_1BCA7E0(
                                                          &Method_System_Linq_Enumerable_Contains_int___,
                                                          x,
                                                          method);
    byte_4B14028 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_1BCAA3C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}