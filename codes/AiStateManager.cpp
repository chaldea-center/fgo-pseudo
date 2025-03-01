void __fastcall AiStateManager___ctor(AiStateManager_o *this, AiState_o *aiState, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1

  if ( (byte_4C003E0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__, aiState);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo, v5);
    byte_4C003E0 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2E378(System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v6,
    (const MethodInfo_32FF1C8 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int___ctor__);
  this->fields.dicTimingAiIdx = (struct System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__o *)v6;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.mainAiState = aiState;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mainAiState, (int64_t)aiState, v13, v14, v15, v16, v17, v18);
  AiStateManager__UpdateFixAiStateList(this, v19);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
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
  PartyOrganizationUtility_o *p_CurAiState_k__BackingField; // x19
  int64_t v17; // x20
  struct AiState_o *CurAiState_k__BackingField; // t1
  System_Collections_Generic_List_object__o *temporaryPartyInfo; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  bool v26; // w26
  Il2CppObject *current; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x5
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C003E5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, svtData);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v15);
    byte_4C003E5 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  CurAiState_k__BackingField = this->fields._CurAiState_k__BackingField;
  p_CurAiState_k__BackingField = (PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField;
  v17 = (int64_t)CurAiState_k__BackingField;
  temporaryPartyInfo = (System_Collections_Generic_List_object__o *)p_CurAiState_k__BackingField[-1].fields.temporaryPartyInfo;
  if ( !temporaryPartyInfo )
    sub_1C2E388(0LL, svtData);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    temporaryPartyInfo,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
  do
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__);
    if ( !v26 )
      break;
    current = v38.fields._current;
    p_CurAiState_k__BackingField->klass = (PartyOrganizationUtility_c *)v38.fields._current;
    sub_1C2E0D0(p_CurAiState_k__BackingField, (int64_t)current, v20, v21, v22, v23, v24, v25);
    if ( !aiLogic )
      sub_1C2E388(v28, v29);
  }
  while ( !AiLogic__checkThinking(aiLogic, svtData, procState, logicAi, timingPriority, v30) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
  p_CurAiState_k__BackingField->klass = (PartyOrganizationUtility_c *)v17;
  sub_1C2E0D0(p_CurAiState_k__BackingField, v17, v31, v32, v33, v34, v35, v36);
  return v26;
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C003E8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_AiState_SaveData___, v3);
    sub_1C2E12C(&System_Func_AiState__AiState_SaveData__TypeInfo, v4);
    sub_1C2E12C(&AiStateManager_SaveData_TypeInfo, v5);
    sub_1C2E12C(&Method_AiStateManager___c__GetSaveData_b__22_0__, v6);
    sub_1C2E12C(&AiStateManager___c_TypeInfo, v7);
    byte_4C003E8 = 1;
  }
  v8 = sub_1C2E378(AiStateManager_SaveData_TypeInfo);
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
      _9__22_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_AiState__AiState_SaveData__TypeInfo);
      System_Func_object__object____ctor(_9__22_0, v12, Method_AiStateManager___c__GetSaveData_b__22_0__, 0LL);
      static_fields = AiStateManager___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_AiState__AiState_SaveData__o *)_9__22_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 addAiStates,
                                                                 (System_Func_TSource__TResult__o *)_9__22_0,
                                                                 (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_AiState__AiState_SaveData___);
    v21 = System_Linq_Enumerable__ToArray_object_(
            v20,
            (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_AiState_SaveData___);
    if ( !v8 )
      sub_1C2E388(v21, v22);
    *(_QWORD *)(v8 + 16) = v21;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)v21, v23, v24, v25, v26, v27, v28);
  }
  return (AiStateManager_SaveData_o *)v8;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Func_T__TResult__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Object_array *v24; // x1
  const MethodInfo *v25; // x1

  if ( (byte_4C003E1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AiState_MakeAiState__, aiIdList);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_int__AiState___, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_AiState___, v12);
    sub_1C2E12C(&System_Func_int__AiState__TypeInfo, v13);
    byte_4C003E1 = 1;
  }
  this->fields._CurAiState_k__BackingField = 0LL;
  sub_1C2E0D0(
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
    sub_1C2E388(0LL, v14);
  System_Collections_Generic_Dictionary_Int32Enum__int___Clear(
    dicTimingAiIdx,
    (const MethodInfo_32FFD0C *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Clear__);
  if ( aiIdList )
  {
    v22 = (System_Func_T__TResult__o *)sub_1C2E378(System_Func_int__AiState__TypeInfo);
    System_Func_int__object____ctor(v22, 0LL, Method_AiState_MakeAiState__, 0LL);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)aiIdList,
                                                                 (System_Func_TSource__TResult__o *)v22,
                                                                 (const MethodInfo_30014BC *)Method_System_Linq_Enumerable_Select_int__AiState___);
    v24 = System_Linq_Enumerable__ToArray_object_(
            v23,
            (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_AiState___);
  }
  else
  {
    v24 = 0LL;
  }
  this->fields.addAiStates = (struct AiState_array *)v24;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.addAiStates, (int64_t)v24, v16, v17, v18, v19, v20, v21);
  AiStateManager__UpdateFixAiStateList(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AiStateManager__InitTimingAiIdx(AiStateManager_o *this, int32_t procState, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicTimingAiIdx; // x0

  if ( (byte_4C003E2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__, *(_QWORD *)&procState);
    byte_4C003E2 = 1;
  }
  dicTimingAiIdx = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx;
  if ( !dicTimingAiIdx )
    sub_1C2E388(0LL, *(_QWORD *)&procState);
  System_Collections_Generic_Dictionary_Int32Enum__int___Remove(
    dicTimingAiIdx,
    procState,
    (const MethodInfo_3300F34 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__Remove__);
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
  if ( (byte_4C003E6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AiState_MakeTakeOverAiState__, aiResetChecker);
    sub_1C2E12C(&Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___, v7);
    this = (AiStateManager_o *)sub_1C2E12C(&System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo, v8);
    byte_4C003E6 = 1;
  }
  if ( !aiResetChecker )
    sub_1C2E388(this, aiResetChecker);
  if ( (((__int64 (__fastcall *)(AiResetChecker_o *, Il2CppMethodPointer, const MethodInfo *))aiResetChecker->klass->vtable._4_IsReset.method)(
          aiResetChecker,
          aiResetChecker->klass->vtable._5_get_AiResetTiming.methodPtr,
          method) & 1) != 0 )
  {
    v10 = Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___ + 7);
    if ( !v11 )
    {
      sub_1C80064(Method_System_Array_Empty_BattleWarBoardInfo_TakeOverAiStateData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C80008(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C80008(inited);
    return **(BattleWarBoardInfo_TakeOverAiStateData_array ***)(v13 + 184);
  }
  else
  {
    fixAiStateList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.fixAiStateList;
    v16 = (System_Func_object__object__o *)sub_1C2E378(System_Func_AiState__BattleWarBoardInfo_TakeOverAiStateData__TypeInfo);
    System_Func_object__object____ctor(v16, 0LL, Method_AiState_MakeTakeOverAiState__, 0LL);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 fixAiStateList,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_AiState__BattleWarBoardInfo_TakeOverAiStateData___);
    return (BattleWarBoardInfo_TakeOverAiStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                             v17,
                                                             (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_BattleWarBoardInfo_TakeOverAiStateData___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C003E3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___, *(_QWORD *)&procState);
    sub_1C2E12C(&Method_BasicHelper_IndexValue_AiState___, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__, v6);
    byte_4C003E3 = 1;
  }
  Value_Int32Enum__int = BasicHelper__GetValue_Int32Enum__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTimingAiIdx,
                           procState,
                           -1,
                           (const MethodInfo_2FBF9D4 *)Method_BasicHelper_GetValue_AiLogic_PROC_STATE__int___);
  if ( !this->fields.dicTimingAiIdx )
    sub_1C2E388(Value_Int32Enum__int, v8);
  v9 = Value_Int32Enum__int + 1;
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicTimingAiIdx,
    procState,
    Value_Int32Enum__int + 1,
    (const MethodInfo_32FFB78 *)Method_System_Collections_Generic_Dictionary_AiLogic_PROC_STATE__int__set_Item__);
  v10 = BasicHelper__IndexValue_object__50069800(
          (System_Collections_Generic_List_T__o *)this->fields.fixAiStateList,
          v9,
          0LL,
          (const MethodInfo_2FC0128 *)Method_BasicHelper_IndexValue_AiState___);
  this->fields._CurAiState_k__BackingField = (struct AiState_o *)v10;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._CurAiState_k__BackingField,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C003E9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_AiState_MakeAiState___77753184, sv);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_AiState___, v6);
    sub_1C2E12C(&System_Func_AiState_SaveData__AiState__TypeInfo, v7);
    byte_4C003E9 = 1;
  }
  if ( sv && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.aiStates, 0LL) )
  {
    aiStates = (System_Collections_Generic_IEnumerable_TSource__o *)sv->fields.aiStates;
    v9 = (System_Func_object__object__o *)sub_1C2E378(System_Func_AiState_SaveData__AiState__TypeInfo);
    System_Func_object__object____ctor(v9, 0LL, Method_AiState_MakeAiState___77753184, 0LL);
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 aiStates,
                                                                 (System_Func_TSource__TResult__o *)v9,
                                                                 (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_AiState_SaveData__AiState___);
    v11 = System_Linq_Enumerable__ToArray_object_(
            v10,
            (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_AiState___);
    this->fields.addAiStates = (struct AiState_array *)v11;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.addAiStates, (int64_t)v11, v12, v13, v14, v15, v16, v17);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *current; // x1
  _DWORD *v26; // x27
  System_Func_object__bool__o *v27; // x21
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  int klass_high; // w8
  int *p_monitor; // x8
  int v32; // w8
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C003E7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___, takeOverArray);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_AiState__get_Current__, v9);
    sub_1C2E12C(&System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiState__GetEnumerator__, v11);
    sub_1C2E12C(&Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__, v12);
    sub_1C2E12C(&AiStateManager___c__DisplayClass20_0_TypeInfo, v13);
    byte_4C003E7 = 1;
  }
  memset(&v34, 0, sizeof(v34));
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
      sub_1C2E388(IsNullOrEmpty, v15);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_AiState__GetEnumerator__);
    v34 = v33;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_AiState__MoveNext__) )
    {
      v16 = sub_1C2E378(AiStateManager___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( !v16 )
        sub_1C2E388(v17, v18);
      current = v34.fields._current;
      *(_QWORD *)(v16 + 16) = v34.fields._current;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)current, v19, v20, v21, v22, v23, v24);
      v26 = *(_DWORD **)(v16 + 16);
      v27 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleWarBoardInfo_TakeOverAiStateData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)v16,
        Method_AiStateManager___c__DisplayClass20_0__SetTakeOverAiState_b__0__,
        0LL);
      v28 = System_Linq_Enumerable__FirstOrDefault_object__50289116(
              (System_Collections_Generic_IEnumerable_TSource__o *)takeOverArray,
              (System_Func_TSource__bool__o *)v27,
              (const MethodInfo_2FF59DC *)Method_System_Linq_Enumerable_FirstOrDefault_BattleWarBoardInfo_TakeOverAiStateData___);
      if ( !v26 )
        sub_1C2E388(v28, v29);
      if ( v28 )
      {
        klass_high = HIDWORD(v28[1].klass);
        v26[9] = klass_high;
        if ( klass_high <= 0 )
          p_monitor = (int *)&v28[1].monitor;
        else
          p_monitor = v26 + 9;
        v32 = *p_monitor;
        v26[5] = v32;
        if ( v32 <= 0 )
          v26[5] = v26[4];
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_AiState__Dispose__);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct AiState_o *mainAiState; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4C003E4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiState__AddRange__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiState__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiState___ctor__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_AiState__get_Count__, v5);
    sub_1C2E12C(&System_Collections_Generic_List_AiState__TypeInfo, v6);
    byte_4C003E4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_AiState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_AiState___ctor__);
  this->fields.fixAiStateList = (struct System_Collections_Generic_List_AiState__o *)v7;
  p_fixAiStateList = &this->fields.fixAiStateList;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.fixAiStateList, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  mainAiState = this->fields.mainAiState;
  if ( !mainAiState )
    goto LABEL_15;
  if ( mainAiState->fields.aiGroupId >= 1 )
  {
    IsNullOrEmpty = (System_Collections_Generic_List_object__o *)*p_fixAiStateList;
    if ( !*p_fixAiStateList )
      goto LABEL_15;
    items = IsNullOrEmpty->fields._items;
    v24 = Method_System_Collections_Generic_List_AiState__Add__;
    ++IsNullOrEmpty->fields._version;
    if ( !items )
      goto LABEL_15;
    size = IsNullOrEmpty->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        IsNullOrEmpty,
        (Il2CppObject *)mainAiState,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      IsNullOrEmpty->fields._size = size + 1;
      v26[4] = (Il2CppClass *)mainAiState;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)mainAiState, v16, v17, v18, v19, v20, v21);
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
      (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_AiState__AddRange__);
  }
  if ( !*p_fixAiStateList )
LABEL_15:
    sub_1C2E388(IsNullOrEmpty, mainAiState);
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
  sub_1C2E0D0(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C003EA & 1) == 0 )
  {
    sub_1C2E12C(&AiStateManager___c_TypeInfo, v1);
    byte_4C003EA = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(AiStateManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AiStateManager___c_TypeInfo->static_fields->__9 = (struct AiStateManager___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)AiStateManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, x);
  return BattleWarBoardInfo_TakeOverAiStateData__IsMatch(x, aiState->fields.firstAiGroupId, 0LL);
}