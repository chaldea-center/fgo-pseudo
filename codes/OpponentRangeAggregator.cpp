void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  __int64 v18; // x20
  BattleData_o *battleData_k__BackingField; // x0
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
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_T__TResult__o *v35; // x21
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_T__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  System_Func_object__bool__o *v41; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  OpponentRangeAggregator___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v48; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  _QWORD *v54; // x19
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0

  if ( (byte_49FF064 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_BattleServantData___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9);
    sub_1B640C8(&System_Func_BattleServantData__int__TypeInfo, v10);
    sub_1B640C8(&System_Func_int__BattleServantData__TypeInfo, v11);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v12);
    sub_1B640C8(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v13);
    sub_1B640C8(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v14);
    sub_1B640C8(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v15);
    sub_1B640C8(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v16);
    sub_1B640C8(&OpponentRangeAggregator___c_TypeInfo, v17);
    byte_49FF064 = 1;
  }
  v18 = sub_1B64314(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
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
        *(_QWORD *)(v18 + 24) = TargetIndexArray;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)TargetIndexArray, v29, v30);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v31);
        v35 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__BattleServantData__TypeInfo, v33, v34);
        System_Func_int__object____ctor(
          v35,
          (Il2CppObject *)v18,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0LL);
        v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v35,
                                                               (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v37 = BasicHelper__ExcludeNull_object_(
                v36,
                (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                                     (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v41 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v39, v40);
        System_Func_object__bool____ctor(
          v41,
          (Il2CppObject *)v18,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0LL);
        v42 = System_Linq_Enumerable__Where_object_(
                v38,
                (System_Func_TSource__bool__o *)v41,
                (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v45 = OpponentRangeAggregator___c_TypeInfo;
        v46 = v42;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v45 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v45->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v45->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v45);
            v45 = OpponentRangeAggregator___c_TypeInfo;
          }
          v48 = (Il2CppObject *)v45->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v43, v44);
          System_Func_object__int____ctor(_9__0_2, v48, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0LL);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v50, v51);
        }
        v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v46,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v52,
                 (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1B64324(battleData_k__BackingField);
  }
  v54 = Method_System_Array_Empty_int___;
  v55 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v55 )
  {
    sub_1BB6000(Method_System_Array_Empty_int___);
    v55 = v54[7];
  }
  v56 = *(_QWORD *)(v55 + 16);
  if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
    v56 = sub_1BB5FA4(v56);
  if ( !*(_DWORD *)(v56 + 224) )
    j_il2cpp_runtime_class_init_0(v56);
  v57 = *(_QWORD *)(v54[7] + 16LL);
  if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
    v57 = sub_1BB5FA4(v57);
  return **(System_Int32_array ***)(v57 + 184);
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

  if ( (byte_49FF065 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_49FF065 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&baseIndex,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1B6432C(v9, v10);
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
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1B64324(v9);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_43272200(
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF066 & 1) == 0 )
  {
    sub_1B640C8(&OpponentRangeAggregator___c_TypeInfo, v1);
    byte_49FF066 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(OpponentRangeAggregator___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FF067 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1B640C8(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               x);
    byte_49FF067 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}