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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct TargetAggregator_Args_o *args; // x8
  BattleServantData_o *ServantData; // x0
  long double inited; // q0
  struct TargetAggregator_Args_o *v29; // x8
  int32_t v30; // w21
  System_Int32_array *EnemyRange; // x0
  const MethodInfo *v32; // x2
  System_Int32_array *TargetIndexArray; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Candidate; // x19
  System_Func_T__TResult__o *v42; // x21
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x19
  System_Func_object__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  OpponentRangeAggregator___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x19
  System_Func_object__int__o *_9__0_2; // x20
  Il2CppObject *v51; // x21
  struct OpponentRangeAggregator___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  _QWORD *v61; // x19
  __int64 v62; // x8
  __int64 v63; // x0
  __int64 v64; // x0

  if ( (byte_4BB74DF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_int___, method);
    sub_1C13D24(&Method_BasicHelper_ExcludeNull_BattleServantData___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_BattleServantData__int___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleServantData___, v6);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_1C13D24(&System_Func_BattleServantData__int__TypeInfo, v9);
    sub_1C13D24(&System_Func_int__BattleServantData__TypeInfo, v10);
    sub_1C13D24(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1C13D24(&Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, v12);
    sub_1C13D24(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__, v13);
    sub_1C13D24(&Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__, v14);
    sub_1C13D24(&OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo, v15);
    sub_1C13D24(&OpponentRangeAggregator___c_TypeInfo, v16);
    byte_4BB74DF = 1;
  }
  v17 = sub_1C13F70(OpponentRangeAggregator___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_25;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
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
    v29 = this->fields.args;
    if ( v29 )
    {
      v30 = (int)battleData_k__BackingField;
      battleData_k__BackingField = (BattleData_o *)v29->fields._battleTargetArgs_k__BackingField;
      if ( battleData_k__BackingField )
      {
        EnemyRange = Target_BattleTargetArgs__get_EnemyRange(
                       (Target_BattleTargetArgs_o *)battleData_k__BackingField,
                       0LL);
        TargetIndexArray = OpponentRangeAggregator__GetTargetIndexArray(EnemyRange, v30, v32);
        *(_QWORD *)(v17 + 24) = TargetIndexArray;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)TargetIndexArray, v34, v35, v36, v37, v38, v39);
        Candidate = (System_Collections_Generic_IEnumerable_TSource__o *)OpponentAllFieldTargetAggregator__GetCandidate(
                                                                           (OpponentAllFieldTargetAggregator_o *)this,
                                                                           v40);
        v42 = (System_Func_T__TResult__o *)sub_1C13F70(System_Func_int__BattleServantData__TypeInfo);
        System_Func_int__object____ctor(
          v42,
          (Il2CppObject *)v17,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__0__,
          0LL);
        v43 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                               Candidate,
                                                               (System_Func_TSource__TResult__o *)v42,
                                                               (const MethodInfo_2FBE434 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
        v44 = BasicHelper__ExcludeNull_object_(
                v43,
                (const MethodInfo_2F7AD2C *)Method_BasicHelper_ExcludeNull_BattleServantData___);
        v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                                                                     (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
        v46 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v46,
          (Il2CppObject *)v17,
          Method_OpponentRangeAggregator___c__DisplayClass0_0__GetCandidate_b__1__,
          0LL);
        v47 = System_Linq_Enumerable__Where_object_(
                v45,
                (System_Func_TSource__bool__o *)v46,
                (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
        v48 = OpponentRangeAggregator___c_TypeInfo;
        v49 = v47;
        if ( !OpponentRangeAggregator___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OpponentRangeAggregator___c_TypeInfo);
          v48 = OpponentRangeAggregator___c_TypeInfo;
        }
        _9__0_2 = (System_Func_object__int__o *)v48->static_fields->__9__0_2;
        if ( !_9__0_2 )
        {
          if ( !v48->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v48);
            v48 = OpponentRangeAggregator___c_TypeInfo;
          }
          v51 = (Il2CppObject *)v48->static_fields->__9;
          _9__0_2 = (System_Func_object__int__o *)sub_1C13F70(System_Func_BattleServantData__int__TypeInfo);
          System_Func_object__int____ctor(_9__0_2, v51, Method_OpponentRangeAggregator___c__GetCandidate_b__0_2__, 0LL);
          static_fields = OpponentRangeAggregator___c_TypeInfo->static_fields;
          static_fields->__9__0_2 = (struct System_Func_BattleServantData__int__o *)_9__0_2;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__0_2,
            (int64_t)_9__0_2,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
        }
        v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v49,
                                                                     (System_Func_TSource__TResult__o *)_9__0_2,
                                                                     (const MethodInfo_2FC022C *)Method_System_Linq_Enumerable_Select_BattleServantData__int___);
        return System_Linq_Enumerable__ToArray_int_(
                 v59,
                 (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
      }
    }
LABEL_25:
    sub_1C13F80(battleData_k__BackingField, v19);
  }
  v61 = Method_System_Array_Empty_int___;
  v62 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v62 )
  {
    sub_1C65C5C(Method_System_Array_Empty_int___);
    v62 = v61[7];
  }
  v63 = *(_QWORD *)(v62 + 16);
  if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
    v63 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v63 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v63);
  v64 = *(_QWORD *)(v61[7] + 16LL);
  if ( (*(_BYTE *)(v64 + 309) & 1) == 0 )
    v64 = sub_1C65C00(inited);
  return **(System_Int32_array ***)(v64 + 184);
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

  if ( (byte_4BB74E0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&baseIndex);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4BB74E0 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C13F88(v9, v10);
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
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
    sub_1C13F80(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall OpponentRangeAggregator_Cell___ctor(
        OpponentRangeAggregator_Cell_o this,
        int32_t index,
        const MethodInfo *method)
{
  *(_DWORD *)this.fields.col = index % 3;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = index / 3;
}


void __fastcall OpponentRangeAggregator_Cell___ctor_44882796(
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB74E1 & 1) == 0 )
  {
    sub_1C13D24(&OpponentRangeAggregator___c_TypeInfo, v1);
    byte_4BB74E1 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(OpponentRangeAggregator___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OpponentRangeAggregator___c_TypeInfo->static_fields->__9 = (struct OpponentRangeAggregator___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)OpponentRangeAggregator___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, i);
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
  if ( (byte_4BB74E2 & 1) == 0 )
  {
    this = (OpponentRangeAggregator___c__DisplayClass0_0_o *)sub_1C13D24(
                                                               &Method_System_Linq_Enumerable_Contains_int___,
                                                               x);
    byte_4BB74E2 = 1;
  }
  if ( !x )
    sub_1C13F80(this, x);
  indexArray = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.indexArray;
  DeckIndex = BattleServantData__getDeckIndex(x, 0LL);
  return System_Linq_Enumerable__Contains_int_(
           indexArray,
           DeckIndex,
           (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
}