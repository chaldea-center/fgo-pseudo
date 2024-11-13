void __fastcall OpponentRangeAggregator___ctor(OpponentRangeAggregator_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall OpponentRangeAggregator__GetCandidate(
        OpponentRangeAggregator_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  BattleData_o *battleData_k__BackingField; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  __int64 v44; // x1
  long double inited; // q0
  struct TargetAggregator_Args_o *v46; // x8
  int32_t v47; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v49; // x2
  System_Int32_array *TargetIndexArray; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  const MethodInfo *v57; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Func_T__TResult__o *v62; // x21
  System_Collections_Generic_IEnumerable_T__o *v63; // x0
  System_Collections_Generic_IEnumerable_T__o *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x19
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Func_object__bool__o *v69; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  OpponentRangeAggregator___c_c *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v77; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  _QWORD *v87; // x19
  __int64 v88; // x8
  __int64 v89; // x0
  __int64 v90; // x0

  if ( (byte_4B18F48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleServantData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v15, v16);
    sub_1BCA7E0(&System_Func_BattleServantData__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Func_int__BattleServantData__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v23, v24);
    sub_1BCA7E0(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v25, v26);
    sub_1BCA7E0(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v27, v28);
    sub_1BCA7E0(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&OpponentRangeAggregator___c_TypeInfo, v31, v32);
    byte_4B18F48 = 1;
  }
  v33 = sub_1BCAA2C(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_25;
  *(_QWORD *)(v33 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)this, v36, v37, v38, v39, v40, v41);
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
    v46 = this->fields.args;
    if ( v46 )
    {
      v47 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v46->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange(
                       (Target_BattleTargetArgs_o *)battleData_k__BackingField,
                       0LL);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v47, v49);
        *(_QWORD *)(v33 + 24) = TargetIndexArray;
        sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)TargetIndexArray, v51, v52, v53, v54, v55, v56);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v57);
        v62 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__BattleServantData__TypeInfo, v59, v60, v61);
        System_Func_int__object____ctor(
          v62,
          (Il2CppObject *)v33,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0LL);
        v63 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v62,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v64 = BasicHelper__ExcludeNull_object_(
                v63,
                (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                                                                     (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v69 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v66, v67, v68);
        System_Func_object__bool____ctor(
          v69,
          (Il2CppObject *)v33,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0LL);
        v70 = System_Linq_Enumerable__Where_object_(
                v65,
                (System_Func_TSource__bool__o *)v69,
                (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v74 = OpponentRangeAggregator___c_TypeInfo;
        v75 = v70;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo, v71);
          v74 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v74->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v74->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v74, v71);
            v74 = OpponentRangeAggregator___c_TypeInfo;
          }
          v77 = (Il2CppObject *)v74->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                    System_Func_BattleServantData__int__TypeInfo,
                                                    v71,
                                                    v72,
                                                    v73);
          System_Func_object__int____ctor(_9__0_2, v77, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0LL);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__0_2,
            (int64_t)_9__0_2,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84);
        }
        v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v75,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v85,
                 (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1BCAA3C(battleData_k__BackingField, v35);
  }
  v87 = Method_System_Array_Empty_int___;
  v88 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v88 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v44);
    v88 = v87[7];
  }
  v89 = *(_QWORD *)(v88 + 16);
  if ( (*(_BYTE *)(v89 + 309) & 1) == 0 )
    v89 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v89 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v89, v44);
  v90 = *(_QWORD *)(v87[7] + 16LL);
  if ( (*(_BYTE *)(v90 + 309) & 1) == 0 )
    v90 = sub_1C1C6BC(inited);
  return **(System_Int32_array ***)(v90 + 184);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall OpponentRangeAggregator__GetTargetIndexArray(
        System_Int32_array *baseRangeArray,
        int32_t baseIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x25
  unsigned __int64 v18; // x22
  int v19; // w21
  int v20; // w8
  __int64 v21; // x9
  unsigned int v22; // w8
  unsigned __int64 v23; // x9
  struct System_Int32_array *items; // x10
  _QWORD *v25; // x11
  __int64 size; // x12

  if ( (byte_4B18F49 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B18F49 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&baseIndex,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseRangeArray )
    goto LABEL_18;
  v15 = *(_QWORD *)&baseRangeArray->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = (unsigned int)(baseIndex / 3);
    v17 = (v16 << 32) - 0x100000000LL;
    v18 = 0LL;
    v19 = ~(3 * v16) + baseIndex;
    do
    {
      if ( v18 >= (unsigned int)v15 )
        sub_1BCAA44(v13, v14);
      v20 = baseRangeArray->m_Items[v18 + 1] - 2 * ((baseRangeArray->m_Items[v18 + 1] - 1) % 3) + 1;
      v21 = (unsigned int)(v20 / 3);
      v22 = v20 % 3 + v19;
      if ( v22 <= 2 )
      {
        v23 = (unsigned __int64)(v17 + (v21 << 32)) >> 32;
        if ( (unsigned int)v23 <= 1 )
        {
          if ( !v12 )
            goto LABEL_18;
          items = v12->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v12->fields._size;
          v14 = 3 * (_DWORD)v23 + v22;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v14,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = v14;
          }
        }
      }
      LODWORD(v15) = baseRangeArray->max_length;
    }
    while ( (__int64)++v18 < (int)v15 );
  }
  if ( !v12 )
LABEL_18:
    sub_1BCAA3C(v13, v14);
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_44420372(
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18F4A & 1) == 0 )
  {
    sub_1BCA7E0(&OpponentRangeAggregator___c_TypeInfo, v1, v2);
    byte_4B18F4A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(OpponentRangeAggregator___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)OpponentRangeAggregator___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  struct OpponentRangeAggregator_o *_4__this; // x8
  struct TargetAggregator_Args_o *args; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (args = _4__this->fields.args) == 0LL
    || (this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)args->fields._battleData_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(this, *(_QWORD *)&i);
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
  if ( (byte_4B18F4B & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               x,
                                                               method);
    byte_4B18F4B = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}