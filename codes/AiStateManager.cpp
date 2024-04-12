void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1

  if ( (byte_42ADFE3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
    byte_42ADFE3 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int____ctor(
    v5,
    (const MethodInfo_2F3628C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v5;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mainAiState,
    (System_Int32_array **)aiState,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  AiStateManager__UpdateFixAiStateList(this, v18);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
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
  BattleServantConfConponent_o *p_CurAiState_k__BackingField; // x19
  System_Int32_array **v14; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **current; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x5
  bool v27; // w21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42ADFE8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    byte_42ADFE8 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField;
  v14 = (System_Int32_array **)CurAiState_k__BackingField;
  v16 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&p_CurAiState_k__BackingField[-1].fields.isEquip;
  if ( !v16 )
    sub_B52A5C(0LL, svtData);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    v16,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
  {
    current = (System_Int32_array **)v35.fields.current;
    p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v35.fields.current;
    sub_B52920(p_CurAiState_k__BackingField, current, v17, v18, v19, v20, v21, v22);
    if ( !aiLogic )
      sub_B52A5C(v24, v25);
    if ( AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v26) )
    {
      v27 = 1;
      goto LABEL_10;
    }
  }
  v27 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v14;
  sub_B52920(p_CurAiState_k__BackingField, v14, v28, v29, v30, v31, v32, v33);
  return v27;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v5; // x0
  struct AiStateManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__22_0; // x21
  Il2CppObject *v8; // x22
  struct AiStateManager___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array **v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42ADFEB & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    sub_B52984(&Method_System_Func_AiState__AiState_SaveData___ctor__);
    sub_B52984(&System_Func_AiState__AiState_SaveData__TypeInfo);
    sub_B52984(&AiStateManager_SaveData_TypeInfo);
    sub_B52984(&Method_AiStateManager___c__GetSaveData_b__22_0__);
    sub_B52984(&AiStateManager___c_TypeInfo);
    byte_42ADFEB = 1;
  }
  v3 = sub_B52A54(AiStateManager_SaveData_TypeInfo);
  AiStateManager_SaveData___ctor((AiStateManager_SaveData_o *)v3, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v5 = AiStateManager___c_TypeInfo;
    if ( (BYTE3(AiStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v5 = AiStateManager___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = AiStateManager___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__22_0,
        v8,
        Method_AiStateManager___c__GetSaveData_b__22_0__,
        (const MethodInfo_2BCA808 *)Method_System_Func_AiState__AiState_SaveData___ctor__);
      v9 = AiStateManager___c_TypeInfo->static_fields;
      v9->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v9->__9__22_0,
        (System_Int32_array **)_9__22_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v17 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v16,
                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v3 )
      sub_B52A5C(v17, v18);
    *(_QWORD *)(v3 + 16) = v17;
    sub_B52920((BattleServantConfConponent_o *)(v3 + 16), v17, v19, v20, v21, v22, v23, v24);
  }
  return (AiStateManager_SaveData_o *)v3;
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
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct AiState_array *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_42ADFE4 & 1) == 0 )
  {
    sub_B52984(&Method_AiState_MakeAiState__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__AiState___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_AiState___);
    sub_B52984(&Method_System_Func_int__AiState___ctor__);
    sub_B52984(&System_Func_int__AiState__TypeInfo);
    byte_42ADFE4 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B52920(
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
    sub_B52A5C(0LL, v10);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_2F36FFC *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v18 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__AiState__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v18,
      0LL,
      Method_AiState_MakeAiState__,
      (const MethodInfo_2BC49BC *)Method_System_Func_int__AiState___ctor__);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v18,
                                                                 (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v20 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v19,
                                    (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v20 = 0LL;
  }
  this->fields.addAiStates = v20;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.addAiStates,
    (System_Int32_array **)v20,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  AiStateManager__UpdateFixAiStateList(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0

  if ( (byte_42ADFE5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
    byte_42ADFE5 = 1;
  }
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B52A5C(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_2F38728 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *__fastcall AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  AiStateManager_o *v4; // x19
  _QWORD **v5; // x20
  __int64 v6; // x19
  __int16 v7; // w8
  __int64 v8; // x19
  __int64 v9; // x19
  __int64 v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  v4 = this;
  if ( (byte_42ADFE9 & 1) == 0 )
  {
    sub_B52984(&Method_AiState_MakeTakeOverAiState__);
    sub_B52984(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_B52984(&Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__);
    this = (AiStateManager_o *)sub_B52984(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    byte_42ADFE9 = 1;
  }
  if ( !aiResetChecker )
    sub_B52A5C(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v6 = **((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v10 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v13,
      0LL,
      Method_AiState_MakeTakeOverAiState__,
      (const MethodInfo_2BCA808 *)Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v13,
                                                                 (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                             v14,
                                                             (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 Value_AiLogic_PROC_STATE__int; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  struct AiState_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ADFE6 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
    sub_B52984(&Method_BasicHelper_IndexValue_AiState___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
    byte_42ADFE6 = 1;
  }
  Value_AiLogic_PROC_STATE__int = BasicHelper__GetValue_AiLogic_PROC_STATE__int_(
                                    (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                                    procState,
                                    -1,
                                    (const MethodInfo_1A43B6C *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_B52A5C(Value_AiLogic_PROC_STATE__int, v6);
  v7 = Value_AiLogic_PROC_STATE__int + 1;
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___set_Item(
    this->fields.dicTimingAiIdx,
    procState,
    Value_AiLogic_PROC_STATE__int + 1,
    (const MethodInfo_2F36E08 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v8 = (struct AiState_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                             (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
                             v7,
                             0LL,
                             (const MethodInfo_1A43F54 *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = v8;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  return v8 != 0LL;
}


void __fastcall AiStateManager__SetSaveData(
        AiStateManager_o *this,
        AiStateManager_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  struct AiState_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42ADFEC & 1) == 0 )
  {
    sub_B52984(&Method_AiState_MakeAiState___68553696);
    sub_B52984(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_AiState___);
    sub_B52984(&Method_System_Func_AiState_SaveData__AiState___ctor__);
    sub_B52984(&System_Func_AiState_SaveData__AiState__TypeInfo);
    byte_42ADFEC = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v6,
      0LL,
      Method_AiState_MakeAiState___68553696,
      (const MethodInfo_2BCA808 *)Method_System_Func_AiState_SaveData__AiState___ctor__);
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                aiStates,
                                                                (System_Func_TSource__TResult__o *)v6,
                                                                (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v8 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v7,
                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = v8;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.addAiStates,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  AiStateManager__UpdateFixAiStateList(this, (const MethodInfo *)sv);
}


void __fastcall AiStateManager__SetTakeOverAiState(
        AiStateManager_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_array *takeOverArray,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_AiState__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **current; // x1
  _DWORD *v19; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x21
  WarBoardData_SquareRangeSearch_o *v21; // x0
  __int64 v22; // x1
  int range; // w8
  int klass; // w8
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42ADFEA & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__);
    sub_B52984(&Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__);
    sub_B52984(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    sub_B52984(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__);
    sub_B52984(&AiStateManager___c__DisplayClass20_0_TypeInfo);
    byte_42ADFEA = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
      sub_B52A5C(IsNullOrEmpty, v8);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v26,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v26,
              (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
            return;
          }
          v9 = sub_B52A54(AiStateManager___c__DisplayClass20_0_TypeInfo);
          AiStateManager___c__DisplayClass20_0___ctor((AiStateManager___c__DisplayClass20_0_o *)v9, 0LL);
          if ( !v9 )
            sub_B52A5C(v10, v11);
          current = (System_Int32_array **)v26.fields.current;
          *(_QWORD *)(v9 + 16) = v26.fields.current;
          sub_B52920((BattleServantConfConponent_o *)(v9 + 16), current, v12, v13, v14, v15, v16, v17);
          v19 = *(_DWORD **)(v9 + 16);
          v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v20,
            (Il2CppObject *)v9,
            Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
            (const MethodInfo_2BC90BC *)Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__);
          v21 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
                  (System_Func_TSource__bool__o *)v20,
                  (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
          if ( !v19 )
            sub_B52A5C(v21, v22);
        }
        while ( !v21 );
        range = v21->fields.range;
        v19[9] = range;
        if ( range < 1 )
          break;
LABEL_14:
        v19[5] = range;
      }
      klass = (int)v21[1].klass;
      v19[5] = klass;
      if ( klass <= 0 )
      {
        range = v19[4];
        goto LABEL_14;
      }
    }
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsNullOrEmpty; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *mainAiState; // x1

  if ( (byte_42ADFE7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_AiState__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_AiState__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AiState___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_AiState__get_Count__);
    sub_B52984(&System_Collections_Generic_List_AiState__TypeInfo);
    byte_42ADFE7 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v3;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.fixAiStateList,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AiState__Add__);
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
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_12:
    sub_B52A5C(IsNullOrEmpty, mainAiState);
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
  sub_B52920(
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AEBF5 & 1) == 0 )
  {
    sub_B52984(&AiStateManager___c_TypeInfo);
    byte_42AEBF5 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(AiStateManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiStateManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}