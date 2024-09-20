void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1

  if ( (byte_4A5DB74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
    byte_4A5DB74 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v5,
    (const MethodInfo_3181AE0 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainAiState, (int32_t)aiState, v8, v9);
  AiStateManager__UpdateFixAiStateList(this, v10);
}


void __fastcall AiStateManager__AfterMakeAiActTask(AiStateManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._CurAiState_k__BackingField, 0, v2, v3);
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
  ServantStatusBattleListViewItem_o *p_CurAiState_k__BackingField; // x19
  ServantStatusBattleListViewItem_c *v14; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_object__o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  bool v19; // w26
  int32_t current; // w1
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A5DB79 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    byte_4A5DB79 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (ServantStatusBattleListViewItem_o *)&this->fields._CurAiState_k__BackingField;
  v14 = (ServantStatusBattleListViewItem_c *)CurAiState_k__BackingField;
  v16 = *(System_Collections_Generic_List_object__o **)&p_CurAiState_k__BackingField[-1].fields.isEnabled;
  if ( !v16 )
    sub_1B8880C(0LL, svtData);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v16,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  do
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    if ( !v19 )
      break;
    current = (int32_t)v27.fields._current;
    p_CurAiState_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v27.fields._current;
    sub_1B88554(p_CurAiState_k__BackingField, current, v17, v18);
    if ( !aiLogic )
      sub_1B8880C(v21, v22);
  }
  while ( !AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v23) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = v14;
  sub_1B88554(p_CurAiState_k__BackingField, (int32_t)v14, v24, v25);
  return v19;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v5; // x0
  System_Func_object__object__o *_9__22_0; // x21
  Il2CppObject *v7; // x22
  struct AiStateManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5DB7C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    sub_1B885B0(&System_Func_AiState__AiState_SaveData__TypeInfo);
    sub_1B885B0(&AiStateManager_SaveData_TypeInfo);
    sub_1B885B0(&Method_AiStateManager___c__GetSaveData_b__22_0__);
    sub_1B885B0(&AiStateManager___c_TypeInfo);
    byte_4A5DB7C = 1;
  }
  v3 = sub_1B887FC(AiStateManager_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
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
      _9__22_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_object__object____ctor(_9__22_0, v7, Method_AiStateManager___c__GetSaveData_b__22_0__, 0LL);
      static_fields = AiStateManager___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v9, v10);
    }
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v12 = System_Linq_Enumerable__ToArray_object_(
            v11,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v3 )
      sub_1B8880C(v12, v13);
    *(_QWORD *)(v3 + 16) = v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v12, v14, v15);
  }
  return (AiStateManager_SaveData_o *)v3;
}


void __fastcall AiStateManager__InitAiStates(
        AiStateManager_o *this,
        System_Collections_Generic_List_int__o *aiIdList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Func_T__TResult__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4A5DB75 & 1) == 0 )
  {
    sub_1B885B0(&Method_AiState_MakeAiState__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__AiState___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AiState___);
    sub_1B885B0(&System_Func_int__AiState__TypeInfo);
    byte_4A5DB75 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._CurAiState_k__BackingField, 0, (int32_t)method, v3);
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1B8880C(0LL, v6);
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_3182624 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v10 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__AiState__TypeInfo);
    System_Func_int__object____ctor(v10, 0LL, Method_AiState_MakeAiState__, 0LL);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v10,
                                                                 (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v12 = System_Linq_Enumerable__ToArray_object_(
            v11,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v12 = 0LL;
  }
  this->fields.addAiStates = (struct AiState_array *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addAiStates, (int32_t)v12, v8, v9);
  AiStateManager__UpdateFixAiStateList(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0

  if ( (byte_4A5DB76 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
    byte_4A5DB76 = 1;
  }
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1B8880C(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_Int32Enum__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_318384C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *__fastcall AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  AiStateManager_o *v4; // x19
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_object__object__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v4 = this;
  if ( (byte_4A5DB7A & 1) == 0 )
  {
    sub_1B885B0(&Method_AiState_MakeTakeOverAiState__);
    sub_1B885B0(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
    this = (AiStateManager_o *)sub_1B885B0(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    byte_4A5DB7A = 1;
  }
  if ( !aiResetChecker )
    sub_1B8880C(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v5 = Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v6 = *((_QWORD *)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 7);
    if ( !v6 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    if ( !*(_DWORD *)(v7 + 224) )
      j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v8 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v11 = (System_Func_object__object__o *)sub_1B887FC(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_object__object____ctor(v11, 0LL, Method_AiState_MakeTakeOverAiState__, 0LL);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                             v12,
                                                             (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 Value_Int32Enum__int; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5DB77 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
    sub_1B885B0(&Method_BasicHelper_IndexValue_AiState___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
    byte_4A5DB77 = 1;
  }
  Value_Int32Enum__int = BasicHelper__GetValue_Int32Enum__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                           procState,
                           -1,
                           (const MethodInfo_2E6E0C4 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_1B8880C(Value_Int32Enum__int, v6);
  v7 = Value_Int32Enum__int + 1;
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx,
    procState,
    Value_Int32Enum__int + 1,
    (const MethodInfo_3182490 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v8 = BasicHelper__IndexValue_object__48686808(
         (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
         v7,
         0LL,
         (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = (struct AiState_o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._CurAiState_k__BackingField, (int32_t)v8, v9, v10);
  return v8 != 0LL;
}


void __fastcall AiStateManager__SetSaveData(
        AiStateManager_o *this,
        AiStateManager_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_object__object__o *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Object_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5DB7D & 1) == 0 )
  {
    sub_1B885B0(&Method_AiState_MakeAiState___76081432);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_AiState___);
    sub_1B885B0(&System_Func_AiState_SaveData__AiState__TypeInfo);
    byte_4A5DB7D = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v6 = (System_Func_object__object__o *)sub_1B887FC(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_object__object____ctor(v6, 0LL, Method_AiState_MakeAiState___76081432, 0LL);
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                aiStates,
                                                                (System_Func_TSource__TResult__o *)v6,
                                                                (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v8 = System_Linq_Enumerable__ToArray_object_(
           v7,
           (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = (struct AiState_array *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addAiStates, (int32_t)v8, v9, v10);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t current; // w1
  _DWORD *v15; // x27
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int klass_high; // w8
  int *p_monitor; // x8
  int v21; // w8
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5DB7B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__);
    sub_1B885B0(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    sub_1B885B0(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__);
    sub_1B885B0(&AiStateManager___c__DisplayClass20_0_TypeInfo);
    byte_4A5DB7B = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
      sub_1B8880C(IsNullOrEmpty, v8);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
    {
      v9 = sub_1B887FC(AiStateManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v9, 0LL);
      if ( !v9 )
        sub_1B8880C(v10, v11);
      current = (int32_t)v23.fields._current;
      *(_QWORD *)(v9 + 16) = v23.fields._current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), current, v12, v13);
      v15 = *(_DWORD **)(v9 + 16);
      v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v9,
        Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
        0LL);
      v17 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
      if ( !v15 )
        sub_1B8880C(v17, v18);
      if ( v17 )
      {
        klass_high = HIDWORD(v17[1].klass);
        v15[9] = klass_high;
        if ( klass_high <= 0 )
          p_monitor = (int *)&v17[1].monitor;
        else
          p_monitor = v15 + 9;
        v21 = *p_monitor;
        v15[5] = v21;
        if ( v21 <= 0 )
          v15[5] = v15[4];
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct AiState_o *mainAiState; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5DB78 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_AiState__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiState__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiState___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiState__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_AiState__TypeInfo);
    byte_4A5DB78 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v3;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fixAiStateList, (int32_t)v3, v5, v6);
  mainAiState = this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_15;
  if ( mainAiState->fields.aiGroupId >= 1 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    items = IsNullOrEmpty->fields._items;
    v12 = Method_System_Collections_Generic_List_AiState__Add__;
    ++IsNullOrEmpty->fields._version;
    if ( !items )
      goto LABEL_15;
    size = IsNullOrEmpty->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        IsNullOrEmpty,
        (Il2CppObject *)mainAiState,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      IsNullOrEmpty->fields._size = size + 1;
      v14[4] = (Il2CppClass *)mainAiState;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)mainAiState, v8, v9);
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
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_15:
    sub_1B8880C(IsNullOrEmpty, mainAiState);
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
  int32_t v3; // w3

  this->fields._CurAiState_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurAiState_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DB7E & 1) == 0 )
  {
    sub_1B885B0(&AiStateManager___c_TypeInfo);
    byte_4A5DB7E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AiStateManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AiStateManager___c_TypeInfo->static_fields->__9 = (struct AiStateManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)AiStateManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}