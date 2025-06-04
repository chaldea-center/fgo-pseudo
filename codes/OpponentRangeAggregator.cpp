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
  const MethodInfo *v21; // x3
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  long double inited; // q0
  struct TargetAggregator_Args_o *v25; // x8
  int32_t v26; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v28; // x2
  System_Int32_array *TargetIndexArray; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_T__TResult__o *v34; // x21
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Func_object__bool__o *v38; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  OpponentRangeAggregator___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v43; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  _QWORD *v49; // x19
  __int64 v50; // x8
  __int64 v51; // x0
  __int64 v52; // x0

  if ( (byte_4B0508C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_int___, method);
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_BattleServantData___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1BC3008(&System_Func_BattleServantData__int__TypeInfo, v9);
    sub_1BC3008(&System_Func_int__BattleServantData__TypeInfo, v10);
    sub_1BC3008(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1BC3008(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v12);
    sub_1BC3008(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v13);
    sub_1BC3008(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v14);
    sub_1BC3008(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v15);
    sub_1BC3008(&OpponentRangeAggregator___c_TypeInfo, v16);
    byte_4B0508C = 1;
  }
  v17 = sub_1BC3254(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
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
    v25 = this->fields.args;
    if ( v25 )
    {
      v26 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v25->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange(
                       (Target_BattleTargetArgs_o *)battleData_k__BackingField,
                       0LL);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v26, v28);
        *(_QWORD *)(v17 + 24) = TargetIndexArray;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)TargetIndexArray, v30, v31);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v32);
        v34 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_int__BattleServantData__TypeInfo);
        System_Func_int__object____ctor(
          v34,
          (Il2CppObject *)v17,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0LL);
        v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v34,
                                                               (const MethodInfo_3033958 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v36 = BasicHelper__ExcludeNull_object_(
                v35,
                (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                                                     (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v38 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v38,
          (Il2CppObject *)v17,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0LL);
        v39 = System_Linq_Enumerable__Where_object_(
                v37,
                (System_Func_TSource__bool__o *)v38,
                (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v40 = OpponentRangeAggregator___c_TypeInfo;
        v41 = v39;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v40 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v40->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v40 = OpponentRangeAggregator___c_TypeInfo;
          }
          v43 = (Il2CppObject *)v40->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1BC3254(System_Func_BattleServantData__int__TypeInfo);
          System_Func_object__int____ctor(_9__0_2, v43, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0LL);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__0_2, (int32_t)_9__0_2, v45, v46);
        }
        v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v41,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v47,
                 (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1BC3264(battleData_k__BackingField, v19);
  }
  v49 = Method_System_Array_Empty_int___;
  v50 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v50 )
  {
    sub_1C134C8(Method_System_Array_Empty_int___);
    v50 = v49[7];
  }
  v51 = *(_QWORD *)(v50 + 16);
  if ( (*(_BYTE *)(v51 + 309) & 1) == 0 )
    v51 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v51 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v51);
  v52 = *(_QWORD *)(v49[7] + 16LL);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1C1346C(inited);
  return **(System_Int32_array ***)(v52 + 184);
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
  __int64 v11; // x2
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x25
  unsigned __int64 v15; // x22
  int v16; // w21
  int v17; // w8
  __int64 v18; // x9
  unsigned int v19; // w8
  unsigned __int64 v20; // x9
  struct System_Int32_array *items; // x10
  _QWORD *v22; // x11
  __int64 size; // x12

  if ( (byte_4B0508D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4B0508D = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseRangeArray )
    goto LABEL_18;
  v12 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (unsigned int)(baseIndex / 3);
    v14 = (v13 << 32) - 0x100000000LL;
    v15 = 0LL;
    v16 = ~(3 * v13) + baseIndex;
    do
    {
      if ( v15 >= (unsigned int)v12 )
        sub_1BC326C(v9, v10, v11);
      v17 = baseRangeArray->m_Items[v15 + 1] - 2 * ((baseRangeArray->m_Items[v15 + 1] - 1) % 3) + 1;
      v18 = (unsigned int)(v17 / 3);
      v19 = v17 % 3 + v16;
      if ( v19 <= 2 )
      {
        v20 = (unsigned __int64)(v14 + (v18 << 32)) >> 32;
        if ( (unsigned int)v20 <= 1 )
        {
          if ( !v8 )
            goto LABEL_18;
          items = v8->fields._items;
          v22 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v8->fields._size;
          v10 = 3 * (_DWORD)v20 + v19;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              v10,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size + 1] = v10;
          }
        }
      }
      LODWORD(v12) = baseRangeArray->max_length;
    }
    while ( (__int64)++v15 < (int)v12 );
  }
  if ( !v8 )
LABEL_18:
    sub_1BC3264(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_45825524(
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
  const MethodInfo *v4; // x3

  if ( (byte_4B0508E & 1) == 0 )
  {
    sub_1BC3008(&OpponentRangeAggregator___c_TypeInfo, v1);
    byte_4B0508E = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)OpponentRangeAggregator___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
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
    sub_1BC3264(this, i);
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
  if ( (byte_4B0508F & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1BC3008(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               x);
    byte_4B0508F = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
}