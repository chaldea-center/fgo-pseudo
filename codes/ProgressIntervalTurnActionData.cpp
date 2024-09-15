void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_T__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_4A301A5 & 1) == 0 )
  {
    sub_1B761C0(&BattleActionData_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v4);
    byte_4A301A5 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_T__o *)sub_1B7640C(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v5,
    (const MethodInfo_3395F1C *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v5;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.turnProgressSvtHash, (int32_t)v5, v6, v7);
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, v8);
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
  if ( (byte_4A301A3 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_1B761C0(
                                                 &Method_System_Collections_Generic_HashSet_BattleServantData__Add__,
                                                 svtArray);
    byte_4A301A3 = 1;
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
        sub_1B76424(this, svtArray);
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
                                                     (const MethodInfo_3397100 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_1B7641C(this, svtArray);
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
  System_Collections_Generic_HashSet_T__o *turnProgressSvtHash; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v21; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x0
  ProgressIntervalTurnActionData___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v26; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x21
  System_Action_object__o *v32; // x22
  const MethodInfo *v33; // x4
  System_Collections_Generic_HashSet_Enumerator_T__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v35; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A301A4 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v5);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v6);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__, v9);
    sub_1B761C0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__, v11);
    sub_1B761C0(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__, v12);
    sub_1B761C0(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__, v13);
    sub_1B761C0(&ProgressIntervalTurnActionData___c_TypeInfo, v14);
    byte_4A301A4 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  BattleActionData__AddFieldServantUpdateIntervalBuff((BattleActionData_o *)this, data, method);
  turnProgressSvtHash = (System_Collections_Generic_HashSet_T__o *)this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_1B7641C(0LL, v15);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v34,
    turnProgressSvtHash,
    (const MethodInfo_3396A84 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v17 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3256368 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v17 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B7641C(v17, v18);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v35.fields._current, 0LL);
    if ( !BuffData )
      sub_1B7641C(0LL, v21);
    AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(BuffData, v21);
    v23 = ProgressIntervalTurnActionData___c_TypeInfo;
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)AllIntervalBuffArray;
    if ( !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v23 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    _9__2_0 = (System_Func_object__bool__o *)v23->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = ProgressIntervalTurnActionData___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__2_0,
        v26,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        0LL);
      static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v28, v29);
    }
    v30 = System_Linq_Enumerable__Where_object_(
            v24,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_2EA0B7C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v31 = System_Linq_Enumerable__ToArray_object_(
            v30,
            (const MethodInfo_2E9AEA4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v32 = (System_Action_object__o *)sub_1B7640C(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v32,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      0LL);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v32,
      (BattleBuffData_BuffData_array *)v31,
      v33);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3256364 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1B7641C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A301A6 & 1) == 0 )
  {
    sub_1B761C0(&ProgressIntervalTurnActionData___c_TypeInfo, v1);
    byte_4A301A6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ProgressIntervalTurnActionData___c_TypeInfo->static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, x);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0LL);
}