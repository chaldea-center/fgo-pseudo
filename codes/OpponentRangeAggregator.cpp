void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Target_BattleTargetArgs_o *targetId; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleData_o *battleData; // x21
  BattleServantData_o *ServantData; // x0
  int32_t DeckIndex; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v16; // x2
  System_Int32_array **TargetIndexArray; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v26; // x21
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  OpponentRangeAggregator___c_c *v32; // x8
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_2; // x20
  Il2CppObject *v35; // x21
  struct OpponentRangeAggregator___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  _QWORD **v45; // x20
  __int64 v46; // x19
  __int16 v47; // w8
  __int64 v48; // x19
  __int64 v49; // x19
  __int64 v50; // x19

  if ( (byte_4350BCA & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B70694(&Method_System_Func_int__BattleServantData___ctor__);
    sub_B70694(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleServantData__int___ctor__);
    sub_B70694(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B70694(&System_Func_BattleServantData__int__TypeInfo);
    sub_B70694(&System_Func_int__BattleServantData__TypeInfo);
    sub_B70694(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__);
    sub_B70694(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__);
    sub_B70694(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__);
    sub_B70694(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
    sub_B70694(&OpponentRangeAggregator___c_TypeInfo);
    byte_4350BCA = 1;
  }
  v3 = sub_B70764(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  OpponentRangeAggregator___c__DisplayClass0_0___ctor((OpponentRangeAggregator___c__DisplayClass0_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_28;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  targetId = (Target_BattleTargetArgs_o *)TargetAggregator__get_targetId((TargetAggregator_o *)this, 0LL);
  if ( !battleData )
    goto LABEL_28;
  ServantData = BattleData__getServantData(battleData, (int32_t)targetId, 0LL);
  if ( ServantData )
  {
    DeckIndex = BattleServantData__getDeckIndex(ServantData, 0LL);
    targetId = TargetAggregator__get_battleTargetArgs((TargetAggregator_o *)this, 0LL);
    if ( targetId )
    {
      EnemyRange = Target_BattleTargetArgs__get_EnemyRange(targetId, 0LL);
      TargetIndexArray = (System_Int32_array **)OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, DeckIndex, v16);
      *(_QWORD *)(v3 + 24) = TargetIndexArray;
      sub_B70630((BattleServantConfConponent_o *)(v3 + 24), TargetIndexArray, v18, v19, v20, v21, v22, v23);
      Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                         (OpponentAllFieldTargetAggregator_o *)this,
                                                                         v24);
      v26 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v26,
        (Il2CppObject *)v3,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
        (const MethodInfo_29A71E0 *)Method_System_Func_int__BattleServantData___ctor__);
      v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                             Candidate,
                                                             (System_Func_TSource__TResult__o *)v26,
                                                             (const MethodInfo_1CC29A4 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v28 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
              v27,
              (const MethodInfo_1BDCE20 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
      v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v30,
        (Il2CppObject *)v3,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
        (const MethodInfo_29AC578 *)Method_System_Func_BattleServantData__bool___ctor__);
      v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v29,
              (System_Func_TSource__bool__o *)v30,
              (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      v32 = OpponentRangeAggregator___c_TypeInfo;
      if ( (BYTE3(OpponentRangeAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
        v32 = OpponentRangeAggregator___c_TypeInfo;
      }
      static_fields = v32->static_fields;
      _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_2;
      if ( !_9__0_2 )
      {
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
        }
        v35 = (Il2CppObject *)static_fields->__9;
        _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__0_2,
          v35,
          Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__,
          (const MethodInfo_29AD124 *)Method_System_Func_BattleServantData__int___ctor__);
        v36 = OpponentRangeAggregator___c_TypeInfo->static_fields;
        v36->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
        sub_B70630(
          (BattleServantConfConponent_o *)&v36->__9__0_2,
          (System_Int32_array **)_9__0_2,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
      }
      v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v31,
                                                                   (System_Func_TSource__TResult__o *)_9__0_2,
                                                                   (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v43,
               (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_B7076C(targetId, v5);
  }
  v45 = (_QWORD **)Method_System_Array_Empty_int___;
  v46 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v47 = *(_WORD *)(v46 + 306);
  if ( (v47 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v47 = *(_WORD *)(v46 + 306);
  }
  if ( (v47 & 0x400) != 0 )
  {
    v48 = *v45[6];
    if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
      sub_B08394(*v45[6]);
    if ( !*(_DWORD *)(v48 + 224) )
    {
      v49 = *v45[6];
      if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
        sub_B08394(*v45[6]);
      j_il2cpp_runtime_class_init_0(v49);
    }
  }
  v50 = *v45[6];
  if ( (*(_BYTE *)(v50 + 306) & 1) == 0 )
    sub_B08394(*v45[6]);
  return **(System_Int32_array ***)(v50 + 184);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  OpponentRangeAggregator_Cell_o IsValid; // x0
  OpponentRangeAggregator_Cell_o v7; // x1
  __int64 v8; // x8
  OpponentRangeAggregator_Cell_o v9; // x21
  unsigned __int64 v10; // x22
  int32_t v11; // w8
  __int64 v13; // x0
  OpponentRangeAggregator_Cell_o v14; // [xsp+0h] [xbp-50h] BYREF
  OpponentRangeAggregator_Cell_o b; // [xsp+8h] [xbp-48h] BYREF
  OpponentRangeAggregator_Cell_o v16; // [xsp+18h] [xbp-38h] BYREF
  OpponentRangeAggregator_Cell_o p_b; // 0:x0.8
  OpponentRangeAggregator_Cell_o v18; // 0:x0.8
  OpponentRangeAggregator_Cell_o v19; // 0:x0.8
  OpponentRangeAggregator_Cell_o v20; // 0:x0.8
  OpponentRangeAggregator_Cell_o v21; // 0:x0.8
  OpponentRangeAggregator_Cell_o v22; // 0:x0.8
  OpponentRangeAggregator_Cell_o v23; // 0:x0.8
  OpponentRangeAggregator_Cell_o v24; // 0:x1.8
  OpponentRangeAggregator_Cell_o v25; // 0:x1.8

  if ( (byte_4350BCB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4350BCB = 1;
  }
  v16 = 0LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  p_b = (OpponentRangeAggregator_Cell_o)&b;
  b = 0LL;
  OpponentRangeAggregator_Cell___ctor(p_b, baseIndex, 0LL);
  v18 = (OpponentRangeAggregator_Cell_o)&v14;
  v14 = 0LL;
  OpponentRangeAggregator_Cell___ctor(v18, 4, 0LL);
  v24 = v14;
  v19 = b;
  IsValid = OpponentRangeAggregator_Cell__op_Subtraction(v19, v24, 0LL);
  if ( !baseRangeArray )
    goto LABEL_14;
  v8 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = IsValid;
    v10 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)v8 )
      {
        v13 = ((__int64 (__fastcall *)(_QWORD))sub_B70798)(IsValid);
        sub_B70738(v13, 0LL);
      }
      v11 = baseRangeArray->m_Items[v10 + 1];
      v20 = (OpponentRangeAggregator_Cell_o)&b;
      b = 0LL;
      OpponentRangeAggregator_Cell___ctor(v20, v11 + 1 - 2 * ((v11 - 1) % 3), 0LL);
      v25 = b;
      v21 = v9;
      v16 = OpponentRangeAggregator_Cell__op_Addition(v21, v25, 0LL);
      v22 = (OpponentRangeAggregator_Cell_o)&v16;
      IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__IsValid(v22, 0LL);
      if ( (IsValid.fields.col & 1) != 0 )
      {
        v23 = (OpponentRangeAggregator_Cell_o)&v16;
        IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__GetIndex(v23, 0LL);
        if ( !v5 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v5,
          IsValid.fields.col,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v8) = baseRangeArray->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  if ( !v5 )
LABEL_14:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B7076C)(IsValid, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_23626084(
        OpponentRangeAggregator_Cell_o this,
        int32_t col,
        int32_t row,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = col;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = row;
}


int32_t __fastcall OpponentRangeAggregator_Cell__GetIndex(
        OpponentRangeAggregator_Cell_o this,
        const MethodInfo *method)
{
  return 3 * *(_DWORD *)(*(_QWORD *)&this + 4LL) + *(_DWORD *)this.fields.col;
}


bool __fastcall OpponentRangeAggregator_Cell__IsValid(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this + 4LL) <= 1u && *(_DWORD *)this.fields.col < 3u;
}


int32_t __fastcall OpponentRangeAggregator_Cell__get_Col(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return *(_DWORD *)this.fields.col;
}


int32_t __fastcall OpponentRangeAggregator_Cell__get_Row(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this + 4LL);
}


OpponentRangeAggregator_Cell_o __fastcall OpponentRangeAggregator_Cell__op_Addition(
        OpponentRangeAggregator_Cell_o a,
        OpponentRangeAggregator_Cell_o b,
        const MethodInfo *method)
{
  return (OpponentRangeAggregator_Cell_o)(((*(_QWORD *)&b & 0xFFFFFFFF00000000LL) + *(_QWORD *)&a) & 0xFFFFFFFF00000000LL | (unsigned int)(b.fields.col + a.fields.col));
}


OpponentRangeAggregator_Cell_o __fastcall OpponentRangeAggregator_Cell__op_Subtraction(
        OpponentRangeAggregator_Cell_o a,
        OpponentRangeAggregator_Cell_o b,
        const MethodInfo *method)
{
  return (OpponentRangeAggregator_Cell_o)((*(_QWORD *)&a - (*(_QWORD *)&b & 0xFFFFFFFF00000000LL)) & 0xFFFFFFFF00000000LL | (unsigned int)(a.fields.col - b.fields.col));
}


void __fastcall OpponentRangeAggregator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4350F0C & 1) == 0 )
  {
    sub_B70694(&OpponentRangeAggregator___c_TypeInfo);
    byte_4350F0C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)OpponentRangeAggregator___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall OpponentRangeAggregator___c___ctor(OpponentRangeAggregator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OpponentRangeAggregator___c___GetCandidate_b__0_2(
        OpponentRangeAggregator___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.uniqueId;
}


void __fastcall OpponentRangeAggregator___c__DisplayClass0_0___ctor(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *__fastcall OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__0(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  TargetAggregator_o *_4__this; // x0

  _4__this = (TargetAggregator_o *)this->fields.__4__this;
  if ( !_4__this || (_4__this = (TargetAggregator_o *)TargetAggregator__get_battleData(_4__this, 0LL)) == 0LL )
    sub_B7076C(_4__this, *(_QWORD *)&i);
  return BattleData__getServantData((BattleData_o *)_4__this, i, 0LL);
}


bool __fastcall OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__1(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  OpponentRangeAggregator___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_IEnumerable_TSource__o *indexArray; // x20
  int32_t DeckIndex; // w1

  v4 = this;
  if ( (byte_4350F0D & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4350F0D = 1;
  }
  if ( !x )
    sub_B7076C(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
}