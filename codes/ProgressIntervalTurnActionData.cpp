void ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1

  if ( (byte_593AF17 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    byte_593AF17 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.turnProgressSvtHash,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v10);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
}


void ProgressIntervalTurnActionData__AddTurnProgressServants(
        ProgressIntervalTurnActionData_o *this,
        BattleServantData_array *svtArray,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  int max_length; // w8
  unsigned int v6; // w23
  Il2CppClass **v7; // x8
  Il2CppObject *v8; // x21

  v4 = this;
  if ( (byte_593AF15 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    byte_593AF15 = 1;
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
        sub_21FFED4(this);
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
                                                     (System_Collections_Generic_HashSet_object__o *)this,
                                                     v8,
                                                     (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_21FFECC(this, svtArray);
  }
}


void ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_BattleServantData__o *turnProgressSvtHash; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  BattleBuffData_o *BuffData; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllIntervalBuffArray; // x22
  ProgressIntervalTurnActionData___c_c *v14; // x0
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__2_0; // x23
  Il2CppObject *v17; // x24
  struct ProgressIntervalTurnActionData___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Object_array *v26; // x22
  System_Action_object__o *v27; // x23
  BattleData_o *v28; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593AF16 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
    sub_21FFC50(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__);
    sub_21FFC50(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__);
    sub_21FFC50(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_593AF16 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v28 = data;
  BattleActionData__FixDisplayWaitingIntervalBuff((BattleActionData_o *)this, data, 0);
  turnProgressSvtHash = this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    goto LABEL_20;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v29,
    (System_Collections_Generic_HashSet_object__o *)turnProgressSvtHash,
    (const MethodInfo_42872B8 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v30 = v29;
  v29.fields._set = 0;
  *(_QWORD *)&v29.fields._index = &v30;
  while ( 1 )
  {
    v7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_40C79B8 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v7 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_21FFECC(v7, v8);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v30.fields._current, 0);
    if ( !BuffData )
      sub_21FFECC(0, v11);
    AllIntervalBuffArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetAllIntervalBuffArray(
                                                                                  BuffData,
                                                                                  0);
    v14 = ProgressIntervalTurnActionData___c_TypeInfo;
    if ( !*(&ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo, v12);
      v14 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__2_0 = (System_Func_object__bool__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v14->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v14, v12);
        static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__2_0,
        v17,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        0);
      v18 = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      v18->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__2_0, (int32_t)_9__2_0, v19, v20, v21, v22, v23, v24);
    }
    v25 = System_Linq_Enumerable__Where_object_(
            AllIntervalBuffArray,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v26 = System_Linq_Enumerable__ToArray_object_(
            v25,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v27 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      0);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v27,
      (BattleBuffData_BuffData_array *)v26,
      0);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_40C79B4 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
  if ( !v28
    || (turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v28->fields._FieldEnvData_k__BackingField) == 0 )
  {
LABEL_20:
    sub_21FFECC(turnProgressSvtHash, v5);
  }
  BattleFieldEnvironmentData__DecrementIntervalTurn((BattleFieldEnvironmentData_o *)turnProgressSvtHash, 0);
}


void ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_21FFECC(this, 0);
  if ( !buff->fields._ApplyManager_k__BackingField )
  {
    intervalData = buff->fields.intervalData;
    if ( intervalData )
      intervalData->fields.intervalTurn = (intervalData->fields.intervalTurn - 1)
                                        & ~((intervalData->fields.intervalTurn - 1) >> 31);
  }
}


void ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593AF18 & 1) == 0 )
  {
    sub_21FFC50(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_593AF18 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ProgressIntervalTurnActionData___c_TypeInfo->static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, x);
  return intervalData->fields.intervalTurn > 0;
}