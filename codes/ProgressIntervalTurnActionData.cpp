void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_T__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1

  if ( (byte_49FE556 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v5);
    byte_49FE556 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                    System_Collections_Generic_HashSet_BattleServantData__TypeInfo,
                                                    method,
                                                    v2);
  System_Collections_Generic_HashSet_object____ctor(
    v6,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.turnProgressSvtHash, (int32_t)v6, v7, v8);
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, v9);
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
  Il2CppObject *v8; // x21

  v4 = this;
  if ( (byte_49FE554 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_HashSet_BattleServantData__Add__,
                                                 svtArray);
    byte_49FE554 = 1;
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
        sub_1B6432C(this, svtArray);
      v7 = &svtArray->obj.klass + (int)v6;
      v8 = (Il2CppObject *)v7[4];
      if ( !v8 )
        break;
      this = (ProgressIntervalTurnActionData_o *)BattleServantData__isAlive((BattleServantData_o *)v7[4], 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ProgressIntervalTurnActionData_o *)v4->fields.turnProgressSvtHash;
        if ( !this )
          break;
        this = (ProgressIntervalTurnActionData_o *)System_Collections_Generic_HashSet_object___Add(
                                                     (System_Collections_Generic_HashSet_T__o *)this,
                                                     v8,
                                                     (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_1B64324(this);
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
  System_Collections_Generic_HashSet_T__o *turnProgressSvtHash; // x0
  _BOOL8 v16; // x0
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  ProgressIntervalTurnActionData___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v25; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_object__o *v33; // x22
  const MethodInfo *v34; // x4
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FE555 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__, v9);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__, v11);
    sub_1B640C8(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__, v12);
    sub_1B640C8(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__, v13);
    sub_1B640C8(&ProgressIntervalTurnActionData___c_TypeInfo, v14);
    byte_49FE555 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  BattleActionData__AddFieldServantUpdateIntervalBuff((BattleActionData_o *)this, data, method);
  turnProgressSvtHash = (System_Collections_Generic_HashSet_T__o *)this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_1B64324(0LL);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v35,
    turnProgressSvtHash,
    (const MethodInfo_336A938 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v16 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3229B40 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v16 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1B64324(v16);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v36.fields._current, 0LL);
    if ( !BuffData )
      sub_1B64324(0LL);
    AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(BuffData, 0LL);
    v22 = ProgressIntervalTurnActionData___c_TypeInfo;
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)AllIntervalBuffArray;
    if ( !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v22 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    _9__2_0 = (System_Func_object__bool__o *)v22->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = ProgressIntervalTurnActionData___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                 v20,
                                                 v21);
      System_Func_object__bool____ctor(
        _9__2_0,
        v25,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        0LL);
      static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v27, v28);
    }
    v29 = System_Linq_Enumerable__Where_object_(
            v23,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v30 = System_Linq_Enumerable__ToArray_object_(
            v29,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v33 = (System_Action_object__o *)sub_1B64314(System_Action_BattleBuffData_BuffData__TypeInfo, v31, v32);
    System_Action_object____ctor(
      v33,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      0LL);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v33,
      (BattleBuffData_BuffData_array *)v30,
      v34);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3229B3C *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1B64324(this);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE557 & 1) == 0 )
  {
    sub_1B640C8(&ProgressIntervalTurnActionData___c_TypeInfo, v1);
    byte_49FE557 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ProgressIntervalTurnActionData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ProgressIntervalTurnActionData___c_TypeInfo->static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0LL);
}