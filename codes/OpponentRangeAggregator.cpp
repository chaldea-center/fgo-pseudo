void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  OpponentRangeAggregator___c__DisplayClass0_0_o *v56; // x20
  Target_BattleTargetArgs_o *targetId; // x0
  __int64 v58; // x1
  BattleData_o *battleData; // x21
  BattleServantData_o *ServantData; // x0
  int32_t DeckIndex; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v66; // x21
  System_Collections_Generic_IEnumerable_T__o *v67; // x0
  System_Collections_Generic_IEnumerable_T__o *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v70; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x19
  OpponentRangeAggregator___c_c *v72; // x8
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_2; // x20
  Il2CppObject *v75; // x21
  struct OpponentRangeAggregator___c_StaticFields *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  _QWORD **v79; // x20
  __int64 v80; // x19
  __int16 v81; // w8
  __int64 v82; // x19
  __int64 v83; // x19
  __int64 v84; // x19

  if ( (byte_42E62CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_int__BattleServantData___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_BattleServantData__int___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Func_BattleServantData__int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Func_int__BattleServantData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v41, v42, v43);
    sub_B5D5C4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v44, v45, v46);
    sub_B5D5C4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v47, v48, v49);
    sub_B5D5C4(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&OpponentRangeAggregator___c_TypeInfo, v53, v54, v55);
    byte_42E62CE = 1;
  }
  v56 = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B5D694(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  OpponentRangeAggregator___c__DisplayClass0_0___ctor(v56, 0LL);
  if ( !v56 )
    goto LABEL_28;
  v56->fields.__4__this = this;
  sub_B5D560(&v56->fields);
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
      v56->fields.indexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, DeckIndex, v63);
      sub_B5D560(&v56->fields.indexArray);
      Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                         (OpponentAllFieldTargetAggregator_o *)this,
                                                                         v64);
      v66 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v66,
        (Il2CppObject *)v56,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
        (const MethodInfo_2C29938 *)Method_System_Func_int__BattleServantData___ctor__);
      v67 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                             Candidate,
                                                             (System_Func_TSource__TResult__o *)v66,
                                                             (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v68 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
              v67,
              (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BattleServantData___);
      v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v68,
                                                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
      v70 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v70,
        (Il2CppObject *)v56,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
      v71 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v69,
              (System_Func_TSource__bool__o *)v70,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      v72 = OpponentRangeAggregator___c_TypeInfo;
      if ( (BYTE3(OpponentRangeAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
        v72 = OpponentRangeAggregator___c_TypeInfo;
      }
      static_fields = v72->static_fields;
      _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_2;
      if ( !_9__0_2 )
      {
        if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v72);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
        }
        v75 = (Il2CppObject *)static_fields->__9;
        _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__0_2,
          v75,
          Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__,
          (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
        v76 = OpponentRangeAggregator___c_TypeInfo->static_fields;
        v76->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
        sub_B5D560(&v76->__9__0_2);
      }
      v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v71,
                                                                   (System_Func_TSource__TResult__o *)_9__0_2,
                                                                   (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v77,
               (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_B5D69C(targetId, v58);
  }
  v79 = (_QWORD **)Method_System_Array_Empty_int___;
  v80 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v81 = *(_WORD *)(v80 + 306);
  if ( (v81 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v81 = *(_WORD *)(v80 + 306);
  }
  if ( (v81 & 0x400) != 0 )
  {
    v82 = *v79[6];
    if ( (*(_BYTE *)(v82 + 306) & 1) == 0 )
      sub_AF52C4(*v79[6]);
    if ( !*(_DWORD *)(v82 + 224) )
    {
      v83 = *v79[6];
      if ( (*(_BYTE *)(v83 + 306) & 1) == 0 )
        sub_AF52C4(*v79[6]);
      j_il2cpp_runtime_class_init_0(v83);
    }
  }
  v84 = *v79[6];
  if ( (*(_BYTE *)(v84 + 306) & 1) == 0 )
    sub_AF52C4(*v79[6]);
  return **(System_Int32_array ***)(v84 + 184);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
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
  System_Collections_Generic_List_int__o *v15; // x20
  OpponentRangeAggregator_Cell_o IsValid; // x0
  OpponentRangeAggregator_Cell_o v17; // x1
  __int64 v18; // x8
  OpponentRangeAggregator_Cell_o v19; // x21
  unsigned __int64 v20; // x22
  int32_t v21; // w8
  __int64 v23; // x0
  OpponentRangeAggregator_Cell_o v24; // [xsp+0h] [xbp-50h] BYREF
  OpponentRangeAggregator_Cell_o b; // [xsp+8h] [xbp-48h] BYREF
  OpponentRangeAggregator_Cell_o v26; // [xsp+18h] [xbp-38h] BYREF
  OpponentRangeAggregator_Cell_o p_b; // 0:x0.8
  OpponentRangeAggregator_Cell_o v28; // 0:x0.8
  OpponentRangeAggregator_Cell_o v29; // 0:x0.8
  OpponentRangeAggregator_Cell_o v30; // 0:x0.8
  OpponentRangeAggregator_Cell_o v31; // 0:x0.8
  OpponentRangeAggregator_Cell_o v32; // 0:x0.8
  OpponentRangeAggregator_Cell_o v33; // 0:x0.8
  OpponentRangeAggregator_Cell_o v34; // 0:x1.8
  OpponentRangeAggregator_Cell_o v35; // 0:x1.8

  if ( (byte_42E62CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, baseIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    byte_42E62CF = 1;
  }
  v26 = 0LL;
  v15 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  p_b = (OpponentRangeAggregator_Cell_o)&b;
  b = 0LL;
  OpponentRangeAggregator_Cell___ctor(p_b, baseIndex, 0LL);
  v28 = (OpponentRangeAggregator_Cell_o)&v24;
  v24 = 0LL;
  OpponentRangeAggregator_Cell___ctor(v28, 4, 0LL);
  v34 = v24;
  v29 = b;
  IsValid = OpponentRangeAggregator_Cell__op_Subtraction(v29, v34, 0LL);
  if ( !baseRangeArray )
    goto LABEL_14;
  v18 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = IsValid;
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
        v23 = ((__int64 (__fastcall *)(_QWORD))sub_B5D6C8)(IsValid);
        sub_B5D668(v23, 0LL);
      }
      v21 = baseRangeArray->m_Items[v20 + 1];
      v30 = (OpponentRangeAggregator_Cell_o)&b;
      b = 0LL;
      OpponentRangeAggregator_Cell___ctor(v30, v21 + 1 - 2 * ((v21 - 1) % 3), 0LL);
      v35 = b;
      v31 = v19;
      v26 = OpponentRangeAggregator_Cell__op_Addition(v31, v35, 0LL);
      v32 = (OpponentRangeAggregator_Cell_o)&v26;
      IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__IsValid(v32, 0LL);
      if ( (IsValid.fields.col & 1) != 0 )
      {
        v33 = (OpponentRangeAggregator_Cell_o)&v26;
        IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__GetIndex(v33, 0LL);
        if ( !v15 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v15,
          IsValid.fields.col,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v18) = baseRangeArray->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  if ( !v15 )
LABEL_14:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(IsValid, v17);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_19811832(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A6A & 1) == 0 )
  {
    sub_B5D5C4(&OpponentRangeAggregator___c_TypeInfo, v1, v2, v3);
    byte_42E5A6A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(_4__this, *(_QWORD *)&i);
  return BattleData__getServantData((BattleData_o *)_4__this, i, 0LL);
}


bool __fastcall OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__1(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  OpponentRangeAggregator___c__DisplayClass0_0_o *v5; // x20
  System_Collections_Generic_IEnumerable_TSource__o *indexArray; // x20
  int32_t DeckIndex; // w1

  v5 = this;
  if ( (byte_42E5A6B & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               (_DWORD)x,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E5A6B = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}