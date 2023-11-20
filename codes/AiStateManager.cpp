void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1

  if ( (byte_40F7EF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__, aiState);
    sub_B16FFC(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v7);
    byte_40F7EF2 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *)sub_B170CC(
                                                                                     System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo,
                                                                                     aiState,
                                                                                     method,
                                                                                     v3,
                                                                                     v4);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int____ctor(
    v8,
    (const MethodInfo_2DF7940 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v8;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainAiState,
    (System_Int32_array **)aiState,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  AiStateManager__UpdateFixAiStateList(this, v21);
}


void __fastcall AiStateManager__AfterMakeAiActTask(AiStateManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


bool __fastcall AiStateManager__ExistAiThinking(
        AiStateManager_o *this,
        BattleServantData_o *svtData,
        AiLogic_o *aiLogic,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        int32_t timingPriority,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantConfConponent_o *p_CurAiState_k__BackingField; // x19
  System_Int32_array **v17; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **current; // x1
  const MethodInfo *v27; // x5
  bool v28; // w21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F7EF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v15);
    byte_40F7EF7 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField;
  v17 = (System_Int32_array **)CurAiState_k__BackingField;
  v19 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&p_CurAiState_k__BackingField[-1].fields.isEquip;
  if ( !v19 )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    v19,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
  {
    current = (System_Int32_array **)v36.fields.current;
    p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v36.fields.current;
    sub_B16F98(p_CurAiState_k__BackingField, current, v20, v21, v22, v23, v24, v25);
    if ( !aiLogic )
      sub_B170D4();
    if ( AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v27) )
    {
      v28 = 1;
      goto LABEL_10;
    }
  }
  v28 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v17;
  sub_B16F98(p_CurAiState_k__BackingField, v17, v29, v30, v31, v32, v33, v34);
  return v28;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v18; // x0
  struct AiStateManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__22_0; // x21
  Il2CppObject *v21; // x22
  struct AiStateManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F7EFA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v6);
    sub_B16FFC(&Method_System_Func_AiState__AiState_SaveData___ctor__, v7);
    sub_B16FFC(&System_Func_AiState__AiState_SaveData__TypeInfo, v8);
    sub_B16FFC(&AiStateManager_SaveData_TypeInfo, v9);
    sub_B16FFC(&Method_AiStateManager___c__GetSaveData_b__22_0__, v10);
    sub_B16FFC(&AiStateManager___c_TypeInfo, v11);
    byte_40F7EFA = 1;
  }
  v12 = sub_B170CC(AiStateManager_SaveData_TypeInfo, method, v2, v3, v4);
  AiStateManager_SaveData___ctor((AiStateManager_SaveData_o *)v12, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v18 = AiStateManager___c_TypeInfo;
    if ( (BYTE3(AiStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v18 = AiStateManager___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = AiStateManager___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_AiState__AiState_SaveData__TypeInfo,
                                                                                                   v13,
                                                                                                   v14,
                                                                                                   v15,
                                                                                                   v16);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__22_0,
        v21,
        Method_AiStateManager___c__GetSaveData_b__22_0__,
        (const MethodInfo_2B6C28C *)Method_System_Func_AiState__AiState_SaveData___ctor__);
      v22 = AiStateManager___c_TypeInfo->static_fields;
      v22->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v22->__9__22_0,
        (System_Int32_array **)_9__22_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v30 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v29,
                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v12 )
      sub_B170D4();
    *(_QWORD *)(v12 + 16) = v30;
    sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), v30, v31, v32, v33, v34, v35, v36);
  }
  return (AiStateManager_SaveData_o *)v12;
}


void __fastcall AiStateManager__InitAiStates(
        AiStateManager_o *this,
        System_Collections_Generic_List_int__o *aiIdList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  struct AiState_array *v25; // x1
  const MethodInfo *v26; // x1

  if ( (byte_40F7EF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_AiState_MakeAiState__, aiIdList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__AiState___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AiState___, v12);
    sub_B16FFC(&Method_System_Func_int__AiState___ctor__, v13);
    sub_B16FFC(&System_Func_int__AiState__TypeInfo, v14);
    byte_40F7EF3 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B170D4();
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_2DF86B0 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v23 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                   System_Func_int__AiState__TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v23,
      0LL,
      Method_AiState_MakeAiState__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__AiState___ctor__);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v23,
                                                                 (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v25 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v24,
                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.addAiStates = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.addAiStates,
    (System_Int32_array **)v25,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  AiStateManager__UpdateFixAiStateList(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0

  if ( (byte_40F7EF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__, *(_QWORD *)&procState);
    byte_40F7EF4 = 1;
  }
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B170D4();
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_2DF9DDC *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *__fastcall AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  _QWORD **v14; // x20
  __int64 v15; // x19
  __int16 v16; // w8
  __int64 v17; // x19
  __int64 v18; // x19
  __int64 v19; // x19
  struct System_Collections_Generic_List_AiState__o *fixAiStateList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F7EF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_AiState_MakeTakeOverAiState__, aiResetChecker);
    sub_B16FFC(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v7);
    sub_B16FFC(&Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__, v8);
    sub_B16FFC(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo, v9);
    byte_40F7EF8 = 1;
  }
  if ( !aiResetChecker )
    sub_B170D4();
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v14 = (_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v15 = **((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6);
    v16 = *(_WORD *)(v15 + 306);
    if ( (v16 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6));
      v16 = *(_WORD *)(v15 + 306);
    }
    if ( (v16 & 0x400) != 0 )
    {
      v17 = *v14[6];
      if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
        sub_AAFCFC(*v14[6]);
      if ( !*(_DWORD *)(v17 + 224) )
      {
        v18 = *v14[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AAFCFC(*v14[6]);
        j_il2cpp_runtime_class_init_0(v18);
      }
    }
    v19 = *v14[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AAFCFC(*v14[6]);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v19 + 184);
  }
  else
  {
    fixAiStateList = this->fields.fixAiStateList;
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                            System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo,
                                                                                            v10,
                                                                                            v11,
                                                                                            v12,
                                                                                            v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v22,
      0LL,
      Method_AiState_MakeTakeOverAiState__,
      (const MethodInfo_2B6C28C *)Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v22,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                             v23,
                                                             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t Value_AiLogic_PROC_STATE__int; // w0
  int32_t v8; // w21
  struct AiState_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F7EF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, *(_QWORD *)&procState);
    sub_B16FFC(&Method_BasicHelper_IndexValue_AiState___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v6);
    byte_40F7EF5 = 1;
  }
  Value_AiLogic_PROC_STATE__int = BasicHelper__GetValue_AiLogic_PROC_STATE__int_(
                                    (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                                    procState,
                                    -1,
                                    (const MethodInfo_18B7EC8 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_B170D4();
  v8 = Value_AiLogic_PROC_STATE__int + 1;
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___set_Item(
    this->fields.dicTimingAiIdx,
    procState,
    Value_AiLogic_PROC_STATE__int + 1,
    (const MethodInfo_2DF84BC *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v9 = (struct AiState_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                             (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
                             v8,
                             0LL,
                             (const MethodInfo_18B822C *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  return v9 != 0LL;
}


void __fastcall AiStateManager__SetSaveData(
        AiStateManager_o *this,
        AiStateManager_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  struct AiState_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F7EFB & 1) == 0 )
  {
    sub_B16FFC(&Method_AiState_MakeAiState___66777456, sv);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AiState___, v6);
    sub_B16FFC(&Method_System_Func_AiState_SaveData__AiState___ctor__, v7);
    sub_B16FFC(&System_Func_AiState_SaveData__AiState__TypeInfo, v8);
    byte_40F7EFB = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                            System_Func_AiState_SaveData__AiState__TypeInfo,
                                                                                            sv,
                                                                                            v9,
                                                                                            v10,
                                                                                            v11);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v13,
      0LL,
      Method_AiState_MakeAiState___66777456,
      (const MethodInfo_2B6C28C *)Method_System_Func_AiState_SaveData__AiState___ctor__);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v13,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v15 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v14,
                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = v15;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.addAiStates,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  AiStateManager__UpdateFixAiStateList(this, (const MethodInfo *)sv);
}


void __fastcall AiStateManager__SetTakeOverAiState(
        AiStateManager_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_array *takeOverArray,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_List_AiState__o *fixAiStateList; // x0
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **current; // x1
  _DWORD *v24; // x28
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x21
  WarBoardData_SquareRangeSearch_o *v30; // x0
  int range; // w8
  int klass; // w8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F7EF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___, takeOverArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v9);
    sub_B16FFC(&Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v12);
    sub_B16FFC(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v13);
    sub_B16FFC(&AiStateManager___c__DisplayClass20_0_TypeInfo, v14);
    byte_40F7EF9 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)takeOverArray, 0LL) )
  {
    if ( !aiResetChecker )
      goto LABEL_20;
    if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer))aiResetChecker->klass->vtable._4_IsReset.method)(
            aiResetChecker,
            aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr) & 1) != 0 )
      return;
    fixAiStateList = this->fields.fixAiStateList;
    if ( !fixAiStateList )
LABEL_20:
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)fixAiStateList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v38 = v37;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v38,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v38,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
            return;
          }
          v16 = sub_B170CC(AiStateManager___c__DisplayClass20_0_TypeInfo, v33, v34, v35, v36);
          AiStateManager___c__DisplayClass20_0___ctor((AiStateManager___c__DisplayClass20_0_o *)v16, 0LL);
          if ( !v16 )
            sub_B170D4();
          current = (System_Int32_array **)v38.fields.current;
          *(_QWORD *)(v16 + 16) = v38.fields.current;
          sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), current, v17, v18, v19, v20, v21, v22);
          v24 = *(_DWORD **)(v16 + 16);
          v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo,
                                                                                     v25,
                                                                                     v26,
                                                                                     v27,
                                                                                     v28);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v29,
            (Il2CppObject *)v16,
            Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__);
          v30 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
                  (System_Func_TSource__bool__o *)v29,
                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
          if ( !v24 )
            sub_B170D4();
        }
        while ( !v30 );
        range = v30->fields.range;
        v24[9] = range;
        if ( range < 1 )
          break;
LABEL_14:
        v24[5] = range;
      }
      klass = (int)v30[1].klass;
      v24[5] = klass;
      if ( klass <= 0 )
      {
        range = v24[4];
        goto LABEL_14;
      }
    }
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_fixAiStateList; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventMissionProgressRequest_Argument_ProgressData_o *mainAiState; // x1

  if ( (byte_40F7EF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_AiState__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiState__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiState___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_AiState__get_Count__, v8);
    sub_B16FFC(&System_Collections_Generic_List_AiState__TypeInfo, v9);
    byte_40F7EF6 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AiState__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v10;
  p_fixAiStateList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.fixAiStateList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fixAiStateList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  mainAiState = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_12;
  if ( mainAiState->fields.missionConditionDetailId >= 1 )
  {
    if ( !*p_fixAiStateList )
      goto LABEL_12;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      *p_fixAiStateList,
      mainAiState,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AiState__Add__);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    if ( !*p_fixAiStateList )
      goto LABEL_12;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)*p_fixAiStateList,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.addAiStates,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_12:
    sub_B170D4();
  this->fields._IsSetAiState_k__BackingField = (*p_fixAiStateList)->fields._size > 0;
}


AiState_o *__fastcall AiStateManager__get_CurAiState(AiStateManager_o *this, const MethodInfo *method)
{
  return this->fields._CurAiState_k__BackingField;
}


bool __fastcall AiStateManager__get_IsSetAiState(AiStateManager_o *this, const MethodInfo *method)
{
  return this->fields._IsSetAiState_k__BackingField;
}


void __fastcall AiStateManager__set_CurAiState(AiStateManager_o *this, AiState_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurAiState_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AiStateManager__set_IsSetAiState(AiStateManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSetAiState_k__BackingField = value;
}


void __fastcall AiStateManager_SaveData___ctor(AiStateManager_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AiStateManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9117 & 1) == 0 )
  {
    sub_B16FFC(&AiStateManager___c_TypeInfo, v1);
    byte_40F9117 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AiStateManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiStateManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall AiStateManager___c___ctor(AiStateManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AiState_SaveData_o *__fastcall AiStateManager___c___GetSaveData_b__22_0(
        AiStateManager___c_o *this,
        AiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_B170D4();
  return AiState__getSaveData(state, 0LL);
}


void __fastcall AiStateManager___c__DisplayClass20_0___ctor(
        AiStateManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AiStateManager___c__DisplayClass20_0___SetTakeOverAiState_b__0(
        AiStateManager___c__DisplayClass20_0_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_o *x,
        const MethodInfo *method)
{
  struct AiState_o *aiState; // x8

  aiState = this->fields.aiState;
  if ( !aiState || !x )
    sub_B170D4();
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}