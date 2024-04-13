void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1

  if ( (byte_42E686F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__,
      (_DWORD)aiState,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v6, v7, v8);
    byte_42E686F = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_TitleInfoControl_TitleKind__int____ctor(
    v9,
    (const MethodInfo_2F40648 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v9;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainAiState,
    (System_Int32_array **)aiState,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  AiStateManager__UpdateFixAiStateList(this, v22);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiStateManager__ExistAiThinking(
        AiStateManager_o *this,
        BattleServantData_o *svtData,
        AiLogic_o *aiLogic,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        int32_t timingPriority,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BattleServantConfConponent_o *p_CurAiState_k__BackingField; // x19
  System_Int32_array **v23; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **current; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x5
  bool v36; // w21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E6874 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__,
      (_DWORD)svtData,
      (_DWORD)aiLogic,
      *(_QWORD *)&procState);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v19, v20, v21);
    byte_42E6874 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField;
  v23 = (System_Int32_array **)CurAiState_k__BackingField;
  v25 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&p_CurAiState_k__BackingField[-1].fields.isEquip;
  if ( !v25 )
    sub_B5D69C(0LL, svtData);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    v25,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
  {
    current = (System_Int32_array **)v44.fields.current;
    p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v44.fields.current;
    sub_B5D560(p_CurAiState_k__BackingField, current, v26, v27, v28, v29, v30, v31);
    if ( !aiLogic )
      sub_B5D69C(v33, v34);
    if ( AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v35) )
    {
      v36 = 1;
      goto LABEL_10;
    }
  }
  v36 = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (BattleServantConfConponent_c *)v23;
  sub_B5D560(p_CurAiState_k__BackingField, v23, v37, v38, v39, v40, v41, v42);
  return v36;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  __int64 v23; // x19
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v25; // x0
  struct AiStateManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__22_0; // x21
  Il2CppObject *v28; // x22
  struct AiStateManager___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array **v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42E6877 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_AiState__AiState_SaveData___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_AiState__AiState_SaveData__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&AiStateManager_SaveData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_AiStateManager___c__GetSaveData_b__22_0__, v17, v18, v19);
    sub_B5D5C4(&AiStateManager___c_TypeInfo, v20, v21, v22);
    byte_42E6877 = 1;
  }
  v23 = sub_B5D694(AiStateManager_SaveData_TypeInfo);
  AiStateManager_SaveData___ctor((AiStateManager_SaveData_o *)v23, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v25 = AiStateManager___c_TypeInfo;
    if ( (BYTE3(AiStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v25 = AiStateManager___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = AiStateManager___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__22_0,
        v28,
        Method_AiStateManager___c__GetSaveData_b__22_0__,
        (const MethodInfo_2C3041C *)Method_System_Func_AiState__AiState_SaveData___ctor__);
      v29 = AiStateManager___c_TypeInfo->static_fields;
      v29->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v29->__9__22_0,
        (System_Int32_array **)_9__22_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v37 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v36,
                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v23 )
      sub_B5D69C(v37, v38);
    *(_QWORD *)(v23 + 16) = v37;
    sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), v37, v39, v40, v41, v42, v43, v44);
  }
  return (AiStateManager_SaveData_o *)v23;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Func_int__BattleActionData_SideEffectData__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  struct AiState_array *v35; // x1
  const MethodInfo *v36; // x1

  if ( (byte_42E6870 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AiState_MakeAiState__, (_DWORD)aiIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__AiState___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AiState___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_int__AiState___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_int__AiState__TypeInfo, v22, v23, v24);
    byte_42E6870 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_B5D560(
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
    sub_B5D69C(0LL, v25);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_2F413B8 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v33 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__AiState__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v33,
      0LL,
      Method_AiState_MakeAiState__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__AiState___ctor__);
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v33,
                                                                 (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v35 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v34,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v35 = 0LL;
  }
  this->fields.addAiStates = v35;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.addAiStates,
    (System_Int32_array **)v35,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  AiStateManager__UpdateFixAiStateList(this, v36);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *dicTimingAiIdx; // x0

  if ( (byte_42E6871 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__,
      procState,
      (_DWORD)method,
      v3);
    byte_42E6871 = 1;
  }
  dicTimingAiIdx = this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_B5D69C(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_2F42AE4 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *__fastcall AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AiStateManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  _QWORD **v21; // x20
  __int64 v22; // x19
  __int16 v23; // w8
  __int64 v24; // x19
  __int64 v25; // x19
  __int64 v26; // x19
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0

  v5 = this;
  if ( (byte_42E6875 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AiState_MakeTakeOverAiState__, (_DWORD)aiResetChecker, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__, v15, v16, v17);
    this = (AiStateManager_o *)sub_B5D5C4(
                                 &System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo,
                                 v18,
                                 v19,
                                 v20);
    byte_42E6875 = 1;
  }
  if ( !aiResetChecker )
    sub_B5D69C(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v21 = (_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v22 = **((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6);
    v23 = *(_WORD *)(v22 + 306);
    if ( (v23 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 6));
      v23 = *(_WORD *)(v22 + 306);
    }
    if ( (v23 & 0x400) != 0 )
    {
      v24 = *v21[6];
      if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
        sub_AF52C4(*v21[6]);
      if ( !*(_DWORD *)(v24 + 224) )
      {
        v25 = *v21[6];
        if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
          sub_AF52C4(*v21[6]);
        j_il2cpp_runtime_class_init_0(v25);
      }
    }
    v26 = *v21[6];
    if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
      sub_AF52C4(*v21[6]);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v26 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.fixAiStateList;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v29,
      0LL,
      Method_AiState_MakeTakeOverAiState__,
      (const MethodInfo_2C3041C *)Method_System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData___ctor__);
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v29,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                             v30,
                                                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 Value_AiLogic_PROC_STATE__int; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  struct AiState_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E6872 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, procState, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AiState___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v9, v10, v11);
    byte_42E6872 = 1;
  }
  Value_AiLogic_PROC_STATE__int = BasicHelper__GetValue_AiLogic_PROC_STATE__int_(
                                    (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                                    procState,
                                    -1,
                                    (const MethodInfo_1AD8C34 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_B5D69C(Value_AiLogic_PROC_STATE__int, v13);
  v14 = Value_AiLogic_PROC_STATE__int + 1;
  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___set_Item(
    this->fields.dicTimingAiIdx,
    procState,
    Value_AiLogic_PROC_STATE__int + 1,
    (const MethodInfo_2F411C4 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v15 = (struct AiState_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                              (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
                              v14,
                              0LL,
                              (const MethodInfo_1AD901C *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CurAiState_k__BackingField,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return v15 != 0LL;
}


void __fastcall AiStateManager__SetSaveData(
        AiStateManager_o *this,
        AiStateManager_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct AiState_array *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E6878 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AiState_MakeAiState___68781248, (_DWORD)sv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AiState___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_AiState_SaveData__AiState___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_AiState_SaveData__AiState__TypeInfo, v15, v16, v17);
    byte_42E6878 = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v19,
      0LL,
      Method_AiState_MakeAiState___68781248,
      (const MethodInfo_2C3041C *)Method_System_Func_AiState_SaveData__AiState___ctor__);
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v19,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v21 = (struct AiState_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v20,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = v21;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.addAiStates,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  AiStateManager__UpdateFixAiStateList(this, (const MethodInfo *)sv);
}


void __fastcall AiStateManager__SetTakeOverAiState(
        AiStateManager_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_array *takeOverArray,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  struct System_Collections_Generic_List_AiState__o *IsNullOrEmpty; // x0
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **current; // x1
  _DWORD *v43; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x21
  WarBoardData_SquareRangeSearch_o *v45; // x0
  __int64 v46; // x1
  int range; // w8
  int klass; // w8
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E6876 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___,
      (_DWORD)takeOverArray,
      (_DWORD)aiResetChecker,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v22, v23, v24);
    sub_B5D5C4(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v25, v26, v27);
    sub_B5D5C4(&AiStateManager___c__DisplayClass20_0_TypeInfo, v28, v29, v30);
    byte_42E6876 = 1;
  }
  memset(&v50, 0, sizeof(v50));
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
      sub_B5D69C(IsNullOrEmpty, v32);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v49,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v50 = v49;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v50,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
          {
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v50,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
            return;
          }
          v33 = sub_B5D694(AiStateManager___c__DisplayClass20_0_TypeInfo);
          AiStateManager___c__DisplayClass20_0___ctor((AiStateManager___c__DisplayClass20_0_o *)v33, 0LL);
          if ( !v33 )
            sub_B5D69C(v34, v35);
          current = (System_Int32_array **)v50.fields.current;
          *(_QWORD *)(v33 + 16) = v50.fields.current;
          sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), current, v36, v37, v38, v39, v40, v41);
          v43 = *(_DWORD **)(v33 + 16);
          v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v44,
            (Il2CppObject *)v33,
            Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool___ctor__);
          v45 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
                  (System_Func_TSource__bool__o *)v44,
                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
          if ( !v43 )
            sub_B5D69C(v45, v46);
        }
        while ( !v45 );
        range = v45->fields.range;
        v43[9] = range;
        if ( range < 1 )
          break;
LABEL_14:
        v43[5] = range;
      }
      klass = (int)v45[1].klass;
      v43[5] = klass;
      if ( klass <= 0 )
      {
        range = v43[4];
        goto LABEL_14;
      }
    }
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *IsNullOrEmpty; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *mainAiState; // x1

  if ( (byte_42E6873 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiState__AddRange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiState__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiState___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AiState__get_Count__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_AiState__TypeInfo, v14, v15, v16);
    byte_42E6873 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v17;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fixAiStateList,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AiState__Add__);
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
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_12:
    sub_B5D69C(IsNullOrEmpty, mainAiState);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E750D & 1) == 0 )
  {
    sub_B5D5C4(&AiStateManager___c_TypeInfo, v1, v2, v3);
    byte_42E750D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AiStateManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AiStateManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}