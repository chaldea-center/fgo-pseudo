void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187A70 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v4);
    byte_4187A70 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v5,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.turnProgressSvtHash,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v9; // x0

  v4 = this;
  if ( (byte_4187A6E & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_HashSet_BattleServantData__Add__,
                                                 svtArray);
    byte_4187A6E = 1;
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
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
      }
      v7 = &svtArray->obj.klass + (int)v6;
      v8 = (WarBoardAIRoute_RouteData_o *)v7[4];
      if ( !v8 )
        break;
      this = (ProgressIntervalTurnActionData_o *)BattleServantData__isAlive((BattleServantData_o *)v7[4], 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ProgressIntervalTurnActionData_o *)v4->fields.turnProgressSvtHash;
        if ( !this )
          break;
        this = (ProgressIntervalTurnActionData_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                     (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)this,
                                                     v8,
                                                     (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_B2C434(this, svtArray);
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
  __int64 v17; // x1
  struct System_Collections_Generic_HashSet_BattleServantData__o *turnProgressSvtHash; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v23; // x1
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
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x22
  System_Collections_Generic_HashSet_Enumerator_T__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187A6F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleBuffData_BuffData___ctor__, data);
    sub_B2C35C(&System_Action_BattleBuffData_BuffData__TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__, v10);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v11);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__, v13);
    sub_B2C35C(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__, v14);
    sub_B2C35C(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__, v15);
    sub_B2C35C(&ProgressIntervalTurnActionData___c_TypeInfo, v16);
    byte_4187A6F = 1;
  }
  memset(&v40, 0, sizeof(v40));
  BattleActionData__FixDisplayWaitingIntervalBuff((BattleActionData_o *)this, data, 0LL);
  turnProgressSvtHash = this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_B2C434(0LL, v17);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)turnProgressSvtHash,
    (const MethodInfo_2D8C544 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v19 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v40,
            (const MethodInfo_20E9DBC *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v19 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_B2C434(v19, v20);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v40.fields._current, 0LL);
    if ( !BuffData )
      sub_B2C434(0LL, v23);
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
      _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__2_0,
        v28,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v29 = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      v29->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_B2C2F8(
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
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v37 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v36,
                                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v38,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v38,
      v37,
      0LL);
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v40,
    (const MethodInfo_20E9DB8 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B2C434(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0

  if ( (byte_41852BD & 1) == 0 )
  {
    sub_B2C35C(&ProgressIntervalTurnActionData___c_TypeInfo, v1);
    byte_41852BD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  if ( !x || (this = (ProgressIntervalTurnActionData___c_o *)x->fields.intervalData) == 0LL )
    sub_B2C434(this, x);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0LL);
}