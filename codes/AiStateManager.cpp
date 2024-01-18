void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4185A90 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__, aiState);
    sub_B2C35C(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v5);
    byte_4185A90 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int____ctor(
    v6,
    (const MethodInfo_2E72CD0 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v6;
  sub_B2C2F8(&this->fields, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_B2C2F8(&this->fields.mainAiState, aiState);
  AiStateManager__UpdateFixAiStateList(this, v7);
}


void __fastcall AiStateManager__AfterMakeAiActTask(AiStateManager_o *this, const MethodInfo *method)
{
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._CurAiState_k__BackingField, 0LL);
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
  struct AiState_o **p_CurAiState_k__BackingField; // x19
  struct AiState_o *v17; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v19; // x0
  Il2CppObject *current; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  bool v24; // w21
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4185A95 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, svtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v15);
    byte_4185A95 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = &this->fields._CurAiState_k__BackingField;
  v17 = CurAiState_k__BackingField;
  v19 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*(p_CurAiState_k__BackingField - 3);
  if ( !v19 )
    sub_B2C434(0LL, svtData);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    v19,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
  {
    current = v26.fields.current;
    *p_CurAiState_k__BackingField = (struct AiState_o *)v26.fields.current;
    sub_B2C2F8(p_CurAiState_k__BackingField, current);
    if ( !aiLogic )
      sub_B2C434(v21, v22);
    if ( AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v23) )
    {
      v24 = 1;
      goto LABEL_10;
    }
  }
  v24 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  *p_CurAiState_k__BackingField = v17;
  sub_B2C2F8(p_CurAiState_k__BackingField, v17);
  return v24;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AiStateManager_SaveData_o *v9; // x19
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v11; // x0
  struct AiStateManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__22_0; // x21
  Il2CppObject *v14; // x22
  struct AiStateManager___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v17; // x0
  __int64 v18; // x1

  if ( (byte_4185A98 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v3);
    sub_B2C35C(&Method_System_Func_AiState__AiState_SaveData___ctor__, v4);
    sub_B2C35C(&System_Func_AiState__AiState_SaveData__TypeInfo, v5);
    sub_B2C35C(&AiStateManager_SaveData_TypeInfo, v6);
    sub_B2C35C(&Method_AiStateManager___c__GetSaveData_b__22_0__, v7);
    sub_B2C35C(&AiStateManager___c_TypeInfo, v8);
    byte_4185A98 = 1;
  }
  v9 = (AiStateManager_SaveData_o *)sub_B2C42C(AiStateManager_SaveData_TypeInfo);
  AiStateManager_SaveData___ctor(v9, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v11 = AiStateManager___c_TypeInfo;
    if ( (BYTE3(AiStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v11 = AiStateManager___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = AiStateManager___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__22_0,
        v14,
        Method_AiStateManager___c__GetSaveData_b__22_0__,
        (const MethodInfo_2713350 *)Method_System_Func_AiState__AiState_SaveData___ctor__);
      v15 = AiStateManager___c_TypeInfo->static_fields;
      v15->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_B2C2F8(&v15->__9__22_0, _9__22_0);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v17 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v16,
            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v9 )
      sub_B2C434(v17, v18);
    v9->fields.aiStates = (struct AiState_SaveData_array *)v17;
    sub_B2C2F8(&v9->fields, v17);
  }
  return v9;
}


void __fastcall AiStateManager__InitAiStates(
        AiStateManager_o *this,
        System_Collections_Generic_List_int__o *aiIdList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0
  System_Func_int__BattleActionData_SideEffectData__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  struct AiState_array *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4185A91 & 1) == 0 )
  {
    sub_B2C35C(&Method_AiState_MakeAiState__, aiIdList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__AiState___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AiState___, v7);
    sub_B2C35C(&Method_System_Func_int__AiState___ctor__, v8);
    sub_B2C35C(&System_Func_int__AiState__TypeInfo, v9);
    byte_4185A91 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B2C2F8(&this->fields._CurAiState_k__BackingField, 0LL);
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B2C434(0LL, v10);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_2E73A40 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v12 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__AiState__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v12,
      0LL,
      Method_AiState_MakeAiState__,
      (const MethodInfo_270D828 *)Method_System_Func_int__AiState___ctor__);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v12,
                                                                 (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v14 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v13,
                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v14 = 0LL;
  }
  this->fields.addAiStates = v14;
  sub_B2C2F8(&this->fields.addAiStates, v14);
  AiStateManager__UpdateFixAiStateList(this, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0

  if ( (byte_4185A92 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__, *(_QWORD *)&procState);
    byte_4185A92 = 1;
  }
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B2C434(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_2E7516C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
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
  _QWORD **v10; // x20
  __int64 v11; // x19
  __int16 v12; // w8
  __int64 v13; // x19
  __int64 v14; // x19
  __int64 v15; // x19
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  v4 = this;
  if ( (byte_4185A96 & 1) == 0 )
  {
    sub_B2C35C(&Method_AiState_MakeTakeOverAiState__, aiResetChecker);
    sub_B2C35C(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v7);
    sub_B2C35C(&Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__, v8);
    this = (AiStateManager_o *)sub_B2C35C(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo, v9);
    byte_4185A96 = 1;
  }
  if ( !aiResetChecker )
    sub_B2C434(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v10 = (_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v11 = **((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6);
    v12 = *(_WORD *)(v11 + 306);
    if ( (v12 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6));
      v12 = *(_WORD *)(v11 + 306);
    }
    if ( (v12 & 0x400) != 0 )
    {
      v13 = *v10[6];
      if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
        sub_AC505C(*v10[6]);
      if ( !*(_DWORD *)(v13 + 224) )
      {
        v14 = *v10[6];
        if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
          sub_AC505C(*v10[6]);
        j_il2cpp_runtime_class_init_0(v14);
      }
    }
    v15 = *v10[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AC505C(*v10[6]);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v15 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v18,
      0LL,
      Method_AiState_MakeTakeOverAiState__,
      (const MethodInfo_2713350 *)Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v18,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                             v19,
                                                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Value_AiLogic_PROC_STATE__int; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  struct AiState_o *v10; // x20

  if ( (byte_4185A93 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, *(_QWORD *)&procState);
    sub_B2C35C(&Method_BasicHelper_IndexValue_AiState___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v6);
    byte_4185A93 = 1;
  }
  Value_AiLogic_PROC_STATE__int = BasicHelper__GetValue_AiLogic_PROC_STATE__int_(
                                    (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                                    procState,
                                    -1,
                                    (const MethodInfo_17285AC *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_B2C434(Value_AiLogic_PROC_STATE__int, v8);
  v9 = Value_AiLogic_PROC_STATE__int + 1;
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___set_Item(
    this->fields.dicTimingAiIdx,
    procState,
    Value_AiLogic_PROC_STATE__int + 1,
    (const MethodInfo_2E7384C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v10 = (struct AiState_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                              (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
                              v9,
                              0LL,
                              (const MethodInfo_1728994 *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = v10;
  sub_B2C2F8(&this->fields._CurAiState_k__BackingField, v10);
  return v10 != 0LL;
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
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  struct AiState_array *v12; // x0

  if ( (byte_4185A99 & 1) == 0 )
  {
    sub_B2C35C(&Method_AiState_MakeAiState___67351920, sv);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_AiState___, v6);
    sub_B2C35C(&Method_System_Func_AiState_SaveData__AiState___ctor__, v7);
    sub_B2C35C(&System_Func_AiState_SaveData__AiState__TypeInfo, v8);
    byte_4185A99 = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v10,
      0LL,
      Method_AiState_MakeAiState___67351920,
      (const MethodInfo_2713350 *)Method_System_Func_AiState_SaveData__AiState___ctor__);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v10,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v12 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v11,
                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = v12;
    sub_B2C2F8(&this->fields.addAiStates, v12);
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
  __int64 v16; // x1
  AiStateManager___c__DisplayClass20_0_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x1
  struct AiState_o *aiState; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  WarBoardData_SquareRangeSearch_o *v23; // x0
  __int64 v24; // x1
  int range; // w8
  int klass; // w8
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4185A97 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___, takeOverArray);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v9);
    sub_B2C35C(&Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v12);
    sub_B2C35C(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v13);
    sub_B2C35C(&AiStateManager___c__DisplayClass20_0_TypeInfo, v14);
    byte_4185A97 = 1;
  }
  memset(&v28, 0, sizeof(v28));
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
      sub_B2C434(IsNullOrEmpty, v16);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v28 = v27;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v28,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v28,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
            return;
          }
          v17 = (AiStateManager___c__DisplayClass20_0_o *)sub_B2C42C(AiStateManager___c__DisplayClass20_0_TypeInfo);
          AiStateManager___c__DisplayClass20_0___ctor(v17, 0LL);
          if ( !v17 )
            sub_B2C434(v18, v19);
          current = v28.fields.current;
          v17->fields.aiState = (struct AiState_o *)v28.fields.current;
          sub_B2C2F8(&v17->fields, current);
          aiState = v17->fields.aiState;
          v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v22,
            (Il2CppObject *)v17,
            Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
            (const MethodInfo_2711C04 *)Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__);
          v23 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
                  (System_Func_TSource__bool__o *)v22,
                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
          if ( !aiState )
            sub_B2C434(v23, v24);
        }
        while ( !v23 );
        range = v23->fields.range;
        aiState->fields.overwriteAiGroupId = range;
        if ( range < 1 )
          break;
LABEL_14:
        aiState->fields.aiGroupId = range;
      }
      klass = (int)v23[1].klass;
      aiState->fields.aiGroupId = klass;
      if ( klass <= 0 )
      {
        range = aiState->fields.firstAiGroupId;
        goto LABEL_14;
      }
    }
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsNullOrEmpty; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *mainAiState; // x1

  if ( (byte_4185A94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_AiState__AddRange__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiState__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiState___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_AiState__get_Count__, v5);
    sub_B2C35C(&System_Collections_Generic_List_AiState__TypeInfo, v6);
    byte_4185A94 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v7;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_B2C2F8(&this->fields.fixAiStateList, v7);
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
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AiState__Add__);
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
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_12:
    sub_B2C434(IsNullOrEmpty, mainAiState);
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
  this->fields._CurAiState_k__BackingField = value;
  sub_B2C2F8(&this->fields._CurAiState_k__BackingField, value);
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BA1 & 1) == 0 )
  {
    sub_B2C35C(&AiStateManager___c_TypeInfo, v1);
    byte_4186BA1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AiStateManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiStateManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}