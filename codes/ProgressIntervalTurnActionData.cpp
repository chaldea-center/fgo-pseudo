void __fastcall ProgressIntervalTurnActionData___ctor(ProgressIntervalTurnActionData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E87F0 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleServantData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_HashSet_BattleServantData__TypeInfo, v8, v9, v10);
    byte_42E87F0 = 1;
  }
  v11 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_BattleServantData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v11,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_BattleServantData___ctor__);
  this->fields.turnProgressSvtHash = (struct System_Collections_Generic_HashSet_BattleServantData__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.turnProgressSvtHash,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  __int64 v3; // x3
  ProgressIntervalTurnActionData_o *v5; // x20
  signed int max_length; // w8
  unsigned int v7; // w22
  Il2CppClass **v8; // x8
  WarBoardAIRoute_RouteData_o *v9; // x21
  __int64 v10; // x0

  v5 = this;
  if ( (byte_42E87EE & 1) == 0 )
  {
    this = (ProgressIntervalTurnActionData_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_HashSet_BattleServantData__Add__,
                                                 (_DWORD)svtArray,
                                                 (_DWORD)method,
                                                 v3);
    byte_42E87EE = 1;
  }
  if ( !svtArray )
    goto LABEL_13;
  max_length = svtArray->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
      }
      v8 = &svtArray->obj.klass + (int)v7;
      v9 = (WarBoardAIRoute_RouteData_o *)v8[4];
      if ( !v9 )
        break;
      this = (ProgressIntervalTurnActionData_o *)BattleServantData__isAlive((BattleServantData_o *)v8[4], 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (ProgressIntervalTurnActionData_o *)v5->fields.turnProgressSvtHash;
        if ( !this )
          break;
        this = (ProgressIntervalTurnActionData_o *)System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                                                     (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)this,
                                                     v9,
                                                     (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_BattleServantData__Add__);
      }
      max_length = svtArray->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_13:
    sub_B5D69C(this, svtArray);
  }
}


void __fastcall ProgressIntervalTurnActionData__FixDisplayWaitingIntervalBuff(
        ProgressIntervalTurnActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  __int64 v42; // x1
  struct System_Collections_Generic_HashSet_BattleServantData__o *turnProgressSvtHash; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  Il2CppObject *current; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *AllIntervalBuffArray; // x21
  ProgressIntervalTurnActionData___c_c *v50; // x0
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__2_0; // x22
  Il2CppObject *v53; // x23
  struct ProgressIntervalTurnActionData___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  BattleBuffData_BuffData_array *v62; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v63; // x22
  System_Collections_Generic_HashSet_Enumerator_T__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v65; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E87EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__, v30, v31, v32);
    sub_B5D5C4(&Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__, v33, v34, v35);
    sub_B5D5C4(&Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__, v36, v37, v38);
    sub_B5D5C4(&ProgressIntervalTurnActionData___c_TypeInfo, v39, v40, v41);
    byte_42E87EF = 1;
  }
  memset(&v65, 0, sizeof(v65));
  BattleActionData__FixDisplayWaitingIntervalBuff((BattleActionData_o *)this, data, 0LL);
  turnProgressSvtHash = this->fields.turnProgressSvtHash;
  if ( !turnProgressSvtHash )
    sub_B5D69C(0LL, v42);
  System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo___GetEnumerator(
    &v64,
    (System_Collections_Generic_HashSet_WarBoardAIRoute_ActionTrendInfo__o *)turnProgressSvtHash,
    (const MethodInfo_250693C *)Method_System_Collections_Generic_HashSet_BattleServantData__GetEnumerator__);
  v65 = v64;
  while ( 1 )
  {
    v44 = System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___MoveNext(
            &v65,
            (const MethodInfo_201E960 *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__MoveNext__);
    if ( !v44 )
      break;
    current = v65.fields._current;
    if ( !v65.fields._current )
      sub_B5D69C(v44, v45);
    BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v65.fields._current, 0LL);
    if ( !BuffData )
      sub_B5D69C(0LL, v48);
    AllIntervalBuffArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetAllIntervalBuffArray(
                                                                                  BuffData,
                                                                                  0LL);
    v50 = ProgressIntervalTurnActionData___c_TypeInfo;
    if ( (BYTE3(ProgressIntervalTurnActionData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ProgressIntervalTurnActionData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ProgressIntervalTurnActionData___c_TypeInfo);
      v50 = ProgressIntervalTurnActionData___c_TypeInfo;
    }
    static_fields = v50->static_fields;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      }
      v53 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__2_0,
        v53,
        Method_ProgressIntervalTurnActionData___c__FixDisplayWaitingIntervalBuff_b__2_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v54 = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
      v54->__9__2_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__2_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v54->__9__2_0,
        (System_Int32_array **)_9__2_0,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    v61 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            AllIntervalBuffArray,
            (System_Func_TSource__bool__o *)_9__2_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v62 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v61,
                                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    v63 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v63,
      (Il2CppObject *)this,
      Method_ProgressIntervalTurnActionData_UpdateIntervalTurn__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BattleActionData__AddUpdateIntervalBuffDict(
      (BattleActionData_o *)this,
      (BattleServantData_o *)current,
      (System_Action_BattleBuffData_BuffData__o *)v63,
      v62,
      0LL);
  }
  System_Collections_Generic_HashSet_Enumerator_WarBoardAIRoute_ActionTrendInfo___Dispose(
    &v65,
    (const MethodInfo_201E95C *)Method_System_Collections_Generic_HashSet_Enumerator_BattleServantData__Dispose__);
}


void __fastcall ProgressIntervalTurnActionData__UpdateIntervalTurn(
        ProgressIntervalTurnActionData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_B5D69C(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__DecrementTurn(intervalData, 0LL);
}


void __fastcall ProgressIntervalTurnActionData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ProgressIntervalTurnActionData___c_StaticFields *static_fields; // x0

  if ( (byte_42E5ABB & 1) == 0 )
  {
    sub_B5D5C4(&ProgressIntervalTurnActionData___c_TypeInfo, v1, v2, v3);
    byte_42E5ABB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ProgressIntervalTurnActionData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ProgressIntervalTurnActionData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ProgressIntervalTurnActionData___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
  return BattleBuffData_IntervalData__get_HasIntervalTurn((BattleBuffData_IntervalData_o *)this, 0LL);
}