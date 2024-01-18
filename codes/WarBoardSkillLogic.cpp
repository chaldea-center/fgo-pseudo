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
  __int64 size; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  bool IsNullOrEmpty; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v56; // x22
  System_Collections_Generic_List_WarBoardPieceData__o *v57; // x0
  System_Func_TSource__bool__o *v58; // x1
  Il2CppClass **v59; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x1
  const MethodInfo_2EF4460 *v61; // x2
  bool v62; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v63; // x23
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v69; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v71; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  __int64 v74; // x0
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41892B2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&targetType);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___, v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___, v14);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v18);
    sub_B2C35C(&Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__, v19);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v20);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v21);
    sub_B2C35C(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__, v30);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v31);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo, v32);
    sub_B2C35C(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__, v33);
    sub_B2C35C(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__, v34);
    sub_B2C35C(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__, v35);
    sub_B2C35C(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__, v36);
    sub_B2C35C(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__, v37);
    sub_B2C35C(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo, v38);
    sub_B2C35C(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo, v39);
    byte_41892B2 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v40 = sub_B2C42C(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  WarBoardSkillLogic___c__DisplayClass1_0___ctor((WarBoardSkillLogic___c__DisplayClass1_0_o *)v40, 0LL);
  if ( !v40 )
    goto LABEL_54;
  *(_QWORD *)(v40 + 16) = param;
  v49 = v40 + 16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v40 + 16), (System_Int32_array **)param, v43, v44, v45, v46, v47, v48);
  *(_DWORD *)(v40 + 24) = npcActorId;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Random = (EventMissionProgressRequest_Argument_ProgressData_o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v49 )
          goto LABEL_54;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v49 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v51;
        if ( IsNullOrEmpty )
          goto LABEL_36;
        v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v56,
          (Il2CppObject *)v40,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v57 = playerGroupList;
        v58 = (System_Func_TSource__bool__o *)v56;
        goto LABEL_32;
      case 3:
        goto LABEL_36;
      case 4:
        if ( !*(_QWORD *)v49 )
          goto LABEL_54;
        v62 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v49 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v51;
        if ( v62 )
          goto LABEL_36;
        v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v63,
          (Il2CppObject *)v40,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v57 = enemyGroupList;
        v58 = (System_Func_TSource__bool__o *)v63;
LABEL_32:
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                                                                          v58,
                                                                          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( !v51 )
          goto LABEL_54;
        v60 = Random;
        v61 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        if ( !v51 )
          goto LABEL_54;
        v59 = &playerGroupList->fields._items->obj.klass + (int)Random;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v51 )
    {
      v59 = &enemyGroupList->fields._items->obj.klass + (int)Random;
LABEL_28:
      v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)v59[4];
      v61 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
LABEL_34:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v51, v60, v61);
LABEL_35:
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v51;
LABEL_36:
      if ( !Random )
        goto LABEL_54;
      goto LABEL_37;
    }
LABEL_54:
    sub_B2C434(Random, size);
  }
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v51;
  if ( targetType != 26 )
    goto LABEL_36;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)Random;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Random,
    (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)v40,
    Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v54 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v52,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v54,
                                                                    (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
LABEL_37:
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Random,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v76 = v75;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v76.fields.current;
    if ( v76.fields.current )
    {
      v65 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_B2C42C(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v65, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v50 )
        sub_B2C434(v66, v67);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v50,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v76,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v49 )
    goto LABEL_54;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BasicHelper__IsNullOrEmpty(
                                                                    *(System_Collections_ICollection_o **)(*(_QWORD *)v49 + 40LL),
                                                                    0LL);
  if ( ((unsigned __int8)Random & 1) == 0 )
  {
    if ( !*(_QWORD *)v49 )
      goto LABEL_54;
    v68 = *(_QWORD *)(*(_QWORD *)v49 + 40LL);
    if ( !v68 )
      goto LABEL_54;
    if ( !*(_DWORD *)(v68 + 24) )
    {
      v74 = sub_B2C460(Random);
      sub_B2C400(v74, 0LL);
    }
    if ( *(_DWORD *)(v68 + 32) != -1 )
    {
      v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v69,
        (Il2CppObject *)v40,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
      v70 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v50,
              (System_Func_TSource__bool__o *)v69,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v70,
                                                                        (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
      v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Random;
    }
  }
  if ( !*(_QWORD *)v49 )
    goto LABEL_54;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v49 + 16LL), 0LL) )
  {
    v71 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v71,
      (Il2CppObject *)v40,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
    v72 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v50,
            (System_Func_TSource__bool__o *)v71,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                              v72,
                                                                                              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v50;
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
  __int64 v18; // x1
  struct System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *targetList; // x0
  System_Collections_Generic_List_WarBoardPieceData__o *v20; // x28
  Il2CppObject *current; // x27
  WebViewManager_o *Instance; // x0
  __int64 v23; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppClass *v28; // x8
  _DWORD *v29; // x8
  System_Int32_array **v30; // x22
  Il2CppClass *v31; // x8
  _DWORD *v32; // x8
  int32_t v33; // w23
  int32_t npcActorId; // w20
  __int64 v35; // x21
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_Int32_array **funcId; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **dataVal; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t skillId; // w8
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  BattleLogicFunction_WarBoardFunctionArgument_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  WebViewManager_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x1
  int v76; // w19
  __int64 v78; // x0
  bool v79; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+10h] [xbp-B0h] BYREF
  int v81[2]; // [xsp+28h] [xbp-98h]
  int v82; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_41892B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__, logicParam);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__,
      v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__, v8);
    sub_B2C35C(&WarBoardManager_ExecuteProcParam_TypeInfo, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15);
    sub_B2C35C(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo, v16);
    byte_41892B3 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  memset(&v83, 0, sizeof(v83));
  v82 = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v80,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v79 = 0;
  v84 = v80;
  v20 = (System_Collections_Generic_List_WarBoardPieceData__o *)v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v84,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v84.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_B2C434(Instance, v23);
    klass = current[1].klass;
    if ( !klass )
      sub_B2C434(Instance, v23);
    fields = klass->_1.fields;
    if ( !fields )
      sub_B2C434(Instance, v23);
    if ( !Instance )
      sub_B2C434(0LL, v23);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v26 = sub_B2C374(int___TypeInfo, 1LL);
      v28 = current[1].klass;
      if ( !v28 )
        sub_B2C434(v26, v27);
      v29 = v28->_1.fields;
      if ( !v29 )
        sub_B2C434(v26, v27);
      v30 = (System_Int32_array **)v26;
      if ( !v26 )
        sub_B2C434(0LL, v27);
      if ( !*(_DWORD *)(v26 + 24) )
      {
        v78 = sub_B2C460(v26);
        sub_B2C400(v78, 0LL);
      }
      *(_DWORD *)(v26 + 32) = v29[6];
    }
    else
    {
      v30 = 0LL;
    }
    v31 = current[1].klass;
    if ( !v31 )
      sub_B2C434(v26, v27);
    v32 = v31->_1.fields;
    if ( !v32 )
      sub_B2C434(v26, v27);
    v33 = v32[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v32[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v35 = sub_B2C42C(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v35, 0LL);
    if ( !v35 )
      sub_B2C434(v36, v37);
    v44 = (System_Int32_array **)current[1].klass;
    *(_QWORD *)(v35 + 16) = v44;
    sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 16), v44, v38, v39, v40, v41, v42, v43);
    *(_DWORD *)(v35 + 24) = npcActorId;
    *(_DWORD *)(v35 + 28) = v33;
    funcId = (System_Int32_array **)logicParam->fields.funcId;
    *(_QWORD *)(v35 + 32) = funcId;
    sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 32), funcId, v46, v47, v48, v49, v50, v51);
    dataVal = (System_Int32_array **)logicParam->fields.dataVal;
    *(_QWORD *)(v35 + 40) = dataVal;
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20;
    sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 40), dataVal, v53, v54, v55, v56, v57, v58);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v35 + 56) = v30;
    *(_DWORD *)(v35 + 48) = skillId;
    sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 56), v30, v60, v61, v62, v63, v64, v65);
    v66 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_B2C42C(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v66, v33, 0LL);
    *(_QWORD *)(v35 + 72) = v66;
    sub_B2C2F8((BattleServantConfConponent_o *)(v35 + 72), (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
    v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v73 )
      sub_B2C434(0LL, v74);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v73,
           (WarBoardManager_ExecuteProcParam_o *)v35,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           v20,
           0LL) )
    {
      v79 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  v81[0] = 308;
  v82 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v84,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  v82 = 0;
  if ( !v17 )
LABEL_49:
    sub_B2C434(targetList, v18);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v83,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v17,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v83,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v83.fields.current )
      sub_B2C434(0LL, v75);
    ((void (*)(void))v83.fields.current->klass->vtable[11].method)();
  }
  v81[0] = 367;
  v76 = ++v82;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v83,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( v76 && v81[v76 - 1] == 367 )
    v82 = v76 - 1;
  return v79;
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
    sub_B2C434(this, x);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, x);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B2C460(this);
    sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, x);
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
  if ( (byte_4186721 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, n);
    byte_4186721 = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_B2C434(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_4186722 & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4186722 = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_B2C434(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}