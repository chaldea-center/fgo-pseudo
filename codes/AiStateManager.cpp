void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1

  if ( (byte_4212981 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__, aiState);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v5);
    byte_4212981 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *)sub_B0D974(
                                                                                     System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo,
                                                                                     aiState,
                                                                                     method);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int____ctor(
    v6,
    (const MethodInfo_2E9E9AC *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v6;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mainAiState,
    (System_Int32_array **)aiState,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  AiStateManager__UpdateFixAiStateList(this, v19);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v27; // x0
  const MethodInfo *v28; // x5
  bool v29; // w21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4212986 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, svtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v15);
    byte_4212986 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField;
  v17 = (System_Int32_array **)CurAiState_k__BackingField;
  v19 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&p_CurAiState_k__BackingField[-1].fields.isEquip;
  if ( !v19 )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    v19,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
  {
    current = (System_Int32_array **)v37.fields.current;
    p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v37.fields.current;
    sub_B0D840(p_CurAiState_k__BackingField, current, v20, v21, v22, v23, v24, v25);
    if ( !aiLogic )
      sub_B0D97C(v27);
    if ( AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v28) )
    {
      v29 = 1;
      goto LABEL_10;
    }
  }
  v29 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v17;
  sub_B0D840(p_CurAiState_k__BackingField, v17, v30, v31, v32, v33, v34, v35);
  return v29;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v14; // x0
  struct AiStateManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__22_0; // x21
  Il2CppObject *v17; // x22
  struct AiStateManager___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4212989 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v4);
    sub_B0D8A4(&Method_System_Func_AiState__AiState_SaveData___ctor__, v5);
    sub_B0D8A4(&System_Func_AiState__AiState_SaveData__TypeInfo, v6);
    sub_B0D8A4(&AiStateManager_SaveData_TypeInfo, v7);
    sub_B0D8A4(&Method_AiStateManager___c__GetSaveData_b__22_0__, v8);
    sub_B0D8A4(&AiStateManager___c_TypeInfo, v9);
    byte_4212989 = 1;
  }
  v10 = sub_B0D974(AiStateManager_SaveData_TypeInfo, method, v2);
  AiStateManager_SaveData___ctor((AiStateManager_SaveData_o *)v10, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v14 = AiStateManager___c_TypeInfo;
    if ( (BYTE3(AiStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v14 = AiStateManager___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = AiStateManager___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_AiState__AiState_SaveData__TypeInfo,
                                                                                                   v11,
                                                                                                   v12);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__22_0,
        v17,
        Method_AiStateManager___c__GetSaveData_b__22_0__,
        (const MethodInfo_261A104 *)Method_System_Func_AiState__AiState_SaveData___ctor__);
      v18 = AiStateManager___c_TypeInfo->static_fields;
      v18->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v18->__9__22_0,
        (System_Int32_array **)_9__22_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v26 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v25,
                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v10 )
      sub_B0D97C(v26);
    *(_QWORD *)(v10 + 16) = v26;
    sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), v26, v27, v28, v29, v30, v31, v32);
  }
  return (AiStateManager_SaveData_o *)v10;
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

  if ( (byte_4212982 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AiState_MakeAiState__, aiIdList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__AiState___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AiState___, v12);
    sub_B0D8A4(&Method_System_Func_int__AiState___ctor__, v13);
    sub_B0D8A4(&System_Func_int__AiState__TypeInfo, v14);
    byte_4212982 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B0D840(
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
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_2E9F71C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v23 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                   System_Func_int__AiState__TypeInfo,
                                                                   v16,
                                                                   v17);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v23,
      0LL,
      Method_AiState_MakeAiState__,
      (const MethodInfo_26145DC *)Method_System_Func_int__AiState___ctor__);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v23,
                                                                 (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v25 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v24,
                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v25 = 0LL;
  }
  this->fields.addAiStates = v25;
  sub_B0D840(
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

  if ( (byte_4212983 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__, *(_QWORD *)&procState);
    byte_4212983 = 1;
  }
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_2EA0E48 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *__fastcall AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  AiStateManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD **v12; // x20
  __int64 v13; // x19
  __int16 v14; // w8
  __int64 v15; // x19
  __int64 v16; // x19
  __int64 v17; // x19
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  v4 = this;
  if ( (byte_4212987 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AiState_MakeTakeOverAiState__, aiResetChecker);
    sub_B0D8A4(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v7);
    sub_B0D8A4(&Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__, v8);
    this = (AiStateManager_o *)sub_B0D8A4(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo, v9);
    byte_4212987 = 1;
  }
  if ( !aiResetChecker )
    sub_B0D97C(this);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v12 = (_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v13 = **((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6);
    v14 = *(_WORD *)(v13 + 306);
    if ( (v14 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6));
      v14 = *(_WORD *)(v13 + 306);
    }
    if ( (v14 & 0x400) != 0 )
    {
      v15 = *v12[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AA65A4(*v12[6]);
      if ( !*(_DWORD *)(v15 + 224) )
      {
        v16 = *v12[6];
        if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
          sub_AA65A4(*v12[6]);
        j_il2cpp_runtime_class_init_0(v16);
      }
    }
    v17 = *v12[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AA65A4(*v12[6]);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v17 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                            System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo,
                                                                                            v10,
                                                                                            v11);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v20,
      0LL,
      Method_AiState_MakeTakeOverAiState__,
      (const MethodInfo_261A104 *)Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__);
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v20,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                             v21,
                                                             (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Value_AiLogic_PROC_STATE__int; // x0
  int32_t v8; // w21
  struct AiState_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4212984 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, *(_QWORD *)&procState);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_AiState___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v6);
    byte_4212984 = 1;
  }
  Value_AiLogic_PROC_STATE__int = BasicHelper__GetValue_AiLogic_PROC_STATE__int_(
                                    (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                                    procState,
                                    -1,
                                    (const MethodInfo_1709038 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_B0D97C(Value_AiLogic_PROC_STATE__int);
  v8 = Value_AiLogic_PROC_STATE__int + 1;
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___set_Item(
    this->fields.dicTimingAiIdx,
    procState,
    Value_AiLogic_PROC_STATE__int + 1,
    (const MethodInfo_2E9F528 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v9 = (struct AiState_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                             (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
                             v8,
                             0LL,
                             (const MethodInfo_1709420 *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = v9;
  sub_B0D840(
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
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  struct AiState_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421298A & 1) == 0 )
  {
    sub_B0D8A4(&Method_AiState_MakeAiState___67925536, sv);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AiState___, v6);
    sub_B0D8A4(&Method_System_Func_AiState_SaveData__AiState___ctor__, v7);
    sub_B0D8A4(&System_Func_AiState_SaveData__AiState__TypeInfo, v8);
    byte_421298A = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                            System_Func_AiState_SaveData__AiState__TypeInfo,
                                                                                            sv,
                                                                                            v9);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v11,
      0LL,
      Method_AiState_MakeAiState___67925536,
      (const MethodInfo_261A104 *)Method_System_Func_AiState_SaveData__AiState___ctor__);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v13 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v12,
                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = v13;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.addAiStates,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
  struct System_Collections_Generic_List_AiState__o *IsNullOrEmpty; // x0
  __int64 v16; // x20
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **current; // x1
  _DWORD *v25; // x28
  __int64 v26; // x1
  __int64 v27; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  WarBoardData_SquareRangeSearch_o *v29; // x0
  int range; // w8
  int klass; // w8
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4212988 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___, takeOverArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v9);
    sub_B0D8A4(&Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v12);
    sub_B0D8A4(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v13);
    sub_B0D8A4(&AiStateManager___c__DisplayClass20_0_TypeInfo, v14);
    byte_4212988 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  IsNullOrEmpty = (struct System_Collections_Generic_List_AiState__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)takeOverArray,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !aiResetChecker )
      goto LABEL_20;
    if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer))aiResetChecker->klass->vtable._4_IsReset.method)(
            aiResetChecker,
            aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr) & 1) != 0 )
      return;
    IsNullOrEmpty = this->fields.fixAiStateList;
    if ( !IsNullOrEmpty )
LABEL_20:
      sub_B0D97C(IsNullOrEmpty);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v35,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v35,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
            return;
          }
          v16 = sub_B0D974(AiStateManager___c__DisplayClass20_0_TypeInfo, v32, v33);
          AiStateManager___c__DisplayClass20_0___ctor((AiStateManager___c__DisplayClass20_0_o *)v16, 0LL);
          if ( !v16 )
            sub_B0D97C(v17);
          current = (System_Int32_array **)v35.fields.current;
          *(_QWORD *)(v16 + 16) = v35.fields.current;
          sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), current, v18, v19, v20, v21, v22, v23);
          v25 = *(_DWORD **)(v16 + 16);
          v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo,
                                                                                     v26,
                                                                                     v27);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v28,
            (Il2CppObject *)v16,
            Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
            (const MethodInfo_26189B8 *)Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__);
          v29 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
                  (System_Func_TSource__bool__o *)v28,
                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
          if ( !v25 )
            sub_B0D97C(v29);
        }
        while ( !v29 );
        range = v29->fields.range;
        v25[9] = range;
        if ( range < 1 )
          break;
LABEL_14:
        v25[5] = range;
      }
      klass = (int)v29[1].klass;
      v25[5] = klass;
      if ( klass <= 0 )
      {
        range = v25[4];
        goto LABEL_14;
      }
    }
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsNullOrEmpty; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *mainAiState; // x1

  if ( (byte_4212985 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiState__AddRange__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiState__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiState___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AiState__get_Count__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_AiState__TypeInfo, v7);
    byte_4212985 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_AiState__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v8;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fixAiStateList,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  mainAiState = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_12;
  if ( mainAiState->fields.missionConditionDetailId >= 1 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_12;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      IsNullOrEmpty,
      mainAiState,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AiState__Add__);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_12;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)IsNullOrEmpty,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.addAiStates,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_12:
    sub_B0D97C(IsNullOrEmpty);
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
  sub_B0D840(
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
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213957 & 1) == 0 )
  {
    sub_B0D8A4(&AiStateManager___c_TypeInfo, v1);
    byte_4213957 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AiStateManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiStateManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
  if ( !aiState || (this = (AiStateManager___c__DisplayClass20_0_o *)x) == 0LL )
    sub_B0D97C(this);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}