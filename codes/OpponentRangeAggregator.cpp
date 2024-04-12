void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  OpponentRangeAggregator___c__DisplayClass0_0_o *v3; // x20
  Target_BattleTargetArgs_o *targetId; // x0
  __int64 v5; // x1
  BattleData_o *battleData; // x21
  BattleServantData_o *ServantData; // x0
  int32_t DeckIndex; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v13; // x21
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  OpponentRangeAggregator___c_c *v19; // x8
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_2; // x20
  Il2CppObject *v22; // x21
  struct OpponentRangeAggregator___c_StaticFields *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  _QWORD **v26; // x20
  __int64 v27; // x19
  __int16 v28; // w8
  __int64 v29; // x19
  __int64 v30; // x19
  __int64 v31; // x19

  if ( (byte_42ADB37 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_int__BattleServantData___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__int___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_Func_BattleServantData__int__TypeInfo);
    sub_B52984(&System_Func_int__BattleServantData__TypeInfo);
    sub_B52984(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__);
    sub_B52984(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__);
    sub_B52984(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__);
    sub_B52984(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&OpponentRangeAggregator___c_TypeInfo);
    byte_42ADB37 = 1;
  }
  v3 = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B52A54(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  OpponentRangeAggregator___c__DisplayClass0_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_28;
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields);
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
      v3->fields.indexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, DeckIndex, v10);
      sub_B52920(&v3->fields.indexArray);
      Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                         (OpponentAllFieldTargetAggregator_o *)this,
                                                                         v11);
      v13 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v13,
        (Il2CppObject *)v3,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
        (const MethodInfo_2BC49BC *)Method_System_Func_int__BattleServantData___ctor__);
      v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                             Candidate,
                                                             (System_Func_TSource__TResult__o *)v13,
                                                             (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v15 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
              v14,
              (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
      v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v17,
        (Il2CppObject *)v3,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
      v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v16,
              (System_Func_TSource__bool__o *)v17,
              (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
      v19 = OpponentRangeAggregator___c_TypeInfo;
      if ( (BYTE3(OpponentRangeAggregator___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
        v19 = OpponentRangeAggregator___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_2;
      if ( !_9__0_2 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__0_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleServantData__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__0_2,
          v22,
          Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__,
          (const MethodInfo_2BC9C68 *)Method_System_Func_BattleServantData__int___ctor__);
        v23 = OpponentRangeAggregator___c_TypeInfo->static_fields;
        v23->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
        sub_B52920(&v23->__9__0_2);
      }
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v18,
                                                                   (System_Func_TSource__TResult__o *)_9__0_2,
                                                                   (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v24,
               (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_28:
    sub_B52A5C(targetId, v5);
  }
  v26 = (_QWORD **)Method_System_Array_Empty_int___;
  v27 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v28 = *(_WORD *)(v27 + 306);
  if ( (v28 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v28 = *(_WORD *)(v27 + 306);
  }
  if ( (v28 & 0x400) != 0 )
  {
    v29 = *v26[6];
    if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
      sub_AEB684(*v26[6]);
    if ( !*(_DWORD *)(v29 + 224) )
    {
      v30 = *v26[6];
      if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
        sub_AEB684(*v26[6]);
      j_il2cpp_runtime_class_init_0(v30);
    }
  }
  v31 = *v26[6];
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AEB684(*v26[6]);
  return **(System_Int32_array ***)(v31 + 184);
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

  if ( (byte_42ADB38 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42ADB38 = 1;
  }
  v16 = 0LL;
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
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
        v13 = ((__int64 (__fastcall *)(_QWORD))sub_B52A88)(IsValid);
        sub_B52A28(v13, 0LL);
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
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v8) = baseRangeArray->max_length;
      ++v10;
    }
    while ( (__int64)v10 < (int)v8 );
  }
  if ( !v5 )
LABEL_14:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(IsValid, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_19824628(
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
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0

  if ( (byte_42AD3F9 & 1) == 0 )
  {
    sub_B52984(&OpponentRangeAggregator___c_TypeInfo);
    byte_42AD3F9 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(_4__this, *(_QWORD *)&i);
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
  if ( (byte_42AD3FA & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42AD3FA = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
}