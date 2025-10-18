void OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *OpponentRangeAggregator__GetCandidate(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  BattleData_o *battleData_k__BackingField; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  long double inited; // q0
  struct TargetAggregator_Args_o *v10; // x8
  int32_t v11; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v13; // x2
  System_Int32_array *TargetIndexArray; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_T__TResult__o *v19; // x21
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__bool__o *v23; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  OpponentRangeAggregator___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v28; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  _QWORD *v34; // x19
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_4C46286 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C37058(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C37058(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C37058(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C37058(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__);
    sub_1C37058(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__);
    sub_1C37058(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__);
    sub_1C37058(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
    sub_1C37058(&OpponentRangeAggregator___c_TypeInfo);
    byte_4C46286 = 1;
  }
  v3 = sub_1C372A4(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
  args = this->fields.args;
  if ( !args )
    goto LABEL_25;
  battleData_k__BackingField = args->fields._battleData_k__BackingField;
  if ( !battleData_k__BackingField )
    goto LABEL_25;
  ServantData = BattleData__getServantData(battleData_k__BackingField, args->fields._targetId_k__BackingField, 0);
  if ( ServantData )
  {
    battleData_k__BackingField = (BattleData_o *)BattleServantData__getDeckIndex(ServantData, 0);
    v10 = this->fields.args;
    if ( v10 )
    {
      v11 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v10->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange((Target_BattleTargetArgs_o *)battleData_k__BackingField, 0);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v11, v13);
        *(_QWORD *)(v3 + 24) = TargetIndexArray;
        sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)TargetIndexArray, v15, v16);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v17);
        v19 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__BattleServantData__TypeInfo);
        System_Func_int__object____ctor(
          v19,
          (Il2CppObject *)v3,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0);
        v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v19,
                                                               (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v21 = BasicHelper__ExcludeNull_object_(
                v20,
                (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                     (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v23 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v23,
          (Il2CppObject *)v3,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0);
        v24 = System_Linq_Enumerable__Where_object_(
                v22,
                (System_Func_TSource__bool__o *)v23,
                (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v25 = OpponentRangeAggregator___c_TypeInfo;
        v26 = v24;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v25 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v25->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            v25 = OpponentRangeAggregator___c_TypeInfo;
          }
          v28 = (Il2CppObject *)v25->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BattleServantData__int__TypeInfo);
          System_Func_object__int____ctor(_9__0_2, v28, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v30, v31);
        }
        v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v26,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v32,
                 (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1C372B4(battleData_k__BackingField);
  }
  v34 = Method_System_Array_Empty_int___;
  v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v35 )
  {
    sub_1C877C8(Method_System_Array_Empty_int___);
    v35 = v34[7];
  }
  v36 = *(_QWORD *)(v35 + 16);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v36 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v36);
  v37 = *(_QWORD *)(v34[7] + 16LL);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C8776C(inited);
  return **(System_Int32_array ***)(v37 + 184);
}


System_Int32_array *OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x0
  il2cpp_array_size_t max_length; // x8
  __int64 v8; // x9
  __int64 v9; // x25
  unsigned __int64 v10; // x22
  int v11; // w21
  int v12; // w8
  __int64 v13; // x9
  unsigned int v14; // w8
  unsigned __int64 v15; // x9
  struct System_Int32_array *items; // x10
  _QWORD *v17; // x11
  __int64 size; // x12
  int32_t v19; // w1

  if ( (byte_4C46287 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C46287 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseRangeArray )
    goto LABEL_18;
  max_length = baseRangeArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = (unsigned int)(baseIndex / 3);
    v9 = (v8 << 32) - 0x100000000LL;
    v10 = 0;
    v11 = ~(3 * v8) + baseIndex;
    do
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C372BC(v6);
      v12 = baseRangeArray->m_Items[v10] - 2 * ((baseRangeArray->m_Items[v10] - 1) % 3) + 1;
      v13 = (unsigned int)(v12 / 3);
      v14 = v12 % 3 + v11;
      if ( v14 <= 2 )
      {
        v15 = (unsigned __int64)(v9 + (v13 << 32)) >> 32;
        if ( (unsigned int)v15 <= 1 )
        {
          if ( !v5 )
            goto LABEL_18;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v5->fields._size;
          v19 = 3 * v15 + v14;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v19,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = v19;
          }
        }
      }
      LODWORD(max_length) = baseRangeArray->max_length;
    }
    while ( (__int64)++v10 < (int)max_length );
  }
  if ( !v5 )
LABEL_18:
    sub_1C372B4(v6);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void OpponentRangeAggregator_Cell___ctor(OpponentRangeAggregator_Cell_o this, int32_t index, const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void OpponentRangeAggregator_Cell___ctor_47100260(
        OpponentRangeAggregator_Cell_o this,
        int32_t col,
        int32_t row,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = col;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = row;
}


int32_t OpponentRangeAggregator_Cell__GetIndex(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return 3 * *(_DWORD *)(*(_QWORD *)&this + 4LL) + *(_DWORD *)this.fields.col;
}


bool OpponentRangeAggregator_Cell__IsValid(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this + 4LL) <= 1u && *(_DWORD *)this.fields.col < 3u;
}


int32_t OpponentRangeAggregator_Cell__get_Col(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return *(_DWORD *)this.fields.col;
}


int32_t OpponentRangeAggregator_Cell__get_Row(OpponentRangeAggregator_Cell_o this, const MethodInfo *method)
{
  return *(_DWORD *)(*(_QWORD *)&this + 4LL);
}


OpponentRangeAggregator_Cell_o OpponentRangeAggregator_Cell__op_Addition(
        OpponentRangeAggregator_Cell_o a,
        OpponentRangeAggregator_Cell_o b,
        const MethodInfo *method)
{
  return (OpponentRangeAggregator_Cell_o)(((*(_QWORD *)&b & 0xFFFFFFFF00000000LL) + *(_QWORD *)&a)
                                        & 0xFFFFFFFF00000000LL
                                        | (unsigned int)(b.fields.col + a.fields.col));
}


OpponentRangeAggregator_Cell_o OpponentRangeAggregator_Cell__op_Subtraction(
        OpponentRangeAggregator_Cell_o a,
        OpponentRangeAggregator_Cell_o b,
        const MethodInfo *method)
{
  return (OpponentRangeAggregator_Cell_o)((*(_QWORD *)&a - (*(_QWORD *)&b & 0xFFFFFFFF00000000LL))
                                        & 0xFFFFFFFF00000000LL
                                        | (unsigned int)(a.fields.col - b.fields.col));
}


void OpponentRangeAggregator___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46288 & 1) == 0 )
  {
    sub_1C37058(&OpponentRangeAggregator___c_TypeInfo);
    byte_4C46288 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void OpponentRangeAggregator___c___ctor(OpponentRangeAggregator___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t OpponentRangeAggregator___c___GetCandidate_b__0_2(
        OpponentRangeAggregator___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.uniqueId;
}


void OpponentRangeAggregator___c__DisplayClass0_0___ctor(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleServantData_o *OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__0(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  struct OpponentRangeAggregator_o *_4__this; // x8
  struct TargetAggregator_Args_o *args; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (args = _4__this->fields.args) == 0
    || (this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)args->fields._battleData_k__BackingField) == 0 )
  {
    sub_1C372B4(this);
  }
  return BattleData__getServantData((BattleData_o *)this, i, 0);
}


bool OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__1(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  OpponentRangeAggregator___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_IEnumerable_TSource__o *indexArray; // x20
  int32_t DeckIndex; // w1

  v4 = this;
  if ( (byte_4C46289 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C46289 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
}