void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleData_o *battleData; // x21
  int32_t targetId; // w0
  BattleServantData_o *ServantData; // x0
  int32_t DeckIndex; // w21
  Target_BattleTargetArgs_o *battleTargetArgs; // x0
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v36; // x2
  System_Int32_array **TargetIndexArray; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Func_int__BattleActionData_SideEffectData__o *v50; // x21
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  System_Collections_Generic_IEnumerable_T__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  OpponentRangeAggregator___c_c *v64; // x8
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_2; // x20
  Il2CppObject *v67; // x21
  struct OpponentRangeAggregator___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  _QWORD **v77; // x20
  __int64 v78; // x19
  __int16 v79; // w8
  __int64 v80; // x19
  __int64 v81; // x19
  __int64 v82; // x19

  if ( (byte_40F7F64 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, method);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_BattleServantData___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11);
    sub_B16FFC(&Method_System_Func_int__BattleServantData___ctor__, v12);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v13);
    sub_B16FFC(&Method_System_Func_BattleServantData__int___ctor__, v14);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_BattleServantData__int__TypeInfo, v16);
    sub_B16FFC(&System_Func_int__BattleServantData__TypeInfo, v17);
    sub_B16FFC(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v18);
    sub_B16FFC(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v19);
    sub_B16FFC(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v20);
    sub_B16FFC(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v21);
    sub_B16FFC(&OpponentRangeAggregator___c_TypeInfo, v22);
    byte_40F7F64 = 1;
  }
  v23 = sub_B170CC(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, method, v2, v3, v4);
  OpponentRangeAggregator___c__DisplayClass0_0___ctor((OpponentRangeAggregator___c__DisplayClass0_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_QWORD *)(v23 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0LL);
  targetId = TargetAggregator__get_targetId((TargetAggregator_o *)this, 0LL);
  if ( !battleData )
    goto LABEL_28;
  ServantData = BattleData__getServantData(battleData, targetId, 0LL);
  if ( ServantData )
  {
    DeckIndex = BattleServantData__getDeckIndex(ServantData, 0LL);
    battleTargetArgs = TargetAggregator__get_battleTargetArgs((TargetAggregator_o *)this, 0LL);
    if ( battleTargetArgs )
    {
      EnemyRange = Target_BattleTargetArgs__get_EnemyRange(battleTargetArgs, 0LL);
      TargetIndexArray = (System_Int32_array **)OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, DeckIndex, v36);
      *(_QWORD *)(v23 + 24) = TargetIndexArray;
      sub_B16F98((BattleServantConfConponent_o *)(v23 + 24), TargetIndexArray, v38, v39, v40, v41, v42, v43);
      Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                         (OpponentAllFieldTargetAggregator_o *)this,
                                                                         v44);
      v50 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                     System_Func_int__BattleServantData__TypeInfo,
                                                                     v46,
                                                                     v47,
                                                                     v48,
                                                                     v49);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v50,
        (Il2CppObject *)v23,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
        (const MethodInfo_2B66764 *)Method_System_Func_int__BattleServantData___ctor__);
      v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                             Candidate,
                                                             (System_Func_TSource__TResult__o *)v50,
                                                             (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v52 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
              v51,
              (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
      v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
      v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_BattleServantData__bool__TypeInfo,
                                                                                 v54,
                                                                                 v55,
                                                                                 v56,
                                                                                 v57);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v58,
        (Il2CppObject *)v23,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
      v63 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v53,
              (System_Func_TSource__bool__o *)v58,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      v64 = OpponentRangeAggregator___c_TypeInfo;
      if ( (BYTE3(OpponentRangeAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
        v64 = OpponentRangeAggregator___c_TypeInfo;
      }
      static_fields = v64->static_fields;
      _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_2;
      if ( !_9__0_2 )
      {
        if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v64);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
        }
        v67 = (Il2CppObject *)static_fields->__9;
        _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                    System_Func_BattleServantData__int__TypeInfo,
                                                                                    v59,
                                                                                    v60,
                                                                                    v61,
                                                                                    v62);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__0_2,
          v67,
          Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
        v68 = OpponentRangeAggregator___c_TypeInfo->static_fields;
        v68->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v68->__9__0_2,
          (System_Int32_array **)_9__0_2,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
      }
      v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v63,
                                                                   (System_Func_TSource__TResult__o *)_9__0_2,
                                                                   (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v75,
               (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_B170D4();
  }
  v77 = (_QWORD **)Method_System_Array_Empty_int___;
  v78 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v79 = *(_WORD *)(v78 + 306);
  if ( (v79 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v79 = *(_WORD *)(v78 + 306);
  }
  if ( (v79 & 0x400) != 0 )
  {
    v80 = *v77[6];
    if ( (*(_BYTE *)(v80 + 306) & 1) == 0 )
      sub_AAFCFC(*v77[6]);
    if ( !*(_DWORD *)(v80 + 224) )
    {
      v81 = *v77[6];
      if ( (*(_BYTE *)(v81 + 306) & 1) == 0 )
        sub_AAFCFC(*v77[6]);
      j_il2cpp_runtime_class_init_0(v81);
    }
  }
  v82 = *v77[6];
  if ( (*(_BYTE *)(v82 + 306) & 1) == 0 )
    sub_AAFCFC(*v77[6]);
  return **(System_Int32_array ***)(v82 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  OpponentRangeAggregator_Cell_o IsValid; // x0
  OpponentRangeAggregator_Cell_o v12; // x1
  OpponentRangeAggregator_Cell_o v13; // x2
  __int64 v14; // x8
  OpponentRangeAggregator_Cell_o v15; // x21
  unsigned __int64 v16; // x22
  int32_t v17; // w8
  int32_t Index; // w0
  OpponentRangeAggregator_Cell_o v20; // [xsp+0h] [xbp-50h] BYREF
  OpponentRangeAggregator_Cell_o b; // [xsp+8h] [xbp-48h] BYREF
  OpponentRangeAggregator_Cell_o v22; // [xsp+18h] [xbp-38h] BYREF
  OpponentRangeAggregator_Cell_o p_b; // 0:x0.8
  OpponentRangeAggregator_Cell_o v24; // 0:x0.8
  OpponentRangeAggregator_Cell_o v25; // 0:x0.8
  OpponentRangeAggregator_Cell_o v26; // 0:x0.8
  OpponentRangeAggregator_Cell_o v27; // 0:x0.8
  OpponentRangeAggregator_Cell_o v28; // 0:x0.8
  OpponentRangeAggregator_Cell_o v29; // 0:x0.8
  OpponentRangeAggregator_Cell_o v30; // 0:x1.8
  OpponentRangeAggregator_Cell_o v31; // 0:x1.8

  if ( (byte_40F7F65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40F7F65 = 1;
  }
  v22 = 0LL;
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&baseIndex,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  p_b = (OpponentRangeAggregator_Cell_o)&b;
  b = 0LL;
  OpponentRangeAggregator_Cell___ctor(p_b, baseIndex, 0LL);
  v24 = (OpponentRangeAggregator_Cell_o)&v20;
  v20 = 0LL;
  OpponentRangeAggregator_Cell___ctor(v24, 4, 0LL);
  v30 = v20;
  v25 = b;
  IsValid = OpponentRangeAggregator_Cell__op_Subtraction(v25, v30, 0LL);
  if ( !baseRangeArray )
    goto LABEL_14;
  v14 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = IsValid;
    v16 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v14 )
      {
        sub_B17100(IsValid, v12, v13);
        sub_B170A0();
      }
      v17 = baseRangeArray->m_Items[v16 + 1];
      v26 = (OpponentRangeAggregator_Cell_o)&b;
      b = 0LL;
      OpponentRangeAggregator_Cell___ctor(v26, v17 + 1 - 2 * ((v17 - 1) % 3), 0LL);
      v31 = b;
      v27 = v15;
      v22 = OpponentRangeAggregator_Cell__op_Addition(v27, v31, 0LL);
      v28 = (OpponentRangeAggregator_Cell_o)&v22;
      IsValid = (OpponentRangeAggregator_Cell_o)OpponentRangeAggregator_Cell__IsValid(v28, 0LL);
      if ( (IsValid.fields.col & 1) != 0 )
      {
        v29 = (OpponentRangeAggregator_Cell_o)&v22;
        Index = OpponentRangeAggregator_Cell__GetIndex(v29, 0LL);
        if ( !v10 )
          goto LABEL_14;
        System_Collections_Generic_List_int___Add(
          v10,
          Index,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v14) = baseRangeArray->max_length;
      ++v16;
    }
    while ( (__int64)v16 < (int)v14 );
  }
  if ( !v10 )
LABEL_14:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_21864684(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8361 & 1) == 0 )
  {
    sub_B16FFC(&OpponentRangeAggregator___c_TypeInfo, v1);
    byte_40F8361 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(OpponentRangeAggregator___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)OpponentRangeAggregator___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  BattleData_o *battleData; // x0

  _4__this = (TargetAggregator_o *)this->fields.__4__this;
  if ( !_4__this || (battleData = TargetAggregator__get_battleData(_4__this, 0LL)) == 0LL )
    sub_B170D4();
  return BattleData__getServantData(battleData, i, 0LL);
}


bool __fastcall OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__1(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *indexArray; // x20
  int32_t DeckIndex; // w1

  if ( (byte_40F8362 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_40F8362 = 1;
  }
  if ( !x )
    sub_B170D4();
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}