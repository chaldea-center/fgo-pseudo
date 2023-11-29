void __fastcall WarBoardAIManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v25; // x19
  struct WarBoardAIManager_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v37; // x19
  struct WarBoardAIManager_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v49; // x19
  struct WarBoardAIManager_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_40F8BD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo, v11);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v12);
    byte_40F8BD6 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardPieceData__TypeInfo,
                                                                                                   v1,
                                                                                                   v2,
                                                                                                   v3,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData___ctor__);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v13;
  sub_B16F98(static_fields, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  v25 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)sub_B170CC(
                                                                                            System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TypeInfo,
                                                                                            v21,
                                                                                            v22,
                                                                                            v23,
                                                                                            v24);
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget____ctor(
    v25,
    (const MethodInfo_2D65284 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData___ctor__);
  v26 = WarBoardAIManager_TypeInfo->static_fields;
  v26->dicUniqueIndexPiece = (struct System_Collections_Generic_Dictionary_uint__WarBoardPieceData__o *)v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v26->dicUniqueIndexPiece,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardSquareData__TypeInfo,
                                                                                                   v33,
                                                                                                   v34,
                                                                                                   v35,
                                                                                                   v36);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v37,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData___ctor__);
  v38 = WarBoardAIManager_TypeInfo->static_fields;
  v38->dicIndexSquare = (struct System_Collections_Generic_Dictionary_int__WarBoardSquareData__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v38->dicIndexSquare,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v49 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__WarBoardItemData__TypeInfo,
                                                                                                   v45,
                                                                                                   v46,
                                                                                                   v47,
                                                                                                   v48);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v49,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData___ctor__);
  v50 = WarBoardAIManager_TypeInfo->static_fields;
  v50->dicIndexItem = (struct System_Collections_Generic_Dictionary_int__WarBoardItemData__o *)v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v50->dicIndexItem,
    (System_Int32_array **)v49,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
}


void __fastcall WarBoardAIManager___ctor(WarBoardAIManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8BD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAI___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardAI__TypeInfo, v6);
    byte_40F8BD5 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_WarBoardAI__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardAI___ctor__);
  this->fields.warBoardAIList = (struct System_Collections_Generic_List_WarBoardAI__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardAIManager__AIEnd(WarBoardAIManager_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *monitor; // x8
  __int64 v7; // x19
  int v8; // w8
  unsigned int v9; // w20
  WarBoardPieceData_o *v10; // x0

  if ( (byte_40F8BC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8BC7 = 1;
  }
  this->fields.exec = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_12;
  v7 = monitor[6];
  if ( !v7 )
    goto LABEL_12;
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v8 )
      {
        sub_B17100(Instance, v4, v5);
        sub_B170A0();
      }
      v10 = *(WarBoardPieceData_o **)(v7 + 8LL * (int)v9 + 32);
      if ( !v10 )
        break;
      WarBoardPieceData__ClearPrevAiRoute(v10, 0LL);
      v8 = *(_DWORD *)(v7 + 24);
      if ( (int)++v9 >= v8 )
        return;
    }
LABEL_12:
    sub_B170D4();
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x22
  WarBoardData_SquareRangeSearch_o *v22; // x0
  const MethodInfo *v23; // x3
  WarBoardAIRoute_o *fields; // x0

  if ( (byte_40F8BD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Func_WarBoardAI__bool___ctor__, v11);
    sub_B16FFC(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__, v13);
    sub_B16FFC(&WarBoardAIManager___c__DisplayClass28_0_TypeInfo, v14);
    byte_40F8BD3 = 1;
  }
  v15 = (WarBoardAIManager___c__DisplayClass28_0_o *)sub_B170CC(
                                                       WarBoardAIManager___c__DisplayClass28_0_TypeInfo,
                                                       *(_QWORD *)&forceId,
                                                       *(_QWORD *)&groupId,
                                                       *(_QWORD *)&aiId,
                                                       *(_QWORD *)&pieceIndex);
  WarBoardAIManager___c__DisplayClass28_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v16,
                                                                             v17,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass28_0__AddReinforcementsAI_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v22 )
  {
    fields = (WarBoardAIRoute_o *)v22->fields;
    if ( fields )
    {
      WarBoardAIRoute__AddPiecePersonalityDic(fields, aiId, pieceIndex, v23);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall WarBoardAIManager__CreateAI(
        WarBoardAIManager_o *this,
        WarBoardStageNpcEntity_o *npc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  WarBoardAI_o *v8; // x21
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x0

  if ( (byte_40F8BC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAI__Add__, npc);
    sub_B16FFC(&WarBoardAI_TypeInfo, v7);
    byte_40F8BC6 = 1;
  }
  v8 = (WarBoardAI_o *)sub_B170CC(WarBoardAI_TypeInfo, npc, method, v3, v4);
  WarBoardAI___ctor(v8, npc, v9);
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)warBoardAIList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardAI__Add__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Execute(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8BCB & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId);
    byte_40F8BCB = 1;
  }
  v8 = sub_B170CC(WarBoardAIManager__Execute_d__12_TypeInfo, *(_QWORD *)&forceId, *(_QWORD *)&groupId, method, v4);
  WarBoardAIManager__Execute_d__12___ctor((WarBoardAIManager__Execute_d__12_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 32) = forceId;
  *(_DWORD *)(v8 + 36) = groupId;
  return (System_Collections_IEnumerator_o *)v8;
}


float __fastcall WarBoardAIManager__GetBreakPoint(WarBoardPieceData_o *piece, const MethodInfo *method)
{
  if ( !piece )
    sub_B170D4();
  return (float)(piece->fields._breakPoint_k__BackingField + 1)
       / (float)(piece->fields._breakPointMax_k__BackingField + 1);
}


System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *__fastcall WarBoardAIManager__GetEnemyPiece(
        const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardAIManager_c *v2; // x0

  if ( (byte_40F8BCD & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v1);
    byte_40F8BCD = 1;
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

  if ( (byte_40F8BCE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__, method);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v3);
    byte_40F8BCE = 1;
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
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicSquareIndexEnemyPiece,
         squareIndex,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_40F8BD1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__, method);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v3);
    byte_40F8BD1 = 1;
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
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexItem,
         squareIndex,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__TryGetValue__) )
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

  if ( (byte_40F8BCF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__, method);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v3);
    byte_40F8BCF = 1;
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
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
         dicUniqueIndexPiece,
         uniqueIndex,
         &value,
         (const MethodInfo_2D67B5C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__TryGetValue__) )
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

  if ( (byte_40F8BD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__, method);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v3);
    byte_40F8BD0 = 1;
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
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         dicIndexSquare,
         squareIndex,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__TryGetValue__) )
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
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8BC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__, npcList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardAI__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__, v8);
    byte_40F8BC5 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  warBoardAIList = this->fields.warBoardAIList;
  if ( !warBoardAIList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)warBoardAIList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_WarBoardAI__Clear__),
        !npcList) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)npcList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardStageNpcEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    if ( HIDWORD(v11.fields.current[1].klass) || LODWORD(v11.fields.current[1].monitor) )
      WarBoardAIManager__CreateAI(this, (WarBoardStageNpcEntity_o *)v11.fields.current, v10);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardStageNpcEntity__Dispose__);
}


bool __fastcall WarBoardAIManager__IsAllyPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B170D4();
  return one->fields._forceId_k__BackingField == two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEnemyBlock(int32_t squareIndex, const MethodInfo *method)
{
  if ( (byte_40F8BD2 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIManager_TypeInfo, method);
    byte_40F8BD2 = 1;
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
    sub_B170D4();
  return one->fields._forceId_k__BackingField != two->fields._forceId_k__BackingField;
}


bool __fastcall WarBoardAIManager__IsEqualPiece(
        WarBoardPieceData_o *one,
        WarBoardPieceData_o *two,
        const MethodInfo *method)
{
  if ( !one || !two )
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardAIManager___c__DisplayClass9_0_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x22
  WarBoardData_SquareRangeSearch_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_40F8BC9 & 1) == 0 )
  {
    sub_B16FFC(&AStarSearch_TypeInfo, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v8);
    sub_B16FFC(&Method_System_Func_WarBoardAI__bool___ctor__, v9);
    sub_B16FFC(&System_Func_WarBoardAI__bool__TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__, v11);
    sub_B16FFC(&WarBoardAIManager___c__DisplayClass9_0_TypeInfo, v12);
    byte_40F8BC9 = 1;
  }
  v13 = (WarBoardAIManager___c__DisplayClass9_0_o *)sub_B170CC(
                                                      WarBoardAIManager___c__DisplayClass9_0_TypeInfo,
                                                      *(_QWORD *)&forceId,
                                                      *(_QWORD *)&groupId,
                                                      method,
                                                      v4);
  WarBoardAIManager___c__DisplayClass9_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.forceId = forceId;
  v13->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v14,
                                                                             v15,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_WarBoardAIManager___c__DisplayClass9_0__StartAIPhase_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v20 )
  {
    this->fields.exec = 1;
    LOBYTE(v20[1].monitor) = 0;
    if ( (BYTE3(AStarSearch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AStarSearch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AStarSearch_TypeInfo);
    AStarSearch__DetourCacheClear(0LL);
    WarBoardAIManager__StartThink(this, v13->fields.forceId, v13->fields.groupId, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAIManager__StartThink(
        WarBoardAIManager_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  WarBoardAIManager___c__DisplayClass11_0_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x22
  UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_o *v29; // x0
  const MethodInfo *v30; // x1
  WarBoardAIRoute_o *m_messageTypeId; // x0
  WarBoardAIManager_c *v32; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *dicUniqueIndexPiece; // x0
  struct System_Collections_Generic_Dictionary_int__WarBoardPieceData__o *dicSquareIndexEnemyPiece; // x0
  WebViewManager_o *Instance; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  _QWORD *monitor; // x8
  __int64 v39; // x24
  int v40; // w8
  unsigned int v41; // w25
  __int64 v42; // x21
  WarBoardAIManager_c *v43; // x0
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *v44; // x0
  WarBoardAIManager_c *v45; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v46; // x0
  WarBoardAIManager_c *v47; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *dicIndexSquare; // x0
  _QWORD *v49; // x8
  __int64 v50; // x24
  int v51; // w8
  unsigned int v52; // w25
  WarBoardAIManager_c *v53; // x0
  __int64 v54; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v55; // x0
  WarBoardAIManager_c *v56; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *dicIndexItem; // x0
  const MethodInfo *v58; // x3
  _QWORD *v59; // x8
  __int64 v60; // x23
  int v61; // w8
  unsigned int v62; // w24
  WarBoardAIManager_c *v63; // x0
  __int64 v64; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v65; // x0
  struct System_Collections_IEnumerator_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_40F8BCA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___, v15);
    sub_B16FFC(&Method_System_Func_WarBoardAI__bool___ctor__, v16);
    sub_B16FFC(&System_Func_WarBoardAI__bool__TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18);
    sub_B16FFC(&Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__, v19);
    sub_B16FFC(&WarBoardAIManager___c__DisplayClass11_0_TypeInfo, v20);
    sub_B16FFC(&WarBoardAIManager_TypeInfo, v21);
    byte_40F8BCA = 1;
  }
  v22 = (WarBoardAIManager___c__DisplayClass11_0_o *)sub_B170CC(
                                                       WarBoardAIManager___c__DisplayClass11_0_TypeInfo,
                                                       *(_QWORD *)&forceId,
                                                       *(_QWORD *)&groupId,
                                                       method,
                                                       v4);
  WarBoardAIManager___c__DisplayClass11_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_65;
  v22->fields.forceId = forceId;
  v22->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v23,
                                                                             v24,
                                                                             v25,
                                                                             v26);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v22,
    Method_WarBoardAIManager___c__DisplayClass11_0__StartThink_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v29 = System_Linq_Enumerable__SingleOrDefault_PlayerEditorConnectionEvents_MessageTypeSubscribers_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_19C3BB0 *)Method_System_Linq_Enumerable_SingleOrDefault_WarBoardAI___);
  if ( !v29 )
    return;
  this->fields.isPause = 0;
  m_messageTypeId = (WarBoardAIRoute_o *)v29->fields.m_messageTypeId;
  if ( !m_messageTypeId )
    goto LABEL_65;
  WarBoardAIRoute__Clear(m_messageTypeId, v30);
  v32 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v32 = WarBoardAIManager_TypeInfo;
  }
  dicUniqueIndexPiece = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v32->static_fields->dicUniqueIndexPiece;
  if ( !dicUniqueIndexPiece )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Clear(
    dicUniqueIndexPiece,
    (const MethodInfo_2D66014 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Clear__);
  dicSquareIndexEnemyPiece = WarBoardAIManager_TypeInfo->static_fields->dicSquareIndexEnemyPiece;
  if ( !dicSquareIndexEnemyPiece )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)dicSquareIndexEnemyPiece,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Clear__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  monitor = Instance[4].monitor;
  if ( !monitor )
    goto LABEL_65;
  v39 = monitor[6];
  if ( !v39 )
    goto LABEL_65;
  v40 = *(_DWORD *)(v39 + 24);
  if ( v40 >= 1 )
  {
    v41 = 0;
    while ( v41 < v40 )
    {
      v42 = *(_QWORD *)(v39 + 8LL * (int)v41 + 32);
      if ( !v42 )
        goto LABEL_65;
      if ( !*(_BYTE *)(v42 + 60) )
      {
        v43 = WarBoardAIManager_TypeInfo;
        if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
          v43 = WarBoardAIManager_TypeInfo;
        }
        v44 = (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)v43->static_fields->dicUniqueIndexPiece;
        if ( !v44 )
          goto LABEL_65;
        System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___Add(
          v44,
          *(_DWORD *)(v42 + 44),
          (WarBoardAIRoute_PutSquareTarget_o *)v42,
          (const MethodInfo_2D65E38 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardPieceData__Add__);
        if ( *(_DWORD *)(v42 + 20) != v22->fields.forceId )
        {
          v45 = WarBoardAIManager_TypeInfo;
          if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
            v45 = WarBoardAIManager_TypeInfo;
          }
          v46 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v45->static_fields->dicSquareIndexEnemyPiece;
          if ( !v46 )
            goto LABEL_65;
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v46,
            *(_DWORD *)(v42 + 64),
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v42,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardPieceData__Add__);
        }
      }
      v40 = *(_DWORD *)(v39 + 24);
      if ( (int)++v41 >= v40 )
        goto LABEL_30;
    }
LABEL_66:
    sub_B17100(Instance, v36, v37);
    sub_B170A0();
  }
LABEL_30:
  v47 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v47 = WarBoardAIManager_TypeInfo;
  }
  dicIndexSquare = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v47->static_fields->dicIndexSquare;
  if ( !dicIndexSquare )
    goto LABEL_65;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    dicIndexSquare,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Clear__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  v49 = Instance[4].monitor;
  if ( !v49 )
    goto LABEL_65;
  v50 = v49[7];
  if ( !v50 )
    goto LABEL_65;
  v51 = *(_DWORD *)(v50 + 24);
  if ( v51 >= 1 )
  {
    v52 = 0;
    while ( v52 < v51 )
    {
      v53 = WarBoardAIManager_TypeInfo;
      v54 = *(_QWORD *)(v50 + 8LL * (int)v52 + 32);
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        v53 = WarBoardAIManager_TypeInfo;
      }
      if ( !v54 )
        goto LABEL_65;
      v55 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v53->static_fields->dicIndexSquare;
      if ( !v55 )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v55,
        *(_DWORD *)(v54 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v54,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardSquareData__Add__);
      v51 = *(_DWORD *)(v50 + 24);
      if ( (int)++v52 >= v51 )
        goto LABEL_46;
    }
    goto LABEL_66;
  }
LABEL_46:
  v56 = WarBoardAIManager_TypeInfo;
  if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
    v56 = WarBoardAIManager_TypeInfo;
  }
  dicIndexItem = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v56->static_fields->dicIndexItem;
  if ( !dicIndexItem
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
          dicIndexItem,
          (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Clear__),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v59 = Instance[4].monitor) == 0LL
    || (v60 = v59[9]) == 0 )
  {
LABEL_65:
    sub_B170D4();
  }
  v61 = *(_DWORD *)(v60 + 24);
  if ( v61 >= 1 )
  {
    v62 = 0;
    while ( v62 < v61 )
    {
      v63 = WarBoardAIManager_TypeInfo;
      v64 = *(_QWORD *)(v60 + 8LL * (int)v62 + 32);
      if ( (BYTE3(WarBoardAIManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager_TypeInfo);
        v63 = WarBoardAIManager_TypeInfo;
      }
      if ( !v64 )
        goto LABEL_65;
      v65 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v63->static_fields->dicIndexItem;
      if ( !v65 )
        goto LABEL_65;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v65,
        *(_DWORD *)(v64 + 16),
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v64,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__WarBoardItemData__Add__);
      v61 = *(_DWORD *)(v60 + 24);
      if ( (int)++v62 >= v61 )
        goto LABEL_62;
    }
    goto LABEL_66;
  }
LABEL_62:
  if ( !this->fields.executeTask )
  {
    v66 = WarBoardAIManager__Execute(this, v22->fields.forceId, v22->fields.groupId, v58);
    this->fields.executeTask = v66;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.executeTask,
      (System_Int32_array **)v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
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

  if ( (byte_40F8BCC & 1) == 0 )
  {
    sub_B16FFC(&WarBoardManager_TypeInfo, method);
    byte_40F8BCC = 1;
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
      sub_B16F98(p_executeTask, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_WarBoardAI__o *warBoardAIList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x22
  WarBoardData_SquareRangeSearch_o *v22; // x0
  const MethodInfo *v23; // x3
  WarBoardAIRoute_o *fields; // x0

  if ( (byte_40F8BD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Func_WarBoardAI__bool___ctor__, v11);
    sub_B16FFC(&System_Func_WarBoardAI__bool__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__, v13);
    sub_B16FFC(&WarBoardAIManager___c__DisplayClass29_0_TypeInfo, v14);
    byte_40F8BD4 = 1;
  }
  v15 = (WarBoardAIManager___c__DisplayClass29_0_o *)sub_B170CC(
                                                       WarBoardAIManager___c__DisplayClass29_0_TypeInfo,
                                                       *(_QWORD *)&forceId,
                                                       *(_QWORD *)&groupId,
                                                       *(_QWORD *)&aiId,
                                                       *(_QWORD *)&pieceIndex);
  WarBoardAIManager___c__DisplayClass29_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  v15->fields.forceId = forceId;
  v15->fields.groupId = groupId;
  warBoardAIList = this->fields.warBoardAIList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardAI__bool__TypeInfo,
                                                                             v16,
                                                                             v17,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardAIManager___c__DisplayClass29_0__UpdateAiId_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAI__bool___ctor__);
  v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)warBoardAIList,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
  if ( v22 )
  {
    fields = (WarBoardAIRoute_o *)v22->fields;
    if ( fields )
    {
      WarBoardAIRoute__UpdatePiecePersonalityDic(fields, aiId, pieceIndex, v23);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAIManager__Wait(
        WarBoardAIManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8BC8 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIManager__Wait_d__8_TypeInfo, method);
    byte_40F8BC8 = 1;
  }
  v6 = sub_B170CC(WarBoardAIManager__Wait_d__8_TypeInfo, method, v2, v3, v4);
  WarBoardAIManager__Wait_d__8___ctor((WarBoardAIManager__Wait_d__8_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  struct WarBoardAIManager_o *_4__this; // x20
  Il2CppObject *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  struct WarBoardAIManager___c__DisplayClass12_0_o *_8__1; // x8
  struct WarBoardAIManager___c__DisplayClass12_0_o *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *warBoardAIList; // x21
  Il2CppObject *v49; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x23
  struct WarBoardAI_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct WarBoardAI_o **p_ai_5__2; // x21
  BattleServantConfConponent_o *p_enumeratorChild_5__7; // x21
  struct WarBoardAIManager___c__DisplayClass12_0_o *v60; // x8
  WebViewManager_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  CommonUI_o *v66; // x0
  CommonUI_o *v67; // x0
  WebViewManager_o *v68; // x0
  WarBoardData_o *v69; // x0
  WarBoardPieceData_array *AlivePieces; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  struct WarBoardAIManager___c__DisplayClass12_0_o *v75; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  struct WarBoardPieceData_array *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  System_Collections_Generic_IEnumerable_T__o *actPieces_5__4; // x21
  WarBoardAIManager___c_c *v97; // x0
  struct WarBoardAIManager___c_StaticFields *v98; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_3; // x22
  Il2CppObject *v100; // x23
  struct WarBoardAIManager___c_StaticFields *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  WarBoardAI_o *ai_5__2; // x0
  struct System_Collections_IEnumerator_o *v109; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  WarBoardAIManager___c_c *v116; // x0
  struct WarBoardAIManager___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__12_1; // x20
  Il2CppObject *v119; // x21
  struct WarBoardAIManager___c_StaticFields *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  UnityEngine_WaitWhile_o *v127; // x21
  Il2CppObject **v128; // x19
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  bool result; // w0
  struct System_Collections_IEnumerator_o *v136; // x21
  System_Collections_IEnumerator_c *v137; // x8
  unsigned __int64 v138; // x10
  System_Collections_IEnumerator_c **v139; // x11
  __int64 v140; // x0
  __int64 v141; // x0
  __int64 v142; // x0
  struct System_Collections_IEnumerator_o *v143; // x22
  System_Collections_IEnumerator_c *v144; // x8
  __int64 v145; // x21
  unsigned __int64 v146; // x10
  System_Collections_IEnumerator_c **v147; // x11
  __int64 v148; // x0
  System_Boolean_c **v149; // x0
  struct System_Collections_IEnumerator_o *v150; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Collections_IEnumerator_o *v157; // x22
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  float realtimeSinceStartup; // s0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  int v172; // w8
  struct System_Collections_IEnumerator_o *exe_5__5; // x21
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v175; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  System_Collections_Generic_IEnumerable_T__o *v182; // x21
  WarBoardAIManager___c_c *v183; // x0
  struct WarBoardAIManager___c_StaticFields *v184; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__12_4; // x22
  Il2CppObject *v186; // x23
  struct WarBoardAIManager___c_StaticFields *v187; // x0
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  CommonUI_o *v194; // x0
  CommonUI_o *v195; // x0
  WarBoardAI_o *v196; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WebViewManager_o *v199; // x0
  WarBoardData_o *v200; // x0
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  struct WarBoardAIManager___c__DisplayClass12_0_o *v207; // x8
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  struct System_Collections_IEnumerator_o *v214; // x21
  System_Collections_IEnumerator_c *v215; // x8
  unsigned __int64 v216; // x10
  System_Collections_IEnumerator_c **v217; // x11
  __int64 v218; // x0
  float v219; // s0
  System_String_array **v220; // x2
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  Il2CppObject *v226; // x0
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  WebViewManager_o *v233; // x0
  __int64 v234; // x0
  WarBoardAIManager__Execute_d__12_o *v235; // x0
  const MethodInfo *v236; // x1

  if ( (byte_40F79CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_WarBoardPieceData___ctor__, method);
    sub_B16FFC(&System_Action_WarBoardPieceData__TypeInfo, v9);
    sub_B16FFC(&Method_BasicHelper_ForEach_WarBoardPieceData___, v10);
    sub_B16FFC(&bool_TypeInfo, v11);
    sub_B16FFC(&DefenseAreaData_TypeInfo, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v15);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v16);
    sub_B16FFC(&System_Func_bool__TypeInfo, v17);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v18);
    sub_B16FFC(&Method_System_Func_WarBoardAI__bool___ctor__, v19);
    sub_B16FFC(&System_Func_WarBoardAI__bool__TypeInfo, v20);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v21);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B16FFC(&Method_WarBoardAIManager___c__Execute_b__12_1__, v25);
    sub_B16FFC(&Method_WarBoardAIManager___c__Execute_b__12_3__, v26);
    sub_B16FFC(&Method_WarBoardAIManager___c__Execute_b__12_4__, v27);
    sub_B16FFC(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__, v28);
    sub_B16FFC(&Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__, v29);
    sub_B16FFC(&WarBoardAIManager___c__DisplayClass12_0_TypeInfo, v30);
    sub_B16FFC(&WarBoardAIManager___c_TypeInfo, v31);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v32);
    sub_B16FFC(&WarBoardManager_TypeInfo, v33);
    byte_40F79CA = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v35 = (Il2CppObject *)sub_B170CC(WarBoardAIManager___c__DisplayClass12_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v35, 0LL);
      this->fields.__8__1 = (struct WarBoardAIManager___c__DisplayClass12_0_o *)v35;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__8__1,
        (System_Int32_array **)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      _8__1 = this->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_132;
      _8__1->fields.forceId = this->fields.forceId;
      v47 = this->fields.__8__1;
      if ( !v47 )
        goto LABEL_132;
      v47->fields.groupId = this->fields.groupId;
      if ( !_4__this )
        goto LABEL_132;
      warBoardAIList = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.warBoardAIList;
      v49 = (Il2CppObject *)this->fields.__8__1;
      v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_WarBoardAI__bool__TypeInfo,
                                                                                 v42,
                                                                                 v43,
                                                                                 v44,
                                                                                 v45);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v50,
        v49,
        Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardAI__bool___ctor__);
      v51 = (struct WarBoardAI_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     warBoardAIList,
                                     (System_Func_TSource__bool__o *)v50,
                                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardAI___);
      this->fields._ai_5__2 = v51;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._ai_5__2,
        (System_Int32_array **)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      if ( !this->fields._ai_5__2 )
        return 0;
      goto LABEL_111;
    case 1:
      v60 = this->fields.__8__1;
      this->fields.__1__state = -1;
      if ( !v60 || !_4__this )
        goto LABEL_132;
      WarBoardAIManager__StartThink(_4__this, v60->fields.forceId, v60->fields.groupId, 0LL);
      goto LABEL_21;
    case 2:
      p_enumeratorChild_5__7 = (BattleServantConfConponent_o *)&this->fields._enumeratorChild_5__7;
      this->fields.__1__state = -1;
      goto LABEL_66;
    case 3:
      this->fields.__1__state = -1;
      goto LABEL_75;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_132;
      if ( !_4__this->fields.exec )
        return 0;
      p_ai_5__2 = &this->fields._ai_5__2;
      break;
    case 5:
      this->fields.__1__state = -1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        monitor = (WarBoardData_o *)Instance[4].monitor;
        if ( monitor )
        {
          if ( WarBoardData__IsWin(monitor, 0LL) )
            return 0;
          v199 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v199 )
            goto LABEL_132;
          v200 = (WarBoardData_o *)v199[4].monitor;
          if ( !v200 )
            goto LABEL_132;
          if ( WarBoardData__IsLose(v200, 0LL) )
            return 0;
          if ( *p_ai_5__2 )
          {
            if ( !(*p_ai_5__2)->fields.isEndRoute )
            {
              this->fields.__2__current = 0LL;
              p__2__current = (BattleServantConfConponent_o *)&this->fields.__2__current;
              sub_B16F98(p__2__current, 0LL, v201, v202, v203, v204, v205, v206);
              v172 = 5;
              goto LABEL_72;
            }
            v207 = this->fields.__8__1;
            if ( v207 )
            {
              WarBoardAIManager__StartThink(_4__this, v207->fields.forceId, v207->fields.groupId, 0LL);
              goto LABEL_110;
            }
          }
        }
      }
LABEL_132:
      sub_B170D4();
    }
    do
    {
LABEL_110:
      this->fields._actPieces_5__4 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._actPieces_5__4, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._exe_5__5 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._exe_5__5, 0LL, v208, v209, v210, v211, v212, v213);
LABEL_111:
      if ( !_4__this->fields.exec )
        return 0;
      v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v61 )
        goto LABEL_132;
      if ( WarBoardManager__HasSchedule((WarBoardManager_o *)v61, 0LL) )
      {
        v116 = WarBoardAIManager___c_TypeInfo;
        if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
          v116 = WarBoardAIManager___c_TypeInfo;
        }
        static_fields = v116->static_fields;
        _9__12_1 = static_fields->__9__12_1;
        if ( !_9__12_1 )
        {
          if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v116);
            static_fields = WarBoardAIManager___c_TypeInfo->static_fields;
          }
          v119 = (Il2CppObject *)static_fields->__9;
          _9__12_1 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v62, v63, v64, v65);
          System_Func_bool____ctor(
            _9__12_1,
            v119,
            Method_WarBoardAIManager___c__Execute_b__12_1__,
            (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
          v120 = WarBoardAIManager___c_TypeInfo->static_fields;
          v120->__9__12_1 = _9__12_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v120->__9__12_1,
            (System_Int32_array **)_9__12_1,
            v121,
            v122,
            v123,
            v124,
            v125,
            v126);
        }
        v127 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v62, v63, v64, v65);
        UnityEngine_WaitWhile___ctor(v127, _9__12_1, 0LL);
        this->fields.__2__current = (Il2CppObject *)v127;
        v128 = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)v128,
          (System_Int32_array **)v127,
          v129,
          v130,
          v131,
          v132,
          v133,
          v134);
        result = 1;
        *((_DWORD *)v128 - 2) = 1;
        return result;
      }
LABEL_21:
      this->fields._isNextPhase_5__3 = 0;
      v66 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v66 )
        goto LABEL_132;
      CommonUI__SetConnect(v66, 1, 0LL);
      v67 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v67 )
        goto LABEL_132;
      CommonUI__SetLoadMode(v67, 10, 0LL);
      v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v68 )
        goto LABEL_132;
      v69 = (WarBoardData_o *)v68[4].monitor;
      if ( !v69 )
        goto LABEL_132;
      AlivePieces = WarBoardData__GetAlivePieces(v69, 0LL);
      v75 = this->fields.__8__1;
      if ( !v75 )
        goto LABEL_132;
      _9__2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v75->fields.__9__2;
      v77 = (System_Collections_Generic_IEnumerable_TSource__o *)AlivePieces;
      if ( !_9__2 )
      {
        _9__2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     v71,
                                                                                     v72,
                                                                                     v73,
                                                                                     v74);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          _9__2,
          (Il2CppObject *)v75,
          Method_WarBoardAIManager___c__DisplayClass12_0__Execute_b__2__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
        v75->fields.__9__2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v75->fields.__9__2,
          (System_Int32_array **)_9__2,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
      }
      v84 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v77,
              (System_Func_TSource__bool__o *)_9__2,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
      v85 = (struct WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v84,
                                                (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._actPieces_5__4 = v85;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._actPieces_5__4,
        (System_Int32_array **)v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      actPieces_5__4 = (System_Collections_Generic_IEnumerable_T__o *)this->fields._actPieces_5__4;
      v97 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v97 = WarBoardAIManager___c_TypeInfo;
      }
      v98 = v97->static_fields;
      _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v98->__9__12_3;
      if ( !_9__12_3 )
      {
        if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v97);
          v98 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v100 = (Il2CppObject *)v98->__9;
        _9__12_3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                          System_Action_WarBoardPieceData__TypeInfo,
                                                                                          v92,
                                                                                          v93,
                                                                                          v94,
                                                                                          v95);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_3,
          v100,
          Method_WarBoardAIManager___c__Execute_b__12_3__,
          (const MethodInfo_24B7310 *)Method_System_Action_WarBoardPieceData___ctor__);
        v101 = WarBoardAIManager___c_TypeInfo->static_fields;
        v101->__9__12_3 = (struct System_Action_WarBoardPieceData__o *)_9__12_3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v101->__9__12_3,
          (System_Int32_array **)_9__12_3,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        actPieces_5__4,
        (System_Action_T__o *)_9__12_3,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      if ( (BYTE3(DefenseAreaData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefenseAreaData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefenseAreaData_TypeInfo);
      }
      DefenseAreaData__ClearCache(0LL);
      ai_5__2 = this->fields._ai_5__2;
      if ( !ai_5__2 )
        goto LABEL_132;
      v109 = WarBoardAI__Think(ai_5__2, 0LL);
      this->fields._exe_5__5 = v109;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._exe_5__5,
        (System_Int32_array **)v109,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
      this->fields._prevTime_5__6 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      while ( 1 )
      {
LABEL_75:
        exe_5__5 = this->fields._exe_5__5;
        if ( !exe_5__5 )
          goto LABEL_132;
        klass = exe_5__5->klass;
        if ( *(_WORD *)&exe_5__5->klass->_2.bitflags1 )
        {
          v175 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v175;
            p_offset += 4;
            if ( v175 >= *(unsigned __int16 *)&exe_5__5->klass->_2.bitflags1 )
              goto LABEL_80;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_80:
          p_method = sub_AAFEF8(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))p_method)(
                exe_5__5,
                *(_QWORD *)(p_method + 8)) & 1) == 0 )
          goto LABEL_83;
        v136 = this->fields._exe_5__5;
        if ( !v136 )
          goto LABEL_132;
        v137 = v136->klass;
        if ( *(_WORD *)&v136->klass->_2.bitflags1 )
        {
          v138 = 0LL;
          v139 = (System_Collections_IEnumerator_c **)&v137->_1.interfaceOffsets->offset;
          while ( *(v139 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v138;
            v139 += 2;
            if ( v138 >= *(unsigned __int16 *)&v136->klass->_2.bitflags1 )
              goto LABEL_55;
          }
          v140 = (__int64)&v137->vtable[*(_DWORD *)v139 + 1].method;
        }
        else
        {
LABEL_55:
          v140 = sub_AAFEF8(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v141 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v140)(
                 v136,
                 *(_QWORD *)(v140 + 8));
        v142 = sub_B170BC(v141, System_Collections_IEnumerator_TypeInfo);
        v143 = this->fields._exe_5__5;
        if ( !v143 )
          goto LABEL_132;
        v144 = v143->klass;
        v145 = v142;
        if ( *(_WORD *)&v143->klass->_2.bitflags1 )
        {
          v146 = 0LL;
          v147 = (System_Collections_IEnumerator_c **)&v144->_1.interfaceOffsets->offset;
          while ( *(v147 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v146;
            v147 += 2;
            if ( v146 >= *(unsigned __int16 *)&v143->klass->_2.bitflags1 )
              goto LABEL_62;
          }
          v148 = (__int64)&v144->vtable[*(_DWORD *)v147 + 1].method;
        }
        else
        {
LABEL_62:
          v148 = sub_AAFEF8(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v149 = (System_Boolean_c **)(*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v148)(
                                      v143,
                                      *(_QWORD *)(v148 + 8));
        if ( v145 )
        {
          v150 = (struct System_Collections_IEnumerator_o *)sub_B170BC(v149, System_Collections_IEnumerator_TypeInfo);
          this->fields._enumeratorChild_5__7 = v150;
          p_enumeratorChild_5__7 = (BattleServantConfConponent_o *)&this->fields._enumeratorChild_5__7;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._enumeratorChild_5__7,
            (System_Int32_array **)v150,
            v151,
            v152,
            v153,
            v154,
            v155,
            v156);
          while ( 1 )
          {
LABEL_66:
            v157 = (System_Collections_IEnumerator_o *)p_enumeratorChild_5__7->klass;
            if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !WarBoardManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
            }
            if ( !WarBoardManager__IEnumeratorExecute(v157, 0LL) )
              break;
            if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields._prevTime_5__6) >= 0.1 )
            {
              realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
              this->fields.__2__current = 0LL;
              p__2__current = (BattleServantConfConponent_o *)&this->fields.__2__current;
              p__2__current->fields.movetime = realtimeSinceStartup;
              sub_B16F98(p__2__current, 0LL, v166, v167, v168, v169, v170, v171);
              v172 = 2;
              goto LABEL_72;
            }
          }
          p_enumeratorChild_5__7->klass = 0LL;
          sub_B16F98(p_enumeratorChild_5__7, 0LL, v158, v159, v160, v161, v162, v163);
          goto LABEL_74;
        }
        if ( v149 && *v149 == bool_TypeInfo )
          break;
LABEL_74:
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields._prevTime_5__6) >= 0.1 )
        {
          v219 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          this->fields.__2__current = 0LL;
          p__2__current = (BattleServantConfConponent_o *)&this->fields.__2__current;
          p__2__current->fields.movetime = v219;
          sub_B16F98(p__2__current, 0LL, v220, v221, v222, v223, v224, v225);
          v172 = 3;
          goto LABEL_72;
        }
      }
      v214 = this->fields._exe_5__5;
      if ( !v214 )
        goto LABEL_132;
      v215 = v214->klass;
      if ( *(_WORD *)&v214->klass->_2.bitflags1 )
      {
        v216 = 0LL;
        v217 = (System_Collections_IEnumerator_c **)&v215->_1.interfaceOffsets->offset;
        while ( *(v217 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v216;
          v217 += 2;
          if ( v216 >= *(unsigned __int16 *)&v214->klass->_2.bitflags1 )
            goto LABEL_120;
        }
        v218 = (__int64)&v215->vtable[*(_DWORD *)v217 + 1].method;
      }
      else
      {
LABEL_120:
        v218 = sub_AAFEF8(this->fields._exe_5__5, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v234 = (*(__int64 (__fastcall **)(struct System_Collections_IEnumerator_o *, _QWORD))v218)(
               v214,
               *(_QWORD *)(v218 + 8));
      if ( !v234 )
        goto LABEL_132;
      if ( *(Il2CppClass **)(*(_QWORD *)v234 + 64LL) != bool_TypeInfo->_1.element_class )
      {
        v235 = (WarBoardAIManager__Execute_d__12_o *)sub_B173C8(v234);
        return (unsigned __int8)WarBoardAIManager__Execute_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(
                                  v235,
                                  v236);
      }
      this->fields._isNextPhase_5__3 = *(_BYTE *)j_il2cpp_object_unbox_0(v234);
LABEL_83:
      v182 = (System_Collections_Generic_IEnumerable_T__o *)this->fields._actPieces_5__4;
      v183 = WarBoardAIManager___c_TypeInfo;
      if ( (BYTE3(WarBoardAIManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardAIManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardAIManager___c_TypeInfo);
        v183 = WarBoardAIManager___c_TypeInfo;
      }
      v184 = v183->static_fields;
      _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v184->__9__12_4;
      if ( !_9__12_4 )
      {
        if ( (BYTE3(v183->vtable._0_Equals.methodPtr) & 4) != 0 && !v183->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v183);
          v184 = WarBoardAIManager___c_TypeInfo->static_fields;
        }
        v186 = (Il2CppObject *)v184->__9;
        _9__12_4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                          System_Action_WarBoardPieceData__TypeInfo,
                                                                                          v178,
                                                                                          v179,
                                                                                          v180,
                                                                                          v181);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__12_4,
          v186,
          Method_WarBoardAIManager___c__Execute_b__12_4__,
          (const MethodInfo_24B7310 *)Method_System_Action_WarBoardPieceData___ctor__);
        v187 = WarBoardAIManager___c_TypeInfo->static_fields;
        v187->__9__12_4 = (struct System_Action_WarBoardPieceData__o *)_9__12_4;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v187->__9__12_4,
          (System_Int32_array **)_9__12_4,
          v188,
          v189,
          v190,
          v191,
          v192,
          v193);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        v182,
        (System_Action_T__o *)_9__12_4,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
      v194 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v194 )
        goto LABEL_132;
      CommonUI__SetLoadMode(v194, 0, 0LL);
      v195 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v195 )
        goto LABEL_132;
      CommonUI__SetConnect(v195, 0, 0LL);
      if ( this->fields._isNextPhase_5__3 )
      {
        v233 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( v233 )
        {
          WarBoardManager__NextTurn((WarBoardManager_o *)v233, 0LL);
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
    p_ai_5__2 = &this->fields._ai_5__2;
    v196 = this->fields._ai_5__2;
    if ( !v196 )
      goto LABEL_132;
    if ( !WarBoardAI__Execute(v196, 0LL) )
      continue;
    break;
  }
  v226 = (Il2CppObject *)WarBoardAIManager__Wait(_4__this, 0LL);
  this->fields.__2__current = v226;
  p__2__current = (BattleServantConfConponent_o *)&this->fields.__2__current;
  sub_B16F98(p__2__current, (System_Int32_array **)v226, v227, v228, v229, v230, v231, v232);
  v172 = 4;
LABEL_72:
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v172;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardAIManager__Execute_d__12_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UnityEngine_WaitWhile_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w8

  if ( (byte_40F79CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardAIManager__Wait_b__8_0__, v8);
    byte_40F79CB = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v24 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool____ctor(
      v12,
      _4__this,
      Method_WarBoardAIManager__Wait_b__8_0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v17 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v13, v14, v15, v16);
    UnityEngine_WaitWhile___ctor(v17, v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = 1;
    result = 1;
  }
  this->fields.__1__state = v24;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardAIManager__Wait_d__8_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F79C8 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAIManager___c_TypeInfo, v1);
    byte_40F79C8 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardAIManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardAIManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardAIManager___c___ctor(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardAIManager___c___Execute_b__12_1(WarBoardAIManager___c_o *this, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40F79C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F79C9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return WarBoardManager__HasSchedule((WarBoardManager_o *)Instance, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_3(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  WarBoardPieceData__ActivateCacheMode(x, 1, 0LL);
}


void __fastcall WarBoardAIManager___c___Execute_b__12_4(
        WarBoardAIManager___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}


bool __fastcall WarBoardAIManager___c__DisplayClass12_0___Execute_b__2(
        WarBoardAIManager___c__DisplayClass12_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return WarBoardAI__get_ForceId(x, 0LL) == this->fields.forceId
      && WarBoardAI__get_GroupId(x, 0LL) == this->fields.groupId;
}