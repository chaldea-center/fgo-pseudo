void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AFBAB & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_B52984(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    byte_42AFBAB = 1;
  }
  v3 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v3,
    (const MethodInfo_24E0024 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.turnProgressSvtHash,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  if ( (byte_42AFBA9 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_B52984(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    byte_42AFBA9 = 1;
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
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
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
                                                     (const MethodInfo_24E11E0 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_B52A5C(this, svtArray);
  }
}


void __fastcall ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_BattleServantData__o *turnProgressSvtHash; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllIntervalBuffArray; // x21
  ProgressIntervalTurnActionData___c_c *v13; // x0
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v16; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  BattleBuffData_BuffData_array *v25; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x22
  System_Collections_Generic_HashSet_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42AFBAA & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__);
    sub_B52984(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B52984(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
    sub_B52984(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__);
    sub_B52984(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__);
    sub_B52984(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_42AFBAA = 1;
  }
  memset(&v28, 0, sizeof(v28));
  BattleActionData__FixDisplayWaitingIntervalBuff((BattleActionData_o *)this, data, 0LL);
  turnProgressSvtHash = this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_B52A5C(0LL, v5);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)turnProgressSvtHash,
    (const MethodInfo_24E0B0C *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v7 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
           &v28,
           (const MethodInfo_20112EC *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v7 )
      break;
    current = v28.fields._current;
    if ( !v28.fields._current )
      sub_B52A5C(v7, v8);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v28.fields._current, 0LL);
    if ( !BuffData )
      sub_B52A5C(0LL, v11);
    AllIntervalBuffArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetAllIntervalBuffArray(
                                                                                  BuffData,
                                                                                  0LL);
    v13 = ProgressIntervalTurnActionData___c_TypeInfo;
    if ( (BYTE3(ProgressIntervalTurnActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v13 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__2_0,
        v16,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v17 = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      v17->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v17->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            AllIntervalBuffArray,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v25 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v24,
                                             (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v26,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      (const MethodInfo_2627780 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v26,
      v25,
      0LL);
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v28,
    (const MethodInfo_20112E8 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B52A5C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0

  if ( (byte_42AD447 & 1) == 0 )
  {
    sub_B52984(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_42AD447 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, x);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0LL);
}