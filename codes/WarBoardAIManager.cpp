void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v28; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v36; // x19
  struct WarBoardAIManager_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v44; // x19
  struct WarBoardAIManager_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v52; // x19
  struct WarBoardAIManager_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7

  if ( (byte_42E68DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v25, v26, v27);
    byte_42E68DE = 1;
  }
  v28 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v28,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v28;
  sub_B5D560(static_fields, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
  v36 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B5D694(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v36,
    (const MethodInfo_2EE7E28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  v37 = WarBoardAIManager_TypeInfo->static_fields;
  v37->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v37->dicUniqueIndexPiece,
    (System_Int32_array **)v36,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v44,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v45 = WarBoardAIManager_TypeInfo->static_fields;
  v45->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v45->dicIndexSquare,
    (System_Int32_array **)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v52,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v53 = WarBoardAIManager_TypeInfo->static_fields;
  v53->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v53->dicIndexItem,
    (System_Int32_array **)v52,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E68DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v5, v6, v7);
    byte_42E68DD = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x19
  int v9; // w8
  unsigned int v10; // w20
  __int64 v11; // x0

  if ( (byte_42E68CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E68CF = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  v7 = *(_QWORD *)&Instance[4].fields.m_CachedPtr;
  if ( !v7 )
    goto LABEL_12;
  v8 = *(_QWORD *)(v7 + 48);
  if ( !v8 )
    goto LABEL_12;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v9 )
      {
        v11 = sub_B5D6C8(Instance);
        sub_B5D668(v11, 0LL);
      }
      Instance = *(WebViewManager_o **)(v8 + 8LL * (int)v10 + 32);
      if ( !Instance )
        break;
      WarBoardPieceData__ClearPrevAiRoute((WarBoardPieceData_o *)Instance, 0LL);
      v9 = *(_DWORD *)(v8 + 24);
      if ( (int)++v10 >= v9 )
        return;
    }
LABEL_12:
    sub_B5D69C(Instance, v6);
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
  WarBoardAIManager___c__DisplayClass28_0_o *v23; // x24
  WarBoardAIRoute_o *fields; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  WarBoardData_SquareRangeSearch_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_42E68DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, forceId, groupId, *(_QWORD *)&aiId);
    sub_B5D5C4(&Method_System_Func_WarBoardAI__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_WarBoardAI__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v17, v18, v19);
    sub_B5D5C4(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v20, v21, v22);
    byte_42E68DB = 1;
  }
  v23 = (WarBoardAIManager___c__DisplayClass28_0_o *)sub_B5D694(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass28_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_8;
  v23->fields.forceId = forceId;
  v23->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v28 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v28 )
  {
    fields = (WarBoardAIRoute_o *)v28->fields;
    if ( fields )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(fields, aiId, pieceIndex, v29);
      return;
    }
LABEL_8:
    sub_B5D69C(fields, v25);
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarBoardAI_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0

  if ( (byte_42E68CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAI__Add__, (_DWORD)npc, (_DWORD)method, v3);
    sub_B5D5C4(&WarBoardAI_TypeInfo, v6, v7, v8);
    byte_42E68CE = 1;
  }
  v9 = (WarBoardAI_o *)sub_B5D694(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v9, npc, v10);
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList )
    sub_B5D69C(0LL, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warBoardAIList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardAI__Add__);
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

  if ( (byte_42E68D3 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIManager__Execute_d__12_TypeInfo, forceId, groupId, method);
    byte_42E68D3 = 1;
  }
  v7 = sub_B5D694(WarBoardAIManager__Execute_d__12_TypeInfo);
  WarBoardAIManager__Execute_d__12___ctor((WarBoardAIManager__Execute_d__12_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_B5D69C(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  WarBoardAIManager_c *v4; // x0

  if ( (byte_42E68D5 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v1, v2, v3);
    byte_42E68D5 = 1;
  }
  v4 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v4 = WarBoardAIManager_TypeInfo;
  }
  return v4->static_fields->dicSquareIndexEnemyPiece;
}


WarBoardPieceData_o *__fastcall WarBoardAIManager__GetEnemyPieceSquareIndex(
        int32_t squareIndex,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardAIManager_c *v8; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicSquareIndexEnemyPiece; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E68D6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v5, v6, v7);
    byte_42E68D6 = 1;
  }
  value = 0LL;
  v8 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v8 = WarBoardAIManager_TypeInfo;
  }
  dicSquareIndexEnemyPiece = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v8->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    sub_B5D69C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardAIManager_c *v8; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicIndexItem; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E68D9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v5, v6, v7);
    byte_42E68D9 = 1;
  }
  value = 0LL;
  v8 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v8 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v8->static_fields->dicIndexItem;
  if ( !dicIndexItem )
    sub_B5D69C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardAIManager_c *v8; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *dicUniqueIndexPiece; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E68D7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v5, v6, v7);
    byte_42E68D7 = 1;
  }
  value = 0LL;
  v8 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v8 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)v8->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    sub_B5D69C(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_2EEA700 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardAIManager_c *v8; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *dicIndexSquare; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E68D8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v5, v6, v7);
    byte_42E68D8 = 1;
  }
  value = 0LL;
  v8 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v8 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v8->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    sub_B5D69C(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E68CD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__,
      (_DWORD)npcList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__, v15, v16, v17);
    byte_42E68CD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)warBoardAIList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_WarBoardAI__Clear__),
        !npcList) )
  {
    sub_B5D69C(warBoardAIList, npcList);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)npcList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v19 )
      break;
    if ( !v22.fields.current )
      sub_B5D69C(v19, v20);
    if ( HIDWORD(v22.fields.current[1].klass) || LODWORD(v22.fields.current[1].monitor) )
      WarBoardAIManager__CreateAI(this, (WarBoardStageNpcEntity_o *)v22.fields.current, v21);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B5D69C(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68DA & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E68DA = 1;
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
    sub_B5D69C(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B5D69C(one, two);
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
  WarBoardAIManager___c__DisplayClass9_0_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x22
  WarBoardData_SquareRangeSearch_o *v27; // x0
  const MethodInfo *v28; // x3

  if ( (byte_42E68D1 & 1) == 0 )
  {
    sub_B5D5C4(&AStarSearch_TypeInfo, forceId, groupId, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_WarBoardAI__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_WarBoardAI__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v16, v17, v18);
    sub_B5D5C4(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v19, v20, v21);
    byte_42E68D1 = 1;
  }
  v22 = (WarBoardAIManager___c__DisplayClass9_0_o *)sub_B5D694(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass9_0___ctor(v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  v22->fields.forceId = forceId;
  v22->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v27 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v27 )
  {
    this->fields.exec = 1;
    LOBYTE(v27[1].monitor) = 0;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, v22->fields.forceId, v22->fields.groupId, v28);
  }
}


void __fastcall WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
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
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  WarBoardAIManager___c__DisplayClass11_0_o *v49; // x20
  WarBoardAIRoute_o *m_messageTypeId; // x0
  const MethodInfo *v51; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v54; // x0
  WarBoardAIManager_c *v55; // x0
  struct WarBoardStageNpcEntity_o *npcData; // x8
  struct System_Int64_array *servants; // x24
  int max_length; // w8
  unsigned int v59; // w25
  int64_t v60; // x21
  WarBoardAIManager_c *v61; // x0
  WarBoardAIManager_c *v62; // x0
  WarBoardAIManager_c *v63; // x0
  struct WarBoardStageNpcEntity_o *v64; // x8
  struct System_Int64_array *svtEquipIds; // x24
  int v66; // w8
  unsigned int v67; // w25
  int64_t v68; // x21
  WarBoardAIManager_c *v69; // x0
  const MethodInfo *v70; // x3
  struct WarBoardStageNpcEntity_o *v71; // x8
  struct System_Int32_array *ratingBaseIds; // x23
  int v73; // w8
  unsigned int v74; // w24
  __int64 v75; // x21
  struct System_Collections_IEnumerator_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x0

  if ( (byte_42E68D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, forceId, groupId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v28, v29, v30);
    sub_B5D5C4(&Method_System_Func_WarBoardAI__bool___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Func_WarBoardAI__bool__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v40, v41, v42);
    sub_B5D5C4(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&WarBoardAIManager_TypeInfo, v46, v47, v48);
    byte_42E68D2 = 1;
  }
  v49 = (WarBoardAIManager___c__DisplayClass11_0_o *)sub_B5D694(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass11_0___ctor(v49, 0LL);
  if ( !v49 )
    goto LABEL_65;
  v49->fields.forceId = forceId;
  v49->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)v49,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v54 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_1CB66D8 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v54 )
    return;
  this->fields.isPause = 0;
  m_messageTypeId = (WarBoardAIRoute_o *)v54->fields.m_messageTypeId;
  if ( !m_messageTypeId )
    goto LABEL_65;
  WarBoardAIRoute__Clear(m_messageTypeId, v51);
  v55 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v55 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v55->static_fields->dicUniqueIndexPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
    (const MethodInfo_2EE8BB8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v59 = 0;
    while ( v59 < max_length )
    {
      v60 = servants->m_Items[v59];
      if ( !v60 )
        goto LABEL_65;
      if ( !*(_BYTE *)(v60 + 60) )
      {
        v61 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v61 = WarBoardAIManager_TypeInfo;
        }
        m_messageTypeId = (WarBoardAIRoute_o *)v61->static_fields->dicUniqueIndexPiece;
        if ( !m_messageTypeId )
          goto LABEL_65;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
          *(_DWORD *)(v60 + 44),
          (WarBoardAIRoute_PutSquareTarget_o *)v60,
          (const MethodInfo_2EE89DC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v60 + 20) != v49->fields.forceId )
        {
          v62 = WarBoardAIManager_TypeInfo;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v62 = WarBoardAIManager_TypeInfo;
          }
          m_messageTypeId = (WarBoardAIRoute_o *)v62->static_fields->dicSquareIndexEnemyPiece;
          if ( !m_messageTypeId )
            goto LABEL_65;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
            *(_DWORD *)(v60 + 64),
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v60,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      max_length = servants->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_30;
    }
LABEL_66:
    v83 = sub_B5D6C8(m_messageTypeId);
    sub_B5D668(v83, 0LL);
  }
LABEL_30:
  v63 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v63 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v63->static_fields->dicIndexSquare;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !m_messageTypeId )
    goto LABEL_65;
  v64 = m_messageTypeId[1].fields.npcData;
  if ( !v64 )
    goto LABEL_65;
  svtEquipIds = v64->fields.svtEquipIds;
  if ( !svtEquipIds )
    goto LABEL_65;
  v66 = svtEquipIds->max_length;
  if ( v66 >= 1 )
  {
    v67 = 0;
    while ( v67 < v66 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v68 = svtEquipIds->m_Items[v67];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v68 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.buckets;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v68 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v68,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v66 = svtEquipIds->max_length;
      if ( (int)++v67 >= v66 )
        goto LABEL_46;
    }
    goto LABEL_66;
  }
LABEL_46:
  v69 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v69 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v69->static_fields->dicIndexItem;
  if ( !m_messageTypeId
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
          (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v71 = m_messageTypeId[1].fields.npcData) == 0LL
    || (ratingBaseIds = v71->fields.ratingBaseIds) == 0LL )
  {
LABEL_65:
    sub_B5D69C(m_messageTypeId, v51);
  }
  v73 = ratingBaseIds->max_length;
  if ( v73 >= 1 )
  {
    v74 = 0;
    while ( v74 < v73 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v75 = *(_QWORD *)&ratingBaseIds->m_Items[2 * v74 + 1];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v75 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.entries;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v75 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v75,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v73 = ratingBaseIds->max_length;
      if ( (int)++v74 >= v73 )
        goto LABEL_62;
    }
    goto LABEL_66;
  }
LABEL_62:
  if ( !this->fields.executeTask )
  {
    v76 = WarBoardAIManager__Execute(this, v49->fields.forceId, v49->fields.groupId, v70);
    this->fields.executeTask = v76;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.executeTask,
      (System_Int32_array **)v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
}


void __fastcall WarBoardAIManager__Update(WarBoardAIManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_executeTask; // x19
  System_Collections_IEnumerator_o *v6; // x20
  struct System_Collections_IEnumerator_o *executeTask; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E68D4 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E68D4 = 1;
  }
  executeTask = this->fields.executeTask;
  p_executeTask = (BattleServantConfConponent_o *)&this->fields.executeTask;
  v6 = executeTask;
  if ( executeTask )
  {
    if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    }
    if ( !WarBoardManager__IEnumeratorExecute(v6, 0LL) )
    {
      p_executeTask->klass = 0LL;
      sub_B5D560(p_executeTask, 0LL, v8, v9, v10, v11, v12, v13);
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
  WarBoardAIManager___c__DisplayClass29_0_o *v23; // x24
  WarBoardAIRoute_o *fields; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  WarBoardData_SquareRangeSearch_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_42E68DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, forceId, groupId, *(_QWORD *)&aiId);
    sub_B5D5C4(&Method_System_Func_WarBoardAI__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_WarBoardAI__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v17, v18, v19);
    sub_B5D5C4(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v20, v21, v22);
    byte_42E68DC = 1;
  }
  v23 = (WarBoardAIManager___c__DisplayClass29_0_o *)sub_B5D694(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass29_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_8;
  v23->fields.forceId = forceId;
  v23->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v28 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v28 )
  {
    fields = (WarBoardAIRoute_o *)v28->fields;
    if ( fields )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(fields, aiId, pieceIndex, v29);
      return;
    }
LABEL_8:
    sub_B5D69C(fields, v25);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E68D0 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIManager__Wait_d__8_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E68D0 = 1;
  }
  v5 = sub_B5D694(WarBoardAIManager__Wait_d__8_TypeInfo);
  WarBoardAIManager__Wait_d__8___ctor((WarBoardAIManager__Wait_d__8_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v85; // x21
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *_8__1; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v93; // x8
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x21
  Il2CppObject *v95; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v96; // x23
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct WarBoardAI_o **p_ai_5__2; // x21
  BattleServantConfConponent_o *p_enumeratorChild_5__7; // x21
  struct WarBoardAIManager___c__DisplayClass12_0_o *v106; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v107; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2; // x24
  WarBoardAIManager__Execute_d__12_o *v109; // x21
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  System_Int32_array **v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  WarBoardAIManager___c_c *v125; // x0
  struct WarBoardAIManager___c_StaticFields *v126; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_3; // x22
  Il2CppObject *v128; // x23
  struct WarBoardAIManager___c_StaticFields *v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  WarBoardAIManager___c_c *v143; // x0
  struct WarBoardAIManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v146; // x21
  struct WarBoardAIManager___c_StaticFields *v147; // x0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  UnityEngine_WaitWhile_o *v154; // x21
  BattleServantConfConponent_o *v155; // x19
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  bool result; // w0
  struct System_Collections_IEnumerator_o *v163; // x21
  System_Collections_IEnumerator_c *v164; // x8
  unsigned __int64 v165; // x10
  System_Collections_IEnumerator_c **v166; // x11
  __int64 v167; // x0
  __int64 v168; // x0
  __int64 v169; // x3
  struct System_Collections_IEnumerator_o *v170; // x22
  System_Collections_IEnumerator_c *v171; // x8
  WarBoardAIManager__Execute_d__12_o *v172; // x21
  unsigned __int64 v173; // x10
  System_Collections_IEnumerator_c **v174; // x11
  __int64 v175; // x0
  __int64 v176; // x3
  System_Int32_array **v177; // x0
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Collections_IEnumerator_o *v184; // x22
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  float realtimeSinceStartup; // s0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  int v199; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v202; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v205; // x3
  System_Collections_Generic_IEnumerable_T__o *v206; // x21
  WarBoardAIManager___c_c *v207; // x0
  struct WarBoardAIManager___c_StaticFields *v208; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_4; // x22
  Il2CppObject *v210; // x23
  struct WarBoardAIManager___c_StaticFields *v211; // x0
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v224; // x8
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  struct System_Collections_IEnumerator_o *v231; // x21
  System_Collections_IEnumerator_c *v232; // x8
  unsigned __int64 v233; // x10
  System_Collections_IEnumerator_c **v234; // x11
  __int64 v235; // x0
  float v236; // s0
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  System_Int32_array **v243; // x0
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  WarBoardAIManager__Execute_d__12_o *v250; // x0
  const MethodInfo *v251; // x1

  v8 = this;
  if ( (byte_42E7045 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_WarBoardPieceData___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Action_WarBoardPieceData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_WarBoardPieceData___, v12, v13, v14);
    sub_B5D5C4(&bool_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&DefenseAreaData_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Func_WarBoardAI__bool___ctor__, v39, v40, v41);
    sub_B5D5C4(&System_Func_WarBoardAI__bool__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_WarBoardAIManager___c__Execute_b__12_1__, v57, v58, v59);
    sub_B5D5C4(&Method_WarBoardAIManager___c__Execute_b__12_3__, v60, v61, v62);
    sub_B5D5C4(&Method_WarBoardAIManager___c__Execute_b__12_4__, v63, v64, v65);
    sub_B5D5C4(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v66, v67, v68);
    sub_B5D5C4(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v69, v70, v71);
    sub_B5D5C4(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&WarBoardAIManager___c_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v78, v79, v80);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_B5D5C4(&WarBoardManager_TypeInfo, v81, v82, v83);
    byte_42E7045 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v85 = (Il2CppObject *)sub_B5D694(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v85, 0LL);
      v8->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v85;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields.__8__1,
        (System_Int32_array **)v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_132;
      _8__1->fields.forceId = v8->fields.forceId;
      v93 = v8->fields.__8__1;
      if ( !v93 )
        goto LABEL_132;
      v93->fields.groupId = v8->fields.groupId;
      if ( !_4__this )
        goto LABEL_132;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v95 = (Il2CppObject *)v8->fields.__8__1;
      v96 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v96,
        v95,
        Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardAI__bool___ctor__);
      v97 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     warBoardAIList,
                                     (System_Func_TSource__bool__o *)v96,
                                     (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v8->fields._ai_5__2 = (struct WarBoardAI_o *)v97;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._ai_5__2, v97, v98, v99, v100, v101, v102, v103);
      if ( !v8->fields._ai_5__2 )
        return 0;
      goto LABEL_111;
    case 1:
      v106 = v8->fields.__8__1;
      v8->fields.__1__state = -1;
      if ( !v106 || !_4__this )
        goto LABEL_132;
      WarBoardAIManager__StartThink(_4__this, v106->fields.forceId, v106->fields.groupId, 0LL);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
              sub_B5D560(p__2__current, 0LL, v218, v219, v220, v221, v222, v223);
              v199 = 5;
              goto LABEL_72;
            }
            v224 = v8->fields.__8__1;
            if ( v224 )
            {
              WarBoardAIManager__StartThink(_4__this, v224->fields.forceId, v224->fields.groupId, 0LL);
              goto LABEL_110;
            }
          }
        }
      }
LABEL_132:
      sub_B5D69C(this, method);
    }
    do
    {
LABEL_110:
      v8->fields._actPieces_5__4 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._actPieces_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._exe_5__5 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._exe_5__5, 0LL, v225, v226, v227, v228, v229, v230);
LABEL_111:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v143 = WarBoardAIManager___c_TypeInfo;
        if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v143 = WarBoardAIManager___c_TypeInfo;
        }
        static_fields = v143->static_fields;
        _9__12_1 = static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v143);
            static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          }
          v146 = (Il2CppObject *)static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            _9__12_1,
            v146,
            Method_WarBoardAIManager___c__Execute_b__12_1__,
            (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
          v147 = WarBoardAIManager___c_TypeInfo->static_fields;
          v147->__9__12_1 = _9__12_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v147->__9__12_1,
            (System_Int32_array **)_9__12_1,
            v148,
            v149,
            v150,
            v151,
            v152,
            v153);
        }
        v154 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v154, _9__12_1, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v154;
        v155 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v155, (System_Int32_array **)v154, v156, v157, v158, v159, v160, v161);
        result = 1;
        *(_DWORD *)&v155[-1].fields.isOpenAfter = 1;
        return result;
      }
LABEL_21:
      v8->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
      if ( !this )
        goto LABEL_132;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v107 = v8->fields.__8__1;
      if ( !v107 )
        goto LABEL_132;
      _9__2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v107->fields.__9__2;
      v109 = this;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__2,
          (Il2CppObject *)v107,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v107->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v107->fields.__9__2,
          (System_Int32_array **)_9__2,
          v110,
          v111,
          v112,
          v113,
          v114,
          v115);
      }
      v116 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v109,
               (System_Func_TSource__bool__o *)_9__2,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v117 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v116,
                                      (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v8->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v117;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._actPieces_5__4, v117, v118, v119, v120, v121, v122, v123);
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      v125 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v125 = WarBoardAIManager___c_TypeInfo;
      }
      v126 = v125->static_fields;
      _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v126->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v126 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v128 = (Il2CppObject *)v126->__9;
        _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_3,
          v128,
          Method_WarBoardAIManager___c__Execute_b__12_3__,
          (const MethodInfo_258B320 *)Method_System_Action_WarBoardPieceData___ctor__);
        v129 = WarBoardAIManager___c_TypeInfo->static_fields;
        v129->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v129->__9__12_3,
          (System_Int32_array **)_9__12_3,
          v130,
          v131,
          v132,
          v133,
          v134,
          v135);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( (BYTE3(DefenseAreaData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefenseAreaData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      }
      DefenseAreaData__ClearCache(0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)v8->fields._ai_5__2;
      if ( !this )
        goto LABEL_132;
      v136 = (System_Int32_array **)WarBoardAI__Think((WarBoardAI_o *)this, 0LL);
      v8->fields._exe_5__5 = (struct System_Collections_IEnumerator_o *)v136;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._exe_5__5, v136, v137, v138, v139, v140, v141, v142);
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
          v202 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v202;
            p_offset += 4;
            if ( v202 >= *(unsigned __int16 *)&exe_5__5->klass->_2.bitflags1 )
              goto LABEL_80;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_80:
          p_method = sub_AF54C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_83;
        v163 = v8->fields._exe_5__5;
        if ( !v163 )
          goto LABEL_132;
        v164 = v163->klass;
        if ( *(_WORD *)&v163->klass->_2.bitflags1 )
        {
          v165 = 0LL;
          v166 = (System_Collections_IEnumerator_c **)&v164->_1.interfaceOffsets->offset;
          while ( *(v166 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v165;
            v166 += 2;
            if ( v165 >= *(unsigned __int16 *)&v163->klass->_2.bitflags1 )
              goto LABEL_55;
          }
          v167 = (__int64)&v164->vtable[*(_DWORD *)v166 + 1].method;
        }
        else
        {
LABEL_55:
          v167 = sub_AF54C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL, v205);
        }
        v168 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v167)(
                 v163,
                 *(_QWORD *)(v167 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_B5D684(v168, System_Collections_IEnumerator_TypeInfo);
        v170 = v8->fields._exe_5__5;
        if ( !v170 )
          goto LABEL_132;
        v171 = v170->klass;
        v172 = this;
        if ( *(_WORD *)&v170->klass->_2.bitflags1 )
        {
          v173 = 0LL;
          v174 = (System_Collections_IEnumerator_c **)&v171->_1.interfaceOffsets->offset;
          while ( *(v174 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v173;
            v174 += 2;
            if ( v173 >= *(unsigned __int16 *)&v170->klass->_2.bitflags1 )
              goto LABEL_62;
          }
          v175 = (__int64)&v171->vtable[*(_DWORD *)v174 + 1].method;
        }
        else
        {
LABEL_62:
          v175 = sub_AF54C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL, v169);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v175)(
                                                       v170,
                                                       *(_QWORD *)(v175 + 8));
        if ( v172 )
        {
          v177 = (System_Int32_array **)sub_B5D684(this, System_Collections_IEnumerator_TypeInfo);
          v8->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)v177;
          p_enumeratorChild_5__7 = (BattleServantConfConponent_o *)&v8->fields._enumeratorChild_5__7;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v8->fields._enumeratorChild_5__7,
            v177,
            v178,
            v179,
            v180,
            v181,
            v182,
            v183);
          while ( 1 )
          {
LABEL_66:
            v184 = (System_Collections_IEnumerator_o *)p_enumeratorChild_5__7->klass;
            if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            }
            if ( !WarBoardManager__IEnumeratorExecute(v184, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v8->fields.__2__current = 0LL;
              p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              p__2__current->fields.movetime = realtimeSinceStartup;
              sub_B5D560(p__2__current, 0LL, v193, v194, v195, v196, v197, v198);
              v199 = 2;
              goto LABEL_72;
            }
          }
          p_enumeratorChild_5__7->klass = 0LL;
          sub_B5D560(p_enumeratorChild_5__7, 0LL, v185, v186, v187, v188, v189, v190);
          goto LABEL_74;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_74:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__6) >= 0.1 )
        {
          v236 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v8->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          p__2__current->fields.movetime = v236;
          sub_B5D560(p__2__current, 0LL, v237, v238, v239, v240, v241, v242);
          v199 = 3;
          goto LABEL_72;
        }
      }
      v231 = v8->fields._exe_5__5;
      if ( !v231 )
        goto LABEL_132;
      v232 = v231->klass;
      if ( *(_WORD *)&v231->klass->_2.bitflags1 )
      {
        v233 = 0LL;
        v234 = (System_Collections_IEnumerator_c **)&v232->_1.interfaceOffsets->offset;
        while ( *(v234 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v233;
          v234 += 2;
          if ( v233 >= *(unsigned __int16 *)&v231->klass->_2.bitflags1 )
            goto LABEL_120;
        }
        v235 = (__int64)&v232->vtable[*(_DWORD *)v234 + 1].method;
      }
      else
      {
LABEL_120:
        v235 = sub_AF54C0(v8->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL, v176);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v235)(
                                                     v231,
                                                     *(_QWORD *)(v235 + 8));
      if ( !this )
        goto LABEL_132;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        v250 = (WarBoardAIManager__Execute_d__12_o *)sub_B5D990(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v250,
                                  v251);
      }
      v8->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0(this);
LABEL_83:
      v206 = (System_Collections_Generic_IEnumerable_T__o *)v8->fields._actPieces_5__4;
      v207 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v207 = WarBoardAIManager___c_TypeInfo;
      }
      v208 = v207->static_fields;
      _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v208->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( (BYTE3(v207->vtable._0_Equals.methodPtr) & 4) != 0 && !v207->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v207);
          v208 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v210 = (Il2CppObject *)v208->__9;
        _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_4,
          v210,
          Method_WarBoardAIManager___c__Execute_b__12_4__,
          (const MethodInfo_258B320 *)Method_System_Action_WarBoardPieceData___ctor__);
        v211 = WarBoardAIManager___c_TypeInfo->static_fields;
        v211->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v211->__9__12_4,
          (System_Int32_array **)_9__12_4,
          v212,
          v213,
          v214,
          v215,
          v216,
          v217);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v206,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v8->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v243 = (System_Int32_array **)WarBoardAIManager__Wait(_4__this, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v243;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(p__2__current, v243, v244, v245, v246, v247, v248, v249);
  v199 = 4;
LABEL_72:
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v199;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitWhile_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w8

  if ( (byte_42E7046 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardAIManager__Wait_b__8_0__, v11, v12, v13);
    byte_42E7046 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v25 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v17 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v17,
      _4__this,
      Method_WarBoardAIManager__Wait_b__8_0__,
      (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
    v18 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v18, v17, 0LL);
    this->fields.__2__current = (Il2CppObject *)v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = 1;
    result = 1;
  }
  this->fields.__1__state = v25;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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

  if ( (byte_42E7043 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardAIManager___c_TypeInfo, v1, v2, v3);
    byte_42E7043 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E7044 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7044 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}