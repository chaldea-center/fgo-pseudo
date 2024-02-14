void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  OpponentRangeAggregator___c__DisplayClass0_0_o *v21; // x20
  Target_BattleTargetArgs_o *targetId; // x0
  BattleData_o *battleData; // x21
  BattleServantData_o *ServantData; // x0
  int32_t DeckIndex; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v27; // x2
  System_Int32_array *TargetIndexArray; // x0
  const MethodInfo *v29; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_int__BattleActionData_SideEffectData__o *v33; // x21
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x19
  OpponentRangeAggregator___c_c *v43; // x8
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_2; // x20
  Il2CppObject *v46; // x21
  struct OpponentRangeAggregator___c_StaticFields *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  _QWORD **v50; // x20
  __int64 v51; // x19
  __int16 v52; // w8
  __int64 v53; // x19
  __int64 v54; // x19
  __int64 v55; // x19

  if ( (byte_4212031 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, method);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_B0D8A4(&Method_System_Func_int__BattleServantData___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_BattleServantData__int___ctor__, v12);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_BattleServantData__int__TypeInfo, v14);
    sub_B0D8A4(&System_Func_int__BattleServantData__TypeInfo, v15);
    sub_B0D8A4(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v16);
    sub_B0D8A4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v17);
    sub_B0D8A4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v18);
    sub_B0D8A4(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v19);
    sub_B0D8A4(&OpponentRangeAggregator___c_TypeInfo, v20);
    byte_4212031 = 1;
  }
  v21 = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B0D974(
                                                            OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo,
                                                            method,
                                                            v2);
  OpponentRangeAggregator___c__DisplayClass0_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_28;
  v21->fields.__4__this = this;
  sub_B0D840(&v21->fields, this);
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
      TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, DeckIndex, v27);
      v21->fields.indexArray = TargetIndexArray;
      sub_B0D840(&v21->fields.indexArray, TargetIndexArray);
      Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                         (OpponentAllFieldTargetAggregator_o *)this,
                                                                         v29);
      v33 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                     System_Func_int__BattleServantData__TypeInfo,
                                                                     v31,
                                                                     v32);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v33,
        (Il2CppObject *)v21,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
        (const MethodInfo_26145DC *)Method_System_Func_int__BattleServantData___ctor__);
      v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                             Candidate,
                                                             (System_Func_TSource__TResult__o *)v33,
                                                             (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v35 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
              v34,
              (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
      v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_BattleServantData__bool__TypeInfo,
                                                                                 v37,
                                                                                 v38);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v39,
        (Il2CppObject *)v21,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
      v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v36,
              (System_Func_TSource__bool__o *)v39,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      v43 = OpponentRangeAggregator___c_TypeInfo;
      if ( (BYTE3(OpponentRangeAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
        v43 = OpponentRangeAggregator___c_TypeInfo;
      }
      static_fields = v43->static_fields;
      _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_2;
      if ( !_9__0_2 )
      {
        if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
        }
        v46 = (Il2CppObject *)static_fields->__9;
        _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_BattleServantData__int__TypeInfo,
                                                                                    v40,
                                                                                    v41);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__0_2,
          v46,
          Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__,
          (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
        v47 = OpponentRangeAggregator___c_TypeInfo->static_fields;
        v47->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
        sub_B0D840(&v47->__9__0_2, _9__0_2);
      }
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v42,
                                                                   (System_Func_TSource__TResult__o *)_9__0_2,
                                                                   (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v48,
               (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_B0D97C(targetId);
  }
  v50 = (_QWORD **)Method_System_Array_Empty_int___;
  v51 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v52 = *(_WORD *)(v51 + 306);
  if ( (v52 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v52 = *(_WORD *)(v51 + 306);
  }
  if ( (v52 & 0x400) != 0 )
  {
    v53 = *v50[6];
    if ( (*(_BYTE *)(v53 + 306) & 1) == 0 )
      sub_AA65A4(*v50[6]);
    if ( !*(_DWORD *)(v53 + 224) )
    {
      v54 = *v50[6];
      if ( (*(_BYTE *)(v54 + 306) & 1) == 0 )
        sub_AA65A4(*v50[6]);
      j_il2cpp_runtime_class_init_0(v54);
    }
  }
  v55 = *v50[6];
  if ( (*(_BYTE *)(v55 + 306) & 1) == 0 )
    sub_AA65A4(*v50[6]);
  return **(System_Int32_array ***)(v55 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  OpponentRangeAggregator_Cell_o IsValid; // x0
  __int64 v10; // x8
  OpponentRangeAggregator_Cell_o v11; // x21
  unsigned __int64 v12; // x22
  int32_t v13; // w8
  __int64 v15; // x0
  OpponentRangeAggregator_Cell_o v16; // [xsp+0h] [xbp-50h] BYREF
  OpponentRangeAggregator_Cell_o b; // [xsp+8h] [xbp-48h] BYREF
  OpponentRangeAggregator_Cell_o v18; // [xsp+18h] [xbp-38h] BYREF
  OpponentRangeAggregator_Cell_o p_b; // 0:x0.8
  OpponentRangeAggregator_Cell_o v20; // 0:x0.8
  OpponentRangeAggregator_Cell_o v21; // 0:x0.8
  OpponentRangeAggregator_Cell_o v22; // 0:x0.8
  OpponentRangeAggregator_Cell_o v23; // 0:x0.8
  OpponentRangeAggregator_Cell_o v24; // 0:x0.8
  OpponentRangeAggregator_Cell_o v25; // 0:x0.8
  OpponentRangeAggregator_Cell_o v26; // 0:x1.8
  OpponentRangeAggregator_Cell_o v27; // 0:x1.8

  if ( (byte_4212032 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4212032 = 1;
  }
  v18 = 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&baseIndex,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  p_b = (OpponentRangeAggregator_Cell_o)&b;
  b = 0LL;
  OpponentRangeAggregator_Cell___ctor(p_b, baseIndex, 0LL);
  v20 = (OpponentRangeAggregator_Cell_o)&v16;
  v16 = 0LL;
  OpponentRangeAggregator_Cell___ctor(v20, 4, 0LL);
  v26 = v16;
  v21 = b;
  IsValid = OpponentRangeAggregator_Cell__op_Subtraction(v21, v26, 0LL);
  if ( !baseRangeArray )
    goto LABEL_14;
  v10 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = IsValid;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
      {
        v15 = ((__int64 (__fastcall *)(_QWORD))sub_B0D9A8)(IsValid);
        sub_B0D948(v15, 0LL);
      }
      v13 = baseRangeArray->m_Items[v12 + 1];
      v22 = (OpponentRangeAggregator_Cell_o)&b;
      b = 0LL;
      OpponentRangeAggregator_Cell___ctor(v22, v13 + 1 - 2 * ((v13 - 1) % 3), 0LL);
      v27 = b;
      v23 = v11;
      v18 = OpponentRangeAggregator_Cell__op_Addition(v23, v27, 0LL);
      v24 = (OpponentRangeAggregator_Cell_o)&v18;
      IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__IsValid(v24, 0LL);
      if ( (IsValid.fields.col & 1) != 0 )
      {
        v25 = (OpponentRangeAggregator_Cell_o)&v18;
        IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__GetIndex(v25, 0LL);
        if ( !v8 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v8,
          IsValid.fields.col,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = baseRangeArray->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
  }
  if ( !v8 )
LABEL_14:
    ((void (__fastcall __noreturn *)(_QWORD))sub_B0D97C)(IsValid);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_19921368(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0

  if ( (byte_4212165 & 1) == 0 )
  {
    sub_B0D8A4(&OpponentRangeAggregator___c_TypeInfo, v1);
    byte_4212165 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(OpponentRangeAggregator___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.uniqueId;
}


void __fastcall OpponentRangeAggregator___c__DisplayClass0_0___ctor(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_o *__fastcall OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__0(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  TargetAggregator_o *_4__this; // x0

  _4__this = (TargetAggregator_o *)this->fields.__4__this;
  if ( !_4__this || (_4__this = (TargetAggregator_o *)TargetAggregator__get_battleData(_4__this, 0LL)) == 0LL )
    sub_B0D97C(_4__this);
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
  if ( (byte_4212166 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B0D8A4(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               x);
    byte_4212166 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}