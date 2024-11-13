void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_HashSet_T__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1

  if ( (byte_4B184B2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleActionData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v7, v8);
    byte_4B184B2 = 1;
  }
  v9 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_HashSet_BattleServantData__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_HashSet_object____ctor(
    v9,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.turnProgressSvtHash,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, v16);
  BattleActionData___ctor((BattleActionData_o *)this, v16);
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
  if ( (byte_4B184B0 & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_HashSet_BattleServantData__Add__,
                                                 svtArray,
                                                 method);
    byte_4B184B0 = 1;
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
        sub_1BCAA44(this, svtArray);
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
                                                     (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_13:
    sub_1BCAA3C(this, svtArray);
  }
}


void __fastcall ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  System_Collections_Generic_HashSet_T__o *turnProgressSvtHash; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v31; // x1
  BattleBuffData_BuffData_array *AllIntervalBuffArray; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ProgressIntervalTurnActionData___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Func_object__bool__o *_9__2_0; // x22
  Il2CppObject *v39; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Object_array *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_object__o *v52; // x22
  const MethodInfo *v53; // x4
  System_Collections_Generic_HashSet_Enumerator_T__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v55; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B184B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, data, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__, v13, v14);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__, v19, v20);
    sub_1BCA7E0(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__, v21, v22);
    sub_1BCA7E0(&ProgressIntervalTurnActionData___c_TypeInfo, v23, v24);
    byte_4B184B1 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  BattleActionData__AddFieldServantUpdateIntervalBuff((BattleActionData_o *)this, data, method);
  turnProgressSvtHash = (System_Collections_Generic_HashSet_T__o *)this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_1BCAA3C(0LL, v25);
  System_Collections_Generic_HashSet_object___GetEnumerator(
    &v54,
    turnProgressSvtHash,
    (const MethodInfo_345BB30 *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v55 = v54;
  while ( 1 )
  {
    v27 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
            &v55,
            (const MethodInfo_33167AC *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v27 )
      break;
    current = v55.fields._current;
    if ( !v55.fields._current )
      sub_1BCAA3C(v27, v28);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v55.fields._current, 0LL);
    if ( !BuffData )
      sub_1BCAA3C(0LL, v31);
    AllIntervalBuffArray = BattleBuffData__GetAllIntervalBuffArray(BuffData, 0LL);
    v36 = ProgressIntervalTurnActionData___c_TypeInfo;
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)AllIntervalBuffArray;
    if ( !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo, v33);
      v36 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    _9__2_0 = (System_Func_object__bool__o *)v36->static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36, v33);
        v36 = ProgressIntervalTurnActionData___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__2_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                 v33,
                                                 v34,
                                                 v35);
      System_Func_object__bool____ctor(
        _9__2_0,
        v39,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        0LL);
      static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__2_0,
        (int64_t)_9__2_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = System_Linq_Enumerable__Where_object_(
            v37,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v48 = System_Linq_Enumerable__ToArray_object_(
            v47,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v52 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, v49, v50, v51);
    System_Action_object____ctor(
      v52,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      0LL);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v52,
      (BattleBuffData_BuffData_array *)v48,
      v53);
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(
    &v55,
    (const MethodInfo_33167A8 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1BCAA3C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B184B3 & 1) == 0 )
  {
    sub_1BCA7E0(&ProgressIntervalTurnActionData___c_TypeInfo, v1, v2);
    byte_4B184B3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ProgressIntervalTurnActionData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ProgressIntervalTurnActionData___c_TypeInfo->static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ProgressIntervalTurnActionData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, x);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0LL);
}