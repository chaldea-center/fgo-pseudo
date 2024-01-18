void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v18; // x19
  struct WarBoardAIManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v26; // x19
  struct WarBoardAIManager_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v34; // x19
  struct WarBoardAIManager_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_4186768 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v8);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v9);
    byte_4186768 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B2C2F8(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B2C42C(System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v18,
    (const MethodInfo_2DC43C8 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  v19 = WarBoardAIManager_TypeInfo->static_fields;
  v19->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v19->dicUniqueIndexPiece,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v26,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v27 = WarBoardAIManager_TypeInfo->static_fields;
  v27->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v27->dicIndexSquare,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v34,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v35 = WarBoardAIManager_TypeInfo->static_fields;
  v35->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v35->dicIndexItem,
    (System_Int32_array **)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186767 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v3);
    byte_4186767 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardAI__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4186759 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186759 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        v9 = sub_B2C460(Instance);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(Instance, v4);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x22
  WarBoardData_SquareRangeSearch_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4186765 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Func_WarBoardAI__bool___ctor__, v11);
    sub_B2C35C(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v13);
    sub_B2C35C(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v14);
    byte_4186765 = 1;
  }
  v15 = (WarBoardAIManager___c__DisplayClass28_0_o *)sub_B2C42C(WarBoardAIManager___c__DisplayClass28_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass28_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v20 )
  {
    fields = (WarBoardAIRoute_o *)v20->fields;
    if ( fields )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(fields, aiId, pieceIndex, v21);
      return;
    }
LABEL_8:
    sub_B2C434(fields, v17);
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
  __int64 v8; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0

  if ( (byte_4186758 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc);
    sub_B2C35C(&WarBoardAI_TypeInfo, v5);
    byte_4186758 = 1;
  }
  v6 = (WarBoardAI_o *)sub_B2C42C(WarBoardAI_TypeInfo);
  WarBoardAI___ctor(v6, npc, v7);
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList )
    sub_B2C434(0LL, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warBoardAIList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardAI__Add__);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_418675D & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId);
    byte_418675D = 1;
  }
  v7 = sub_B2C42C(WarBoardAIManager__Execute_d__12_TypeInfo);
  WarBoardAIManager__Execute_d__12___ctor((WarBoardAIManager__Execute_d__12_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 32) = forceId;
  *(_DWORD *)(v7 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v7;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_B2C434(0LL, method);
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardAIManager_c *v2; // x0

  if ( (byte_418675F & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v1);
    byte_418675F = 1;
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

  if ( (byte_4186760 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v3);
    byte_4186760 = 1;
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
    sub_B2C434(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4186763 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v3);
    byte_4186763 = 1;
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
    sub_B2C434(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_4186761 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v3);
    byte_4186761 = 1;
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
    sub_B2C434(0LL, method);
  if ( System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_2DC6CA0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_4186762 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v3);
    byte_4186762 = 1;
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
    sub_B2C434(0LL, method);
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186757 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__, v8);
    byte_4186757 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)warBoardAIList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_WarBoardAI__Clear__),
        !npcList) )
  {
    sub_B2C434(warBoardAIList, npcList);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)npcList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v13.fields.current )
      sub_B2C434(v10, v11);
    if ( HIDWORD(v13.fields.current[1].klass) || LODWORD(v13.fields.current[1].monitor) )
      WarBoardAIManager__CreateAI(this, (WarBoardStageNpcEntity_o *)v13.fields.current, v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B2C434(one, two);
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_4186764 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIManager_TypeInfo, method);
    byte_4186764 = 1;
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
    sub_B2C434(one, two);
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B2C434(one, two);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x22
  WarBoardData_SquareRangeSearch_o *v17; // x0
  const MethodInfo *v18; // x3

  if ( (byte_418675B & 1) == 0 )
  {
    sub_B2C35C(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v7);
    sub_B2C35C(&Method_System_Func_WarBoardAI__bool___ctor__, v8);
    sub_B2C35C(&System_Func_WarBoardAI__bool__TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v10);
    sub_B2C35C(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v11);
    byte_418675B = 1;
  }
  v12 = (WarBoardAIManager___c__DisplayClass9_0_o *)sub_B2C42C(WarBoardAIManager___c__DisplayClass9_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass9_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  v12->fields.forceId = forceId;
  v12->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v17 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v17 )
  {
    this->fields.exec = 1;
    LOBYTE(v17[1].monitor) = 0;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, v12->fields.forceId, v12->fields.groupId, v18);
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
  const MethodInfo *v23; // x1
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v26; // x0
  WarBoardAIManager_c *v27; // x0
  struct WarBoardStageNpcEntity_o *npcData; // x8
  struct System_Int64_array *servants; // x24
  int max_length; // w8
  unsigned int v31; // w25
  int64_t v32; // x21
  WarBoardAIManager_c *v33; // x0
  WarBoardAIManager_c *v34; // x0
  WarBoardAIManager_c *v35; // x0
  struct WarBoardStageNpcEntity_o *v36; // x8
  struct System_Int64_array *svtEquipIds; // x24
  int v38; // w8
  unsigned int v39; // w25
  int64_t v40; // x21
  WarBoardAIManager_c *v41; // x0
  const MethodInfo *v42; // x3
  struct WarBoardStageNpcEntity_o *v43; // x8
  struct System_Int32_array *ratingBaseIds; // x23
  int v45; // w8
  unsigned int v46; // w24
  __int64 v47; // x21
  struct System_Collections_IEnumerator_o *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0

  if ( (byte_418675C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v14);
    sub_B2C35C(&Method_System_Func_WarBoardAI__bool___ctor__, v15);
    sub_B2C35C(&System_Func_WarBoardAI__bool__TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17);
    sub_B2C35C(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v18);
    sub_B2C35C(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v19);
    sub_B2C35C(&WarBoardAIManager_TypeInfo, v20);
    byte_418675C = 1;
  }
  v21 = (WarBoardAIManager___c__DisplayClass11_0_o *)sub_B2C42C(WarBoardAIManager___c__DisplayClass11_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass11_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_65;
  v21->fields.forceId = forceId;
  v21->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v26 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1A99ECC *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v26 )
    return;
  this->fields.isPause = 0;
  m_messageTypeId = (WarBoardAIRoute_o *)v26->fields.m_messageTypeId;
  if ( !m_messageTypeId )
    goto LABEL_65;
  WarBoardAIRoute__Clear(m_messageTypeId, v23);
  v27 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v27 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v27->static_fields->dicUniqueIndexPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
    (const MethodInfo_2DC5158 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v31 = 0;
    while ( v31 < max_length )
    {
      v32 = servants->m_Items[v31];
      if ( !v32 )
        goto LABEL_65;
      if ( !*(_BYTE *)(v32 + 60) )
      {
        v33 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v33 = WarBoardAIManager_TypeInfo;
        }
        m_messageTypeId = (WarBoardAIRoute_o *)v33->static_fields->dicUniqueIndexPiece;
        if ( !m_messageTypeId )
          goto LABEL_65;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)m_messageTypeId,
          *(_DWORD *)(v32 + 44),
          (WarBoardAIRoute_PutSquareTarget_o *)v32,
          (const MethodInfo_2DC4F7C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v32 + 20) != v21->fields.forceId )
        {
          v34 = WarBoardAIManager_TypeInfo;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v34 = WarBoardAIManager_TypeInfo;
          }
          m_messageTypeId = (WarBoardAIRoute_o *)v34->static_fields->dicSquareIndexEnemyPiece;
          if ( !m_messageTypeId )
            goto LABEL_65;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
            *(_DWORD *)(v32 + 64),
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v32,
            (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      max_length = servants->max_length;
      if ( (int)++v31 >= max_length )
        goto LABEL_30;
    }
LABEL_66:
    v55 = sub_B2C460(m_messageTypeId);
    sub_B2C400(v55, 0LL);
  }
LABEL_30:
  v35 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v35 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v35->static_fields->dicIndexSquare;
  if ( !m_messageTypeId )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !m_messageTypeId )
    goto LABEL_65;
  v36 = m_messageTypeId[1].fields.npcData;
  if ( !v36 )
    goto LABEL_65;
  svtEquipIds = v36->fields.svtEquipIds;
  if ( !svtEquipIds )
    goto LABEL_65;
  v38 = svtEquipIds->max_length;
  if ( v38 >= 1 )
  {
    v39 = 0;
    while ( v39 < v38 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v40 = svtEquipIds->m_Items[v39];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v40 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.buckets;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v40 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v40,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v38 = svtEquipIds->max_length;
      if ( (int)++v39 >= v38 )
        goto LABEL_46;
    }
    goto LABEL_66;
  }
LABEL_46:
  v41 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v41 = WarBoardAIManager_TypeInfo;
  }
  m_messageTypeId = (WarBoardAIRoute_o *)v41->static_fields->dicIndexItem;
  if ( !m_messageTypeId
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)m_messageTypeId,
          (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (m_messageTypeId = (WarBoardAIRoute_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v43 = m_messageTypeId[1].fields.npcData) == 0LL
    || (ratingBaseIds = v43->fields.ratingBaseIds) == 0LL )
  {
LABEL_65:
    sub_B2C434(m_messageTypeId, v23);
  }
  v45 = ratingBaseIds->max_length;
  if ( v45 >= 1 )
  {
    v46 = 0;
    while ( v46 < v45 )
    {
      m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      v47 = *(_QWORD *)&ratingBaseIds->m_Items[2 * v46 + 1];
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        m_messageTypeId = (WarBoardAIRoute_o *)WarBoardAIManager_TypeInfo;
      }
      if ( !v47 )
        goto LABEL_65;
      m_messageTypeId = (WarBoardAIRoute_o *)m_messageTypeId->fields.dicUniqueKeyTarget->fields.entries;
      if ( !m_messageTypeId )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)m_messageTypeId,
        *(_DWORD *)(v47 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v47,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v45 = ratingBaseIds->max_length;
      if ( (int)++v46 >= v45 )
        goto LABEL_62;
    }
    goto LABEL_66;
  }
LABEL_62:
  if ( !this->fields.executeTask )
  {
    v48 = WarBoardAIManager__Execute(this, v21->fields.forceId, v21->fields.groupId, v42);
    this->fields.executeTask = v48;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.executeTask,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
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

  if ( (byte_418675E & 1) == 0 )
  {
    sub_B2C35C(&WarBoardManager_TypeInfo, method);
    byte_418675E = 1;
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
      sub_B2C2F8(p_executeTask, 0LL, v6, v7, v8, v9, v10, v11);
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
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x22
  WarBoardData_SquareRangeSearch_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4186766 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Func_WarBoardAI__bool___ctor__, v11);
    sub_B2C35C(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v13);
    sub_B2C35C(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v14);
    byte_4186766 = 1;
  }
  v15 = (WarBoardAIManager___c__DisplayClass29_0_o *)sub_B2C42C(WarBoardAIManager___c__DisplayClass29_0_TypeInfo);
  WarBoardAIManager___c__DisplayClass29_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAI__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v20 )
  {
    fields = (WarBoardAIRoute_o *)v20->fields;
    if ( fields )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(fields, aiId, pieceIndex, v21);
      return;
    }
LABEL_8:
    sub_B2C434(fields, v17);
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

  if ( (byte_418675A & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIManager__Wait_d__8_TypeInfo, method);
    byte_418675A = 1;
  }
  v3 = sub_B2C42C(WarBoardAIManager__Wait_d__8_TypeInfo);
  WarBoardAIManager__Wait_d__8___ctor((WarBoardAIManager__Wait_d__8_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x3
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
  struct WarBoardAIManager___c__DisplayClass12_0_o *_8__1; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x21
  Il2CppObject *v34; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x23
  WarBoardData_SquareRangeSearch_o *v36; // x0
  struct WarBoardAI_o **p_ai_5__2; // x21
  System_Collections_IEnumerator_o **p_enumeratorChild_5__7; // x21
  struct WarBoardAIManager___c__DisplayClass12_0_o *v39; // x8
  Il2CppObject *v40; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *monitor; // x24
  WarBoardAIManager__Execute_d__12_o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v44; // x0
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  WarBoardAIManager___c_c *v46; // x0
  struct WarBoardAIManager___c_StaticFields *v47; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_3; // x22
  Il2CppObject *v49; // x23
  struct WarBoardAIManager___c_StaticFields *v50; // x0
  System_Collections_IEnumerator_o *v51; // x0
  WarBoardAIManager___c_c *v52; // x0
  struct WarBoardAIManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v55; // x21
  struct WarBoardAIManager___c_StaticFields *v56; // x0
  UnityEngine_WaitWhile_o *v57; // x21
  Il2CppObject **v58; // x19
  bool result; // w0
  struct System_Collections_IEnumerator_o *v60; // x21
  System_Collections_IEnumerator_c *v61; // x8
  unsigned __int64 v62; // x10
  System_Collections_IEnumerator_c **v63; // x11
  __int64 v64; // x0
  __int64 v65; // x0
  __int64 v66; // x3
  struct System_Collections_IEnumerator_o *v67; // x22
  System_Collections_IEnumerator_c *v68; // x8
  WarBoardAIManager__Execute_d__12_o *v69; // x21
  unsigned __int64 v70; // x10
  System_Collections_IEnumerator_c **v71; // x11
  __int64 v72; // x0
  __int64 v73; // x3
  __int64 v74; // x0
  System_Collections_IEnumerator_o *v75; // x22
  float realtimeSinceStartup; // s0
  Il2CppObject **p__2__current; // x19
  int v78; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v81; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v84; // x3
  System_Collections_Generic_IEnumerable_T__o *v85; // x21
  WarBoardAIManager___c_c *v86; // x0
  struct WarBoardAIManager___c_StaticFields *v87; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_4; // x22
  Il2CppObject *v89; // x23
  struct WarBoardAIManager___c_StaticFields *v90; // x0
  struct WarBoardAIManager___c__DisplayClass12_0_o *v91; // x8
  struct System_Collections_IEnumerator_o *v92; // x21
  System_Collections_IEnumerator_c *v93; // x8
  unsigned __int64 v94; // x10
  System_Collections_IEnumerator_c **v95; // x11
  __int64 v96; // x0
  float v97; // s0
  System_Collections_IEnumerator_o *v98; // x0
  WarBoardAIManager__Execute_d__12_o *v99; // x0
  const MethodInfo *v100; // x1

  v3 = this;
  if ( (byte_41856F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_WarBoardPieceData___ctor__, method);
    sub_B2C35C(&System_Action_WarBoardPieceData__TypeInfo, v4);
    sub_B2C35C(&Method_BasicHelper_ForEach_WarBoardPieceData___, v5);
    sub_B2C35C(&bool_TypeInfo, v6);
    sub_B2C35C(&DefenseAreaData_TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v10);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v11);
    sub_B2C35C(&System_Func_bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v13);
    sub_B2C35C(&Method_System_Func_WarBoardAI__bool___ctor__, v14);
    sub_B2C35C(&System_Func_WarBoardAI__bool__TypeInfo, v15);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v16);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B2C35C(&Method_WarBoardAIManager___c__Execute_b__12_1__, v20);
    sub_B2C35C(&Method_WarBoardAIManager___c__Execute_b__12_3__, v21);
    sub_B2C35C(&Method_WarBoardAIManager___c__Execute_b__12_4__, v22);
    sub_B2C35C(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v23);
    sub_B2C35C(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v24);
    sub_B2C35C(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v25);
    sub_B2C35C(&WarBoardAIManager___c_TypeInfo, v26);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v27);
    this = (WarBoardAIManager__Execute_d__12_o *)sub_B2C35C(&WarBoardManager_TypeInfo, v28);
    byte_41856F2 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v30 = (Il2CppObject *)sub_B2C42C(WarBoardAIManager___c__DisplayClass12_0_TypeInfo);
      System_Object___ctor(v30, 0LL);
      v3->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v30;
      sub_B2C2F8(&v3->fields.__8__1, v30);
      _8__1 = v3->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_132;
      _8__1->fields.forceId = v3->fields.forceId;
      v32 = v3->fields.__8__1;
      if ( !v32 )
        goto LABEL_132;
      v32->fields.groupId = v3->fields.groupId;
      if ( !_4__this )
        goto LABEL_132;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v34 = (Il2CppObject *)v3->fields.__8__1;
      v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardAI__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v35,
        v34,
        Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardAI__bool___ctor__);
      v36 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              warBoardAIList,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      v3->fields._ai_5__2 = (struct WarBoardAI_o *)v36;
      sub_B2C2F8(&v3->fields._ai_5__2, v36);
      if ( !v3->fields._ai_5__2 )
        return 0;
      goto LABEL_111;
    case 1:
      v39 = v3->fields.__8__1;
      v3->fields.__1__state = -1;
      if ( !v39 || !_4__this )
        goto LABEL_132;
      WarBoardAIManager__StartThink(_4__this, v39->fields.forceId, v39->fields.groupId, 0LL);
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
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
        if ( this )
        {
          if ( WarBoardData__IsWin((WarBoardData_o *)this, 0LL) )
            return 0;
          this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
              sub_B2C2F8(p__2__current, 0LL);
              v78 = 5;
              goto LABEL_72;
            }
            v91 = v3->fields.__8__1;
            if ( v91 )
            {
              WarBoardAIManager__StartThink(_4__this, v91->fields.forceId, v91->fields.groupId, 0LL);
              goto LABEL_110;
            }
          }
        }
      }
LABEL_132:
      sub_B2C434(this, method);
    }
    do
    {
LABEL_110:
      v3->fields._actPieces_5__4 = 0LL;
      sub_B2C2F8(&v3->fields._actPieces_5__4, 0LL);
      v3->fields._exe_5__5 = 0LL;
      sub_B2C2F8(&v3->fields._exe_5__5, 0LL);
LABEL_111:
      if ( !_4__this->fields.exec )
        return 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)this, 0LL) )
      {
        v52 = WarBoardAIManager___c_TypeInfo;
        if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v52 = WarBoardAIManager___c_TypeInfo;
        }
        static_fields = v52->static_fields;
        _9__12_1 = static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v52);
            static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          }
          v55 = (Il2CppObject *)static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            _9__12_1,
            v55,
            Method_WarBoardAIManager___c__Execute_b__12_1__,
            (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
          v56 = WarBoardAIManager___c_TypeInfo->static_fields;
          v56->__9__12_1 = _9__12_1;
          sub_B2C2F8(&v56->__9__12_1, _9__12_1);
        }
        v57 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v57, _9__12_1, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v57;
        v58 = &v3->fields.__2__current;
        sub_B2C2F8(v58, v57);
        result = 1;
        *((_DWORD *)v58 - 2) = 1;
        return result;
      }
LABEL_21:
      v3->fields._isNextPhase_5__3 = 0;
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 10, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !this )
        goto LABEL_132;
      this = *(WarBoardAIManager__Execute_d__12_o **)&this[4].fields.__1__state;
      if ( !this )
        goto LABEL_132;
      this = (WarBoardAIManager__Execute_d__12_o *)WarBoardData__GetAlivePieces((WarBoardData_o *)this, 0LL);
      v40 = (Il2CppObject *)v3->fields.__8__1;
      if ( !v40 )
        goto LABEL_132;
      monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v40[1].monitor;
      v42 = this;
      if ( !monitor )
      {
        monitor = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          monitor,
          v40,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v40[1].monitor = monitor;
        sub_B2C2F8(&v40[1].monitor, monitor);
      }
      v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v42,
              (System_Func_TSource__bool__o *)monitor,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v44 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v43,
              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      v3->fields._actPieces_5__4 = (struct WarBoardPieceData_array *)v44;
      sub_B2C2F8(&v3->fields._actPieces_5__4, v44);
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)v3->fields._actPieces_5__4;
      v46 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v46 = WarBoardAIManager___c_TypeInfo;
      }
      v47 = v46->static_fields;
      _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v47->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v47 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v49 = (Il2CppObject *)v47->__9;
        _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_3,
          v49,
          Method_WarBoardAIManager___c__Execute_b__12_3__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_WarBoardPieceData___ctor__);
        v50 = WarBoardAIManager___c_TypeInfo->static_fields;
        v50->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_B2C2F8(&v50->__9__12_3, _9__12_3);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( (BYTE3(DefenseAreaData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefenseAreaData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      }
      DefenseAreaData__ClearCache(0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)v3->fields._ai_5__2;
      if ( !this )
        goto LABEL_132;
      v51 = WarBoardAI__Think((WarBoardAI_o *)this, 0LL);
      v3->fields._exe_5__5 = v51;
      sub_B2C2F8(&v3->fields._exe_5__5, v51);
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
          v81 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v81;
            p_offset += 4;
            if ( v81 >= *(unsigned __int16 *)&exe_5__5->klass->_2.bitflags1 )
              goto LABEL_80;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_80:
          p_method = sub_AC5258(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                                                       exe_5__5,
                                                       *(_QWORD *)(p_method + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_83;
        v60 = v3->fields._exe_5__5;
        if ( !v60 )
          goto LABEL_132;
        v61 = v60->klass;
        if ( *(_WORD *)&v60->klass->_2.bitflags1 )
        {
          v62 = 0LL;
          v63 = (System_Collections_IEnumerator_c **)&v61->_1.interfaceOffsets->offset;
          while ( *(v63 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v62;
            v63 += 2;
            if ( v62 >= *(unsigned __int16 *)&v60->klass->_2.bitflags1 )
              goto LABEL_55;
          }
          v64 = (__int64)&v61->vtable[*(_DWORD *)v63 + 1].method;
        }
        else
        {
LABEL_55:
          v64 = sub_AC5258(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL, v84);
        }
        v65 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v64)(
                v60,
                *(_QWORD *)(v64 + 8));
        this = (WarBoardAIManager__Execute_d__12_o *)sub_B2C41C(v65, System_Collections_IEnumerator_TypeInfo);
        v67 = v3->fields._exe_5__5;
        if ( !v67 )
          goto LABEL_132;
        v68 = v67->klass;
        v69 = this;
        if ( *(_WORD *)&v67->klass->_2.bitflags1 )
        {
          v70 = 0LL;
          v71 = (System_Collections_IEnumerator_c **)&v68->_1.interfaceOffsets->offset;
          while ( *(v71 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v70;
            v71 += 2;
            if ( v70 >= *(unsigned __int16 *)&v67->klass->_2.bitflags1 )
              goto LABEL_62;
          }
          v72 = (__int64)&v68->vtable[*(_DWORD *)v71 + 1].method;
        }
        else
        {
LABEL_62:
          v72 = sub_AC5258(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL, v66);
        }
        this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v72)(
                                                       v67,
                                                       *(_QWORD *)(v72 + 8));
        if ( v69 )
        {
          v74 = sub_B2C41C(this, System_Collections_IEnumerator_TypeInfo);
          v3->fields._enumeratorChild_5__7 = (struct System_Collections_IEnumerator_o *)v74;
          p_enumeratorChild_5__7 = &v3->fields._enumeratorChild_5__7;
          sub_B2C2F8(&v3->fields._enumeratorChild_5__7, v74);
          while ( 1 )
          {
LABEL_66:
            v75 = *p_enumeratorChild_5__7;
            if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            }
            if ( !WarBoardManager__IEnumeratorExecute(v75, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              v3->fields.__2__current = 0LL;
              p__2__current = &v3->fields.__2__current;
              *((float *)p__2__current + 16) = realtimeSinceStartup;
              sub_B2C2F8(p__2__current, 0LL);
              v78 = 2;
              goto LABEL_72;
            }
          }
          *p_enumeratorChild_5__7 = 0LL;
          sub_B2C2F8(p_enumeratorChild_5__7, 0LL);
          goto LABEL_74;
        }
        if ( this && (System_Boolean_c *)this->klass == bool_TypeInfo )
          break;
LABEL_74:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._prevTime_5__6) >= 0.1 )
        {
          v97 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v3->fields.__2__current = 0LL;
          p__2__current = &v3->fields.__2__current;
          *((float *)p__2__current + 16) = v97;
          sub_B2C2F8(p__2__current, 0LL);
          v78 = 3;
          goto LABEL_72;
        }
      }
      v92 = v3->fields._exe_5__5;
      if ( !v92 )
        goto LABEL_132;
      v93 = v92->klass;
      if ( *(_WORD *)&v92->klass->_2.bitflags1 )
      {
        v94 = 0LL;
        v95 = (System_Collections_IEnumerator_c **)&v93->_1.interfaceOffsets->offset;
        while ( *(v95 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v94;
          v95 += 2;
          if ( v94 >= *(unsigned __int16 *)&v92->klass->_2.bitflags1 )
            goto LABEL_120;
        }
        v96 = (__int64)&v93->vtable[*(_DWORD *)v95 + 1].method;
      }
      else
      {
LABEL_120:
        v96 = sub_AC5258(v3->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL, v73);
      }
      this = (WarBoardAIManager__Execute_d__12_o *)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v96)(
                                                     v92,
                                                     *(_QWORD *)(v96 + 8));
      if ( !this )
        goto LABEL_132;
      if ( this->klass->_1.element_class != bool_TypeInfo->_1.element_class )
      {
        v99 = (WarBoardAIManager__Execute_d__12_o *)sub_B2C728(this);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v99,
                                  v100);
      }
      v3->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0(this);
LABEL_83:
      v85 = (System_Collections_Generic_IEnumerable_T__o *)v3->fields._actPieces_5__4;
      v86 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v86 = WarBoardAIManager___c_TypeInfo;
      }
      v87 = v86->static_fields;
      _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v87->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( (BYTE3(v86->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v86);
          v87 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v89 = (Il2CppObject *)v87->__9;
        _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_WarBoardPieceData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_4,
          v89,
          Method_WarBoardAIManager___c__Execute_b__12_4__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_WarBoardPieceData___ctor__);
        v90 = WarBoardAIManager___c_TypeInfo->static_fields;
        v90->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_B2C2F8(&v90->__9__12_4, _9__12_4);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v85,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_132;
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
      if ( v3->fields._isNextPhase_5__3 )
      {
        this = (WarBoardAIManager__Execute_d__12_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v98 = WarBoardAIManager__Wait(_4__this, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v98;
  p__2__current = &v3->fields.__2__current;
  sub_B2C2F8(p__2__current, v98);
  v78 = 4;
LABEL_72:
  *((_DWORD *)p__2__current - 2) = v78;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitWhile_o *v10; // x20
  int32_t v11; // w8

  if ( (byte_41856F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardAIManager__Wait_b__8_0__, v5);
    byte_41856F3 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      _4__this,
      Method_WarBoardAIManager__Wait_b__8_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v10 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v10, v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v10;
    sub_B2C2F8(&this->fields.__2__current, v10);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct WarBoardAIManager___c_StaticFields *static_fields; // x0

  if ( (byte_41856F0 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAIManager___c_TypeInfo, v1);
    byte_41856F0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardAIManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardAIManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_41856F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_41856F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}