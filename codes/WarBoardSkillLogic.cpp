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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  __int64 v96; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *Random; // x0
  __int64 size; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v106; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v107; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v109; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x0
  bool IsNullOrEmpty; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v112; // x22
  System_Collections_Generic_List_WarBoardPieceData__o *v113; // x0
  System_Func_TSource__bool__o *v114; // x1
  Il2CppClass **v115; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v116; // x1
  const MethodInfo_3056FC0 *v117; // x2
  bool v118; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v119; // x23
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v121; // x22
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v125; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v127; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  __int64 v130; // x0
  System_Collections_Generic_List_Enumerator_T__o v131; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v132; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EAB92 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___,
      targetType,
      (_DWORD)playerGroupList,
      enemyGroupList);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v54, v55, v56);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__,
      v57,
      v58,
      v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v63, v64, v65);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v66, v67, v68);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v69, v70, v71);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v75, v76, v77);
    sub_B5D5C4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v78, v79, v80);
    sub_B5D5C4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v81, v82, v83);
    sub_B5D5C4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v84, v85, v86);
    sub_B5D5C4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v87, v88, v89);
    sub_B5D5C4(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v90, v91, v92);
    sub_B5D5C4(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v93, v94, v95);
    byte_42EAB92 = 1;
  }
  memset(&v132, 0, sizeof(v132));
  v96 = sub_B5D694(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  WarBoardSkillLogic___c__DisplayClass1_0___ctor((WarBoardSkillLogic___c__DisplayClass1_0_o *)v96, 0LL);
  if ( !v96 )
    goto LABEL_54;
  *(_QWORD *)(v96 + 16) = param;
  v105 = v96 + 16;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v96 + 16),
    (System_Int32_array **)param,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  *(_DWORD *)(v96 + 24) = npcActorId;
  v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v106,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v107 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v107,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Random = (EventMissionProgressRequest_Argument_ProgressData_o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v105 )
          goto LABEL_54;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v105 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v107;
        if ( IsNullOrEmpty )
          goto LABEL_36;
        v112 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v112,
          (Il2CppObject *)v96,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v113 = playerGroupList;
        v114 = (System_Func_TSource__bool__o *)v112;
        goto LABEL_32;
      case 3:
        goto LABEL_36;
      case 4:
        if ( !*(_QWORD *)v105 )
          goto LABEL_54;
        v118 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v105 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v107;
        if ( v118 )
          goto LABEL_36;
        v119 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v119,
          (Il2CppObject *)v96,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v113 = enemyGroupList;
        v114 = (System_Func_TSource__bool__o *)v119;
LABEL_32:
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v113,
                                                                          v114,
                                                                          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( !v107 )
          goto LABEL_54;
        v116 = Random;
        v117 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        goto LABEL_34;
      case 6:
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)enemyGroupList;
        if ( !enemyGroupList )
          goto LABEL_54;
        goto LABEL_37;
      case 11:
        if ( !playerGroupList )
          goto LABEL_54;
        size = (unsigned int)playerGroupList->fields._size;
        if ( (int)size < 1 )
          goto LABEL_35;
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleRandom__getRandom(0, size, 0LL);
        if ( playerGroupList->fields._size <= (unsigned int)Random )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v107 )
          goto LABEL_54;
        v115 = &playerGroupList->fields._items->obj.klass + (int)Random;
        goto LABEL_28;
      default:
        goto LABEL_35;
    }
  }
  if ( targetType == 13 )
  {
    if ( !enemyGroupList )
      goto LABEL_54;
    size = (unsigned int)enemyGroupList->fields._size;
    if ( (int)size < 1 )
      goto LABEL_35;
    Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleRandom__getRandom(0, size, 0LL);
    if ( enemyGroupList->fields._size <= (unsigned int)Random )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( v107 )
    {
      v115 = &enemyGroupList->fields._items->obj.klass + (int)Random;
LABEL_28:
      v116 = (EventMissionProgressRequest_Argument_ProgressData_o *)v115[4];
      v117 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
LABEL_34:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v107, v116, v117);
LABEL_35:
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v107;
LABEL_36:
      if ( !Random )
        goto LABEL_54;
      goto LABEL_37;
    }
LABEL_54:
    sub_B5D69C(Random, size);
  }
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v107;
  if ( targetType != 26 )
    goto LABEL_36;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
  v108 = (System_Collections_Generic_IEnumerable_TSource__o *)Random;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Random,
    (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v109 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v109,
    (Il2CppObject *)v96,
    Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v110 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           v108,
           (System_Func_TSource__bool__o *)v109,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v110,
                                                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
LABEL_37:
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v131,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Random,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v132 = v131;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v132,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v132.fields.current;
    if ( v132.fields.current )
    {
      v121 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_B5D694(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v121, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v106 )
        sub_B5D69C(v122, v123);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v106,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v132,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v105 )
    goto LABEL_54;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BasicHelper__IsNullOrEmpty(
                                                                    *(System_Collections_ICollection_o **)(*(_QWORD *)v105 + 40LL),
                                                                    0LL);
  if ( ((unsigned __int8)Random & 1) == 0 )
  {
    if ( !*(_QWORD *)v105 )
      goto LABEL_54;
    v124 = *(_QWORD *)(*(_QWORD *)v105 + 40LL);
    if ( !v124 )
      goto LABEL_54;
    if ( !*(_DWORD *)(v124 + 24) )
    {
      v130 = sub_B5D6C8(Random);
      sub_B5D668(v130, 0LL);
    }
    if ( *(_DWORD *)(v124 + 32) != -1 )
    {
      v125 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v125,
        (Il2CppObject *)v96,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
      v126 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v106,
               (System_Func_TSource__bool__o *)v125,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v126,
                                                                        (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
      v106 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Random;
    }
  }
  if ( !*(_QWORD *)v105 )
    goto LABEL_54;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v105 + 16LL), 0LL) )
  {
    v127 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v127,
      (Il2CppObject *)v96,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
    v128 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v106,
             (System_Func_TSource__bool__o *)v127,
             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                              v128,
                                                                                              (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v106;
}


bool __fastcall WarBoardSkillLogic__UseSkill(
        WarBoardSkillLogic_o *this,
        WarBoardSkillLogic_WarBoardSkillLogicParam_o *logicParam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x20
  __int64 v45; // x1
  struct System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *targetList; // x0
  System_Collections_Generic_List_WarBoardPieceData__o *v47; // x28
  Il2CppObject *current; // x27
  WebViewManager_o *Instance; // x0
  __int64 v50; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v53; // x0
  __int64 v54; // x1
  Il2CppClass *v55; // x8
  _DWORD *v56; // x8
  System_Int32_array **v57; // x22
  Il2CppClass *v58; // x8
  _DWORD *v59; // x8
  int32_t v60; // w23
  int32_t npcActorId; // w20
  __int64 v62; // x21
  __int64 v63; // x0
  __int64 v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_Int32_array **funcId; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **dataVal; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  int32_t skillId; // w8
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  BattleLogicFunction_WarBoardFunctionArgument_o *v93; // x22
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  WebViewManager_o *v100; // x0
  __int64 v101; // x1
  __int64 v102; // x1
  int v103; // w19
  __int64 v105; // x0
  bool v106; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+10h] [xbp-B0h] BYREF
  int v108[2]; // [xsp+28h] [xbp-98h]
  int v109; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42EAB93 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__,
      (_DWORD)logicParam,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v17, v18, v19);
    sub_B5D5C4(&WarBoardManager_ExecuteProcParam_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&int___TypeInfo, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v41, v42, v43);
    byte_42EAB93 = 1;
  }
  memset(&v111, 0, sizeof(v111));
  memset(&v110, 0, sizeof(v110));
  v109 = 0;
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v107,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v106 = 0;
  v111 = v107;
  v47 = (System_Collections_Generic_List_WarBoardPieceData__o *)v44;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v111,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v111.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_B5D69C(Instance, v50);
    klass = current[1].klass;
    if ( !klass )
      sub_B5D69C(Instance, v50);
    fields = klass->_1.fields;
    if ( !fields )
      sub_B5D69C(Instance, v50);
    if ( !Instance )
      sub_B5D69C(0LL, v50);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v53 = sub_B5D5DC(int___TypeInfo, 1LL);
      v55 = current[1].klass;
      if ( !v55 )
        sub_B5D69C(v53, v54);
      v56 = v55->_1.fields;
      if ( !v56 )
        sub_B5D69C(v53, v54);
      v57 = (System_Int32_array **)v53;
      if ( !v53 )
        sub_B5D69C(0LL, v54);
      if ( !*(_DWORD *)(v53 + 24) )
      {
        v105 = sub_B5D6C8(v53);
        sub_B5D668(v105, 0LL);
      }
      *(_DWORD *)(v53 + 32) = v56[6];
    }
    else
    {
      v57 = 0LL;
    }
    v58 = current[1].klass;
    if ( !v58 )
      sub_B5D69C(v53, v54);
    v59 = v58->_1.fields;
    if ( !v59 )
      sub_B5D69C(v53, v54);
    v60 = v59[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v59[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v62 = sub_B5D694(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v62, 0LL);
    if ( !v62 )
      sub_B5D69C(v63, v64);
    v71 = (System_Int32_array **)current[1].klass;
    *(_QWORD *)(v62 + 16) = v71;
    sub_B5D560((BattleServantConfConponent_o *)(v62 + 16), v71, v65, v66, v67, v68, v69, v70);
    *(_DWORD *)(v62 + 24) = npcActorId;
    *(_DWORD *)(v62 + 28) = v60;
    funcId = (System_Int32_array **)logicParam->fields.funcId;
    *(_QWORD *)(v62 + 32) = funcId;
    sub_B5D560((BattleServantConfConponent_o *)(v62 + 32), funcId, v73, v74, v75, v76, v77, v78);
    dataVal = (System_Int32_array **)logicParam->fields.dataVal;
    *(_QWORD *)(v62 + 40) = dataVal;
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47;
    sub_B5D560((BattleServantConfConponent_o *)(v62 + 40), dataVal, v80, v81, v82, v83, v84, v85);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v62 + 56) = v57;
    *(_DWORD *)(v62 + 48) = skillId;
    sub_B5D560((BattleServantConfConponent_o *)(v62 + 56), v57, v87, v88, v89, v90, v91, v92);
    v93 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_B5D694(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v93, v60, 0LL);
    *(_QWORD *)(v62 + 72) = v93;
    sub_B5D560((BattleServantConfConponent_o *)(v62 + 72), (System_Int32_array **)v93, v94, v95, v96, v97, v98, v99);
    v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v100,
           (WarBoardManager_ExecuteProcParam_o *)v62,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           v47,
           0LL) )
    {
      v106 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  v108[0] = 308;
  v109 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v111,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  v109 = 0;
  if ( !v44 )
LABEL_49:
    sub_B5D69C(targetList, v45);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v110,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v44,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v110,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v110.fields.current )
      sub_B5D69C(0LL, v102);
    ((void (*)(void))v110.fields.current->klass->vtable[11].method)();
  }
  v108[0] = 367;
  v103 = ++v109;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v110,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( v103 && v108[v103 - 1] == 367 )
    v109 = v103 - 1;
  return v106;
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
  __int64 v6; // x0

  if ( !x || (param = this->fields.param) == 0LL || (pieceIndex = param->fields.pieceIndex) == 0LL )
    sub_B5D69C(this, x);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__1(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct System_Int32_array *pieceIndex; // x8
  __int64 v6; // x0

  if ( !x || (param = this->fields.param) == 0LL || (pieceIndex = param->fields.pieceIndex) == 0LL )
    sub_B5D69C(this, x);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B5D6C8(this);
    sub_B5D668(v6, 0LL);
  }
  return x->fields._index_k__BackingField == pieceIndex->m_Items[1];
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__2(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0LL )
    sub_B5D69C(this, x);
  return battleServant_k__BackingField->fields.uniqueId != this->fields.npcActorId;
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__3(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardSkillLogic___c__DisplayClass1_0_o *v5; // x20
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  v5 = this;
  if ( (byte_42E5FD0 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B5D5C4(
                                                          &Method_System_Linq_Enumerable_Contains_int___,
                                                          (_DWORD)n,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E5FD0 = 1;
  }
  param = v5->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_B5D69C(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__4(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardSkillLogic___c__DisplayClass1_0_o *v5; // x20
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  v5 = this;
  if ( (byte_42E5FD1 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B5D5C4(
                                                          &Method_System_Linq_Enumerable_Contains_int___,
                                                          (_DWORD)x,
                                                          (_DWORD)method,
                                                          v3);
    byte_42E5FD1 = 1;
  }
  param = v5->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_B5D69C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}