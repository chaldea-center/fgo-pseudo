void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_49BDB48 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__, aiState);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v5);
    byte_49BDB48 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v6,
    (const MethodInfo_32212CC *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v6;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.mainAiState, (int32_t)aiState, v9, v10);
  AiStateManager__UpdateFixAiStateList(this, v11);
}


void __fastcall AiStateManager__AfterMakeAiActTask(AiStateManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._CurAiState_k__BackingField, 0, v2, v3);
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
  CGThumbnailListItem_o *p_CurAiState_k__BackingField; // x19
  struct AiState_o *v17; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_object__o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  bool v22; // w26
  int32_t current; // w1
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x5
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_49BDB4D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, svtData);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v15);
    byte_49BDB4D = 1;
  }
  memset(&v30, 0, sizeof(v30));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (CGThumbnailListItem_o *)&this->fields._CurAiState_k__BackingField;
  v17 = CurAiState_k__BackingField;
  v19 = *(System_Collections_Generic_List_object__o **)&p_CurAiState_k__BackingField[-1].fields._Id_k__BackingField;
  if ( !v19 )
    sub_1B4D1EC(0LL, svtData);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    v19,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  do
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    if ( !v22 )
      break;
    current = (int32_t)v30.fields._current;
    p_CurAiState_k__BackingField->klass = (CGThumbnailListItem_c *)v30.fields._current;
    sub_1B4CF34(p_CurAiState_k__BackingField, current, v20, v21);
    if ( !aiLogic )
      sub_1B4D1EC(v24, v25);
  }
  while ( !AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v26) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (CGThumbnailListItem_c *)v17;
  sub_1B4CF34(p_CurAiState_k__BackingField, (int32_t)v17, v27, v28);
  return v22;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v10; // x0
  System_Func_object__object__o *_9__22_0; // x21
  Il2CppObject *v12; // x22
  struct AiStateManager___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49BDB50 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v3);
    sub_1B4CF90(&System_Func_AiState__AiState_SaveData__TypeInfo, v4);
    sub_1B4CF90(&AiStateManager_SaveData_TypeInfo, v5);
    sub_1B4CF90(&Method_AiStateManager___c__GetSaveData_b__22_0__, v6);
    sub_1B4CF90(&AiStateManager___c_TypeInfo, v7);
    byte_49BDB50 = 1;
  }
  v8 = sub_1B4D1DC(AiStateManager_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v10 = AiStateManager___c_TypeInfo;
    if ( !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo);
      v10 = AiStateManager___c_TypeInfo;
    }
    _9__22_0 = (System_Func_object__object__o *)v10->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = AiStateManager___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__22_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_object__object____ctor(_9__22_0, v12, Method_AiStateManager___c__GetSaveData_b__22_0__, 0LL);
      static_fields = AiStateManager___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v14, v15);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v17 = System_Linq_Enumerable__ToArray_object_(
            v16,
            (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v8 )
      sub_1B4D1EC(v17, v18);
    *(_QWORD *)(v8 + 16) = v17;
    sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)v17, v19, v20);
  }
  return (AiStateManager_SaveData_o *)v8;
}


void __fastcall AiStateManager__InitAiStates(
        AiStateManager_o *this,
        System_Collections_Generic_List_int__o *aiIdList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Func_T__TResult__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x1
  const MethodInfo *v17; // x1

  if ( (byte_49BDB49 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AiState_MakeAiState__, aiIdList);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_int__AiState___, v7);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_AiState___, v8);
    sub_1B4CF90(&System_Func_int__AiState__TypeInfo, v9);
    byte_49BDB49 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._CurAiState_k__BackingField, 0, (int32_t)method, v3);
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1B4D1EC(0LL, v10);
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_3221E10 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v14 = (System_Func_T__TResult__o *)sub_1B4D1DC(System_Func_int__AiState__TypeInfo);
    System_Func_int__object____ctor(v14, 0LL, Method_AiState_MakeAiState__, 0LL);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v14,
                                                                 (const MethodInfo_2F31AE4 *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v16 = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.addAiStates = (struct AiState_array *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.addAiStates, (int32_t)v16, v12, v13);
  AiStateManager__UpdateFixAiStateList(this, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0

  if ( (byte_49BDB4A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__, *(_QWORD *)&procState);
    byte_49BDB4A = 1;
  }
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1B4D1EC(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_Int32Enum__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_3223038 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
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
  long double inited; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_object__object__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  v4 = this;
  if ( (byte_49BDB4E & 1) == 0 )
  {
    sub_1B4CF90(&Method_AiState_MakeTakeOverAiState__, aiResetChecker);
    sub_1B4CF90(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v6);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v7);
    this = (AiStateManager_o *)sub_1B4CF90(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo, v8);
    byte_49BDB4E = 1;
  }
  if ( !aiResetChecker )
    sub_1B4D1EC(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v10 = Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 7);
    if ( !v11 )
    {
      sub_1B9D67C(Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1B9D620(inited);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v13 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v16 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_object__object____ctor(v16, 0LL, Method_AiState_MakeTakeOverAiState__, 0LL);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                             v17,
                                                             (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 Value_Int32Enum__int; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BDB4B & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, *(_QWORD *)&procState);
    sub_1B4CF90(&Method_BasicHelper_IndexValue_AiState___, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v6);
    byte_49BDB4B = 1;
  }
  Value_Int32Enum__int = BasicHelper__GetValue_Int32Enum__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                           procState,
                           -1,
                           (const MethodInfo_2EEFC2C *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_1B4D1EC(Value_Int32Enum__int, v8);
  v9 = Value_Int32Enum__int + 1;
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx,
    procState,
    Value_Int32Enum__int + 1,
    (const MethodInfo_3221C7C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v10 = BasicHelper__IndexValue_object__49218432(
          (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
          v9,
          0LL,
          (const MethodInfo_2EF0380 *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = (struct AiState_o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._CurAiState_k__BackingField, (int32_t)v10, v11, v12);
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
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_object__object__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  System_Object_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49BDB51 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AiState_MakeAiState___75488520, sv);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_AiState___, v6);
    sub_1B4CF90(&System_Func_AiState_SaveData__AiState__TypeInfo, v7);
    byte_49BDB51 = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v9 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_object__object____ctor(v9, 0LL, Method_AiState_MakeAiState___75488520, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v9,
                                                                 (const MethodInfo_2F341B8 *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v11 = System_Linq_Enumerable__ToArray_object_(
            v10,
            (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = (struct AiState_array *)v11;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.addAiStates, (int32_t)v11, v12, v13);
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
  struct System_Collections_Generic_List_AiState__o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t current; // w1
  _DWORD *v22; // x27
  System_Func_object__bool__o *v23; // x21
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  int klass_high; // w8
  int *p_monitor; // x8
  int v28; // w8
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49BDB4F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___, takeOverArray);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v9);
    sub_1B4CF90(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v11);
    sub_1B4CF90(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v12);
    sub_1B4CF90(&AiStateManager___c__DisplayClass20_0_TypeInfo, v13);
    byte_49BDB4F = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (struct System_Collections_Generic_List_AiState__o *)BasicHelper__IsNullOrEmpty(
                                                                         (System_Collections_ICollection_o *)takeOverArray,
                                                                         0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !aiResetChecker )
      goto LABEL_21;
    if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer))aiResetChecker->klass->vtable._4_IsReset.method)(
            aiResetChecker,
            aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr) & 1) != 0 )
      return;
    IsNullOrEmpty = this->fields.fixAiStateList;
    if ( !IsNullOrEmpty )
LABEL_21:
      sub_1B4D1EC(IsNullOrEmpty, v15);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v30 = v29;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
    {
      v16 = sub_1B4D1DC(AiStateManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( !v16 )
        sub_1B4D1EC(v17, v18);
      current = (int32_t)v30.fields._current;
      *(_QWORD *)(v16 + 16) = v30.fields._current;
      sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 16), current, v19, v20);
      v22 = *(_DWORD **)(v16 + 16);
      v23 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v16,
        Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
        0LL);
      v24 = System_Linq_Enumerable__FirstOrDefault_object__49446844(
              (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_2F27FBC *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
      if ( !v22 )
        sub_1B4D1EC(v24, v25);
      if ( v24 )
      {
        klass_high = HIDWORD(v24[1].klass);
        v22[9] = klass_high;
        if ( klass_high <= 0 )
          p_monitor = (int *)&v24[1].monitor;
        else
          p_monitor = v22 + 9;
        v28 = *p_monitor;
        v22[5] = v28;
        if ( v28 <= 0 )
          v22[5] = v22[4];
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct AiState_o *mainAiState; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  if ( (byte_49BDB4C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiState__AddRange__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiState__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiState___ctor__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_AiState__get_Count__, v5);
    sub_1B4CF90(&System_Collections_Generic_List_AiState__TypeInfo, v6);
    byte_49BDB4C = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v7;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.fixAiStateList, (int32_t)v7, v9, v10);
  mainAiState = this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_15;
  if ( mainAiState->fields.aiGroupId >= 1 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    items = IsNullOrEmpty->fields._items;
    v16 = Method_System_Collections_Generic_List_AiState__Add__;
    ++IsNullOrEmpty->fields._version;
    if ( !items )
      goto LABEL_15;
    size = IsNullOrEmpty->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        IsNullOrEmpty,
        (Il2CppObject *)mainAiState,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      IsNullOrEmpty->fields._size = size + 1;
      v18[4] = (Il2CppClass *)mainAiState;
      sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 4), (int32_t)mainAiState, v12, v13);
    }
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields.addAiStates,
                                                                 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    System_Collections_Generic_List_object___AddRange(
      IsNullOrEmpty,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.addAiStates,
      (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_15:
    sub_1B4D1EC(IsNullOrEmpty, mainAiState);
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
  const MethodInfo *v3; // x3

  this->fields._CurAiState_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._CurAiState_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BDB52 & 1) == 0 )
  {
    sub_1B4CF90(&AiStateManager___c_TypeInfo, v1);
    byte_49BDB52 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(AiStateManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AiStateManager___c_TypeInfo->static_fields->__9 = (struct AiStateManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)AiStateManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return AiState__getSaveData(state, (const MethodInfo *)state);
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
    sub_1B4D1EC(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}