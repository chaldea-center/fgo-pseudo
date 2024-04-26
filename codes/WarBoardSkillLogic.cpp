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
  __int64 v12; // x19
  EventMissionProgressRequest_Argument_ProgressData_o *Random; // x0
  __int64 size; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  bool IsNullOrEmpty; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x22
  System_Collections_Generic_List_WarBoardPieceData__o *v29; // x0
  System_Func_TSource__bool__o *v30; // x1
  Il2CppClass **v31; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x1
  const MethodInfo_3025688 *v33; // x2
  bool v34; // w8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x23
  Il2CppObject *current; // x23
  WarBoardManager_WarBoardOnboardSkillTarget_o *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4353A3E & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_B70694(&Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
    sub_B70694(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B70694(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B70694(&System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData__get_Item__);
    sub_B70694(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
    sub_B70694(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__);
    sub_B70694(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__);
    sub_B70694(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__);
    sub_B70694(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__);
    sub_B70694(&Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__);
    sub_B70694(&WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
    sub_B70694(&WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
    byte_4353A3E = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v12 = sub_B70764(WarBoardSkillLogic___c__DisplayClass1_0_TypeInfo);
  WarBoardSkillLogic___c__DisplayClass1_0___ctor((WarBoardSkillLogic___c__DisplayClass1_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_54;
  *(_QWORD *)(v12 + 16) = param;
  v21 = v12 + 16;
  sub_B70630((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)param, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = npcActorId;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget___ctor__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( targetType <= 11 )
  {
    Random = (EventMissionProgressRequest_Argument_ProgressData_o *)playerGroupList;
    switch ( targetType )
    {
      case 1:
        if ( !*(_QWORD *)v21 )
          goto LABEL_54;
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
        if ( IsNullOrEmpty )
          goto LABEL_36;
        v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v28,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__0__,
          (const MethodInfo_29AC578 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v29 = playerGroupList;
        v30 = (System_Func_TSource__bool__o *)v28;
        goto LABEL_32;
      case 3:
        goto LABEL_36;
      case 4:
        if ( !*(_QWORD *)v21 )
          goto LABEL_54;
        v34 = BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL), 0LL);
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
        if ( v34 )
          goto LABEL_36;
        v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v35,
          (Il2CppObject *)v12,
          Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__1__,
          (const MethodInfo_29AC578 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v29 = enemyGroupList;
        v30 = (System_Func_TSource__bool__o *)v35;
LABEL_32:
        Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                          v30,
                                                                          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
        if ( !v23 )
          goto LABEL_54;
        v32 = Random;
        v33 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        if ( !v23 )
          goto LABEL_54;
        v31 = &playerGroupList->fields._items->obj.klass + (int)Random;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( v23 )
    {
      v31 = &enemyGroupList->fields._items->obj.klass + (int)Random;
LABEL_28:
      v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31[4];
      v33 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
LABEL_34:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v23, v32, v33);
LABEL_35:
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
LABEL_36:
      if ( !Random )
        goto LABEL_54;
      goto LABEL_37;
    }
LABEL_54:
    sub_B7076C(Random, size);
  }
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)v23;
  if ( targetType != 26 )
    goto LABEL_36;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)playerGroupList,
                                                                    (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)Random;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Random,
    (System_Collections_Generic_IEnumerable_T__o *)enemyGroupList,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__2__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v26,
                                                                    (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
  if ( !Random )
    goto LABEL_54;
LABEL_37:
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Random,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  v48 = v47;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    current = v48.fields.current;
    if ( v48.fields.current )
    {
      v37 = (WarBoardManager_WarBoardOnboardSkillTarget_o *)sub_B70764(WarBoardManager_WarBoardOnboardSkillTarget_TypeInfo);
      WarBoardManager_WarBoardOnboardSkillTarget___ctor(v37, (WarBoardPieceData_o *)current, 1, 0LL);
      if ( !v22 )
        sub_B7076C(v38, v39);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( !*(_QWORD *)v21 )
    goto LABEL_54;
  Random = (EventMissionProgressRequest_Argument_ProgressData_o *)BasicHelper__IsNullOrEmpty(
                                                                    *(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 40LL),
                                                                    0LL);
  if ( ((unsigned __int8)Random & 1) == 0 )
  {
    if ( !*(_QWORD *)v21 )
      goto LABEL_54;
    v40 = *(_QWORD *)(*(_QWORD *)v21 + 40LL);
    if ( !v40 )
      goto LABEL_54;
    if ( !*(_DWORD *)(v40 + 24) )
    {
      v46 = sub_B70798(Random);
      sub_B70738(v46, 0LL);
    }
    if ( *(_DWORD *)(v40 + 32) != -1 )
    {
      v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v41,
        (Il2CppObject *)v12,
        Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__3__,
        (const MethodInfo_29AC578 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
      v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v22,
              (System_Func_TSource__bool__o *)v41,
              (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
      Random = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                        v42,
                                                                        (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Random;
    }
  }
  if ( !*(_QWORD *)v21 )
    goto LABEL_54;
  if ( !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(*(_QWORD *)v21 + 16LL), 0LL) )
  {
    v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v43,
      (Il2CppObject *)v12,
      Method_WarBoardSkillLogic___c__DisplayClass1_0__GetTargetList_b__4__,
      (const MethodInfo_29AC578 *)Method_System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool___ctor__);
    v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_WarBoardManager_WarBoardOnboardSkillTarget___);
    return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                              v44,
                                                                                              (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_WarBoardManager_WarBoardOnboardSkillTarget___);
  }
  return (System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *)v22;
}


bool __fastcall WarBoardSkillLogic__UseSkill(
        WarBoardSkillLogic_o *this,
        WarBoardSkillLogic_WarBoardSkillLogicParam_o *logicParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__o *targetList; // x0
  System_Collections_Generic_List_WarBoardPieceData__o *v7; // x28
  Il2CppObject *current; // x27
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x8
  _DWORD *fields; // x8
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppClass *v15; // x8
  _DWORD *v16; // x8
  System_Int32_array **v17; // x22
  Il2CppClass *v18; // x8
  _DWORD *v19; // x8
  int32_t v20; // w23
  int32_t npcActorId; // w20
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_Int32_array **funcId; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **dataVal; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t skillId; // w8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleLogicFunction_WarBoardFunctionArgument_o *v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WebViewManager_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x1
  int v63; // w19
  __int64 v65; // x0
  bool v66; // [xsp+Ch] [xbp-B4h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+10h] [xbp-B0h] BYREF
  int v68[2]; // [xsp+28h] [xbp-98h]
  int v69; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4353A3F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__get_Current__);
    sub_B70694(&WarBoardManager_ExecuteProcParam_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    byte_4353A3F = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  v69 = 0;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  targetList = logicParam->fields.targetList;
  if ( !targetList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)targetList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_WarBoardManager_WarBoardOnboardSkillTarget__GetEnumerator__);
  v66 = 0;
  v71 = v67;
  v7 = (System_Collections_Generic_List_WarBoardPieceData__o *)v4;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v71,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__MoveNext__) )
  {
    current = v71.fields.current;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !current )
      sub_B7076C(Instance, v10);
    klass = current[1].klass;
    if ( !klass )
      sub_B7076C(Instance, v10);
    fields = klass->_1.fields;
    if ( !fields )
      sub_B7076C(Instance, v10);
    if ( !Instance )
      sub_B7076C(0LL, v10);
    WarBoardManager__SetP_EntryId((WarBoardManager_o *)Instance, fields[6], 0LL);
    if ( logicParam->fields.targetType == 1 )
    {
      v13 = sub_B706AC(int___TypeInfo, 1LL);
      v15 = current[1].klass;
      if ( !v15 )
        sub_B7076C(v13, v14);
      v16 = v15->_1.fields;
      if ( !v16 )
        sub_B7076C(v13, v14);
      v17 = (System_Int32_array **)v13;
      if ( !v13 )
        sub_B7076C(0LL, v14);
      if ( !*(_DWORD *)(v13 + 24) )
      {
        v65 = sub_B70798(v13);
        sub_B70738(v65, 0LL);
      }
      *(_DWORD *)(v13 + 32) = v16[6];
    }
    else
    {
      v17 = 0LL;
    }
    v18 = current[1].klass;
    if ( !v18 )
      sub_B7076C(v13, v14);
    v19 = v18->_1.fields;
    if ( !v19 )
      sub_B7076C(v13, v14);
    v20 = v19[6];
    if ( logicParam->fields.npcActorId == -1 )
      npcActorId = v19[6];
    else
      npcActorId = logicParam->fields.npcActorId;
    v22 = sub_B70764(WarBoardManager_ExecuteProcParam_TypeInfo);
    WarBoardManager_ExecuteProcParam___ctor((WarBoardManager_ExecuteProcParam_o *)v22, 0LL);
    if ( !v22 )
      sub_B7076C(v23, v24);
    v31 = (System_Int32_array **)current[1].klass;
    *(_QWORD *)(v22 + 16) = v31;
    sub_B70630((BattleServantConfConponent_o *)(v22 + 16), v31, v25, v26, v27, v28, v29, v30);
    *(_DWORD *)(v22 + 24) = npcActorId;
    *(_DWORD *)(v22 + 28) = v20;
    funcId = (System_Int32_array **)logicParam->fields.funcId;
    *(_QWORD *)(v22 + 32) = funcId;
    sub_B70630((BattleServantConfConponent_o *)(v22 + 32), funcId, v33, v34, v35, v36, v37, v38);
    dataVal = (System_Int32_array **)logicParam->fields.dataVal;
    *(_QWORD *)(v22 + 40) = dataVal;
    v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7;
    sub_B70630((BattleServantConfConponent_o *)(v22 + 40), dataVal, v40, v41, v42, v43, v44, v45);
    skillId = logicParam->fields.skillId;
    *(_QWORD *)(v22 + 56) = v17;
    *(_DWORD *)(v22 + 48) = skillId;
    sub_B70630((BattleServantConfConponent_o *)(v22 + 56), v17, v47, v48, v49, v50, v51, v52);
    v53 = (BattleLogicFunction_WarBoardFunctionArgument_o *)sub_B70764(BattleLogicFunction_WarBoardFunctionArgument_TypeInfo);
    BattleLogicFunction_WarBoardFunctionArgument___ctor(v53, v20, 0LL);
    *(_QWORD *)(v22 + 72) = v53;
    sub_B70630((BattleServantConfConponent_o *)(v22 + 72), (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
    v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v60 )
      sub_B7076C(0LL, v61);
    if ( WarBoardManager__ExecuteProcList(
           (WarBoardManager_o *)v60,
           (WarBoardManager_ExecuteProcParam_o *)v22,
           logicParam->fields.taskParallelList,
           logicParam->fields.taskSingleList,
           logicParam->fields.taskBreakList,
           logicParam->fields.taskDeadList,
           v7,
           0LL) )
    {
      v66 = 1;
    }
    else
    {
      LOBYTE(current[1].monitor) = 0;
    }
  }
  v68[0] = 308;
  v69 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v71,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardManager_WarBoardOnboardSkillTarget__Dispose__);
  v69 = 0;
  if ( !v4 )
LABEL_49:
    sub_B7076C(targetList, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v70,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_WarBoardPieceData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__MoveNext__) )
  {
    if ( !v70.fields.current )
      sub_B7076C(0LL, v62);
    ((void (*)(void))v70.fields.current->klass->vtable[11].method)();
  }
  v68[0] = 367;
  v63 = ++v69;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPieceData__Dispose__);
  if ( v63 && v68[v63 - 1] == 367 )
    v69 = v63 - 1;
  return v66;
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
    sub_B7076C(this, x);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
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
    sub_B7076C(this, x);
  if ( !pieceIndex->max_length )
  {
    v6 = sub_B70798(this);
    sub_B70738(v6, 0LL);
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
    sub_B7076C(this, x);
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
  if ( (byte_434FC9B & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    byte_434FC9B = 1;
  }
  param = v4->fields.param;
  if ( !param || !n || (piece = n->fields.piece) == 0LL )
    sub_B7076C(this, n);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.squareIds,
           piece->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_434FC9C & 1) == 0 )
  {
    this = (WarBoardSkillLogic___c__DisplayClass1_0_o *)sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    byte_434FC9C = 1;
  }
  param = v4->fields.param;
  if ( !param || !x || (piece = x->fields.piece) == 0LL )
    sub_B7076C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)param->fields.pieceIndex,
           piece->fields._index_k__BackingField,
           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
}