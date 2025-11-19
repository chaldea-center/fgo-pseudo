void OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  TargetAggregator___ctor((TargetAggregator_o *)this, 0);
}


System_Int32_array *OpponentRangeAggregator__GetCandidate(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Target_BattleTargetArgs_o *targetId; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleData_o *battleData; // x21
  BattleServantData_o *ServantData; // x0
  long double inited; // q0
  int32_t DeckIndex; // w21
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

  if ( (byte_4CB970B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_int___);
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C6BA08(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C6BA08(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C6BA08(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__);
    sub_1C6BA08(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__);
    sub_1C6BA08(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__);
    sub_1C6BA08(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
    sub_1C6BA08(&OpponentRangeAggregator___c_TypeInfo);
    byte_4CB970B = 1;
  }
  v3 = sub_1C6BC54(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_23;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  battleData = TargetAggregator__get_battleData((TargetAggregator_o *)this, 0);
  targetId = (Target_BattleTargetArgs_o *)TargetAggregator__get_targetId((TargetAggregator_o *)this, 0);
  if ( !battleData )
    goto LABEL_23;
  ServantData = BattleData__getServantData(battleData, (int32_t)targetId, 0);
  if ( ServantData )
  {
    DeckIndex = BattleServantData__getDeckIndex(ServantData, 0);
    targetId = TargetAggregator__get_battleTargetArgs((TargetAggregator_o *)this, 0);
    if ( targetId )
    {
      EnemyRange = Target_BattleTargetArgs__get_EnemyRange(targetId, 0);
      TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, DeckIndex, v13);
      *(_QWORD *)(v3 + 24) = TargetIndexArray;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)TargetIndexArray, v15, v16);
      Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                         (OpponentAllFieldTargetAggregator_o *)this,
                                                                         v17);
      v19 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_int__BattleServantData__TypeInfo);
      System_Func_int__object____ctor(
        v19,
        (Il2CppObject *)v3,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
        0);
      v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                             Candidate,
                                                             (System_Func_TSource__TResult__o *)v19,
                                                             (const MethodInfo_316EE54 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
      v21 = BasicHelper__ExcludeNull_object_(
              v20,
              (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                   (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
      v23 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v3,
        Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              v22,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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
        _9__0_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleServantData__int__TypeInfo);
        System_Func_object__int____ctor(_9__0_2, v28, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0);
        static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
        static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v30, v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v26,
                                                                   (System_Func_TSource__TResult__o *)_9__0_2,
                                                                   (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v32,
               (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
LABEL_23:
    sub_1C6BC60(targetId, v5);
  }
  v34 = Method_System_Array_Empty_int___;
  v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v35 )
  {
    sub_1C41AF8(Method_System_Array_Empty_int___);
    v35 = v34[7];
  }
  v36 = *(_QWORD *)(v35 + 16);
  if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
    v36 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v36 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v36);
  v37 = *(_QWORD *)(v34[7] + 16LL);
  if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
    v37 = sub_1C41A9C(inited);
  return **(System_Int32_array ***)(v37 + 184);
}


System_Int32_array *OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v9; // x9
  __int64 v10; // x25
  unsigned __int64 v11; // x22
  int v12; // w21
  int v13; // w8
  __int64 v14; // x9
  unsigned int v15; // w8
  unsigned __int64 v16; // x9
  struct System_Int32_array *items; // x10
  _QWORD *v18; // x11
  __int64 size; // x12

  if ( (byte_4CB970C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB970C = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseRangeArray )
    goto LABEL_18;
  max_length = baseRangeArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = (unsigned int)(baseIndex / 3);
    v10 = (v9 << 32) - 0x100000000LL;
    v11 = 0;
    v12 = ~(3 * v9) + baseIndex;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C6BC68(v6);
      v13 = baseRangeArray->m_Items[v11] - 2 * ((baseRangeArray->m_Items[v11] - 1) % 3) + 1;
      v14 = (unsigned int)(v13 / 3);
      v15 = v13 % 3 + v12;
      if ( v15 <= 2 )
      {
        v16 = (unsigned __int64)(v10 + (v14 << 32)) >> 32;
        if ( (unsigned int)v16 <= 1 )
        {
          if ( !v5 )
            goto LABEL_18;
          items = v5->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v5->fields._size;
          v7 = 3 * (_DWORD)v16 + v15;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              v7,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
    while ( (__int64)++v11 < (int)max_length );
  }
  if ( !v5 )
LABEL_18:
    sub_1C6BC60(v6, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void OpponentRangeAggregator_Cell___ctor(OpponentRangeAggregator_Cell_o this, int32_t index, const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void OpponentRangeAggregator_Cell___ctor_47490348(
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

  if ( (byte_4CB970D & 1) == 0 )
  {
    sub_1C6BA08(&OpponentRangeAggregator___c_TypeInfo);
    byte_4CB970D = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return x->fields.uniqueId;
}


void OpponentRangeAggregator___c__DisplayClass0_0___ctor(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_o *OpponentRangeAggregator___c__DisplayClass0_0___GetCandidate_b__0(
        OpponentRangeAggregator___c__DisplayClass0_0_o *this,
        int32_t i,
        const MethodInfo *method)
{
  TargetAggregator_o *_4__this; // x0

  _4__this = (TargetAggregator_o *)this->fields.__4__this;
  if ( !_4__this || (_4__this = (TargetAggregator_o *)TargetAggregator__get_battleData(_4__this, 0)) == 0 )
    sub_1C6BC60(_4__this, *(_QWORD *)&i);
  return BattleData__getServantData((BattleData_o *)_4__this, i, 0);
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
  if ( (byte_4CB970E & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4CB970E = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}