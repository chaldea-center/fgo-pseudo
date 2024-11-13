void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1

  if ( (byte_4B18D4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__, aiState, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v6, v7);
    byte_4B18D4C = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo,
                                                                  aiState,
                                                                  method,
                                                                  v3);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v8,
    (const MethodInfo_322EA54 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainAiState, (int64_t)aiState, v15, v16, v17, v18, v19, v20);
  AiStateManager__UpdateFixAiStateList(this, v21);
}


void __fastcall AiStateManager__AfterMakeAiActTask(AiStateManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  PartyOrganizationUtility_o *p_CurAiState_k__BackingField; // x19
  int64_t v20; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_object__o *temporaryPartyInfo; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool v29; // w26
  Il2CppObject *current; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x5
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4B18D51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, svtData, aiLogic);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v17, v18);
    byte_4B18D51 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField;
  v20 = (int64_t)CurAiState_k__BackingField;
  temporaryPartyInfo = (System_Collections_Generic_List_object__o *)p_CurAiState_k__BackingField[-1].fields.temporaryPartyInfo;
  if ( !temporaryPartyInfo )
    sub_1BCAA3C(0LL, svtData);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    temporaryPartyInfo,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  do
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    if ( !v29 )
      break;
    current = v41.fields._current;
    p_CurAiState_k__BackingField->klass = (PartyOrganizationUtility_c *)v41.fields._current;
    sub_1BCA784(p_CurAiState_k__BackingField, (int64_t)current, v23, v24, v25, v26, v27, v28);
    if ( !aiLogic )
      sub_1BCAA3C(v31, v32);
  }
  while ( !AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v33) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (PartyOrganizationUtility_c *)v20;
  sub_1BCA784(p_CurAiState_k__BackingField, v20, v34, v35, v36, v37, v38, v39);
  return v29;
}


AiStateManager_SaveData_o *__fastcall AiStateManager__GetSaveData(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *addAiStates; // x20
  AiStateManager___c_c *v20; // x0
  System_Func_object__object__o *_9__22_0; // x21
  Il2CppObject *v22; // x22
  struct AiStateManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B18D54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v5, v6);
    sub_1BCA7E0(&System_Func_AiState__AiState_SaveData__TypeInfo, v7, v8);
    sub_1BCA7E0(&AiStateManager_SaveData_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_AiStateManager___c__GetSaveData_b__22_0__, v11, v12);
    sub_1BCA7E0(&AiStateManager___c_TypeInfo, v13, v14);
    byte_4B18D54 = 1;
  }
  v15 = sub_1BCAA2C(AiStateManager_SaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.addAiStates, 0LL) )
  {
    addAiStates = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.addAiStates;
    v20 = AiStateManager___c_TypeInfo;
    if ( !AiStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AiStateManager___c_TypeInfo, v16);
      v20 = AiStateManager___c_TypeInfo;
    }
    _9__22_0 = (System_Func_object__object__o *)v20->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20, v16);
        v20 = AiStateManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__22_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_AiState__AiState_SaveData__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
      System_Func_object__object____ctor(_9__22_0, v22, Method_AiStateManager___c__GetSaveData_b__22_0__, 0LL);
      static_fields = AiStateManager___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v31 = System_Linq_Enumerable__ToArray_object_(
            v30,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v15 )
      sub_1BCAA3C(v31, v32);
    *(_QWORD *)(v15 + 16) = v31;
    sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)v31, v33, v34, v35, v36, v37, v38);
  }
  return (AiStateManager_SaveData_o *)v15;
}


void __fastcall AiStateManager__InitAiStates(
        AiStateManager_o *this,
        System_Collections_Generic_List_int__o *aiIdList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  __int64 v22; // x3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Func_T__TResult__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Object_array *v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_4B18D4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AiState_MakeAiState__, aiIdList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__AiState___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AiState___, v14, v15);
    sub_1BCA7E0(&System_Func_int__AiState__TypeInfo, v16, v17);
    byte_4B18D4D = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1BCAA3C(0LL, v18);
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_322F598 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v27 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__AiState__TypeInfo, v20, v21, v22);
    System_Func_int__object____ctor(v27, 0LL, Method_AiState_MakeAiState__, 0LL);
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v27,
                                                                 (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v29 = System_Linq_Enumerable__ToArray_object_(
            v28,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v29 = 0LL;
  }
  this->fields.addAiStates = (struct AiState_array *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addAiStates, (int64_t)v29, v21, v22, v23, v24, v25, v26);
  AiStateManager__UpdateFixAiStateList(this, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0

  if ( (byte_4B18D4E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__,
      *(_QWORD *)&procState,
      method);
    byte_4B18D4E = 1;
  }
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1BCAA3C(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_Int32Enum__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_32307C0 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
}


BattleWarBoardInfo_TakeOverAiStateData_array *__fastcall AiStateManager__MakeTakeOverAiStateArray(
        AiStateManager_o *this,
        AiResetChecker_o *aiResetChecker,
        const MethodInfo *method)
{
  AiStateManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  long double inited; // q0
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *fixAiStateList; // x19
  System_Func_object__object__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  v4 = this;
  if ( (byte_4B18D52 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AiState_MakeTakeOverAiState__, aiResetChecker, method);
    sub_1BCA7E0(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v9, v10);
    this = (AiStateManager_o *)sub_1BCA7E0(
                                 &System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo,
                                 v11,
                                 v12);
    byte_4B18D52 = 1;
  }
  if ( !aiResetChecker )
    sub_1BCAA3C(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v17 = Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v18 = *((_QWORD *)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 7);
    if ( !v18 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v13);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19, v13);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C1C6BC(inited);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v20 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v23 = (System_Func_object__object__o *)sub_1BCAA2C(
                                             System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo,
                                             v13,
                                             v14,
                                             v15);
    System_Func_object__object____ctor(v23, 0LL, Method_AiState_MakeTakeOverAiState__, 0LL);
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v23,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                             v24,
                                                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AiStateManager__NextAiState(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 Value_Int32Enum__int; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  Il2CppObject *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B18D4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, *(_QWORD *)&procState, method);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_AiState___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v7, v8);
    byte_4B18D4F = 1;
  }
  Value_Int32Enum__int = BasicHelper__GetValue_Int32Enum__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                           procState,
                           -1,
                           (const MethodInfo_2F01088 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_1BCAA3C(Value_Int32Enum__int, v10);
  v11 = Value_Int32Enum__int + 1;
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx,
    procState,
    Value_Int32Enum__int + 1,
    (const MethodInfo_322F404 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v12 = BasicHelper__IndexValue_object__49289180(
          (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
          v11,
          0LL,
          (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = (struct AiState_o *)v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return v12 != 0LL;
}


void __fastcall AiStateManager__SetSaveData(
        AiStateManager_o *this,
        AiStateManager_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *aiStates; // x20
  System_Func_object__object__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18D55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AiState_MakeAiState___76832664, sv, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_AiState___, v7, v8);
    sub_1BCA7E0(&System_Func_AiState_SaveData__AiState__TypeInfo, v9, v10);
    byte_4B18D55 = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v14 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_AiState_SaveData__AiState__TypeInfo, sv, v11, v12);
    System_Func_object__object____ctor(v14, 0LL, Method_AiState_MakeAiState___76832664, 0LL);
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v14,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v16 = System_Linq_Enumerable__ToArray_object_(
            v15,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = (struct AiState_array *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addAiStates, (int64_t)v16, v17, v18, v19, v20, v21, v22);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_AiState__o *IsNullOrEmpty; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *current; // x1
  _DWORD *v36; // x27
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_object__bool__o *v40; // x21
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  int klass_high; // w8
  int *p_monitor; // x8
  int v45; // w8
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B18D53 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___,
      takeOverArray,
      aiResetChecker);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v11, v12);
    sub_1BCA7E0(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v17, v18);
    sub_1BCA7E0(&AiStateManager___c__DisplayClass20_0_TypeInfo, v19, v20);
    byte_4B18D53 = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
      sub_1BCAA3C(IsNullOrEmpty, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v47 = v46;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
    {
      v26 = sub_1BCAA2C(AiStateManager___c__DisplayClass20_0_TypeInfo, v23, v24, v25);
      System_Object___ctor((Il2CppObject *)v26, 0LL);
      if ( !v26 )
        sub_1BCAA3C(v27, v28);
      current = v47.fields._current;
      *(_QWORD *)(v26 + 16) = v47.fields._current;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)current, v29, v30, v31, v32, v33, v34);
      v36 = *(_DWORD **)(v26 + 16);
      v40 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo,
                                             v37,
                                             v38,
                                             v39);
      System_Func_object__bool____ctor(
        v40,
        (Il2CppObject *)v26,
        Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
        0LL);
      v41 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
              (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
              (System_Func_TSource__bool__o *)v40,
              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
      if ( !v36 )
        sub_1BCAA3C(v41, v42);
      if ( v41 )
      {
        klass_high = HIDWORD(v41[1].klass);
        v36[9] = klass_high;
        if ( klass_high <= 0 )
          p_monitor = (int *)&v41[1].monitor;
        else
          p_monitor = v36 + 9;
        v45 = *p_monitor;
        v36[5] = v45;
        if ( v45 <= 0 )
          v36[5] = v36[4];
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  }
}


void __fastcall AiStateManager__UpdateFixAiStateList(AiStateManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x21
  struct System_Collections_Generic_List_AiState__o **p_fixAiStateList; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct AiState_o *mainAiState; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8

  if ( (byte_4B18D50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiState__AddRange__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiState__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiState___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AiState__get_Count__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_AiState__TypeInfo, v11, v12);
    byte_4B18D50 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AiState__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v13;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fixAiStateList, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  mainAiState = this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_15;
  if ( mainAiState->fields.aiGroupId >= 1 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    items = IsNullOrEmpty->fields._items;
    v30 = Method_System_Collections_Generic_List_AiState__Add__;
    ++IsNullOrEmpty->fields._version;
    if ( !items )
      goto LABEL_15;
    size = IsNullOrEmpty->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        IsNullOrEmpty,
        (Il2CppObject *)mainAiState,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      IsNullOrEmpty->fields._size = size + 1;
      v32[4] = (Il2CppClass *)mainAiState;
      sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)mainAiState, v22, v23, v24, v25, v26, v27);
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
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_15:
    sub_1BCAA3C(IsNullOrEmpty, mainAiState);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurAiState_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18D56 & 1) == 0 )
  {
    sub_1BCA7E0(&AiStateManager___c_TypeInfo, v1, v2);
    byte_4B18D56 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AiStateManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AiStateManager___c_TypeInfo->static_fields->__9 = (struct AiStateManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)AiStateManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}