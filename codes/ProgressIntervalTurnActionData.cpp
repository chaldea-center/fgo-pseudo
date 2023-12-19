void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA02A & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v7);
    byte_40FA02A = 1;
  }
  v8 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_HashSet_BattleServantData__TypeInfo,
                                                                            method,
                                                                            v2,
                                                                            v3,
                                                                            v4);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v8,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.turnProgressSvtHash,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
}


void __fastcall ProgressIntervalTurnActionData__AddTurnProgressServants(
        ProgressIntervalTurnActionData_o *this,
        BattleServantData_array *svtArray,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  signed int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  WarBoardAIRoute_RouteData_o *v8; // x21
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *turnProgressSvtHash; // x0

  v4 = this;
  if ( (byte_40FA028 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_B16FFC(
                                                 &Method_System_Collections_Generic_HashSet_BattleServantData__Add__,
                                                 svtArray);
    byte_40FA028 = 1;
  }
  if ( !svtArray )
    goto LABEL_13;
  max_length = svtArray->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, svtArray, method);
        sub_B170A0();
      }
      v7 = &svtArray->obj.klass + (int)v6;
      v8 = (WarBoardAIRoute_RouteData_o *)v7[4];
      if ( !v8 )
        break;
      this = (ProgressIntervalTurnActionData_o *)BattleServantData__isAlive((BattleServantData_o *)v7[4], 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        turnProgressSvtHash = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)v4->fields.turnProgressSvtHash;
        if ( !turnProgressSvtHash )
          break;
        this = (ProgressIntervalTurnActionData_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                     turnProgressSvtHash,
                                                     v8,
                                                     (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_HashSet_BattleServantData__o *turnProgressSvtHash; // x0
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_IEnumerable_TSource__o *AllIntervalBuffArray; // x21
  ProgressIntervalTurnActionData___c_c *v25; // x0
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v28; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  BattleBuffData_BuffData_array *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x22
  System_Collections_Generic_HashSet_Enumerator_T__o v43; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v44; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FA029 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, data);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__, v10);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__, v13);
    sub_B16FFC(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__, v14);
    sub_B16FFC(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__, v15);
    sub_B16FFC(&ProgressIntervalTurnActionData___c_TypeInfo, v16);
    byte_40FA029 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  BattleActionData__FixDisplayWaitingIntervalBuff((BattleActionData_o *)this, data, 0LL);
  turnProgressSvtHash = this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)turnProgressSvtHash,
    (const MethodInfo_21DF444 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v44,
            (const MethodInfo_20739E4 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__) )
  {
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_B170D4();
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v44.fields._current, 0LL);
    if ( !BuffData )
      sub_B170D4();
    AllIntervalBuffArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetAllIntervalBuffArray(
                                                                                  BuffData,
                                                                                  0LL);
    v25 = ProgressIntervalTurnActionData___c_TypeInfo;
    if ( (BYTE3(ProgressIntervalTurnActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v25 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                     v20,
                                                                                     v21,
                                                                                     v22,
                                                                                     v23);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__2_0,
        v28,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v29 = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      v29->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v29->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            AllIntervalBuffArray,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v37 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v36,
                                             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                 v38,
                                                                                 v39,
                                                                                 v40,
                                                                                 v41);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v42,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v42,
      v37,
      0LL);
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v44,
    (const MethodInfo_20739E0 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B170D4();
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F83A7 & 1) == 0 )
  {
    sub_B16FFC(&ProgressIntervalTurnActionData___c_TypeInfo, v1);
    byte_40F83A7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ProgressIntervalTurnActionData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ProgressIntervalTurnActionData___c___ctor(
        ProgressIntervalTurnActionData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ProgressIntervalTurnActionData___c___FixDisplayWaitingIntervalBuff_b__2_0(
        ProgressIntervalTurnActionData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !x || (intervalData = x->fields.intervalData) == 0LL )
    sub_B170D4();
  return BattleBuffData_IntervalData__get_HasIntervalTurn(intervalData, 0LL);
}