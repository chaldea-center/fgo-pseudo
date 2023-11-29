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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x24
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v58; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x23
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  bool IsNullOrEmpty; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v72; // x22
  System_Collections_Generic_List_WarBoardPieceData__o *v73; // x0
  System_Func_TSource__bool__o *v74; // x1
  int v75; // w1
  unsigned int v76; // w23
  Il2CppClass **v77; // x8
  int size; // w1
  unsigned int Random; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v80; // x1
  const MethodInfo_2F25CD8 *v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  bool v86; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v87; // x23
  WarBoardData_SquareRangeSearch_o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v94; // x22
  _BOOL8 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  __int64 v100; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v101; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v107; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v111; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FBAC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_B16FFC(&Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__, v19);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v20);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v21);
    sub_B16FFC(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v30);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v31);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v32);
    sub_B16FFC(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v33);
    sub_B16FFC(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v34);
    sub_B16FFC(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v35);
    sub_B16FFC(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v36);
    sub_B16FFC(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v37);
    sub_B16FFC(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v38);
    sub_B16FFC(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v39);
    byte_40FBAC5 = 1;
  }
  memset(&v111, 0, sizeof(v111));
  v40 = sub_B170CC(
          WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo,
          *(_QWORD *)&targetType,
          playerGroupList,
          enemyGroupList,
          param);
  WarBoardSkillLogic___c__DisplayClass1_0___ctor((WarBoardSkillLogic___c__DisplayClass1_0_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_54;
  *(_QWORD *)(v40 + 16) = param;
  v47 = v40 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v40 + 16), (System_Int32_array **)param, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v40 + 24) = npcActorId;
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50,
                                                                                                  v51);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v53,
                                                                                                  v54,
                                                                                                  v55,
                                                                                                  v56);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v47 )
          goto LABEL_54;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 16LL), 0LL);
        v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v57;
        if ( IsNullOrEmpty )
          goto LABEL_36;
        v72 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                   v67,
                                                                                   v68,
                                                                                   v69,
                                                                                   v70);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v72,
          (Il2CppObject *)v40,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v73 = playerGroupList;
        v74 = (System_Func_TSource__bool__o *)v72;
        goto LABEL_32;
      case 3:
        goto LABEL_36;
      case 4:
        if ( !*(_QWORD *)v47 )
          goto LABEL_54;
        v86 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 16LL), 0LL);
        v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v57;
        if ( v86 )
          goto LABEL_36;
        v87 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                   v82,
                                                                                   v83,
                                                                                   v84,
                                                                                   v85);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v87,
          (Il2CppObject *)v40,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v73 = enemyGroupList;
        v74 = (System_Func_TSource__bool__o *)v87;
LABEL_32:
        v88 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                v74,
                (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( !v57 )
          goto LABEL_54;
        v80 = (EventMissionProgressRequest_Argument_ProgressData_o *)v88;
        v81 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        goto LABEL_34;
      case 6:
        v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)enemyGroupList;
        if ( !enemyGroupList )
          goto LABEL_54;
        goto LABEL_37;
      case 11:
        if ( !playerGroupList )
          goto LABEL_54;
        size = playerGroupList->fields._size;
        if ( size < 1 )
          goto LABEL_35;
        Random = BattleRandom__getRandom(0, size, 0LL);
        if ( playerGroupList->fields._size <= Random )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        if ( !v57 )
          goto LABEL_54;
        v77 = &playerGroupList->fields._items->obj.klass + (int)Random;
        goto LABEL_28;
      default:
        goto LABEL_35;
    }
  }
  if ( targetType == 13 )
  {
    if ( !enemyGroupList )
      goto LABEL_54;
    v75 = enemyGroupList->fields._size;
    if ( v75 < 1 )
      goto LABEL_35;
    v76 = BattleRandom__getRandom(0, v75, 0LL);
    if ( enemyGroupList->fields._size <= v76 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( v57 )
    {
      v77 = &enemyGroupList->fields._items->obj.klass + (int)v76;
LABEL_28:
      v80 = (EventMissionProgressRequest_Argument_ProgressData_o *)v77[4];
      v81 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
LABEL_34:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v57, v80, v81);
LABEL_35:
      v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v57;
LABEL_36:
      if ( !v58 )
        goto LABEL_54;
      goto LABEL_37;
    }
LABEL_54:
    sub_B170D4();
  }
  v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v57;
  if ( targetType != 26 )
    goto LABEL_36;
  v59 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                            (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !v59 )
    goto LABEL_54;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v59,
    (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v61,
                                                                             v62,
                                                                             v63,
                                                                             v64);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v65,
    (Il2CppObject *)v40,
    Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v66 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v60,
          (System_Func_TSource__bool__o *)v65,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v58 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v66,
                                                                                         (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !v58 )
    goto LABEL_54;
LABEL_37:
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v110,
    v58,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v111 = v110;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v111,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v111.fields.current;
    if ( v111.fields.current )
    {
      v94 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_B170CC(
                                                              WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo,
                                                              v89,
                                                              v90,
                                                              v91,
                                                              v92);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v94, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v52 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v94,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v111,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v47 )
    goto LABEL_54;
  v95 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 40LL), 0LL);
  if ( !v95 )
  {
    if ( !*(_QWORD *)v47 )
      goto LABEL_54;
    v100 = *(_QWORD *)(*(_QWORD *)v47 + 40LL);
    if ( !v100 )
      goto LABEL_54;
    if ( !*(_DWORD *)(v100 + 24) )
    {
      sub_B17100(v95, v96, v97);
      sub_B170A0();
    }
    if ( *(_DWORD *)(v100 + 32) != -1 )
    {
      v101 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                                                                  v96,
                                                                                  v97,
                                                                                  v98,
                                                                                  v99);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v101,
        (Il2CppObject *)v40,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
      v102 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v52,
               (System_Func_TSource__bool__o *)v101,
               (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v102, (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    }
  }
  if ( !*(_QWORD *)v47 )
    goto LABEL_54;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v47 + 16LL), 0LL) )
  {
    v107 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                                                                v103,
                                                                                v104,
                                                                                v105,
                                                                                v106);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v107,
      (Il2CppObject *)v40,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
    v108 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v52,
             (System_Func_TSource__bool__o *)v107,
             (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                              v108,
                                                                                              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v52;
}


bool __fastcall WarBoardSkillLogic__UseSkill(
        WarBoardSkillLogic_o *this,
        WarBoardSkillLogic_WarBoardSkillLogicParam_o *logicParam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x20
  struct System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *targetList; // x0
  System_Collections_Generic_List_WarBoardPieceData__o *v21; // x28
  Il2CppObject *current; // x27
  WebViewManager_o *Instance; // x0
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x0
  Il2CppClass *v31; // x8
  _DWORD *v32; // x8
  System_Int32_array **v33; // x22
  Il2CppClass *v34; // x8
  _DWORD *v35; // x8
  int32_t v36; // w23
  int32_t npcActorId; // w20
  __int64 v38; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_Int32_array **funcId; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **dataVal; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t skillId; // w8
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  BattleLogicFunction_WarBoardFunctionArgument_o *v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  WebViewManager_o *v78; // x0
  int v79; // w19
  bool v81; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+10h] [xbp-B0h] BYREF
  int v83[2]; // [xsp+28h] [xbp-98h]
  int v84; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40FBAC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v10);
    sub_B16FFC(&WarBoardManager_ExecuteProcParam_TypeInfo, v11);
    sub_B16FFC(&int___TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17);
    sub_B16FFC(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v18);
    byte_40FBAC6 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  memset(&v85, 0, sizeof(v85));
  v84 = 0;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  logicParam,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v82,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v81 = 0;
  v86 = v82;
  v21 = (System_Collections_Generic_List_WarBoardPieceData__o *)v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v86,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v86.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_B170D4();
    klass = current[1].klass;
    if ( !klass )
      sub_B170D4();
    fields = klass->_1.fields;
    if ( !fields )
      sub_B170D4();
    if ( !Instance )
      sub_B170D4();
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v30 = sub_B17014(int___TypeInfo, 1LL, v27);
      v31 = current[1].klass;
      if ( !v31 )
        sub_B170D4();
      v32 = v31->_1.fields;
      if ( !v32 )
        sub_B170D4();
      v33 = (System_Int32_array **)v30;
      if ( !v30 )
        sub_B170D4();
      if ( !*(_DWORD *)(v30 + 24) )
      {
        sub_B17100(v30, v26, v27);
        sub_B170A0();
      }
      *(_DWORD *)(v30 + 32) = v32[6];
    }
    else
    {
      v33 = 0LL;
    }
    v34 = current[1].klass;
    if ( !v34 )
      sub_B170D4();
    v35 = v34->_1.fields;
    if ( !v35 )
      sub_B170D4();
    v36 = v35[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v35[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v38 = sub_B170CC(WarBoardManager_ExecuteProcParam_TypeInfo, v26, v27, v28, v29);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v38, 0LL);
    if ( !v38 )
      sub_B170D4();
    v45 = (System_Int32_array **)current[1].klass;
    *(_QWORD *)(v38 + 16) = v45;
    sub_B16F98((BattleServantConfConponent_o *)(v38 + 16), v45, v39, v40, v41, v42, v43, v44);
    *(_DWORD *)(v38 + 24) = npcActorId;
    *(_DWORD *)(v38 + 28) = v36;
    funcId = (System_Int32_array **)logicParam->fields.funcId;
    *(_QWORD *)(v38 + 32) = funcId;
    sub_B16F98((BattleServantConfConponent_o *)(v38 + 32), funcId, v47, v48, v49, v50, v51, v52);
    dataVal = (System_Int32_array **)logicParam->fields.dataVal;
    *(_QWORD *)(v38 + 40) = dataVal;
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21;
    sub_B16F98((BattleServantConfConponent_o *)(v38 + 40), dataVal, v54, v55, v56, v57, v58, v59);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v38 + 56) = v33;
    *(_DWORD *)(v38 + 48) = skillId;
    sub_B16F98((BattleServantConfConponent_o *)(v38 + 56), v33, v61, v62, v63, v64, v65, v66);
    v71 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_B170CC(
                                                              BattleLogicFunction_WarBoardFunctionArgument_TypeInfo,
                                                              v67,
                                                              v68,
                                                              v69,
                                                              v70);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v71, v36, 0LL);
    *(_QWORD *)(v38 + 72) = v71;
    sub_B16F98((BattleServantConfConponent_o *)(v38 + 72), (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
    v78 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v78 )
      sub_B170D4();
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v78,
           (WarBoardManager_ExecuteProcParam_o *)v38,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           v21,
           0LL) )
    {
      v81 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  v83[0] = 308;
  v84 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v86,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  v84 = 0;
  if ( !v19 )
LABEL_49:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v19,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v85,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v85.fields.current )
      sub_B170D4();
    ((void (*)(void))v85.fields.current->klass->vtable[11].method)();
  }
  v83[0] = 367;
  v79 = ++v84;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( v79 && v83[v79 - 1] == 367 )
    v84 = v79 - 1;
  return v81;
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
    sub_B170D4();
  if ( !pieceIndex->max_length )
  {
    sub_B17100(this, x, method);
    sub_B170A0();
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

  if ( !x || (param = this->fields.param) == 0LL || (pieceIndex = param->fields.pieceIndex) == 0LL )
    sub_B170D4();
  if ( !pieceIndex->max_length )
  {
    sub_B17100(this, x, method);
    sub_B170A0();
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
    sub_B170D4();
  return battleServant_k__BackingField->fields.uniqueId != this->fields.npcActorId;
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__3(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *n,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  if ( (byte_40F7875 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_40F7875 = 1;
  }
  param = this->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_B170D4();
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall WarBoardSkillLogic___c__DisplayClass1_0___GetTargetList_b__4(
        WarBoardSkillLogic___c__DisplayClass1_0_o *this,
        WarBoardManager_WarBoardOnboardSkillTarget_o *x,
        const MethodInfo *method)
{
  struct WarBoardManager_WarBoardOnBoardSkillParam_o *param; // x8
  struct WarBoardPieceData_o *piece; // x9

  if ( (byte_40F7876 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_40F7876 = 1;
  }
  param = this->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_B170D4();
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}