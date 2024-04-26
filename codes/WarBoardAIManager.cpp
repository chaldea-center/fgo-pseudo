void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v9; // x19
  struct WarBoardAIManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x19
  struct WarBoardAIManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v25; // x19
  struct WarBoardAIManager_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_434F9E5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9E5 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v1,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B70764(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v9,
    (const MethodInfo_2F97ED0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  v10 = WarBoardAIManager_TypeInfo->static_fields;
  v10->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->dicUniqueIndexPiece,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v18 = WarBoardAIManager_TypeInfo->static_fields;
  v18->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->dicIndexSquare,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v25,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v26 = WarBoardAIManager_TypeInfo->static_fields;
  v26->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v25;
  sub_B70630(
    (BattleServantConfConponent_o *)&v26->dicIndexItem,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_434F9E4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardAI___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardAI__TypeInfo);
    byte_434F9E4 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x19
  int v7; // w8
  unsigned int v8; // w20
  __int64 v9; // x0

  if ( (byte_434F9D6 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_434F9D6 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v5 )
    goto LABEL_12;
  v6 = *(_QWORD *)(v5 + 48);
  if ( !v6 )
    goto LABEL_12;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v7 )
      {
        v9 = sub_B70798(Instance);
        sub_B70738(v9, 0LL);
      }
      Instance = *(WebViewManager_o **)(v6 + 8LL * (int)v8 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v7 = *(_DWORD *)(v6 + 24);
      if ( (int)++v8 >= v7 )
        return;
    }
LABEL_12:
    sub_B7076C(Instance, v4);
  }
}


void __fastcall WarBoardAIManager__AddReinforcementsAI(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIManager___c__DisplayClass28_0_o *v11; // x24
  WarBoardAIRoute_o *fields; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x22
  WarBoardData_SquareRangeSearch_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_434F9E2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_B70694(&Method_System_Func_WarBoardAI__bool___ctor__);
    sub_B70694(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_B70694(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__);
    sub_B70694(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
    byte_434F9E2 = 1;
  }
  v11 = (WarBoardAIManager___c__DisplayClass28_0_o *)sub_B70764(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass28_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  v11->fields.forceId = forceId;
  v11->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v16 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
  {
    fields = (WarBoardAIRoute_o *)v16->fields;
    if ( fields )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(fields, aiId, pieceIndex, v17);
      return;
    }
LABEL_8:
    sub_B7076C(fields, v13);
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  WarBoardAI_o *v5; // x21
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0

  if ( (byte_434F9D5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardAI__Add__);
    sub_B70694(&WarBoardAI_TypeInfo);
    byte_434F9D5 = 1;
  }
  v5 = (WarBoardAI_o *)sub_B70764(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v5, npc, v6);
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList )
    sub_B7076C(0LL, v7);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warBoardAIList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v5,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardAI__Add__);
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_434F9DA & 1) == 0 )
  {
    sub_B70694(&WarBoardAIManager__Execute_d__12_TypeInfo);
    byte_434F9DA = 1;
  }
  v7 = sub_B70764(WarBoardAIManager__Execute_d__12_TypeInfo);
  WarBoardAIManager__Execute_d__12___ctor((WarBoardAIManager__Execute_d__12_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_B7076C(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  WarBoardAIManager_c *v1; // x0

  if ( (byte_434F9DC & 1) == 0 )
  {
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9DC = 1;
  }
  v1 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v1 = WarBoardAIManager_TypeInfo;
  }
  return v1->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetEnemyPieceSquareIndex(
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F9DD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__);
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9DD = 1;
  }
  value = 0LL;
  v3 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v3->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_B7076C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
  {
    return (WarBoardPieceData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


WarBoardItemData_o *__fastcall WarBoardAIManager__GetItem(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicIndexItem; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F9E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__);
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9E0 = 1;
  }
  value = 0LL;
  v3 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v3->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_B7076C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
  {
    return (WarBoardItemData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetPieceUnique(uint32_t uniqueIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *dicUniqueIndexPiece; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F9DE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__);
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9DE = 1;
  }
  value = 0LL;
  v3 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)v3->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_B7076C(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_2F9A7A8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
  {
    return (WarBoardPieceData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


WarBoardSquareData_o *__fastcall WarBoardAIManager__GetSquare(int32_t squareIndex, const MethodInfo *method)
{
  WarBoardAIManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicIndexSquare; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F9DF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__);
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9DF = 1;
  }
  value = 0LL;
  v3 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v3 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v3->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_B7076C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
  {
    return (WarBoardSquareData_o *)value;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall WarBoardAIManager__Initialize(
        WarBoardAIManager_o *this,
        System_Collections_Generic_List_WarBoardStageNpcEntity__o *npcList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434F9D4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardAI__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
    byte_434F9D4 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)warBoardAIList,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_WarBoardAI__Clear__),
        !npcList) )
  {
    sub_B7076C(warBoardAIList, npcList);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)npcList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields.current )
      sub_B7076C(v6, v7);
    if ( HIDWORD(v9.fields.current[1].klass) || LODWORD(v9.fields.current[1].monitor) )
      WarBoardAIManager__CreateAI(this, (WarBoardStageNpcEntity_o *)v9.fields.current, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B7076C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_434F9E1 & 1) == 0 )
  {
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9E1 = 1;
  }
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
  }
  return WarBoardAIManager__GetEnemyPieceSquareIndex(squareIndex, method) != 0LL;
}


bool __fastcall WarBoardAIManager__IsEnemyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B7076C(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B7076C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField
      && one->fields._index_k__BackingField == two->fields._index_k__BackingField;
}


void __fastcall WarBoardAIManager__Pause(WarBoardAIManager_o *this, const MethodInfo *method)
{
  this->fields.isPause = 1;
}


void __fastcall WarBoardAIManager__Resume(WarBoardAIManager_o *this, const MethodInfo *method)
{
  this->fields.isPause = 0;
}


void __fastcall WarBoardAIManager__StartAIPhase(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardAIManager___c__DisplayClass9_0_o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x22
  WarBoardData_SquareRangeSearch_o *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_434F9D8 & 1) == 0 )
  {
    sub_B70694(&AStarSearch_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_B70694(&Method_System_Func_WarBoardAI__bool___ctor__);
    sub_B70694(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_B70694(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__);
    sub_B70694(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
    byte_434F9D8 = 1;
  }
  v7 = (WarBoardAIManager___c__DisplayClass9_0_o *)sub_B70764(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass9_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.forceId = forceId;
  v7->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v12 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v12 )
  {
    this->fields.exec = 1;
    LOBYTE(v12[1].monitor) = 0;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, v7->fields.forceId, v7->fields.groupId, v13);
  }
}


void __fastcall WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardAIManager___c__DisplayClass11_0_o *v7; // x20
  WarBoardAIRoute_o *m_messageTypeId; // x0
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v12; // x0
  WarBoardAIManager_c *v13; // x0
  struct WarBoardStageNpcEntity_o *npcData; // x8
  struct System_Int64_array *servants; // x24
  int max_length; // w8
  unsigned int v17; // w25
  int64_t v18; // x21
  WarBoardAIManager_c *v19; // x0
  WarBoardAIManager_c *v20; // x0
  WarBoardAIManager_c *v21; // x0
  struct WarBoardStageNpcEntity_o *v22; // x8
  struct System_Int64_array *svtEquipIds; // x24
  int v24; // w8
  unsigned int v25; // w25
  int64_t v26; // x21
  WarBoardAIManager_c *v27; // x0
  const MethodInfo *v28; // x3
  struct WarBoardStageNpcEntity_o *v29; // x8
  struct System_Int32_array *ratingBaseIds; // x23
  int v31; // w8
  unsigned int v32; // w24
  __int64 v33; // x21
  struct System_Collections_IEnumerator_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0

  if ( (byte_434F9D9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
    sub_B70694(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
    sub_B70694(&Method_System_Func_WarBoardAI__bool___ctor__);
    sub_B70694(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__);
    sub_B70694(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
    sub_B70694(&WarBoardAIManager_TypeInfo);
    byte_434F9D9 = 1;
  }
  v7 = (WarBoardAIManager___c__DisplayClass11_0_o *)sub_B70764(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass11_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_65;
  v7->fields.forceId = forceId;
  v7->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v12 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_1CC752C *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v12 )
    return;
  this->fields.isPause = 0;
  m_messageTypeId = (WarBoardAIRoute_o *)v12->fields.m_messageTypeId;
  if ( !m_messageTypeId )
    goto LABEL_65;
  WarBoardAIRoute__Clear(m_messageTypeId, v9);
  v13 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v13 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v13->static_fields->dicUniqueIndexPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
    (const MethodInfo_2F98C60 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !m_messageTypeId )
    goto LABEL_65;
  npcData = m_messageTypeId[1].fields.npcData;
  if ( !npcData )
    goto LABEL_65;
  servants = npcData->fields.servants;
  if ( !servants )
    goto LABEL_65;
  max_length = servants->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( v17 < max_length )
    {
      v18 = servants->m_Items[v17];
      if ( !v18 )
        goto LABEL_65;
      if ( !*(_BYTE *)(v18 + 60) )
      {
        v19 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v19 = WarBoardAIManager_TypeInfo;
        }
        m_messageTypeId = (WarBoardAIRoute_o *)v19->static_fields->dicUniqueIndexPiece;
        if ( !m_messageTypeId )
          goto LABEL_65;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
          *(_DWORD *)(v18 + 44),
          (WarBoardAIRoute_PutSquareTarget_o *)v18,
          (const MethodInfo_2F98A84 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v18 + 20) != v7->fields.forceId )
        {
          v20 = WarBoardAIManager_TypeInfo;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v20 = WarBoardAIManager_TypeInfo;
          }
          m_messageTypeId = (WarBoardAIRoute_o *)v20->static_fields->dicSquareIndexEnemyPiece;
          if ( !m_messageTypeId )
            goto LABEL_65;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
            *(_DWORD *)(v18 + 64),
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
            (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      max_length = servants->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_30;
    }
LABEL_66:
    v41 = sub_B70798(m_messageTypeId);
    sub_B70738(v41, 0LL);
  }
LABEL_30:
  v21 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v21 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v21->static_fields->dicIndexSquare;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !m_messageTypeId )
    goto LABEL_65;
  v22 = m_messageTypeId[1].fields.npcData;
  if ( !v22 )
    goto LABEL_65;
  svtEquipIds = v22->fields.svtEquipIds;
  if ( !svtEquipIds )
    goto LABEL_65;
  v24 = svtEquipIds->max_length;
  if ( v24 >= 1 )
  {
    v25 = 0;
    while ( v25 < v24 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v26 = svtEquipIds->m_Items[v25];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.buckets;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v26 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v26,
        (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v24 = svtEquipIds->max_length;
      if ( (int)++v25 >= v24 )
        goto LABEL_46;
    }
    goto LABEL_66;
  }
LABEL_46:
  v27 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v27 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v27->static_fields->dicIndexItem;
  if ( !m_messageTypeId
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
          (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v29 = m_messageTypeId[1].fields.npcData) == 0LL
    || (ratingBaseIds = v29->fields.ratingBaseIds) == 0LL )
  {
LABEL_65:
    sub_B7076C(m_messageTypeId, v9);
  }
  v31 = ratingBaseIds->max_length;
  if ( v31 >= 1 )
  {
    v32 = 0;
    while ( v32 < v31 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v33 = *(_QWORD *)&ratingBaseIds->m_Items[2 * v32 + 1];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v33 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.entries;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v33 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v33,
        (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v31 = ratingBaseIds->max_length;
      if ( (int)++v32 >= v31 )
        goto LABEL_62;
    }
    goto LABEL_66;
  }
LABEL_62:
  if ( !this->fields.executeTask )
  {
    v34 = WarBoardAIManager__Execute(this, v7->fields.forceId, v7->fields.groupId, v28);
    this->fields.executeTask = v34;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.executeTask,
      (System_Int32_array **)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v4; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_434F9DB & 1) == 0 )
  {
    sub_B70694(&WarBoardManager_TypeInfo);
    byte_434F9DB = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (BattleServantConfConponent_o *)&this->fields.executeTask;
  v4 = executeTask;
  if ( executeTask )
  {
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !WarBoardManager__IEnumeratorExecute(v4, 0LL) )
    {
      p_executeTask->klass = 0LL;
      sub_B70630(p_executeTask, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


void __fastcall WarBoardAIManager__UpdateAiId(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  WarBoardAIManager___c__DisplayClass29_0_o *v11; // x24
  WarBoardAIRoute_o *fields; // x0
  __int64 v13; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x22
  WarBoardData_SquareRangeSearch_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_434F9E3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_B70694(&Method_System_Func_WarBoardAI__bool___ctor__);
    sub_B70694(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_B70694(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__);
    sub_B70694(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
    byte_434F9E3 = 1;
  }
  v11 = (WarBoardAIManager___c__DisplayClass29_0_o *)sub_B70764(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass29_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  v11->fields.forceId = forceId;
  v11->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v16 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v16 )
  {
    fields = (WarBoardAIRoute_o *)v16->fields;
    if ( fields )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(fields, aiId, pieceIndex, v17);
      return;
    }
LABEL_8:
    sub_B7076C(fields, v13);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_434F9D7 & 1) == 0 )
  {
    sub_B70694(&WarBoardAIManager__Wait_d__8_TypeInfo);
    byte_434F9D7 = 1;
  }
  v3 = sub_B70764(WarBoardAIManager__Wait_d__8_TypeInfo);
  WarBoardAIManager__Wait_d__8___ctor((WarBoardAIManager__Wait_d__8_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall WarBoardAIManager___Wait_b__8_0(WarBoardAIManager_o *this, const MethodInfo *method)
{
  return this->fields.isPause && this->fields.exec;
}


void __fastcall WarBoardAIManager__Execute_d__12___ctor(
        WarBoardAIManager__Execute_d__12_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAIManager__Execute_d__12__MoveNext(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardAIManager__Execute_d__12_o *v8; // x19
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *_8__1; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x21
  Il2CppObject *v20; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x23
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct WarBoardAI_o **p_ai_5__2; // x21
  BattleServantConfConponent_o *p_enumeratorChild_5__7; // x21
  struct WarBoardAIManager___c__DisplayClass12_0_o *v31; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v32; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  WarBoardAIManager___c_c *v50; // x0
  struct WarBoardAIManager___c_StaticFields *v51; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_3; // x22
  Il2CppObject *v53; // x23
  struct WarBoardAIManager___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  WarBoardAIManager___c_c *v68; // x0
  struct WarBoardAIManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v71; // x21
  struct WarBoardAIManager___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_WaitWhile_o *v79; // x21
  BattleServantConfConponent_o *v80; // x19
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  bool result; // w0
  struct System_Collections_IEnumerator_o *v88; // x21
  System_Collections_IEnumerator_c *v89; // x8
  unsigned __int64 v90; // x10
  System_Collections_IEnumerator_c **v91; // x11
  __int64 v92; // x0
  __int64 v93; // x0
  struct System_Collections_IEnumerator_o *v94; // x22
  System_Collections_IEnumerator_c *v95; // x8
  WarBoardAIManager__Execute_d__12_o *v96; // x21
  unsigned __int64 v97; // x10
  System_Collections_IEnumerator_c **v98; // x11
  __int64 v99; // x0
  System_Int32_array **v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_IEnumerator_o *v107; // x22
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  float realtimeSinceStartup; // s0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  int v122; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v125; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_T__o *v128; // x21
  WarBoardAIManager___c_c *v129; // x0
  struct WarBoardAIManager___c_StaticFields *v130; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_4; // x22
  Il2CppObject *v132; // x23
  struct WarBoardAIManager___c_StaticFields *v133; // x0
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v146; // x8
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  struct System_Collections_IEnumerator_o *v153; // x21
  System_Collections_IEnumerator_c *v154; // x8
  unsigned __int64 v155; // x10
  System_Collections_IEnumerator_c **v156; // x11
  __int64 v157; // x0
  float v158; // s0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  WarBoardAIManager__Execute_d__12_o *v172; // x0
  const MethodInfo *v173; // x1

  v8 = this;
  if ( (byte_434F90D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_WarBoardPieceData___ctor__);
    sub_B70694(&System_Action_WarBoardPieceData__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&DefenseAreaData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B70694(&Method_System_Func_WarBoardAI__bool___ctor__);
    sub_B70694(&System_Func_WarBoardAI__bool__TypeInfo);
    sub_B70694(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_WarBoardAIManager___c__Execute_b__12_1__);
    sub_B70694(&Method_WarBoardAIManager___c__Execute_b__12_3__);
    sub_B70694(&Method_WarBoardAIManager___c__Execute_b__12_4__);
    sub_B70694(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__);
    sub_B70694(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__);
    sub_B70694(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
    sub_B70694(&WarBoardAIManager___c_TypeInfo);
    sub_B70694(&UnityEngine_WaitWhile_TypeInfo);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_B70694(&WarBoardManager_TypeInfo);
    byte_434F90D = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_B70764(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v10, 0LL);
      v8->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v10;
      sub_B70630(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_132;
      _8__1->fields.forceId = v8->fields.forceId;
      v18 = v8->fields.__8__1;
      if ( !v18 )
        goto LABEL_132;
      v18->fields.groupId = v8->fields.groupId;
      if ( !_4__this )
        goto LABEL_132;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v20 = (Il2CppObject *)v8->fields.__8__1;
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v21,
        v20,
        Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__,
        (const MethodInfo_29AC578 *)Method_System_Func_WarBoardAI__bool___ctor__);
      v22 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     warBoardAIList,
                                     (System_Func_TSource__bool__o *)v21,
                                     (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v8->fields._ai_5__2 = (struct WarBoardAI_o *)v22;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._ai_5__2, v22, v23, v24, v25, v26, v27, v28);
      if ( !v8->fields._ai_5__2 )
        return 0;
      goto LABEL_111;
    case 1:
      v31 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v31 || !_4__this )
        goto LABEL_132;
      WarBoardAIManager__StartThink(_4__this, v31->fields.forceId, v31->fields.groupId, 0LL);
      goto LABEL_21;
    case 2:
      p_enumeratorChild_5__7 = (BattleServantConfConponent_o *)&v8->fields._enumeratorChild_5__7;
      v8->fields.__1__state = -1;
      goto LABEL_66;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_75;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_132;
      if ( !_4__this->fields.exec )
        return 0;
      p_ai_5__2 = &v8->fields._ai_5__2;
      break;
    case 5:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_132;
      goto LABEL_95;
    default:
      return 0;
  }
  while ( 2 )
  {
    if ( !*p_ai_5__2 )
      goto LABEL_132;
    if ( !(*p_ai_5__2)->fields.isEndPhase )
    {
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !this )
            goto LABEL_132;
          this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
          if ( !this )
            goto LABEL_132;
          this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__IsLose((WarBoardData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return 0;
          if ( *p_ai_5__2 )
          {
            if ( !(*p_ai_5__2)->fields.isEndRoute )
            {
              v8->fields.__2__current = 0LL;
              p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B70630(p__2__current, 0LL, v140, v141, v142, v143, v144, v145);
              v122 = 5;
              goto LABEL_72;
            }
            v146 = v8->fields.__8__1;
            if ( v146 )
            {
              WarBoardAIManager__StartThink(_4__this, v146->fields.forceId, v146->fields.groupId, 0LL);
              goto LABEL_110;
            }
          }
        }
      }
LABEL_132:
      sub_B7076C(this, method);
    }
    do
    {
LABEL_110:
      v8->fields._actPieces_5__4 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._actPieces_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._exe_5__5 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._exe_5__5, 0LL, v147, v148, v149, v150, v151, v152);
LABEL_111:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v68 = WarBoardAIManager___c_TypeInfo;
        if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v68 = WarBoardAIManager___c_TypeInfo;
        }
        static_fields = v68->static_fields;
        _9__12_1 = static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v68);
            static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          }
          v71 = (Il2CppObject *)static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            _9__12_1,
            v71,
            Method_WarBoardAIManager___c__Execute_b__12_1__,
            (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
          v72 = WarBoardAIManager___c_TypeInfo->static_fields;
          v72->__9__12_1 = _9__12_1;
          sub_B70630(
            (BattleServantConfConponent_o *)&v72->__9__12_1,
            (System_Int32_array **)_9__12_1,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
        }
        v79 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v79, _9__12_1, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v79;
        v80 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B70630(v80, (System_Int32_array **)v79, v81, v82, v83, v84, v85, v86);
        result = 1;
        *(_DWORD *)&v80[-1].fields.isOpenAfter = 1;
        return result;
      }
LABEL_21:
      v8->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
      if ( !this )
        goto LABEL_132;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v32 = v8->fields.__8__1;
      if ( !v32 )
        goto LABEL_132;
      _9__2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v32->fields.__9__2;
      v34 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__2,
          (Il2CppObject *)v32,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          (const MethodInfo_29AC578 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v32->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_B70630(
          (BattleServantConfConponent_o *)&v32->fields.__9__2,
          (System_Int32_array **)_9__2,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
      v41 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v34,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v42 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                     v41,
                                     (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v8->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v42;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._actPieces_5__4, v42, v43, v44, v45, v46, v47, v48);
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      v50 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v50 = WarBoardAIManager___c_TypeInfo;
      }
      v51 = v50->static_fields;
      _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v51->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v50);
          v51 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v53 = (Il2CppObject *)v51->__9;
        _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_3,
          v53,
          Method_WarBoardAIManager___c__Execute_b__12_3__,
          (const MethodInfo_264C148 *)Method_System_Action_WarBoardPieceData___ctor__);
        v54 = WarBoardAIManager___c_TypeInfo->static_fields;
        v54->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_B70630(
          (BattleServantConfConponent_o *)&v54->__9__12_3,
          (System_Int32_array **)_9__12_3,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( (BYTE3(DefenseAreaData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefenseAreaData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      }
      DefenseAreaData__ClearCache(0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
      if ( !this )
        goto LABEL_132;
      v61 = (System_Int32_array **)WarBoardAI__Think((WarBoardAI_o *)this, 0LL);
      v8->fields._exe_5__5 = (struct System_Collections_IEnumerator_o *)v61;
      sub_B70630((BattleServantConfConponent_o *)&v8->fields._exe_5__5, v61, v62, v63, v64, v65, v66, v67);
      v8->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_75:
        exe_5__5 = v8->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_132;
        klass = exe_5__5->klass;
        if ( *(_WORD *)&exe_5__5->klass->_2.bitflags1 )
        {
          v125 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v125;
            p_offset += 4;
            if ( v125 >= *(unsigned __int16 *)&exe_5__5->klass->_2.bitflags1 )
              goto LABEL_80;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_80:
          p_method = sub_B08590(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_83;
        v88 = v8->fields._exe_5__5;
        if ( !v88 )
          goto LABEL_132;
        v89 = v88->klass;
        if ( *(_WORD *)&v88->klass->_2.bitflags1 )
        {
          v90 = 0LL;
          v91 = (System_Collections_IEnumerator_c **)&v89->_1.interfaceOffsets->offset;
          while ( *(v91 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v90;
            v91 += 2;
            if ( v90 >= *(unsigned __int16 *)&v88->klass->_2.bitflags1 )
              goto LABEL_55;
          }
          v92 = (__int64)&v89->vtable[*(_DWORD *)v91 + 1].method;
        }
        else
        {
LABEL_55:
          v92 = sub_B08590(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v93 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v92)(
                v88,
                *(_QWORD *)(v92 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_B70754(v93, System_Collections_IEnumerator_TypeInfo);
        v94 = v8->fields._exe_5__5;
        if ( !v94 )
          goto LABEL_132;
        v95 = v94->klass;
        v96 = this;
        if ( *(_WORD *)&v94->klass->_2.bitflags1 )
        {
          v97 = 0LL;
          v98 = (System_Collections_IEnumerator_c **)&v95->_1.interfaceOffsets->offset;
          while ( *(v98 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v97;
            v98 += 2;
            if ( v97 >= *(unsigned __int16 *)&v94->klass->_2.bitflags1 )
              goto LABEL_62;
          }
          v99 = (__int64)&v95->vtable[*(_DWORD *)v98 + 1].method;
        }
        else
        {
LABEL_62:
          v99 = sub_B08590(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v99)(
                                                       v94,
                                                       *(_QWORD *)(v99 + 8));
        if ( v96 )
        {
          v100 = (System_Int32_array **)sub_B70754(this, System_Collections_IEnumerator_TypeInfo);
          v8->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)v100;
          p_enumeratorChild_5__7 = (BattleServantConfConponent_o *)&v8->fields._enumeratorChild_5__7;
          sub_B70630(
            (BattleServantConfConponent_o *)&v8->fields._enumeratorChild_5__7,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
          while ( 1 )
          {
LABEL_66:
            v107 = (System_Collections_IEnumerator_o *)p_enumeratorChild_5__7->klass;
            if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            }
            if ( !WarBoardManager__IEnumeratorExecute(v107, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v8->fields.__2__current = 0LL;
              p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              p__2__current->fields.movetime = realtimeSinceStartup;
              sub_B70630(p__2__current, 0LL, v116, v117, v118, v119, v120, v121);
              v122 = 2;
              goto LABEL_72;
            }
          }
          p_enumeratorChild_5__7->klass = 0LL;
          sub_B70630(p_enumeratorChild_5__7, 0LL, v108, v109, v110, v111, v112, v113);
          goto LABEL_74;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_74:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
        {
          v158 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v8->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          p__2__current->fields.movetime = v158;
          sub_B70630(p__2__current, 0LL, v159, v160, v161, v162, v163, v164);
          v122 = 3;
          goto LABEL_72;
        }
      }
      v153 = v8->fields._exe_5__5;
      if ( !v153 )
        goto LABEL_132;
      v154 = v153->klass;
      if ( *(_WORD *)&v153->klass->_2.bitflags1 )
      {
        v155 = 0LL;
        v156 = (System_Collections_IEnumerator_c **)&v154->_1.interfaceOffsets->offset;
        while ( *(v156 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v155;
          v156 += 2;
          if ( v155 >= *(unsigned __int16 *)&v153->klass->_2.bitflags1 )
            goto LABEL_120;
        }
        v157 = (__int64)&v154->vtable[*(_DWORD *)v156 + 1].method;
      }
      else
      {
LABEL_120:
        v157 = sub_B08590(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v157)(
                                                     v153,
                                                     *(_QWORD *)(v157 + 8));
      if ( !this )
        goto LABEL_132;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        v172 = (WarBoardAIManager__Execute_d__12_o *)sub_B70A60(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v172,
                                  v173);
      }
      v8->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0(this);
LABEL_83:
      v128 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      v129 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v129 = WarBoardAIManager___c_TypeInfo;
      }
      v130 = v129->static_fields;
      _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v130->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v129);
          v130 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v132 = (Il2CppObject *)v130->__9;
        _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_4,
          v132,
          Method_WarBoardAIManager___c__Execute_b__12_4__,
          (const MethodInfo_264C148 *)Method_System_Action_WarBoardPieceData___ctor__);
        v133 = WarBoardAIManager___c_TypeInfo->static_fields;
        v133->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_B70630(
          (BattleServantConfConponent_o *)&v133->__9__12_4,
          (System_Int32_array **)_9__12_4,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v128,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v8->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( this )
        {
          WarBoardManager__NextTurn((WarBoardManager_o *)this, 0LL);
          if ( _4__this )
          {
            WarBoardAIManager__AIEnd(_4__this, 0LL);
            return 0;
          }
        }
        goto LABEL_132;
      }
      if ( !_4__this )
        goto LABEL_132;
LABEL_95:
      ;
    }
    while ( !_4__this->fields.exec );
    p_ai_5__2 = &v8->fields._ai_5__2;
    this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
    if ( !this )
      goto LABEL_132;
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v165 = (System_Int32_array **)WarBoardAIManager__Wait(_4__this, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v165;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B70630(p__2__current, v165, v166, v167, v168, v169, v170, v171);
  v122 = 4;
LABEL_72:
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v122;
  return 1;
}


Il2CppObject *__fastcall WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIManager__Execute_d__12__System_Collections_IEnumerator_Reset(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall WarBoardAIManager__Execute_d__12__System_Collections_IEnumerator_get_Current(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAIManager__Execute_d__12__System_IDisposable_Dispose(
        WarBoardAIManager__Execute_d__12_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardAIManager__Wait_d__8___ctor(
        WarBoardAIManager__Wait_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAIManager__Wait_d__8__MoveNext(WarBoardAIManager__Wait_d__8_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitWhile_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t v14; // w8

  if ( (byte_434F90E & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&UnityEngine_WaitWhile_TypeInfo);
    sub_B70694(&Method_WarBoardAIManager__Wait_b__8_0__);
    byte_434F90E = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v6,
      _4__this,
      Method_WarBoardAIManager__Wait_b__8_0__,
      (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
    v7 = (UnityEngine_WaitWhile_o *)sub_B70764(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
  return result;
}


Il2CppObject *__fastcall WarBoardAIManager__Wait_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAIManager__Wait_d__8__System_Collections_IEnumerator_Reset(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall WarBoardAIManager__Wait_d__8__System_Collections_IEnumerator_get_Current(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAIManager__Wait_d__8__System_IDisposable_Dispose(
        WarBoardAIManager__Wait_d__8_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardAIManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F90B & 1) == 0 )
  {
    sub_B70694(&WarBoardAIManager___c_TypeInfo);
    byte_434F90B = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_434F90C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_434F90C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 0, 0LL);
}


void __fastcall WarBoardAIManager___c__DisplayClass11_0___ctor(
        WarBoardAIManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass11_0___StartThink_b__0(
        WarBoardAIManager___c__DisplayClass11_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass12_0___ctor(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__0(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields._forceId_k__BackingField == this->fields.forceId
      && x->fields._groupId_k__BackingField == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass28_0___ctor(
        WarBoardAIManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass28_0___AddReinforcementsAI_b__0(
        WarBoardAIManager___c__DisplayClass28_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass29_0___ctor(
        WarBoardAIManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass29_0___UpdateAiId_b__0(
        WarBoardAIManager___c__DisplayClass29_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


void __fastcall WarBoardAIManager___c__DisplayClass9_0___ctor(
        WarBoardAIManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c__DisplayClass9_0___StartAIPhase_b__0(
        WarBoardAIManager___c__DisplayClass9_0_o *this,
        WarBoardAI_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}