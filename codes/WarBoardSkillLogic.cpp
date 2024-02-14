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
  EventMissionProgressRequest_Argument_ProgressData_o *Random; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  bool IsNullOrEmpty; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v63; // x22
  System_Collections_Generic_List_WarBoardPieceData__o *v64; // x0
  System_Func_TSource__bool__o *v65; // x1
  int v66; // w1
  Il2CppClass **v67; // x8
  int size; // w1
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x1
  const MethodInfo_2FC56E8 *v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  bool v73; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v74; // x23
  __int64 v75; // x1
  __int64 v76; // x2
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v78; // x22
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v83; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v87; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  __int64 v90; // x0
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_421659B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_B0D8A4(&Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__, v19);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v20);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v21);
    sub_B0D8A4(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v30);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v31);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v32);
    sub_B0D8A4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v33);
    sub_B0D8A4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v34);
    sub_B0D8A4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v35);
    sub_B0D8A4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v36);
    sub_B0D8A4(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v37);
    sub_B0D8A4(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v38);
    sub_B0D8A4(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v39);
    byte_421659B = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v40 = sub_B0D974(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&targetType, playerGroupList);
  WarBoardSkillLogic___c__DisplayClass1_0___ctor((WarBoardSkillLogic___c__DisplayClass1_0_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_54;
  *(_QWORD *)(v40 + 16) = param;
  v48 = v40 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v40 + 16), (System_Int32_array **)param, v42, v43, v44, v45, v46, v47);
  *(_DWORD *)(v40 + 24) = npcActorId;
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo,
                                                                                                  v49,
                                                                                                  v50);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v52,
                                                                                                  v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Random = (EventMissionProgressRequest_Argument_ProgressData_o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v48 )
          goto LABEL_54;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v48 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
        if ( IsNullOrEmpty )
          goto LABEL_36;
        v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                   v60,
                                                                                   v61);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v63,
          (Il2CppObject *)v40,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v64 = playerGroupList;
        v65 = (System_Func_TSource__bool__o *)v63;
        goto LABEL_32;
      case 3:
        goto LABEL_36;
      case 4:
        if ( !*(_QWORD *)v48 )
          goto LABEL_54;
        v73 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v48 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
        if ( v73 )
          goto LABEL_36;
        v74 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                   v71,
                                                                                   v72);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v74,
          (Il2CppObject *)v40,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v64 = enemyGroupList;
        v65 = (System_Func_TSource__bool__o *)v74;
LABEL_32:
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                                                                          v65,
                                                                          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( !v54 )
          goto LABEL_54;
        v69 = Random;
        v70 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        goto LABEL_34;
      case 6:
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)enemyGroupList;
        if ( !enemyGroupList )
          goto LABEL_54;
        goto LABEL_37;
      case 11:
        if ( !playerGroupList )
          goto LABEL_54;
        size = playerGroupList->fields._size;
        if ( size < 1 )
          goto LABEL_35;
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleRandom__getRandom(0, size, 0LL);
        if ( playerGroupList->fields._size <= (unsigned int)Random )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        if ( !v54 )
          goto LABEL_54;
        v67 = &playerGroupList->fields._items->obj.klass + (int)Random;
        goto LABEL_28;
      default:
        goto LABEL_35;
    }
  }
  if ( targetType == 13 )
  {
    if ( !enemyGroupList )
      goto LABEL_54;
    v66 = enemyGroupList->fields._size;
    if ( v66 < 1 )
      goto LABEL_35;
    Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleRandom__getRandom(0, v66, 0LL);
    if ( enemyGroupList->fields._size <= (unsigned int)Random )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( v54 )
    {
      v67 = &enemyGroupList->fields._items->obj.klass + (int)Random;
LABEL_28:
      v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v67[4];
      v70 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
LABEL_34:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v54, v69, v70);
LABEL_35:
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
LABEL_36:
      if ( !Random )
        goto LABEL_54;
      goto LABEL_37;
    }
LABEL_54:
    sub_B0D97C(Random);
  }
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
  if ( targetType != 26 )
    goto LABEL_36;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)Random;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Random,
    (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v56,
                                                                             v57);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v58,
    (Il2CppObject *)v40,
    Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v59 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v55,
          (System_Func_TSource__bool__o *)v58,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v59,
                                                                    (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
LABEL_37:
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v91,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Random,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v92 = v91;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v92,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v92.fields.current;
    if ( v92.fields.current )
    {
      v78 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_B0D974(
                                                              WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo,
                                                              v75,
                                                              v76);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v78, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v51 )
        sub_B0D97C(v79);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v78,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v92,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v48 )
    goto LABEL_54;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BasicHelper__IsNullOrEmpty(
                                                                    *(System_Collections_ICollection_o **)(*(_QWORD *)v48 + 40LL),
                                                                    0LL);
  if ( ((unsigned __int8)Random & 1) == 0 )
  {
    if ( !*(_QWORD *)v48 )
      goto LABEL_54;
    v82 = *(_QWORD *)(*(_QWORD *)v48 + 40LL);
    if ( !v82 )
      goto LABEL_54;
    if ( !*(_DWORD *)(v82 + 24) )
    {
      v90 = sub_B0D9A8(Random);
      sub_B0D948(v90, 0LL);
    }
    if ( *(_DWORD *)(v82 + 32) != -1 )
    {
      v83 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                                                                 v80,
                                                                                 v81);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v83,
        (Il2CppObject *)v40,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
      v84 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v51,
              (System_Func_TSource__bool__o *)v83,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v84,
                                                                        (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
      v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Random;
    }
  }
  if ( !*(_QWORD *)v48 )
    goto LABEL_54;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v48 + 16LL), 0LL) )
  {
    v87 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo,
                                                                               v85,
                                                                               v86);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v87,
      (Il2CppObject *)v40,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
    v88 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v51,
            (System_Func_TSource__bool__o *)v87,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                              v88,
                                                                                              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v51;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  struct System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *targetList; // x0
  System_Collections_Generic_List_WarBoardPieceData__o *v19; // x28
  Il2CppObject *current; // x27
  WebViewManager_o *Instance; // x0
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppClass *v27; // x8
  _DWORD *v28; // x8
  System_Int32_array **v29; // x22
  Il2CppClass *v30; // x8
  _DWORD *v31; // x8
  int32_t v32; // w23
  int32_t npcActorId; // w20
  __int64 v34; // x21
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_Int32_array **funcId; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **dataVal; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t skillId; // w8
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  BattleLogicFunction_WarBoardFunctionArgument_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  WebViewManager_o *v73; // x0
  int v74; // w19
  __int64 v76; // x0
  bool v77; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+10h] [xbp-B0h] BYREF
  int v79[2]; // [xsp+28h] [xbp-98h]
  int v80; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_421659C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v8);
    sub_B0D8A4(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B0D8A4(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v16);
    byte_421659C = 1;
  }
  memset(&v82, 0, sizeof(v82));
  memset(&v81, 0, sizeof(v81));
  v80 = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  logicParam,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v77 = 0;
  v82 = v78;
  v19 = (System_Collections_Generic_List_WarBoardPieceData__o *)v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v82,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v82.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_B0D97C(Instance);
    klass = current[1].klass;
    if ( !klass )
      sub_B0D97C(Instance);
    fields = klass->_1.fields;
    if ( !fields )
      sub_B0D97C(Instance);
    if ( !Instance )
      sub_B0D97C(0LL);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v24 = sub_B0D8BC(int___TypeInfo, 1LL);
      v27 = current[1].klass;
      if ( !v27 )
        sub_B0D97C(v24);
      v28 = v27->_1.fields;
      if ( !v28 )
        sub_B0D97C(v24);
      v29 = (System_Int32_array **)v24;
      if ( !v24 )
        sub_B0D97C(0LL);
      if ( !*(_DWORD *)(v24 + 24) )
      {
        v76 = sub_B0D9A8(v24);
        sub_B0D948(v76, 0LL);
      }
      *(_DWORD *)(v24 + 32) = v28[6];
    }
    else
    {
      v29 = 0LL;
    }
    v30 = current[1].klass;
    if ( !v30 )
      sub_B0D97C(v24);
    v31 = v30->_1.fields;
    if ( !v31 )
      sub_B0D97C(v24);
    v32 = v31[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v31[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v34 = sub_B0D974(WarBoardManager_ExecuteProcParam_TypeInfo, v25, v26);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v34, 0LL);
    if ( !v34 )
      sub_B0D97C(v35);
    v42 = (System_Int32_array **)current[1].klass;
    *(_QWORD *)(v34 + 16) = v42;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 16), v42, v36, v37, v38, v39, v40, v41);
    *(_DWORD *)(v34 + 24) = npcActorId;
    *(_DWORD *)(v34 + 28) = v32;
    funcId = (System_Int32_array **)logicParam->fields.funcId;
    *(_QWORD *)(v34 + 32) = funcId;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), funcId, v44, v45, v46, v47, v48, v49);
    dataVal = (System_Int32_array **)logicParam->fields.dataVal;
    *(_QWORD *)(v34 + 40) = dataVal;
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 40), dataVal, v51, v52, v53, v54, v55, v56);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v34 + 56) = v29;
    *(_DWORD *)(v34 + 48) = skillId;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 56), v29, v58, v59, v60, v61, v62, v63);
    v66 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_B0D974(
                                                              BattleLogicFunction_WarBoardFunctionArgument_TypeInfo,
                                                              v64,
                                                              v65);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v66, v32, 0LL);
    *(_QWORD *)(v34 + 72) = v66;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 72), (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
    v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v73 )
      sub_B0D97C(0LL);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v73,
           (WarBoardManager_ExecuteProcParam_o *)v34,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           v19,
           0LL) )
    {
      v77 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  v79[0] = 308;
  v80 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v82,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  v80 = 0;
  if ( !v17 )
LABEL_49:
    sub_B0D97C(targetList);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v81,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v81,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v81.fields.current )
      sub_B0D97C(0LL);
    ((void (*)(void))v81.fields.current->klass->vtable[11].method)();
  }
  v79[0] = 367;
  v74 = ++v80;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v81,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( v74 && v79[v74 - 1] == 367 )
    v80 = v74 - 1;
  return v77;
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
    sub_B0D97C(this);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B0D9A8(this);
    sub_B0D948(v6, 0LL);
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
    sub_B0D97C(this);
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
  if ( (byte_421389C & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_421389C = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_B0D97C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_421389D & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_421389D = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_B0D97C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}