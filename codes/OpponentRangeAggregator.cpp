void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v17; // x20
  BattleData_o *battleData_k__BackingField; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  struct TargetAggregator_Args_o *v24; // x8
  int32_t v25; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v27; // x2
  System_Int32_array *TargetIndexArray; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_T__TResult__o *v33; // x21
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_object__bool__o *v37; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  OpponentRangeAggregator___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v42; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  _QWORD *v48; // x19
  __int64 v49; // x8
  __int64 v50; // x0
  __int64 v51; // x0

  if ( (byte_4A0B8E0 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Array_Empty_int___, method);
    sub_1B686D4(&Method_BasicHelper_ExcludeNull_BattleServantData___, v3);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v4);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v5);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B686D4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1B686D4(&System_Func_BattleServantData__int__TypeInfo, v9);
    sub_1B686D4(&System_Func_int__BattleServantData__TypeInfo, v10);
    sub_1B686D4(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1B686D4(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v12);
    sub_1B686D4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v13);
    sub_1B686D4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v14);
    sub_1B686D4(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v15);
    sub_1B686D4(&OpponentRangeAggregator___c_TypeInfo, v16);
    byte_4A0B8E0 = 1;
  }
  v17 = sub_1B68920(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  args = this->fields.args;
  if ( !args )
    goto LABEL_25;
  battleData_k__BackingField = args->fields._battleData_k__BackingField;
  if ( !battleData_k__BackingField )
    goto LABEL_25;
  ServantData = BattleData__getServantData(battleData_k__BackingField, args->fields._targetId_k__BackingField, 0LL);
  if ( ServantData )
  {
    battleData_k__BackingField = (BattleData_o *)BattleServantData__getDeckIndex(ServantData, 0LL);
    v24 = this->fields.args;
    if ( v24 )
    {
      v25 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v24->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange(
                       (Target_BattleTargetArgs_o *)battleData_k__BackingField,
                       0LL);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v25, v27);
        *(_QWORD *)(v17 + 24) = TargetIndexArray;
        sub_1B68678((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)TargetIndexArray, v29, v30);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v31);
        v33 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_int__BattleServantData__TypeInfo);
        System_Func_int__object____ctor(
          v33,
          (Il2CppObject *)v17,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0LL);
        v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v33,
                                                               (const MethodInfo_2E77C5C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v35 = BasicHelper__ExcludeNull_object_(
                v34,
                (const MethodInfo_2E35AA4 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                                     (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v37 = (System_Func_object__bool__o *)sub_1B68920(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v17,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0LL);
        v38 = System_Linq_Enumerable__Where_object_(
                v36,
                (System_Func_TSource__bool__o *)v37,
                (const MethodInfo_2E87B14 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v39 = OpponentRangeAggregator___c_TypeInfo;
        v40 = v38;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v39 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v39->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v39->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v39);
            v39 = OpponentRangeAggregator___c_TypeInfo;
          }
          v42 = (Il2CppObject *)v39->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1B68920(System_Func_BattleServantData__int__TypeInfo);
          System_Func_object__int____ctor(_9__0_2, v42, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0LL);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v44, v45);
        }
        v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v40,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_2E79760 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v46,
                 (const MethodInfo_2E81CA4 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1B68930(battleData_k__BackingField, v19);
  }
  v48 = Method_System_Array_Empty_int___;
  v49 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v49 )
  {
    sub_1BBA60C(Method_System_Array_Empty_int___);
    v49 = v48[7];
  }
  v50 = *(_QWORD *)(v49 + 16);
  if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
    v50 = sub_1BBA5B0(v50);
  if ( !*(_DWORD *)(v50 + 224) )
    j_il2cpp_runtime_class_init_0(v50);
  v51 = *(_QWORD *)(v48[7] + 16LL);
  if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
    v51 = sub_1BBA5B0(v51);
  return **(System_Int32_array ***)(v51 + 184);
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
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x25
  unsigned __int64 v14; // x22
  int v15; // w21
  int v16; // w8
  __int64 v17; // x9
  unsigned int v18; // w8
  unsigned __int64 v19; // x9
  struct System_Int32_array *items; // x10
  _QWORD *v21; // x11
  __int64 size; // x12

  if ( (byte_4A0B8E1 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex);
    sub_1B686D4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B686D4(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4A0B8E1 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B68920(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_349EA00 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseRangeArray )
    goto LABEL_18;
  v11 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = (unsigned int)(baseIndex / 3);
    v13 = (v12 << 32) - 0x100000000LL;
    v14 = 0LL;
    v15 = ~(3 * v12) + baseIndex;
    do
    {
      if ( v14 >= (unsigned int)v11 )
        sub_1B68938(v9, v10);
      v16 = baseRangeArray->m_Items[v14 + 1] - 2 * ((baseRangeArray->m_Items[v14 + 1] - 1) % 3) + 1;
      v17 = (unsigned int)(v16 / 3);
      v18 = v16 % 3 + v15;
      if ( v18 <= 2 )
      {
        v19 = (unsigned __int64)(v13 + (v17 << 32)) >> 32;
        if ( (unsigned int)v19 <= 1 )
        {
          if ( !v8 )
            goto LABEL_18;
          items = v8->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v8->fields._size;
          v10 = 3 * (_DWORD)v19 + v18;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              v10,
              *(const MethodInfo_349F254 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size + 1] = v10;
          }
        }
      }
      LODWORD(v11) = baseRangeArray->max_length;
    }
    while ( (__int64)++v14 < (int)v11 );
  }
  if ( !v8 )
LABEL_18:
    sub_1B68930(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_34A0D0C *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_43349236(
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0B8E2 & 1) == 0 )
  {
    sub_1B686D4(&OpponentRangeAggregator___c_TypeInfo, v1);
    byte_4A0B8E2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
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
  struct OpponentRangeAggregator_o *_4__this; // x8
  struct TargetAggregator_Args_o *args; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (args = _4__this->fields.args) == 0LL
    || (this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)args->fields._battleData_k__BackingField) == 0LL )
  {
    sub_1B68930(this, i);
  }
  return BattleData__getServantData((BattleData_o *)this, i, 0LL);
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
  if ( (byte_4A0B8E3 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1B686D4(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               x);
    byte_4A0B8E3 = 1;
  }
  if ( !x )
    sub_1B68930(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_2E63938 *)Method_System_Linq_Enumerable_Contains_int___);
}