void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v21; // x19
  struct WarBoardAIManager_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x19
  struct WarBoardAIManager_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x19
  struct WarBoardAIManager_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_4212B0E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v9);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v10);
    byte_4212B0E = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v1,
                                                                                                   v2);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B0D840(static_fields, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  v21 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B0D974(
                                                                                            System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo,
                                                                                            v19,
                                                                                            v20);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v21,
    (const MethodInfo_2E279D4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  v22 = WarBoardAIManager_TypeInfo->static_fields;
  v22->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v22->dicUniqueIndexPiece,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo,
                                                                                                   v29,
                                                                                                   v30);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v31,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v32 = WarBoardAIManager_TypeInfo->static_fields;
  v32->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v32->dicIndexSquare,
    (System_Int32_array **)v31,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                                                   v39,
                                                                                                   v40);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v42 = WarBoardAIManager_TypeInfo->static_fields;
  v42->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v42->dicIndexItem,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212B0D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v4);
    byte_4212B0D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardAI__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x8
  __int64 v5; // x19
  int v6; // w8
  unsigned int v7; // w20
  __int64 v8; // x0

  if ( (byte_4212AFF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4212AFF = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  v4 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v4 )
    goto LABEL_12;
  v5 = *(_QWORD *)(v4 + 48);
  if ( !v5 )
    goto LABEL_12;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
      {
        v8 = sub_B0D9A8(Instance);
        sub_B0D948(v8, 0LL);
      }
      Instance = *(WebViewManager_o **)(v5 + 8LL * (int)v7 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v6 = *(_DWORD *)(v5 + 24);
      if ( (int)++v7 >= v6 )
        return;
    }
LABEL_12:
    sub_B0D97C(Instance);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__AddReinforcementsAI(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardAIManager___c__DisplayClass28_0_o *v15; // x24
  WarBoardAIRoute_o *fields; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x22
  WarBoardData_SquareRangeSearch_o *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_4212B0B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Func_WarBoardAI__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v13);
    sub_B0D8A4(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v14);
    byte_4212B0B = 1;
  }
  v15 = (WarBoardAIManager___c__DisplayClass28_0_o *)sub_B0D974(
                                                       WarBoardAIManager___c__DisplayClass28_0_TypeInfo,
                                                       *(_QWORD *)&forceId,
                                                       *(_QWORD *)&groupId);
  WarBoardAIManager___c__DisplayClass28_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v21 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v21 )
  {
    fields = (WarBoardAIRoute_o *)v21->fields;
    if ( fields )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(fields, aiId, pieceIndex, v22);
      return;
    }
LABEL_8:
    sub_B0D97C(fields);
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardAI_o *v6; // x21
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0

  if ( (byte_4212AFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc);
    sub_B0D8A4(&WarBoardAI_TypeInfo, v5);
    byte_4212AFE = 1;
  }
  v6 = (WarBoardAI_o *)sub_B0D974(WarBoardAI_TypeInfo, npc, method);
  WarBoardAI___ctor(v6, npc, v7);
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warBoardAIList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardAI__Add__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4212B03 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId);
    byte_4212B03 = 1;
  }
  v7 = sub_B0D974(WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
  WarBoardAIManager__Execute_d__12___ctor((WarBoardAIManager__Execute_d__12_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_B0D97C(0LL);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardAIManager_c *v2; // x0

  if ( (byte_4212B05 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v1);
    byte_4212B05 = 1;
  }
  v2 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v2 = WarBoardAIManager_TypeInfo;
  }
  return v2->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetEnemyPieceSquareIndex(
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212B06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v3);
    byte_4212B06 = 1;
  }
  value = 0LL;
  v4 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicIndexItem; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212B09 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v3);
    byte_4212B09 = 1;
  }
  value = 0LL;
  v4 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *dicUniqueIndexPiece; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212B07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v3);
    byte_4212B07 = 1;
  }
  value = 0LL;
  v4 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)v4->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_2E2A2AC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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
  __int64 v3; // x1
  WarBoardAIManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicIndexSquare; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212B08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v3);
    byte_4212B08 = 1;
  }
  value = 0LL;
  v4 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v4->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_B0D97C(0LL);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212AFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__, v8);
    byte_4212AFD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)warBoardAIList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_WarBoardAI__Clear__),
        !npcList) )
  {
    sub_B0D97C(warBoardAIList);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)npcList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v12.fields.current )
      sub_B0D97C(v10);
    if ( HIDWORD(v12.fields.current[1].klass) || LODWORD(v12.fields.current[1].monitor) )
      WarBoardAIManager__CreateAI(this, (WarBoardStageNpcEntity_o *)v12.fields.current, v11);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B0D97C(one);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4212B0A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, method);
    byte_4212B0A = 1;
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
    sub_B0D97C(one);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B0D97C(one);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__StartAIPhase(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardAIManager___c__DisplayClass9_0_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x22
  WarBoardData_SquareRangeSearch_o *v18; // x0
  const MethodInfo *v19; // x3

  if ( (byte_4212B01 & 1) == 0 )
  {
    sub_B0D8A4(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7);
    sub_B0D8A4(&Method_System_Func_WarBoardAI__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_WarBoardAI__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v10);
    sub_B0D8A4(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v11);
    byte_4212B01 = 1;
  }
  v12 = (WarBoardAIManager___c__DisplayClass9_0_o *)sub_B0D974(
                                                      WarBoardAIManager___c__DisplayClass9_0_TypeInfo,
                                                      *(_QWORD *)&forceId,
                                                      *(_QWORD *)&groupId);
  WarBoardAIManager___c__DisplayClass9_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  v12->fields.forceId = forceId;
  v12->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v18 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v18 )
  {
    this->fields.exec = 1;
    LOBYTE(v18[1].monitor) = 0;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, v12->fields.forceId, v12->fields.groupId, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  WarBoardAIManager___c__DisplayClass11_0_o *v21; // x20
  WarBoardAIRoute_o *m_messageTypeId; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v27; // x0
  const MethodInfo *v28; // x1
  WarBoardAIManager_c *v29; // x0
  struct WarBoardStageNpcEntity_o *npcData; // x8
  struct System_Int64_array *servants; // x24
  int max_length; // w8
  unsigned int v33; // w25
  int64_t v34; // x21
  WarBoardAIManager_c *v35; // x0
  WarBoardAIManager_c *v36; // x0
  WarBoardAIManager_c *v37; // x0
  struct WarBoardStageNpcEntity_o *v38; // x8
  struct System_Int64_array *svtEquipIds; // x24
  int v40; // w8
  unsigned int v41; // w25
  int64_t v42; // x21
  WarBoardAIManager_c *v43; // x0
  const MethodInfo *v44; // x3
  struct WarBoardStageNpcEntity_o *v45; // x8
  struct System_Int32_array *ratingBaseIds; // x23
  int v47; // w8
  unsigned int v48; // w24
  __int64 v49; // x21
  struct System_Collections_IEnumerator_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0

  if ( (byte_4212B02 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v13);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v14);
    sub_B0D8A4(&Method_System_Func_WarBoardAI__bool___ctor__, v15);
    sub_B0D8A4(&System_Func_WarBoardAI__bool__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17);
    sub_B0D8A4(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v18);
    sub_B0D8A4(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v19);
    sub_B0D8A4(&WarBoardAIManager_TypeInfo, v20);
    byte_4212B02 = 1;
  }
  v21 = (WarBoardAIManager___c__DisplayClass11_0_o *)sub_B0D974(
                                                       WarBoardAIManager___c__DisplayClass11_0_TypeInfo,
                                                       *(_QWORD *)&forceId,
                                                       *(_QWORD *)&groupId);
  WarBoardAIManager___c__DisplayClass11_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_65;
  v21->fields.forceId = forceId;
  v21->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v27 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B55198 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v27 )
    return;
  this->fields.isPause = 0;
  m_messageTypeId = (WarBoardAIRoute_o *)v27->fields.m_messageTypeId;
  if ( !m_messageTypeId )
    goto LABEL_65;
  WarBoardAIRoute__Clear(m_messageTypeId, v28);
  v29 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v29 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v29->static_fields->dicUniqueIndexPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
    (const MethodInfo_2E28764 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v33 = 0;
    while ( v33 < max_length )
    {
      v34 = servants->m_Items[v33];
      if ( !v34 )
        goto LABEL_65;
      if ( !*(_BYTE *)(v34 + 60) )
      {
        v35 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v35 = WarBoardAIManager_TypeInfo;
        }
        m_messageTypeId = (WarBoardAIRoute_o *)v35->static_fields->dicUniqueIndexPiece;
        if ( !m_messageTypeId )
          goto LABEL_65;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
          *(_DWORD *)(v34 + 44),
          (WarBoardAIRoute_PutSquareTarget_o *)v34,
          (const MethodInfo_2E28588 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v34 + 20) != v21->fields.forceId )
        {
          v36 = WarBoardAIManager_TypeInfo;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v36 = WarBoardAIManager_TypeInfo;
          }
          m_messageTypeId = (WarBoardAIRoute_o *)v36->static_fields->dicSquareIndexEnemyPiece;
          if ( !m_messageTypeId )
            goto LABEL_65;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
            *(_DWORD *)(v34 + 64),
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v34,
            (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      max_length = servants->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_30;
    }
LABEL_66:
    v57 = sub_B0D9A8(m_messageTypeId);
    sub_B0D948(v57, 0LL);
  }
LABEL_30:
  v37 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v37 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v37->static_fields->dicIndexSquare;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !m_messageTypeId )
    goto LABEL_65;
  v38 = m_messageTypeId[1].fields.npcData;
  if ( !v38 )
    goto LABEL_65;
  svtEquipIds = v38->fields.svtEquipIds;
  if ( !svtEquipIds )
    goto LABEL_65;
  v40 = svtEquipIds->max_length;
  if ( v40 >= 1 )
  {
    v41 = 0;
    while ( v41 < v40 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v42 = svtEquipIds->m_Items[v41];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v42 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.buckets;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v42 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v42,
        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v40 = svtEquipIds->max_length;
      if ( (int)++v41 >= v40 )
        goto LABEL_46;
    }
    goto LABEL_66;
  }
LABEL_46:
  v43 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v43 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v43->static_fields->dicIndexItem;
  if ( !m_messageTypeId
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
          (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v45 = m_messageTypeId[1].fields.npcData) == 0LL
    || (ratingBaseIds = v45->fields.ratingBaseIds) == 0LL )
  {
LABEL_65:
    sub_B0D97C(m_messageTypeId);
  }
  v47 = ratingBaseIds->max_length;
  if ( v47 >= 1 )
  {
    v48 = 0;
    while ( v48 < v47 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v49 = *(_QWORD *)&ratingBaseIds->m_Items[2 * v48 + 1];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v49 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.entries;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v49 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v49,
        (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v47 = ratingBaseIds->max_length;
      if ( (int)++v48 >= v47 )
        goto LABEL_62;
    }
    goto LABEL_66;
  }
LABEL_62:
  if ( !this->fields.executeTask )
  {
    v50 = WarBoardAIManager__Execute(this, v21->fields.forceId, v21->fields.groupId, v44);
    this->fields.executeTask = v50;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.executeTask,
      (System_Int32_array **)v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
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

  if ( (byte_4212B04 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardManager_TypeInfo, method);
    byte_4212B04 = 1;
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
      sub_B0D840(p_executeTask, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__UpdateAiId(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t aiId,
        int32_t pieceIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardAIManager___c__DisplayClass29_0_o *v15; // x24
  WarBoardAIRoute_o *fields; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x22
  WarBoardData_SquareRangeSearch_o *v21; // x0
  const MethodInfo *v22; // x3

  if ( (byte_4212B0C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Func_WarBoardAI__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v13);
    sub_B0D8A4(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v14);
    byte_4212B0C = 1;
  }
  v15 = (WarBoardAIManager___c__DisplayClass29_0_o *)sub_B0D974(
                                                       WarBoardAIManager___c__DisplayClass29_0_TypeInfo,
                                                       *(_QWORD *)&forceId,
                                                       *(_QWORD *)&groupId);
  WarBoardAIManager___c__DisplayClass29_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v21 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v21 )
  {
    fields = (WarBoardAIRoute_o *)v21->fields;
    if ( fields )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(fields, aiId, pieceIndex, v22);
      return;
    }
LABEL_8:
    sub_B0D97C(fields);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4212B00 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIManager__Wait_d__8_TypeInfo, method);
    byte_4212B00 = 1;
  }
  v4 = sub_B0D974(WarBoardAIManager__Wait_d__8_TypeInfo, method, v2);
  WarBoardAIManager__Wait_d__8___ctor((WarBoardAIManager__Wait_d__8_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  __int64 v2; // x2
  WarBoardAIManager__Execute_d__12_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  struct WarBoardAIManager___c__DisplayClass12_0_o *_8__1; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x21
  Il2CppObject *v36; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x23
  WarBoardData_SquareRangeSearch_o *v38; // x0
  struct WarBoardAI_o **p_ai_5__2; // x21
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  struct WarBoardAIManager___c__DisplayClass12_0_o *v41; // x8
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  Il2CppObject *v46; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *monitor; // x24
  WarBoardAIManager__Execute_d__12_o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  WarBoardAIManager___c_c *v54; // x0
  struct WarBoardAIManager___c_StaticFields *v55; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_3; // x22
  Il2CppObject *v57; // x23
  struct WarBoardAIManager___c_StaticFields *v58; // x0
  System_Collections_IEnumerator_o *v59; // x0
  WarBoardAIManager___c_c *v60; // x0
  struct WarBoardAIManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v63; // x21
  struct WarBoardAIManager___c_StaticFields *v64; // x0
  UnityEngine_WaitWhile_o *v65; // x21
  Il2CppObject **v66; // x19
  bool result; // w0
  struct System_Collections_IEnumerator_o *v68; // x21
  System_Collections_IEnumerator_c *v69; // x8
  unsigned __int64 v70; // x10
  System_Collections_IEnumerator_c **v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  struct System_Collections_IEnumerator_o *v74; // x22
  System_Collections_IEnumerator_c *v75; // x8
  WarBoardAIManager__Execute_d__12_o *v76; // x21
  unsigned __int64 v77; // x10
  System_Collections_IEnumerator_c **v78; // x11
  __int64 v79; // x0
  __int64 v80; // x0
  System_Collections_IEnumerator_o *v81; // x22
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int v84; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v87; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  System_Collections_Generic_IEnumerable_T__o *v92; // x21
  WarBoardAIManager___c_c *v93; // x0
  struct WarBoardAIManager___c_StaticFields *v94; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_4; // x22
  Il2CppObject *v96; // x23
  struct WarBoardAIManager___c_StaticFields *v97; // x0
  struct WarBoardAIManager___c__DisplayClass12_0_o *v98; // x8
  struct System_Collections_IEnumerator_o *v99; // x21
  System_Collections_IEnumerator_c *v100; // x8
  unsigned __int64 v101; // x10
  System_Collections_IEnumerator_c **v102; // x11
  __int64 v103; // x0
  float v104; // s0
  System_Collections_IEnumerator_o *v105; // x0
  WarBoardAIManager__Execute_d__12_o *v106; // x0
  const MethodInfo *v107; // x1

  v3 = this;
  if ( (byte_4212669 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_WarBoardPieceData___ctor__, method);
    sub_B0D8A4(&System_Action_WarBoardPieceData__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_B0D8A4(&bool_TypeInfo, v6);
    sub_B0D8A4(&DefenseAreaData_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v11);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v13);
    sub_B0D8A4(&Method_System_Func_WarBoardAI__bool___ctor__, v14);
    sub_B0D8A4(&System_Func_WarBoardAI__bool__TypeInfo, v15);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B0D8A4(&Method_WarBoardAIManager___c__Execute_b__12_1__, v20);
    sub_B0D8A4(&Method_WarBoardAIManager___c__Execute_b__12_3__, v21);
    sub_B0D8A4(&Method_WarBoardAIManager___c__Execute_b__12_4__, v22);
    sub_B0D8A4(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v23);
    sub_B0D8A4(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v24);
    sub_B0D8A4(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v25);
    sub_B0D8A4(&WarBoardAIManager___c_TypeInfo, v26);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v27);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_B0D8A4(&WarBoardManager_TypeInfo, v28);
    byte_4212669 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v30 = (Il2CppObject *)sub_B0D974(WarBoardAIManager___c__DisplayClass12_0_TypeInfo, method, v2);
      System_Object___ctor(v30, 0LL);
      v3->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v30;
      sub_B0D840(&v3->fields.__8__1, v30);
      _8__1 = v3->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_132;
      _8__1->fields.forceId = v3->fields.forceId;
      v34 = v3->fields.__8__1;
      if ( !v34 )
        goto LABEL_132;
      v34->fields.groupId = v3->fields.groupId;
      if ( !_4__this )
        goto LABEL_132;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v36 = (Il2CppObject *)v3->fields.__8__1;
      v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_WarBoardAI__bool__TypeInfo,
                                                                                 v31,
                                                                                 v32);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v37,
        v36,
        Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardAI__bool___ctor__);
      v38 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v37,
              (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v3->fields._ai_5__2 = (struct WarBoardAI_o *)v38;
      sub_B0D840(&v3->fields._ai_5__2, v38);
      if ( !v3->fields._ai_5__2 )
        return 0;
      goto LABEL_111;
    case 1:
      v41 = v3->fields.__8__1;
      v3->fields.__1__state = -1;
      if ( !v41 || !_4__this )
        goto LABEL_132;
      WarBoardAIManager__StartThink(_4__this, v41->fields.forceId, v41->fields.groupId, 0LL);
      goto LABEL_21;
    case 2:
      p_enumeratorChild_5__7 = &v3->fields._enumeratorChild_5__7;
      v3->fields.__1__state = -1;
      goto LABEL_66;
    case 3:
      v3->fields.__1__state = -1;
      goto LABEL_75;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_132;
      if ( !_4__this->fields.exec )
        return 0;
      p_ai_5__2 = &v3->fields._ai_5__2;
      break;
    case 5:
      v3->fields.__1__state = -1;
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
              v3->fields.__2__current = 0LL;
              p__2__current = &v3->fields.__2__current;
              sub_B0D840(p__2__current, 0LL);
              v84 = 5;
              goto LABEL_72;
            }
            v98 = v3->fields.__8__1;
            if ( v98 )
            {
              WarBoardAIManager__StartThink(_4__this, v98->fields.forceId, v98->fields.groupId, 0LL);
              goto LABEL_110;
            }
          }
        }
      }
LABEL_132:
      sub_B0D97C(this);
    }
    do
    {
LABEL_110:
      v3->fields._actPieces_5__4 = 0LL;
      sub_B0D840(&v3->fields._actPieces_5__4, 0LL);
      v3->fields._exe_5__5 = 0LL;
      sub_B0D840(&v3->fields._exe_5__5, 0LL);
LABEL_111:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v60 = WarBoardAIManager___c_TypeInfo;
        if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v60 = WarBoardAIManager___c_TypeInfo;
        }
        static_fields = v60->static_fields;
        _9__12_1 = static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v60);
            static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          }
          v63 = (Il2CppObject *)static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v42, v43);
          System_Func_bool____ctor(
            _9__12_1,
            v63,
            Method_WarBoardAIManager___c__Execute_b__12_1__,
            (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
          v64 = WarBoardAIManager___c_TypeInfo->static_fields;
          v64->__9__12_1 = _9__12_1;
          sub_B0D840(&v64->__9__12_1, _9__12_1);
        }
        v65 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v42, v43);
        UnityEngine_WaitWhile___ctor(v65, _9__12_1, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v65;
        v66 = &v3->fields.__2__current;
        sub_B0D840(v66, v65);
        result = 1;
        *((_DWORD *)v66 - 2) = 1;
        return result;
      }
LABEL_21:
      v3->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
      if ( !this )
        goto LABEL_132;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v46 = (Il2CppObject *)v3->fields.__8__1;
      if ( !v46 )
        goto LABEL_132;
      monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v46[1].monitor;
      v48 = this;
      if ( !monitor )
      {
        monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                       v44,
                                                                                       v45);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          monitor,
          v46,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v46[1].monitor = monitor;
        sub_B0D840(&v46[1].monitor, monitor);
      }
      v49 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v48,
              (System_Func_TSource__bool__o *)monitor,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v50 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v49,
              (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v3->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v50;
      sub_B0D840(&v3->fields._actPieces_5__4, v50);
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v3->fields._actPieces_5__4;
      v54 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v54 = WarBoardAIManager___c_TypeInfo;
      }
      v55 = v54->static_fields;
      _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v55->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v54);
          v55 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v57 = (Il2CppObject *)v55->__9;
        _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                          System_Action_WarBoardPieceData__TypeInfo,
                                                                                          v51,
                                                                                          v52);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_3,
          v57,
          Method_WarBoardAIManager___c__Execute_b__12_3__,
          (const MethodInfo_246EA3C *)Method_System_Action_WarBoardPieceData___ctor__);
        v58 = WarBoardAIManager___c_TypeInfo->static_fields;
        v58->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_B0D840(&v58->__9__12_3, _9__12_3);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( (BYTE3(DefenseAreaData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefenseAreaData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      }
      DefenseAreaData__ClearCache(0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)v3->fields._ai_5__2;
      if ( !this )
        goto LABEL_132;
      v59 = WarBoardAI__Think((WarBoardAI_o *)this, 0LL);
      v3->fields._exe_5__5 = v59;
      sub_B0D840(&v3->fields._exe_5__5, v59);
      v3->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_75:
        exe_5__5 = v3->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_132;
        klass = exe_5__5->klass;
        if ( *(_WORD *)&exe_5__5->klass->_2.bitflags1 )
        {
          v87 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v87;
            p_offset += 4;
            if ( v87 >= *(unsigned __int16 *)&exe_5__5->klass->_2.bitflags1 )
              goto LABEL_80;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_80:
          p_method = sub_AA67A0(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_83;
        v68 = v3->fields._exe_5__5;
        if ( !v68 )
          goto LABEL_132;
        v69 = v68->klass;
        if ( *(_WORD *)&v68->klass->_2.bitflags1 )
        {
          v70 = 0LL;
          v71 = (System_Collections_IEnumerator_c **)&v69->_1.interfaceOffsets->offset;
          while ( *(v71 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v70;
            v71 += 2;
            if ( v70 >= *(unsigned __int16 *)&v68->klass->_2.bitflags1 )
              goto LABEL_55;
          }
          v72 = (__int64)&v69->vtable[*(_DWORD *)v71 + 1].method;
        }
        else
        {
LABEL_55:
          v72 = sub_AA67A0(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v73 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v72)(
                v68,
                *(_QWORD *)(v72 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_B0D964(v73, System_Collections_IEnumerator_TypeInfo);
        v74 = v3->fields._exe_5__5;
        if ( !v74 )
          goto LABEL_132;
        v75 = v74->klass;
        v76 = this;
        if ( *(_WORD *)&v74->klass->_2.bitflags1 )
        {
          v77 = 0LL;
          v78 = (System_Collections_IEnumerator_c **)&v75->_1.interfaceOffsets->offset;
          while ( *(v78 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v77;
            v78 += 2;
            if ( v77 >= *(unsigned __int16 *)&v74->klass->_2.bitflags1 )
              goto LABEL_62;
          }
          v79 = (__int64)&v75->vtable[*(_DWORD *)v78 + 1].method;
        }
        else
        {
LABEL_62:
          v79 = sub_AA67A0(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v79)(
                                                       v74,
                                                       *(_QWORD *)(v79 + 8));
        if ( v76 )
        {
          v80 = sub_B0D964(this, System_Collections_IEnumerator_TypeInfo);
          v3->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)v80;
          p_enumeratorChild_5__7 = &v3->fields._enumeratorChild_5__7;
          sub_B0D840(&v3->fields._enumeratorChild_5__7, v80);
          while ( 1 )
          {
LABEL_66:
            v81 = *p_enumeratorChild_5__7;
            if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            }
            if ( !WarBoardManager__IEnumeratorExecute(v81, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v3->fields.__2__current = 0LL;
              p__2__current = &v3->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_B0D840(p__2__current, 0LL);
              v84 = 2;
              goto LABEL_72;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_B0D840(p_enumeratorChild_5__7, 0LL);
          goto LABEL_74;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_74:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._prevTime_5__6) >= 0.1 )
        {
          v104 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v3->fields.__2__current = 0LL;
          p__2__current = &v3->fields.__2__current;
          *((float *)p__2__current + 16) = v104;
          sub_B0D840(p__2__current, 0LL);
          v84 = 3;
          goto LABEL_72;
        }
      }
      v99 = v3->fields._exe_5__5;
      if ( !v99 )
        goto LABEL_132;
      v100 = v99->klass;
      if ( *(_WORD *)&v99->klass->_2.bitflags1 )
      {
        v101 = 0LL;
        v102 = (System_Collections_IEnumerator_c **)&v100->_1.interfaceOffsets->offset;
        while ( *(v102 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v101;
          v102 += 2;
          if ( v101 >= *(unsigned __int16 *)&v99->klass->_2.bitflags1 )
            goto LABEL_120;
        }
        v103 = (__int64)&v100->vtable[*(_DWORD *)v102 + 1].method;
      }
      else
      {
LABEL_120:
        v103 = sub_AA67A0(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v103)(
                                                     v99,
                                                     *(_QWORD *)(v103 + 8));
      if ( !this )
        goto LABEL_132;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        v106 = (WarBoardAIManager__Execute_d__12_o *)sub_B0DC70(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v106,
                                  v107);
      }
      v3->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0(this);
LABEL_83:
      v92 = (System_Collections_Generic_IEnumerable_T__o *)v3->fields._actPieces_5__4;
      v93 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v93 = WarBoardAIManager___c_TypeInfo;
      }
      v94 = v93->static_fields;
      _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v94->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v93);
          v94 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v96 = (Il2CppObject *)v94->__9;
        _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                          System_Action_WarBoardPieceData__TypeInfo,
                                                                                          v90,
                                                                                          v91);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_4,
          v96,
          Method_WarBoardAIManager___c__Execute_b__12_4__,
          (const MethodInfo_246EA3C *)Method_System_Action_WarBoardPieceData___ctor__);
        v97 = WarBoardAIManager___c_TypeInfo->static_fields;
        v97->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_B0D840(&v97->__9__12_4, _9__12_4);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v92,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v3->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    p_ai_5__2 = &v3->fields._ai_5__2;
    this = (WarBoardAIManager__Execute_d__12_o *)v3->fields._ai_5__2;
    if ( !this )
      goto LABEL_132;
    this = (WarBoardAIManager__Execute_d__12_o *)WarBoardAI__Execute((WarBoardAI_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      continue;
    break;
  }
  v105 = WarBoardAIManager__Wait(_4__this, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v105;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, v105);
  v84 = 4;
LABEL_72:
  *((_DWORD *)p__2__current - 2) = v84;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_WaitWhile_o *v13; // x20
  int32_t v14; // w8

  if ( (byte_421266A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardAIManager__Wait_b__8_0__, v6);
    byte_421266A = 1;
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
    v10 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, method, v2);
    System_Func_bool____ctor(
      v10,
      _4__this,
      Method_WarBoardAIManager__Wait_b__8_0__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v13 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v11, v12);
    UnityEngine_WaitWhile___ctor(v13, v10, 0LL);
    this->fields.__2__current = (Il2CppObject *)v13;
    sub_B0D840(&this->fields.__2__current, v13);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0

  if ( (byte_4212667 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardAIManager___c_TypeInfo, v1);
    byte_4212667 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardAIManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_4212668 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4212668 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}