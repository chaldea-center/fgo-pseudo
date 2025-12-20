void ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4D2EED1 & 1) == 0 )
  {
    sub_1C94098(&BattleActionData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
    byte_4D2EED1 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.turnProgressSvtHash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, v10);
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
  if ( (byte_4D2EECF & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_1C94098(&Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
    byte_4D2EECF = 1;
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
        sub_1C942F8(this);
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
                                                     (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_1C942F0(this, svtArray);
  }
}


void ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_T__o *turnProgressSvtHash; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  BattleBuffData_o *BuffData; // x0
  __int64 v11; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x0
  ProgressIntervalTurnActionData___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x22
  System_Func_object__bool__o *_9__2_0; // x23
  Il2CppObject *v16; // x24
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x22
  System_Action_object__o *v26; // x23
  const MethodInfo *v27; // x4
  BattleData_o *v28; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2EED0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
    sub_1C94098(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__);
    sub_1C94098(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__);
    sub_1C94098(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_4D2EED0 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v28 = data;
  BattleActionData__AddFieldServantUpdateIntervalBuff((BattleActionData_o *)this, data, method);
  turnProgressSvtHash = (System_Collections_Generic_HashSet_T__o *)this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    goto LABEL_20;
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v29,
    turnProgressSvtHash,
    (const MethodInfo_371F310 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_35EBC50 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v7 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1C942F0(v7, v8);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v30.fields._current, 0);
    if ( !BuffData )
      sub_1C942F0(0, v11);
    AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(BuffData, 0);
    v13 = ProgressIntervalTurnActionData___c_TypeInfo;
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)AllIntervalBuffArray;
    if ( !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v13 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    _9__2_0 = (System_Func_object__bool__o *)v13->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = ProgressIntervalTurnActionData___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__2_0,
        v16,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        0);
      static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0,
        (int32_t)_9__2_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = System_Linq_Enumerable__Where_object_(
            v14,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v25 = System_Linq_Enumerable__ToArray_object_(
            v24,
            (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v26 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v26,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      0);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v26,
      (BattleBuffData_BuffData_array *)v25,
      v27);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_35EBC4C *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
  if ( !v28
    || (turnProgressSvtHash = (System_Collections_Generic_HashSet_T__o *)v28->fields._FieldEnvData_k__BackingField) == 0 )
  {
LABEL_20:
    sub_1C942F0(turnProgressSvtHash, v5);
  }
  BattleFieldEnvironmentData__DecrementIntervalTurn((BattleFieldEnvironmentData_o *)turnProgressSvtHash, 0);
}


void ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1C942F0(this, 0);
  if ( !buff->fields._ApplyManager_k__BackingField )
  {
    intervalData = buff->fields.intervalData;
    if ( intervalData )
      BattleBuffData_IntervalData__DecrementTurn(intervalData, 0);
  }
}


void ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2EED2 & 1) == 0 )
  {
    sub_1C94098(&ProgressIntervalTurnActionData___c_TypeInfo);
    byte_4D2EED2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ProgressIntervalTurnActionData___c_TypeInfo->static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields,
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
  if ( !x || (this = (ProgressIntervalTurnActionData___c_o *)x->fields.intervalData) == 0 )
    sub_1C942F0(this, x);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0);
}