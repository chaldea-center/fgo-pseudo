void ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C45652 & 1) == 0 )
  {
    sub_1C37058(&BattleActionData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    byte_4C45652 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.turnProgressSvtHash, (int32_t)v3, v4, v5);
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, v6);
}


void ProgressIntervalTurnActionData__AddTurnProgressServants(
        ProgressIntervalTurnActionData_o *this,
        BattleServantData_array *svtArray,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  Il2CppObject *v8; // x21

  v4 = this;
  if ( (byte_4C45650 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_1C37058(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    byte_4C45650 = 1;
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
        sub_1C372BC(this);
      v7 = &svtArray->obj.klass + (int)v6;
      v8 = (Il2CppObject *)v7[4];
      if ( !v8 )
        break;
      this = (ProgressIntervalTurnActionData_o *)BattleServantData__isAlive((BattleServantData_o *)v7[4], 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ProgressIntervalTurnActionData_o *)v4->fields.turnProgressSvtHash;
        if ( !this )
          break;
        this = (ProgressIntervalTurnActionData_o *)System_Collections_Generic_HashSet_object___Add(
                                                     (System_Collections_Generic_HashSet_T__o *)this,
                                                     v8,
                                                     (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_1C372B4(this);
  }
}


void ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *turnProgressSvtHash; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x0
  ProgressIntervalTurnActionData___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v13; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x21
  System_Action_object__o *v19; // x22
  const MethodInfo *v20; // x4
  System_Collections_Generic_HashSet_Enumerator_T__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C45651 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__);
    sub_1C37058(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
    sub_1C37058(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__);
    sub_1C37058(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__);
    sub_1C37058(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_4C45651 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  BattleActionData__AddFieldServantUpdateIntervalBuff((BattleActionData_o *)this, data, method);
  turnProgressSvtHash = (System_Collections_Generic_HashSet_T__o *)this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_1C372B4(0);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v21,
    turnProgressSvtHash,
    (const MethodInfo_365ABF8 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_352D2A0 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v6 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1C372B4(v6);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v22.fields._current, 0);
    if ( !BuffData )
      sub_1C372B4(0);
    AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(BuffData, 0);
    v10 = ProgressIntervalTurnActionData___c_TypeInfo;
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)AllIntervalBuffArray;
    if ( !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v10 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    _9__2_0 = (System_Func_object__bool__o *)v10->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = ProgressIntervalTurnActionData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__2_0,
        v13,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        0);
      static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v15, v16);
    }
    v17 = System_Linq_Enumerable__Where_object_(
            v11,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            v17,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v19 = (System_Action_object__o *)sub_1C372A4(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      0);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v19,
      (BattleBuffData_BuffData_array *)v18,
      v20);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_352D29C *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_1C372B4(this);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    intervalData->fields.intervalTurn = (intervalData->fields.intervalTurn - 1)
                                      & ~((intervalData->fields.intervalTurn - 1) >> 31);
}


void ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45653 & 1) == 0 )
  {
    sub_1C37058(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_4C45653 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ProgressIntervalTurnActionData___c_TypeInfo->static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ProgressIntervalTurnActionData___c___ctor(ProgressIntervalTurnActionData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ProgressIntervalTurnActionData___c___FixDisplayWaitingIntervalBuff_b__2_0(
        ProgressIntervalTurnActionData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !x || (intervalData = x->fields.intervalData) == 0 )
    sub_1C372B4(this);
  return intervalData->fields.intervalTurn > 0;
}