void OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *OpponentRangeAggregator__GetCandidate(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  BattleData_o *battleData_k__BackingField; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  long double inited; // q0
  struct TargetAggregator_Args_o *v11; // x8
  int32_t v12; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v14; // x2
  System_Int32_array *TargetIndexArray; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_T__TResult__o *v20; // x21
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  OpponentRangeAggregator___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v29; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  _QWORD *v35; // x19
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_4C2A472 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C2D490(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C2D490(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__);
    sub_1C2D490(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__);
    sub_1C2D490(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__);
    sub_1C2D490(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
    sub_1C2D490(&OpponentRangeAggregator___c_TypeInfo);
    byte_4C2A472 = 1;
  }
  v3 = sub_1C2D6DC(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
    v11 = this->fields.args;
    if ( v11 )
    {
      v12 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v11->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange((Target_BattleTargetArgs_o *)battleData_k__BackingField, 0);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v12, v14);
        *(_QWORD *)(v3 + 24) = TargetIndexArray;
        sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)TargetIndexArray, v16, v17);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v18);
        v20 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__BattleServantData__TypeInfo);
        System_Func_int__object____ctor(
          v20,
          (Il2CppObject *)v3,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0);
        v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v20,
                                                               (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v22 = BasicHelper__ExcludeNull_object_(
                v21,
                (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                                                     (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v24 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v24,
          (Il2CppObject *)v3,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0);
        v25 = System_Linq_Enumerable__Where_object_(
                v23,
                (System_Func_TSource__bool__o *)v24,
                (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v26 = OpponentRangeAggregator___c_TypeInfo;
        v27 = v25;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v26 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v26->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = OpponentRangeAggregator___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v26->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
          System_Func_object__int____ctor(_9__0_2, v29, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v31, v32);
        }
        v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v27,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v33,
                 (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1C2D6EC(battleData_k__BackingField, v5);
  }
  v35 = Method_System_Array_Empty_int___;
  v36 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v36 )
  {
    sub_1C7DC00(Method_System_Array_Empty_int___);
    v36 = v35[7];
  }
  v37 = *(_QWORD *)(v36 + 16);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v37 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v37);
  v38 = *(_QWORD *)(v35[7] + 16LL);
  if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
    v38 = sub_1C7DBA4(inited);
  return **(System_Int32_array ***)(v38 + 184);
}


System_Int32_array *OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  il2cpp_array_size_t max_length; // x8
  __int64 v10; // x9
  __int64 v11; // x25
  unsigned __int64 v12; // x22
  int v13; // w21
  int v14; // w8
  __int64 v15; // x9
  unsigned int v16; // w8
  unsigned __int64 v17; // x9
  struct System_Int32_array *items; // x10
  _QWORD *v19; // x11
  __int64 size; // x12

  if ( (byte_4C2A473 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2A473 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseRangeArray )
    goto LABEL_18;
  max_length = baseRangeArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = (unsigned int)(baseIndex / 3);
    v11 = (v10 << 32) - 0x100000000LL;
    v12 = 0;
    v13 = ~(3 * v10) + baseIndex;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C2D6F4(v6, v7, v8);
      v14 = baseRangeArray->m_Items[v12] - 2 * ((baseRangeArray->m_Items[v12] - 1) % 3) + 1;
      v15 = (unsigned int)(v14 / 3);
      v16 = v14 % 3 + v13;
      if ( v16 <= 2 )
      {
        v17 = (unsigned __int64)(v11 + (v15 << 32)) >> 32;
        if ( (unsigned int)v17 <= 1 )
        {
          if ( !v5 )
            goto LABEL_18;
          items = v5->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v5->fields._size;
          v7 = 3 * (_DWORD)v17 + v16;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v7,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = v7;
          }
        }
      }
      LODWORD(max_length) = baseRangeArray->max_length;
    }
    while ( (__int64)++v12 < (int)max_length );
  }
  if ( !v5 )
LABEL_18:
    sub_1C2D6EC(v6, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void OpponentRangeAggregator_Cell___ctor(OpponentRangeAggregator_Cell_o this, int32_t index, const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void OpponentRangeAggregator_Cell___ctor_46731744(
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

  if ( (byte_4C2A474 & 1) == 0 )
  {
    sub_1C2D490(&OpponentRangeAggregator___c_TypeInfo);
    byte_4C2A474 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, i);
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
  if ( (byte_4C2A475 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C2A475 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}