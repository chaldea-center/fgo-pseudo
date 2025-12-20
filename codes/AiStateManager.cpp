void AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1

  if ( (byte_4D2F8EA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
    byte_4D2F8EA = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v5,
    (const MethodInfo_34E4720 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.mainAiState = aiState;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mainAiState, (int32_t)aiState, v12, v13, v14, v15, v16, v17);
  AiStateManager__UpdateFixAiStateList(this, v18);
}


void AiStateManager__AfterMakeAiActTask(AiStateManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurAiState_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._CurAiState_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
}


bool AiStateManager__ExistAiThinking(
        AiStateManager_o *this,
        BattleServantData_o *svtData,
        AiLogic_o *aiLogic,
        int32_t procState,
        BattleLogicBaseAi_o *logicAi,
        int32_t timingPriority,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_CurAiState_k__BackingField; // x19
  struct AiState_o *v14; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_object__o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  bool v23; // w26
  int32_t current; // w1
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x5
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4D2F8EF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    byte_4D2F8EF = 1;
  }
  memset(&v35, 0, sizeof(v35));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (GrandQuestFolderBoardItem_o *)&this->fields._CurAiState_k__BackingField;
  v14 = CurAiState_k__BackingField;
  v16 = *(System_Collections_Generic_List_object__o **)&p_CurAiState_k__BackingField[-1].fields._IconId_k__BackingField;
  if ( !v16 )
    sub_1C942F0(0, svtData);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v16,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  do
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    if ( !v23 )
      break;
    current = (int32_t)v35.fields._current;
    p_CurAiState_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v35.fields._current;
    sub_1C9403C(p_CurAiState_k__BackingField, current, v17, v18, v19, v20, v21, v22);
    if ( !aiLogic )
      sub_1C942F0(v25, v26);
  }
  while ( !AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v27) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v14;
  sub_1C9403C(p_CurAiState_k__BackingField, (int32_t)v14, v28, v29, v30, v31, v32, v33);
  return v23;
}


AiStateManager_SaveData_o *AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v5; // x0
  System_Func_object__object__o *_9__22_0; // x21
  Il2CppObject *v7; // x22
  struct AiStateManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2F8F2 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    sub_1C94098(&System_Func_AiState__AiState_SaveData__TypeInfo);
    sub_1C94098(&AiStateManager_SaveData_TypeInfo);
    sub_1C94098(&Method_AiStateManager___c__GetSaveData_b__22_0__);
    sub_1C94098(&AiStateManager___c_TypeInfo);
    byte_4D2F8F2 = 1;
  }
  v3 = sub_1C942E4(AiStateManager_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v5 = AiStateManager___c_TypeInfo;
    if ( !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v5 = AiStateManager___c_TypeInfo;
    }
    _9__22_0 = (System_Func_object__object__o *)v5->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = AiStateManager___c_TypeInfo;
      }
      v7 = (Il2CppObject *)v5->static_fields->__9;
      _9__22_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_object__object____ctor(_9__22_0, v7, Method_AiStateManager___c__GetSaveData_b__22_0__, 0);
      static_fields = AiStateManager___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__22_0,
        (int32_t)_9__22_0,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v16 = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v3 )
      sub_1C942F0(v16, v17);
    *(_QWORD *)(v3 + 16) = v16;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v16, v18, v19, v20, v21, v22, v23);
  }
  return (AiStateManager_SaveData_o *)v3;
}


void AiStateManager__InitAiStates(
        AiStateManager_o *this,
        System_Collections_Generic_List_int__o *aiIdList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Func_T__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x1
  const MethodInfo *v21; // x1

  if ( (byte_4D2F8EB & 1) == 0 )
  {
    sub_1C94098(&Method_AiState_MakeAiState__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_int__AiState___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_AiState___);
    sub_1C94098(&System_Func_int__AiState__TypeInfo);
    byte_4D2F8EB = 1;
  }
  this->fields._CurAiState_k__BackingField = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurAiState_k__BackingField,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1C942F0(0, v10);
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_34E5264 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v18 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_int__AiState__TypeInfo);
    System_Func_int__object____ctor(v18, 0, Method_AiState_MakeAiState__, 0);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v18,
                                                                 (const MethodInfo_31D03C0 *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v20 = System_Linq_Enumerable__ToArray_object_(
            v19,
            (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v20 = 0;
  }
  this->fields.addAiStates = (struct AiState_array *)v20;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.addAiStates, (int32_t)v20, v12, v13, v14, v15, v16, v17);
  AiStateManager__UpdateFixAiStateList(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0

  if ( (byte_4D2F8EC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
    byte_4D2F8EC = 1;
  }
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1C942F0(0, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_Int32Enum__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_34E648C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  AiStateManager_o *v4; // x19
  long double inited; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_object__object__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  v4 = this;
  if ( (byte_4D2F8F0 & 1) == 0 )
  {
    sub_1C94098(&Method_AiState_MakeTakeOverAiState__);
    sub_1C94098(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
    this = (AiStateManager_o *)sub_1C94098(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    byte_4D2F8F0 = 1;
  }
  if ( !aiResetChecker )
    sub_1C942F0(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, const MethodInfo *, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.methodPtr)(
          aiResetChecker,
          aiResetChecker->klass->vtable._4_IsReset.method,
          method)
      & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v7 = *((_QWORD *)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 7);
    if ( !v7 )
    {
      sub_1C6A188(Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6A12C(inited);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v9 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v12 = (System_Func_object__object__o *)sub_1C942E4(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_object__object____ctor(v12, 0, Method_AiState_MakeTakeOverAiState__, 0);
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v12,
                                                                 (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                             v13,
                                                             (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


bool AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 Value_Int32Enum__int; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2F8ED & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
    sub_1C94098(&Method_BasicHelper_IndexValue_AiState___);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
    byte_4D2F8ED = 1;
  }
  Value_Int32Enum__int = BasicHelper__GetValue_Int32Enum__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                           procState,
                           -1,
                           (const MethodInfo_3189E98 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_1C942F0(Value_Int32Enum__int, v6);
  v7 = Value_Int32Enum__int + 1;
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx,
    procState,
    Value_Int32Enum__int + 1,
    (const MethodInfo_34E50D0 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v8 = BasicHelper__IndexValue_object__51946988(
         (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
         v7,
         0,
         (const MethodInfo_318A5EC *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = (struct AiState_o *)v8;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurAiState_k__BackingField,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  return v8 != 0;
}


void AiStateManager__SetSaveData(AiStateManager_o *this, AiStateManager_SaveData_o *sv, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_object__object__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Object_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2F8F3 & 1) == 0 )
  {
    sub_1C94098(&Method_AiState_MakeAiState___79041192);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_AiState___);
    sub_1C94098(&System_Func_AiState_SaveData__AiState__TypeInfo);
    byte_4D2F8F3 = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v6 = (System_Func_object__object__o *)sub_1C942E4(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_object__object____ctor(v6, 0, Method_AiState_MakeAiState___79041192, 0);
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                aiStates,
                                                                (System_Func_TSource__TResult__o *)v6,
                                                                (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v8 = System_Linq_Enumerable__ToArray_object_(
           v7,
           (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = (struct AiState_array *)v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.addAiStates, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  AiStateManager__UpdateFixAiStateList(this, (const MethodInfo *)sv);
}


void AiStateManager__SetTakeOverAiState(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t current; // w1
  _DWORD *v19; // x27
  System_Func_object__bool__o *v20; // x21
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  int klass_high; // w8
  int *p_monitor; // x8
  int v25; // w8
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2F8F1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__);
    sub_1C94098(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    sub_1C94098(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__);
    sub_1C94098(&AiStateManager___c__DisplayClass20_0_TypeInfo);
    byte_4D2F8F1 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  IsNullOrEmpty = (struct System_Collections_Generic_List_AiState__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)takeOverArray,
                                                                         0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !aiResetChecker )
      goto LABEL_21;
    if ( (((__int64 (__fastcall *)(AiResetChecker_o *, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.methodPtr)(
            aiResetChecker,
            aiResetChecker->klass->vtable._4_IsReset.method)
        & 1) != 0 )
      return;
    IsNullOrEmpty = this->fields.fixAiStateList;
    if ( !IsNullOrEmpty )
LABEL_21:
      sub_1C942F0(IsNullOrEmpty, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
    {
      v9 = sub_1C942E4(AiStateManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0);
      if ( !v9 )
        sub_1C942F0(v10, v11);
      current = (int32_t)v27.fields._current;
      *(_QWORD *)(v9 + 16) = v27.fields._current;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), current, v12, v13, v14, v15, v16, v17);
      v19 = *(_DWORD **)(v9 + 16);
      v20 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v20,
        (Il2CppObject *)v9,
        Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
        0);
      v21 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
              (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
              (System_Func_TSource__bool__o *)v20,
              (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
      if ( !v19 )
        sub_1C942F0(v21, v22);
      if ( v21 )
      {
        klass_high = HIDWORD(v21[1].klass);
        v19[9] = klass_high;
        if ( klass_high <= 0 )
          p_monitor = (int *)&v21[1].monitor;
        else
          p_monitor = v19 + 9;
        v25 = *p_monitor;
        v19[5] = v25;
        if ( v25 <= 0 )
          v19[5] = v19[4];
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  }
}


void AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct AiState_o *mainAiState; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4D2F8EE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_AiState__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_AiState__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_AiState___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_AiState__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_AiState__TypeInfo);
    byte_4D2F8EE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v3;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.fixAiStateList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  mainAiState = this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_15;
  if ( mainAiState->fields.aiGroupId >= 1 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    items = IsNullOrEmpty->fields._items;
    v20 = Method_System_Collections_Generic_List_AiState__Add__;
    ++IsNullOrEmpty->fields._version;
    if ( !items )
      goto LABEL_15;
    size = IsNullOrEmpty->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        IsNullOrEmpty,
        (Il2CppObject *)mainAiState,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      IsNullOrEmpty->fields._size = size + 1;
      v22[4] = (Il2CppClass *)mainAiState;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)mainAiState, v12, v13, v14, v15, v16, v17);
    }
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields.addAiStates,
                                                                 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    System_Collections_Generic_List_object___AddRange(
      IsNullOrEmpty,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.addAiStates,
      (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_15:
    sub_1C942F0(IsNullOrEmpty, mainAiState);
  this->fields._IsSetAiState_k__BackingField = (*p_fixAiStateList)->fields._size > 0;
}


AiState_o *AiStateManager__get_CurAiState(AiStateManager_o *this, const MethodInfo *method)
{
  return this->fields._CurAiState_k__BackingField;
}


bool AiStateManager__get_IsSetAiState(AiStateManager_o *this, const MethodInfo *method)
{
  return this->fields._IsSetAiState_k__BackingField;
}


void AiStateManager__set_CurAiState(AiStateManager_o *this, AiState_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurAiState_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurAiState_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiStateManager__set_IsSetAiState(AiStateManager_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSetAiState_k__BackingField = value;
}


void AiStateManager_SaveData___ctor(AiStateManager_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AiStateManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F8F4 & 1) == 0 )
  {
    sub_1C94098(&AiStateManager___c_TypeInfo);
    byte_4D2F8F4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(AiStateManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AiStateManager___c_TypeInfo->static_fields->__9 = (struct AiStateManager___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)AiStateManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiStateManager___c___ctor(AiStateManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


AiState_SaveData_o *AiStateManager___c___GetSaveData_b__22_0(
        AiStateManager___c_o *this,
        AiState_o *state,
        const MethodInfo *method)
{
  if ( !state )
    sub_1C942F0(this, 0);
  return AiState__getSaveData(state, (const MethodInfo *)state);
}


void AiStateManager___c__DisplayClass20_0___ctor(
        AiStateManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AiStateManager___c__DisplayClass20_0___SetTakeOverAiState_b__0(
        AiStateManager___c__DisplayClass20_0_o *this,
        BattleWarBoardInfo_TakeOverAiStateData_o *x,
        const MethodInfo *method)
{
  struct AiState_o *aiState; // x8

  aiState = this->fields.aiState;
  if ( !aiState || !x )
    sub_1C942F0(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0);
}