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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  long double inited; // q0
  struct TargetAggregator_Args_o *v15; // x8
  int32_t v16; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v18; // x2
  System_Int32_array *TargetIndexArray; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_T__TResult__o *v28; // x21
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_object__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  OpponentRangeAggregator___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v37; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  _QWORD *v47; // x19
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_4D33E75 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_BattleServantData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C93AD4(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C93AD4(&System_Func_int__BattleServantData__TypeInfo);
    sub_1C93AD4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C93AD4(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__);
    sub_1C93AD4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__);
    sub_1C93AD4(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__);
    sub_1C93AD4(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
    sub_1C93AD4(&OpponentRangeAggregator___c_TypeInfo);
    byte_4D33E75 = 1;
  }
  v3 = sub_1C93D20(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
    v15 = this->fields.args;
    if ( v15 )
    {
      v16 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v15->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange((Target_BattleTargetArgs_o *)battleData_k__BackingField, 0);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v16, v18);
        *(_QWORD *)(v3 + 24) = TargetIndexArray;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)TargetIndexArray, v20, v21, v22, v23, v24, v25);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v26);
        v28 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__BattleServantData__TypeInfo);
        System_Func_int__object____ctor(
          v28,
          (Il2CppObject *)v3,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0);
        v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v28,
                                                               (const MethodInfo_31D7E14 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v30 = BasicHelper__ExcludeNull_object_(
                v29,
                (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                     (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v32 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v32,
          (Il2CppObject *)v3,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0);
        v33 = System_Linq_Enumerable__Where_object_(
                v31,
                (System_Func_TSource__bool__o *)v32,
                (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v34 = OpponentRangeAggregator___c_TypeInfo;
        v35 = v33;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v34 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v34->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v34->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v34);
            v34 = OpponentRangeAggregator___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v34->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_BattleServantData__int__TypeInfo);
          System_Func_object__int____ctor(_9__0_2, v37, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__0_2,
            (int32_t)_9__0_2,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v35,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v45,
                 (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1C93D2C(battleData_k__BackingField, v5);
  }
  v47 = Method_System_Array_Empty_int___;
  v48 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v48 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v48 = v47[7];
  }
  v49 = *(_QWORD *)(v48 + 16);
  if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
    v49 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v49 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v49);
  v50 = *(_QWORD *)(v47[7] + 16LL);
  if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
    v50 = sub_1C69B68(inited);
  return **(System_Int32_array ***)(v50 + 184);
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

  if ( (byte_4D33E76 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D33E76 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C93D34(v6);
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
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
    sub_1C93D2C(v6, v7);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void OpponentRangeAggregator_Cell___ctor(OpponentRangeAggregator_Cell_o this, int32_t index, const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void OpponentRangeAggregator_Cell___ctor_47999928(
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D33E77 & 1) == 0 )
  {
    sub_1C93AD4(&OpponentRangeAggregator___c_TypeInfo);
    byte_4D33E77 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, i);
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
  if ( (byte_4D33E78 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D33E78 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}