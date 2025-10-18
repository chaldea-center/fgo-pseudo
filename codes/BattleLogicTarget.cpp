void BattleLogicTarget___ctor(BattleLogicTarget_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UpHateData_array *BattleLogicTarget__DeathSvtExclusion(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isResurrectable,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  BattleData_o *data; // x0
  int max_length; // w8
  unsigned int v10; // w25
  bool v11; // w22
  UpHateData_o *v12; // x23
  const MethodInfo *v13; // x3
  BattleServantData_o *v14; // x24
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  struct BattleData_o *v21; // x8

  if ( (byte_4C46232 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_4C46232 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  if ( !targetlist )
    goto LABEL_23;
  max_length = targetlist->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = isResurrectable;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C372BC(data);
      v12 = targetlist->m_Items[v10];
      if ( !v12 )
        break;
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, v12->fields._UniqueId_k__BackingField, 0);
      if ( data )
      {
        v14 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v11, v13);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_27;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v14, v15);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v21 = this->fields.data;
          if ( !v21 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v14, v21->fields.typeTurn, 0);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_27:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v18 = Method_System_Collections_Generic_List_UpHateData__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v12,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v12;
              sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, (int32_t)v15, v16);
            }
          }
        }
      }
      max_length = targetlist->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C372B4(data);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_23;
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v7,
                               (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
}


UpHateData_array *BattleLogicTarget__GetShuffleArrayEachPriorityDesc(
        UpHateData_array *baseArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  BattleLogicTarget___c_c *v4; // x0
  System_Func_object__int__o *_9__19_0; // x21
  Il2CppObject *v6; // x22
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v10; // x0
  BattleLogicTarget___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  System_Func_object__int__o *_9__19_1; // x22
  Il2CppObject *v14; // x23
  struct BattleLogicTarget___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *Shuffle_object; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4C46239 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleRandom_getShuffle_UpHateData___);
    sub_1C37058(&Method_System_Linq_Enumerable_GroupBy_UpHateData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__UpHateData___int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1C37058(&System_Func_UpHateData__int__TypeInfo);
    sub_1C37058(&System_Func_IGrouping_int__UpHateData___int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UpHateData__TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_0__);
    sub_1C37058(&Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_1__);
    sub_1C37058(&BattleLogicTarget___c_TypeInfo);
    byte_4C46239 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0) )
    return baseArray;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  v4 = BattleLogicTarget___c_TypeInfo;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v4 = BattleLogicTarget___c_TypeInfo;
  }
  _9__19_0 = (System_Func_object__int__o *)v4->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleLogicTarget___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__19_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UpHateData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__19_0,
      v6,
      Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_0__,
      0);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_UpHateData__int__o *)_9__19_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
          (System_Func_TSource__TKey__o *)_9__19_0,
          (const MethodInfo_3112030 *)Method_System_Linq_Enumerable_GroupBy_UpHateData__int___);
  v11 = BattleLogicTarget___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v11 = BattleLogicTarget___c_TypeInfo;
  }
  _9__19_1 = (System_Func_object__int__o *)v11->static_fields->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleLogicTarget___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__19_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_IGrouping_int__UpHateData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__19_1,
      v14,
      Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_1__,
      0);
    v15 = BattleLogicTarget___c_TypeInfo->static_fields;
    v15->__9__19_1 = (struct System_Func_IGrouping_int__UpHateData___int__o *)_9__19_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v15->__9__19_1, (int32_t)_9__19_1, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v12,
          (System_Func_TSource__TKey__o *)_9__19_1,
          (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__UpHateData___int___);
  if ( !v18 )
    goto LABEL_49;
  klass = v18->klass;
  v20 = v18;
  v21 = *(unsigned __int16 *)&v18->klass->_2.rank;
  if ( *(_WORD *)&v18->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_21;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v23 = sub_1C87870(v18, System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v24 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_28;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_28:
      v28 = sub_1C87870(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___c **)v31 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_35;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_35:
      v32 = sub_1C87870(v24, System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo, 0);
    }
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(
                                                                 v24,
                                                                 *(_QWORD *)(v32 + 8));
    v34 = System_Linq_Enumerable__ToArray_object_(
            v33,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
    Shuffle_object = (System_Collections_Generic_IEnumerable_T__o *)BattleRandom__getShuffle_object_(
                                                                      v34,
                                                                      (const MethodInfo_30D8C90 *)Method_BattleRandom_getShuffle_UpHateData___);
    if ( !v3 )
      sub_1C372B4(Shuffle_object);
    System_Collections_Generic_List_object___AddRange(
      v3,
      Shuffle_object,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UpHateData__AddRange__);
  }
  v36 = *(_QWORD *)v24;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_43;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_43:
    v39 = sub_1C87870(v24, System_IDisposable_TypeInfo, 0);
  }
  v18 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(
                                                       v24,
                                                       *(_QWORD *)(v39 + 8));
  if ( !v3 )
LABEL_49:
    sub_1C372B4(v18);
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v3,
                               (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
}


bool BattleLogicTarget__IsPriorityDifferentDesc(
        UpHateData_o *x,
        UpHateData_o *y,
        int32_t *diffVal,
        const MethodInfo *method)
{
  int32_t v4; // w8
  bool result; // w0

  if ( !y || !x )
    sub_1C372B4(x);
  v4 = y->fields._Priority_k__BackingField - x->fields._Priority_k__BackingField;
  result = y->fields._Priority_k__BackingField != x->fields._Priority_k__BackingField;
  *diffVal = v4;
  return result;
}


bool BattleLogicTarget__IsTargetAlive(
        BattleLogicTarget_o *this,
        BattleServantData_o *svtData,
        bool isResurrectable,
        const MethodInfo *method)
{
  BattleLogicTarget_o *v6; // x21

  v6 = this;
  if ( (byte_4C46230 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1C37058(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4C46230 = 1;
  }
  if ( !svtData )
    sub_1C372B4(this);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_30D1578 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0);
}


bool BattleLogicTarget__IsTargetGuts(BattleLogicTarget_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4C46231 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1C37058(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4C46231 = 1;
  }
  if ( !svtData )
    sub_1C372B4(this);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_30D1578 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      || BattleServantData__isGuts(svtData, 0);
}


UpHateData_array *BattleLogicTarget__MakeOnlyMaxPriorityArray(UpHateData_array *baseArray, const MethodInfo *method)
{
  __int64 v3; // x20
  long double inited; // q0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  BattleLogicTarget___c_c *v10; // x0
  System_Func_object__int__o *_9__20_0; // x21
  Il2CppObject *v12; // x22
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4C4623A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_UpHateData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Max_UpHateData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UpHateData___);
    sub_1C37058(&System_Func_UpHateData__int__TypeInfo);
    sub_1C37058(&System_Func_UpHateData__bool__TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__MakeOnlyMaxPriorityArray_b__20_0__);
    sub_1C37058(&Method_BattleLogicTarget___c__DisplayClass20_0__MakeOnlyMaxPriorityArray_b__1__);
    sub_1C37058(&BattleLogicTarget___c__DisplayClass20_0_TypeInfo);
    sub_1C37058(&BattleLogicTarget___c_TypeInfo);
    byte_4C4623A = 1;
  }
  v3 = sub_1C372A4(BattleLogicTarget___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0) )
  {
    v5 = Method_System_Array_Empty_UpHateData___;
    v6 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
    if ( !v6 )
    {
      sub_1C877C8(Method_System_Array_Empty_UpHateData___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8776C(inited);
    return **(UpHateData_array ***)(v8 + 184);
  }
  else
  {
    v10 = BattleLogicTarget___c_TypeInfo;
    if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
      v10 = BattleLogicTarget___c_TypeInfo;
    }
    _9__20_0 = (System_Func_object__int__o *)v10->static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleLogicTarget___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__20_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__20_0,
        v12,
        Method_BattleLogicTarget___c__MakeOnlyMaxPriorityArray_b__20_0__,
        0);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = (struct System_Func_UpHateData__int__o *)_9__20_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v14, v15);
    }
    v16 = System_Linq_Enumerable__Max_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__int__o *)_9__20_0,
            (const MethodInfo_3115F88 *)Method_System_Linq_Enumerable_Max_UpHateData___);
    if ( !v3 )
      sub_1C372B4(v16);
    *(_DWORD *)(v3 + 16) = v16;
    v17 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UpHateData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v3,
      Method_BattleLogicTarget___c__DisplayClass20_0__MakeOnlyMaxPriorityArray_b__1__,
      0);
    v18 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UpHateData___);
    return (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                 v18,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  }
}


int32_t BattleLogicTarget___getTargetBattleServantData_b__24_1(
        BattleLogicTarget_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleData_o *v7; // x8
  int m_CachedPtr; // w20

  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getEnemyServantData(data, a, 0)) == 0
    || (v7 = this->fields.data) == 0
    || (m_CachedPtr = data->fields.m_CachedPtr, (data = (BattleData_o *)BattleData__getEnemyServantData(v7, b, 0)) == 0) )
  {
    sub_1C372B4(data);
  }
  return m_CachedPtr - LODWORD(data->fields.m_CachedPtr);
}


int32_t BattleLogicTarget___getTargetHighHp_b__11_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  BattleData_o *v9; // x20
  int32_t diffVal; // [xsp+Ch] [xbp-24h] BYREF

  diffVal = 0;
  IsPriorityDifferentDesc = (BattleData_o *)BattleLogicTarget__IsPriorityDifferentDesc(x, y, &diffVal, method);
  if ( ((unsigned __int8)IsPriorityDifferentDesc & 1) != 0 )
    return diffVal;
  if ( !x
    || (IsPriorityDifferentDesc = this->fields.data) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    x->fields._UniqueId_k__BackingField,
                                                    0),
        !y)
    || (v9 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0)) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, _QWORD))IsPriorityDifferentDesc->klass[1]._1.this_arg.data)(
                                                    IsPriorityDifferentDesc,
                                                    *(_QWORD *)&IsPriorityDifferentDesc->klass[1]._1.this_arg.bits),
        !v9) )
  {
    sub_1C372B4(IsPriorityDifferentDesc);
  }
  return (_DWORD)IsPriorityDifferentDesc
       - ((__int64 (__fastcall *)(BattleData_o *, _QWORD))v9->klass[1]._1.this_arg.data)(
           v9,
           *(_QWORD *)&v9->klass[1]._1.this_arg.bits);
}


int32_t BattleLogicTarget___getTargetLowHp_b__12_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  BattleData_o *v9; // x21
  BattleData_o *v10; // x19
  int32_t diffVal; // [xsp+Ch] [xbp-24h] BYREF

  diffVal = 0;
  IsPriorityDifferentDesc = (BattleData_o *)BattleLogicTarget__IsPriorityDifferentDesc(x, y, &diffVal, method);
  if ( ((unsigned __int8)IsPriorityDifferentDesc & 1) != 0 )
    return diffVal;
  if ( !x
    || (IsPriorityDifferentDesc = this->fields.data) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    x->fields._UniqueId_k__BackingField,
                                                    0),
        !y)
    || (v9 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0),
        !v9)
    || (v10 = IsPriorityDifferentDesc,
        IsPriorityDifferentDesc = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, _QWORD))v9->klass[1]._1.this_arg.data)(
                                                    v9,
                                                    *(_QWORD *)&v9->klass[1]._1.this_arg.bits),
        !v10) )
  {
    sub_1C372B4(IsPriorityDifferentDesc);
  }
  return (_DWORD)IsPriorityDifferentDesc
       - ((__int64 (__fastcall *)(BattleData_o *, _QWORD))v10->klass[1]._1.this_arg.data)(
           v10,
           *(_QWORD *)&v10->klass[1]._1.this_arg.bits);
}


int32_t BattleLogicTarget___getTargetNpGaugeHeighter_b__14_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  BattleData_o *v9; // x21
  int32_t diffVal; // [xsp+Ch] [xbp-24h] BYREF

  diffVal = 0;
  IsPriorityDifferentDesc = (BattleData_o *)BattleLogicTarget__IsPriorityDifferentDesc(x, y, &diffVal, method);
  if ( ((unsigned __int8)IsPriorityDifferentDesc & 1) != 0 )
    return diffVal;
  if ( !x
    || (IsPriorityDifferentDesc = this->fields.data) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    x->fields._UniqueId_k__BackingField,
                                                    0),
        !y)
    || (v9 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0)) == 0
    || !v9 )
  {
    sub_1C372B4(IsPriorityDifferentDesc);
  }
  return HIDWORD(IsPriorityDifferentDesc->fields.totalDamageInTurn) - HIDWORD(v9->fields.totalDamageInTurn);
}


int32_t BattleLogicTarget___getTargetNpTurnLower_b__13_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  BattleData_o *v9; // x21
  int v10; // w8
  int v11; // w8
  int v12; // w9
  int32_t diffVal; // [xsp+Ch] [xbp-24h] BYREF

  diffVal = 0;
  IsPriorityDifferentDesc = (BattleData_o *)BattleLogicTarget__IsPriorityDifferentDesc(x, y, &diffVal, method);
  if ( ((unsigned __int8)IsPriorityDifferentDesc & 1) != 0 )
    return diffVal;
  if ( !x
    || (IsPriorityDifferentDesc = this->fields.data) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    x->fields._UniqueId_k__BackingField,
                                                    0),
        !y)
    || (v9 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0),
        !v9)
    || !IsPriorityDifferentDesc )
  {
    sub_1C372B4(IsPriorityDifferentDesc);
  }
  if ( *(&v9->fields.battleGenderType + 1) <= 0 )
    v10 = 999;
  else
    v10 = 0;
  v11 = v10 + LODWORD(v9->fields.playerFieldStatus);
  if ( *(&IsPriorityDifferentDesc->fields.battleGenderType + 1) <= 0 )
    v12 = -999;
  else
    v12 = 0;
  return v11 - LODWORD(IsPriorityDifferentDesc->fields.playerFieldStatus) + v12;
}


int32_t BattleLogicTarget__getGlobalTargetId(
        BattleLogicTarget_o *this,
        int32_t uniqueId,
        bool isMaster,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v10; // x23
  struct BattleData_o *v11; // x8
  struct BattleData_o *v12; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_7;
  v10 = this->fields.data;
  if ( !v10
    || (data = (BattleData_o *)BattleData__getTargetLock(this->fields.data, uniqueId, isMaster, addIndiv, 0),
        v10->fields.globaltargetId = (int)data,
        (v11 = this->fields.data) == 0)
    || (data = (BattleData_o *)v11->fields.perf) == 0 )
  {
LABEL_9:
    sub_1C372B4(data);
  }
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
LABEL_7:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_9;
  return v12->fields.globaltargetId;
}


int32_t BattleLogicTarget__getRevenge(
        BattleLogicTarget_o *this,
        int32_t actId,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v9; // x22
  int32_t RevengeTargetUniqueId; // w0
  const MethodInfo *v11; // x1
  int32_t v12; // w23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x0
  const MethodInfo *v18; // x4

  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, actId, 0);
  if ( !data )
    goto LABEL_10;
  v9 = (BattleServantData_o *)data;
  RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId((BattleServantData_o *)data, 0);
  if ( RevengeTargetUniqueId < 1 )
    goto LABEL_9;
  v12 = RevengeTargetUniqueId;
  data = this->fields.data;
  if ( !data )
LABEL_10:
    sub_1C372B4(data);
  ServantData = BattleData__getServantData(data, v12, 0);
  if ( ServantData
    && (BattleLogicTarget__IsTargetAlive(this, ServantData, 0, v14) || BattleLogicTarget__IsTargetGuts(this, v9, v15)) )
  {
    return v12;
  }
LABEL_9:
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(targetlist, v11);
  return BattleLogicTarget__getTargetBase_47073576(this, ShuffleArrayEachPriorityDesc, 0, isDeadToEnableUpHate, v18);
}


int32_t BattleLogicTarget__getTargetActiveBuff(
        BattleLogicTarget_o *this,
        System_Int32_array *ids,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Comparison_T__o *v15; // x22
  const MethodInfo *v16; // x4

  if ( (byte_4C46238 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_UpHateData___);
    sub_1C37058(&System_Comparison_UpHateData__TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetActiveBuff_b__0__);
    sub_1C37058(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
    byte_4C46238 = 1;
  }
  v9 = sub_1C372A4(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = ids;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)ids, v13, v14);
  v15 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleLogicTarget___c__DisplayClass17_0__getTargetActiveBuff_b__0__,
    0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)targetlist,
    v15,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_47073576(this, targetlist, 0, isDeadToEnableUpHate, v16);
}


int32_t BattleLogicTarget__getTargetActiveIndividualities(
        BattleLogicTarget_o *this,
        System_Int32_array *indv,
        UpHateData_array *targetlist,
        AiActEntity_o *aiActEnt,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v11; // x22
  System_Collections_Generic_Dictionary_object__int__o *Count; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  __int64 v18; // x23
  BattleLogicTarget___c_c *v19; // x0
  System_Func_object__int__o *_9__16_1; // x24
  Il2CppObject *v21; // x25
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Func_object__bool__o *v25; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_Dictionary_object__int__o *v27; // x24
  System_Collections_Generic_Dictionary_object__int__o **v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Comparison_T__o *v31; // x24
  const MethodInfo *v32; // x4
  int32_t Item; // w22
  System_Collections_Generic_List_object__o *v34; // x21
  Il2CppObject *currentKey; // x24
  __int64 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Object_array *v43; // x0
  const MethodInfo *v44; // x1
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x1
  bool v46; // w3
  BattleLogicTarget_o *v47; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C46237 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_UpHateData___);
    sub_1C37058(&System_Comparison_UpHateData__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UpHateData__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Keys__);
    sub_1C37058(&System_Collections_Generic_Dictionary_UpHateData__int__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Max_UpHateData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UpHateData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__get_Current__);
    sub_1C37058(&System_Func_UpHateData__int__TypeInfo);
    sub_1C37058(&System_Func_UpHateData__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_UpHateData__int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UpHateData__TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__getTargetActiveIndividualities_b__16_1__);
    sub_1C37058(&Method_BattleLogicTarget___c__DisplayClass16_0__getTargetActiveIndividualities_b__0__);
    sub_1C37058(&BattleLogicTarget___c__DisplayClass16_0_TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__DisplayClass16_1__getTargetActiveIndividualities_b__2__);
    sub_1C37058(&BattleLogicTarget___c__DisplayClass16_1_TypeInfo);
    sub_1C37058(&BattleLogicTarget___c_TypeInfo);
    byte_4C46237 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v11 = sub_1C372A4(BattleLogicTarget___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_39;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = indv;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)indv, v15, v16);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0) )
    targetlist = BattleLogicTarget__DeathSvtExclusion(this, targetlist, 0, v17);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetlist, 0) )
  {
    v18 = sub_1C372A4(BattleLogicTarget___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0);
    v19 = BattleLogicTarget___c_TypeInfo;
    if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
      v19 = BattleLogicTarget___c_TypeInfo;
    }
    _9__16_1 = (System_Func_object__int__o *)v19->static_fields->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattleLogicTarget___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__16_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__16_1,
        v21,
        Method_BattleLogicTarget___c__getTargetActiveIndividualities_b__16_1__,
        0);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      static_fields->__9__16_1 = (struct System_Func_UpHateData__int__o *)_9__16_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__16_1, (int32_t)_9__16_1, v23, v24);
    }
    Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Linq_Enumerable__Max_object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)targetlist,
                                                                      (System_Func_TSource__int__o *)_9__16_1,
                                                                      (const MethodInfo_3115F88 *)Method_System_Linq_Enumerable_Max_UpHateData___);
    if ( !v18 )
      goto LABEL_39;
    *(_DWORD *)(v18 + 16) = (_DWORD)Count;
    v25 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UpHateData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v25,
      (Il2CppObject *)v18,
      Method_BattleLogicTarget___c__DisplayClass16_1__getTargetActiveIndividualities_b__2__,
      0);
    v26 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)targetlist,
            (System_Func_TSource__bool__o *)v25,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UpHateData___);
    targetlist = (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                       v26,
                                       (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  }
  v27 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_UpHateData__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v27,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_UpHateData__int___ctor__);
  *(_QWORD *)(v11 + 32) = v27;
  v28 = (System_Collections_Generic_Dictionary_object__int__o **)(v11 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v27, v29, v30);
  v31 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v31,
    (Il2CppObject *)v11,
    Method_BattleLogicTarget___c__DisplayClass16_0__getTargetActiveIndividualities_b__0__,
    0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)targetlist,
    v31,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_UpHateData___);
  Count = *(System_Collections_Generic_Dictionary_object__int__o **)(v11 + 32);
  if ( !Count )
    goto LABEL_39;
  Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_Dictionary_object__int___get_Count(
                                                                    Count,
                                                                    (const MethodInfo_345A5D0 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Count__);
  if ( (int)Count < 1 )
  {
    v46 = isDeadToEnableUpHate;
    v47 = this;
    ShuffleArrayEachPriorityDesc = targetlist;
    return BattleLogicTarget__getTargetBase_47073576(v47, ShuffleArrayEachPriorityDesc, 0, v46, v32);
  }
  if ( !targetlist )
    goto LABEL_39;
  if ( !LODWORD(targetlist->max_length) )
    sub_1C372BC(Count);
  Count = *v28;
  if ( !*v28 )
    goto LABEL_39;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           Count,
           (Il2CppObject *)targetlist->m_Items[0],
           (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  Count = *v28;
  if ( !*v28 )
    goto LABEL_39;
  Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                    Count,
                                                                    (const MethodInfo_345A5E0 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Keys__);
  if ( !Count )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v49,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
    (const MethodInfo_36C7390 *)Method_System_Collections_Generic_Dictionary_KeyCollection_UpHateData__int__GetEnumerator__);
  v50 = v49;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v50,
            (const MethodInfo_355EA00 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__MoveNext__) )
  {
    if ( !*v28 )
      sub_1C372B4(0);
    currentKey = v50.fields._currentKey;
    v36 = System_Collections_Generic_Dictionary_object__int___get_Item(
            *v28,
            v50.fields._currentKey,
            (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
    if ( Item == (_DWORD)v36 )
    {
      if ( !v34 )
        sub_1C372B4(v36);
      items = v34->fields._items;
      v40 = Method_System_Collections_Generic_List_UpHateData__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1C372B4(v36);
      size = v34->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v34,
          currentKey,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + size;
        v34->fields._size = size + 1;
        v42[4] = (Il2CppClass *)currentKey;
        sub_1C36FFC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)currentKey, v37, v38);
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v50,
    (const MethodInfo_355E9FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__Dispose__);
  if ( !v34 )
LABEL_39:
    sub_1C372B4(Count);
  v43 = System_Collections_Generic_List_object___ToArray(
          v34,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc((UpHateData_array *)v43, v44);
  v46 = isDeadToEnableUpHate;
  v47 = this;
  return BattleLogicTarget__getTargetBase_47073576(v47, ShuffleArrayEachPriorityDesc, 0, v46, v32);
}


int32_t BattleLogicTarget__getTargetAiAct(
        BattleLogicTarget_o *this,
        int32_t target,
        int32_t actId,
        System_Int32_array *individuality,
        System_Int32_array *targetlist,
        bool isCheckHate,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        AiActEntity_o *aiActEnt,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  __int64 v17; // x27
  __int64 NoTargetNoActionType; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_ICollection_o **v21; // x25
  const MethodInfo *v22; // x1
  long double inited; // q0
  _QWORD *v24; // x21
  __int64 v25; // x8
  __int64 v26; // x0
  UpHateData_array *Array; // x21
  bool v28; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x5
  int32_t result; // w0
  __int64 v35; // x28
  intptr_t *v36; // x29
  System_Func_int____bool__o *v37; // x29
  System_Func_object__bool__o *v38; // x0
  intptr_t v39; // x2
  const MethodInfo *v40; // x5
  il2cpp_array_size_t max_length; // x8
  bool v42; // w3
  BattleLogicTarget_o *v43; // x0
  int32_t v44; // w1

  if ( (byte_4C4623B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_UpHateData___);
    sub_1C37058(&System_Func_int____bool__TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__DisplayClass21_0__getTargetAiAct_b__1__);
    sub_1C37058(&BattleLogicTarget___c__DisplayClass21_0_TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__DisplayClass21_1__getTargetAiAct_b__0__);
    sub_1C37058(&BattleLogicTarget___c__DisplayClass21_1_TypeInfo);
    byte_4C4623B = 1;
  }
  v17 = sub_1C372A4(BattleLogicTarget___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_48;
  *(_QWORD *)(v17 + 16) = individuality;
  v21 = (System_Collections_ICollection_o **)(v17 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)individuality, v19, v20);
  v24 = Method_System_Array_Empty_UpHateData___;
  v25 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
  if ( !v25 )
  {
    sub_1C877C8(Method_System_Array_Empty_UpHateData___);
    v25 = v24[7];
  }
  v26 = *(_QWORD *)(v25 + 16);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v26 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v26);
  NoTargetNoActionType = *(_QWORD *)(v24[7] + 16LL);
  if ( (*(_BYTE *)(NoTargetNoActionType + 309) & 1) == 0 )
    NoTargetNoActionType = sub_1C8776C(inited);
  Array = **(UpHateData_array ***)(NoTargetNoActionType + 184);
  if ( aiActEnt )
  {
    NoTargetNoActionType = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0);
    v28 = (_DWORD)NoTargetNoActionType != 0;
    if ( !isCheckHate )
      goto LABEL_18;
LABEL_16:
    NoTargetNoActionType = (__int64)this->fields.data;
    if ( !NoTargetNoActionType )
      goto LABEL_48;
    ServantData = BattleData__getServantData((BattleData_o *)NoTargetNoActionType, actId, 0);
    NoTargetNoActionType = (__int64)BattleLogicTarget__narrowDownHate(
                                      this,
                                      targetlist,
                                      ServantData,
                                      isResurrectable,
                                      addIndiv,
                                      isDeadToEnableUpHate,
                                      v30);
    Array = (UpHateData_array *)NoTargetNoActionType;
    goto LABEL_18;
  }
  v28 = 0;
  if ( isCheckHate )
    goto LABEL_16;
LABEL_18:
  if ( !Array )
    goto LABEL_48;
  if ( Array->max_length )
    goto LABEL_20;
  v35 = sub_1C372A4(BattleLogicTarget___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0);
  if ( !aiActEnt )
    goto LABEL_26;
  if ( !v35 )
    goto LABEL_48;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v35 + 16), 0) )
  {
    v36 = &Method_BattleLogicTarget___c__DisplayClass21_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_26:
    if ( BasicHelper__IsNullOrEmpty(*v21, 0) )
    {
      v37 = 0;
      goto LABEL_32;
    }
    v36 = &Method_BattleLogicTarget___c__DisplayClass21_0__getTargetAiAct_b__1__;
    v35 = v17;
  }
  v38 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_int____bool__TypeInfo);
  v39 = *v36;
  v37 = (System_Func_int____bool__o *)v38;
  System_Func_object__bool____ctor(v38, (Il2CppObject *)v35, v39, 0);
  if ( v37 )
  {
    NoTargetNoActionType = (__int64)BattleLogicTarget__narrowDownIndividuality(
                                      this,
                                      targetlist,
                                      v37,
                                      isResurrectable,
                                      target != 13,
                                      v40);
    if ( NoTargetNoActionType )
    {
      Array = (UpHateData_array *)NoTargetNoActionType;
      goto LABEL_32;
    }
LABEL_48:
    sub_1C372B4(NoTargetNoActionType);
  }
LABEL_32:
  max_length = Array->max_length;
  if ( v28 && v37 != 0 && max_length == 0 )
    return -1;
  if ( !max_length )
    Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)targetlist, 0);
LABEL_20:
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(Array, v22);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v31);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v31);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v31);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v31);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v32);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v21,
               ShuffleArrayEachPriorityDesc,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)ShuffleArrayEachPriorityDesc);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v21,
               ShuffleArrayEachPriorityDesc,
               isDeadToEnableUpHate,
               v32);
    case 15:
      v42 = isDeadToEnableUpHate;
      v43 = this;
      v44 = 0;
      goto LABEL_47;
    case 16:
      v42 = isDeadToEnableUpHate;
      v44 = 1;
      goto LABEL_46;
    case 17:
      v42 = isDeadToEnableUpHate;
      v44 = 2;
LABEL_46:
      v43 = this;
LABEL_47:
      result = BattleLogicTarget__getTargetPosition(
                 v43,
                 v44,
                 ShuffleArrayEachPriorityDesc,
                 v42,
                 v28,
                 (const MethodInfo *)ShuffleArrayEachPriorityDesc);
      break;
    default:
      result = BattleLogicTarget__getTargetBase_47073576(
                 this,
                 ShuffleArrayEachPriorityDesc,
                 isResurrectable,
                 isDeadToEnableUpHate,
                 v32);
      break;
  }
  return result;
}


int32_t BattleLogicTarget__getTargetBase(
        BattleLogicTarget_o *this,
        System_Int32_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  UpHateData_array *Array; // x0
  const MethodInfo *v9; // x4

  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)targetlist, 0);
  return BattleLogicTarget__getTargetBase_47073576(this, Array, isResurrectable, isDeadToEnableUpHate, v9);
}


int32_t BattleLogicTarget__getTargetBase_47073576(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  int max_length; // w8
  BattleLogicTarget_o *v8; // x21
  unsigned int v9; // w25
  bool v10; // w22
  UpHateData_o *v11; // x23
  const MethodInfo *v12; // x3
  BattleServantData_o *v13; // x24
  const MethodInfo *v14; // x2
  struct BattleData_o *data; // x8

  if ( !targetlist )
LABEL_17:
    sub_1C372B4(this);
  max_length = targetlist->max_length;
  if ( max_length < 1 )
    return -1;
  v8 = this;
  v9 = 0;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1C372BC(this);
    v11 = targetlist->m_Items[v9];
    if ( !v11 )
      goto LABEL_17;
    this = (BattleLogicTarget_o *)v8->fields.data;
    if ( !this )
      goto LABEL_17;
    this = (BattleLogicTarget_o *)BattleData__getServantData(
                                    (BattleData_o *)this,
                                    v11->fields._UniqueId_k__BackingField,
                                    0);
    if ( this )
    {
      v13 = (BattleServantData_o *)this;
      if ( BattleLogicTarget__IsTargetAlive(v8, (BattleServantData_o *)this, v10, v12) )
        return UpHateData__GetFixedTargetIdAndUseUpHateBuff(v11, 0);
      this = (BattleLogicTarget_o *)BattleLogicTarget__IsTargetGuts(v8, v13, v14);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        data = v8->fields.data;
        if ( !data )
          goto LABEL_17;
        this = (BattleLogicTarget_o *)BattleServantData__checkDeadTurn(v13, data->fields.typeTurn, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      if ( !isDeadToEnableUpHate )
      {
        this = (BattleLogicTarget_o *)BattleServantData__getNowHp(v13, 0);
        if ( (int)this >= 1 )
          break;
      }
    }
    max_length = targetlist->max_length;
    if ( (int)++v9 >= max_length )
      return -1;
  }
  return UpHateData__GetFixedTargetIdAndUseUpHateBuff(v11, 0);
}


BattleServantData_o *BattleLogicTarget__getTargetBattleServantData(
        BattleLogicTarget_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct System_Int32_array *actorIdlist; // x8
  struct BattleData_o *v9; // x21
  int32_t v10; // w1
  struct System_Int32_array *v11; // x8
  int v12; // w22
  System_Int32_array *v13; // x3
  BattleData_o *v14; // x0
  struct BattleData_o *v15; // x8
  BattleServantData_o *ServantData; // x0
  BattleLogicTarget___c_c *v17; // x8
  Il2CppObject *v18; // x21
  System_Predicate_object__o *_9__24_0; // x22
  Il2CppObject *v20; // x23
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x0
  BattleServantData_o *v25; // x21
  const MethodInfo *v26; // x2
  struct BattleData_o *v27; // x8
  struct System_Int32_array *v29; // x8
  int32_t v30; // w1
  const MethodInfo *v31; // x2
  struct BattleData_o *v32; // x8
  struct BattleData_o *v33; // x8
  System_Int32_array *EnemyAutoTargetOrder; // x21
  System_Comparison_int__o *v35; // x22
  struct System_Int32_array *EnemyAutoTargetOrder_k__BackingField; // x8
  struct BattleData_o *v37; // x22
  UpHateData_array *Array; // x0
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  struct System_Int32_array *v42; // x8
  struct BattleData_o *v43; // x21
  int32_t v44; // w22
  System_Int32_array *v45; // x3
  struct BattleData_o *v46; // x8
  struct BattleData_o *v47; // x8

  if ( (byte_4C4623E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_int____78104080);
    sub_1C37058(&Method_BasicHelper_TakeIf_BattleServantData___);
    sub_1C37058(&Method_BattleLogicTarget__getTargetBattleServantData_b__24_1__);
    sub_1C37058(&System_Comparison_int__TypeInfo);
    sub_1C37058(&System_Predicate_BattleServantData__TypeInfo);
    sub_1C37058(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__24_0__);
    sub_1C37058(&BattleLogicTarget___c_TypeInfo);
    byte_4C4623E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_88;
  if ( BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_88;
    BattleData__ResetFieldEnemyUseBuff(data, 38, 0, 0);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_88;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    BattleLogicTarget__updateEnemyTarget(this, 0, v7);
    goto LABEL_32;
  }
  if ( !task )
    goto LABEL_88;
  if ( task->fields.actiontype == 4 )
  {
    data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, v6);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_29;
    actorIdlist = task->fields.actorIdlist;
    v9 = this->fields.data;
    if ( actorIdlist )
    {
      if ( !LODWORD(actorIdlist->max_length) )
        goto LABEL_89;
      v10 = actorIdlist->m_Items[0];
      if ( !v9 )
        goto LABEL_88;
    }
    else
    {
      v10 = -1;
      if ( !v9 )
        goto LABEL_88;
    }
    v14 = this->fields.data;
    v13 = 0;
  }
  else
  {
    v11 = task->fields.actorIdlist;
    v9 = this->fields.data;
    if ( v11 )
    {
      if ( !LODWORD(v11->max_length) )
        goto LABEL_89;
      v12 = v11->m_Items[0];
    }
    else
    {
      v12 = -1;
    }
    data = (BattleData_o *)task->fields.skillInfo;
    if ( data )
    {
      data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0);
      v13 = (System_Int32_array *)data;
      if ( !v9 )
        goto LABEL_88;
    }
    else
    {
      v13 = 0;
      if ( !v9 )
        goto LABEL_88;
    }
    v14 = v9;
    v10 = v12;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v14, v10, 0, v13, 0);
  v9->fields.globaltargetId = (int)data;
LABEL_29:
  v15 = this->fields.data;
  if ( !v15 )
    goto LABEL_88;
  data = (BattleData_o *)v15->fields.perf;
  if ( !data )
    goto LABEL_88;
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
LABEL_32:
  data = this->fields.data;
  if ( !data )
    goto LABEL_88;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0);
  v17 = BattleLogicTarget___c_TypeInfo;
  v18 = (Il2CppObject *)ServantData;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v17 = BattleLogicTarget___c_TypeInfo;
  }
  _9__24_0 = (System_Predicate_object__o *)v17->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattleLogicTarget___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__24_0 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(
      _9__24_0,
      v20,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__24_0__,
      0);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Predicate_BattleServantData__o *)_9__24_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v22, v23);
  }
  v24 = BasicHelper__TakeIf_object_(
          v18,
          (System_Predicate_T__o *)_9__24_0,
          (const MethodInfo_30D7770 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( v24 )
  {
    v25 = (BattleServantData_o *)v24;
    data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v24, 0, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      v27 = this->fields.data;
      if ( v27 && task )
        goto LABEL_43;
      goto LABEL_88;
    }
    data = (BattleData_o *)BattleServantData__isAlive(v25, 0, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      if ( !task )
        goto LABEL_88;
      v29 = task->fields.actorIdlist;
      if ( v29 )
      {
        if ( !LODWORD(v29->max_length) )
          goto LABEL_89;
        v30 = v29->m_Items[0];
      }
      else
      {
        v30 = -1;
      }
      data = (BattleData_o *)BattleServantData__checkOverKill(v25, v30, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v27 = this->fields.data;
        if ( v27 )
        {
LABEL_43:
          BattleLogicTask__setTarget(task, v27->fields.globaltargetId, v26);
          return v25;
        }
        goto LABEL_88;
      }
    }
    if ( !BattleServantData__isAlive(v25, 0, 0) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v25, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v32 = this->fields.data;
        if ( v32 && task )
        {
          BattleLogicTask__setTarget(task, v32->fields.globaltargetId, v31);
          v25->fields.overkillTargetId = -1;
          return v25;
        }
        goto LABEL_88;
      }
    }
    v25->fields.overkillTargetId = -1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_88;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_88;
  EnemyAutoTargetOrder = (System_Int32_array *)data;
  data = (BattleData_o *)v33->fields.quest_ent;
  if ( !data )
    goto LABEL_88;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0) )
  {
    v35 = (System_Comparison_int__o *)sub_1C372A4(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      v35,
      (Il2CppObject *)this,
      Method_BattleLogicTarget__getTargetBattleServantData_b__24_1__,
      0);
    System_Array__Sort_int__51069468(
      EnemyAutoTargetOrder,
      (System_Comparison_T__o *)v35,
      (const MethodInfo_30B421C *)Method_System_Array_Sort_int____78104080);
  }
  else
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_88;
    EnemyAutoTargetOrder_k__BackingField = data->fields._EnemyAutoTargetOrder_k__BackingField;
    if ( !EnemyAutoTargetOrder_k__BackingField )
      goto LABEL_88;
    if ( data->fields._EnemyFieldPosCount_k__BackingField <= SLODWORD(EnemyAutoTargetOrder_k__BackingField->max_length) )
      EnemyAutoTargetOrder = BattleData__GetEnemyAutoTargetOrder(data, 0);
  }
  v37 = this->fields.data;
  Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)EnemyAutoTargetOrder, 0);
  data = (BattleData_o *)BattleLogicTarget__getTargetBase_47073576(this, Array, 0, 1, v39);
  if ( !v37 )
    goto LABEL_88;
  v37->fields.globaltargetId = (int)data;
  BattleLogicTarget__updateEnemyTarget(this, EnemyAutoTargetOrder, v40);
  data = this->fields.data;
  if ( !data )
    goto LABEL_88;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_84;
  if ( !task )
    goto LABEL_88;
  v42 = task->fields.actorIdlist;
  v43 = this->fields.data;
  if ( !v42 )
  {
    v44 = -1;
    goto LABEL_77;
  }
  if ( !LODWORD(v42->max_length) )
LABEL_89:
    sub_1C372BC(data);
  v44 = v42->m_Items[0];
LABEL_77:
  data = (BattleData_o *)task->fields.skillInfo;
  if ( data )
  {
    data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0);
    v45 = (System_Int32_array *)data;
    if ( !v43 )
      goto LABEL_88;
  }
  else
  {
    v45 = 0;
    if ( !v43 )
      goto LABEL_88;
  }
  data = (BattleData_o *)BattleData__getTargetLock(v43, v44, 0, v45, 0);
  v43->fields.globaltargetId = (int)data;
  v46 = this->fields.data;
  if ( !v46 || (data = (BattleData_o *)v46->fields.perf) == 0 )
LABEL_88:
    sub_1C372B4(data);
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
LABEL_84:
  v47 = this->fields.data;
  if ( !v47 )
    goto LABEL_88;
  if ( !task )
    goto LABEL_88;
  BattleLogicTask__setTarget(task, v47->fields.globaltargetId, v41);
  data = this->fields.data;
  if ( !data )
    goto LABEL_88;
  return BattleData__getServantData(data, data->fields.globaltargetId, 0);
}


int32_t BattleLogicTarget__getTargetHighHp(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4C46233 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_UpHateData___);
    sub_1C37058(&Method_BattleLogicTarget__getTargetHighHp_b__11_0__);
    sub_1C37058(&System_Comparison_UpHateData__TypeInfo);
    byte_4C46233 = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__11_0__, 0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_47073576(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4C46234 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_UpHateData___);
    sub_1C37058(&Method_BattleLogicTarget__getTargetLowHp_b__12_0__);
    sub_1C37058(&System_Comparison_UpHateData__TypeInfo);
    byte_4C46234 = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__12_0__, 0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_47073576(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4C46236 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_UpHateData___);
    sub_1C37058(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__14_0__);
    sub_1C37058(&System_Comparison_UpHateData__TypeInfo);
    byte_4C46236 = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__14_0__,
    0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_47073576(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4C46235 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Sort_UpHateData___);
    sub_1C37058(&Method_BattleLogicTarget__getTargetNpTurnLower_b__13_0__);
    sub_1C37058(&System_Comparison_UpHateData__TypeInfo);
    byte_4C46235 = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__13_0__,
    0);
  System_Array__Sort_object__51069808(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_30B4370 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_47073576(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleLogicTarget__getTargetPosition(
        BattleLogicTarget_o *this,
        int32_t position,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        bool noTargetNoAction,
        const MethodInfo *method)
{
  BattleServantData_o *OnlyMaxPriorityArray; // x0
  const MethodInfo *v12; // x1
  int uniqueId; // w8
  BattleServantData_o *v14; // x24
  unsigned int v15; // w26
  __int64 v16; // x27
  BattleServantData_o *v17; // x25
  const MethodInfo *v18; // x3
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x0
  const MethodInfo *v21; // x4

  OnlyMaxPriorityArray = (BattleServantData_o *)BattleLogicTarget__MakeOnlyMaxPriorityArray(
                                                  targetlist,
                                                  *(const MethodInfo **)&position);
  if ( !OnlyMaxPriorityArray )
LABEL_15:
    sub_1C372B4(OnlyMaxPriorityArray);
  uniqueId = OnlyMaxPriorityArray->fields.uniqueId;
  v14 = OnlyMaxPriorityArray;
  if ( uniqueId < 1 )
  {
LABEL_11:
    if ( noTargetNoAction )
    {
      return -1;
    }
    else
    {
      ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(targetlist, v12);
      return BattleLogicTarget__getTargetBase_47073576(this, ShuffleArrayEachPriorityDesc, 0, isDeadToEnableUpHate, v21);
    }
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= uniqueId )
        sub_1C372BC(OnlyMaxPriorityArray);
      v16 = *(&v14->fields.userSvtId.fields.currentCryptoKey + (int)v15);
      if ( !v16 )
        goto LABEL_15;
      OnlyMaxPriorityArray = (BattleServantData_o *)this->fields.data;
      if ( !OnlyMaxPriorityArray )
        goto LABEL_15;
      OnlyMaxPriorityArray = BattleData__getServantData((BattleData_o *)OnlyMaxPriorityArray, *(_DWORD *)(v16 + 16), 0);
      if ( !OnlyMaxPriorityArray )
        goto LABEL_15;
      v17 = OnlyMaxPriorityArray;
      OnlyMaxPriorityArray = (BattleServantData_o *)BattleServantData__getDeckIndex(OnlyMaxPriorityArray, 0);
      if ( (_DWORD)OnlyMaxPriorityArray == position )
      {
        OnlyMaxPriorityArray = (BattleServantData_o *)BattleLogicTarget__IsTargetAlive(this, v17, 0, v18);
        if ( ((unsigned __int8)OnlyMaxPriorityArray & 1) != 0 )
          return *(_DWORD *)(v16 + 16);
      }
      uniqueId = v14->fields.uniqueId;
      if ( (int)++v15 >= uniqueId )
        goto LABEL_11;
    }
  }
}


int32_t BattleLogicTarget__getTargetRandom(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x0
  const MethodInfo *v9; // x4

  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(
                                   targetlist,
                                   (const MethodInfo *)targetlist);
  return BattleLogicTarget__getTargetBase_47073576(
           this,
           ShuffleArrayEachPriorityDesc,
           isResurrectable,
           isDeadToEnableUpHate,
           v9);
}


UpHateData_array *BattleLogicTarget__narrowDownHate(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        BattleServantData_o *atkSvt,
        bool isResurrectable,
        System_Int32_array *addIndiv,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v12; // x23
  BattleBuffData_CheckIndividualitiesData_o *v13; // x26
  System_Int32_array *data; // x0
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v17; // x24
  unsigned __int64 v18; // x28
  bool v19; // w25
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  UpHateData_o *v23; // x27
  struct BattleData_o *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  UpHateData_o *upHateData; // [xsp+10h] [xbp-70h] BYREF
  UpHateData_o *compUpHateB; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C4623D & 1) == 0 )
  {
    sub_1C37058(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_4C4623D = 1;
  }
  upHateData = 0;
  compUpHateB = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  if ( atkSvt )
  {
    v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C372A4(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_45659904(v13, atkSvt, 0, 0, 0, 0, 0, 1, 0);
    if ( !v13 )
      goto LABEL_37;
    selfConcatSvtIndividualities_k__BackingField = v13->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0);
  if ( !list )
    goto LABEL_37;
  max_length = list->max_length;
  if ( (int)max_length >= 1 )
  {
    v17 = data;
    v18 = 0;
    v19 = isResurrectable;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1C372BC(data);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_37;
      ServantData = BattleData__getServantData((BattleData_o *)data, list->m_Items[v18], 0);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v19, v21);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
      data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v22);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
      v24 = this->fields.data;
      if ( !v24 || !ServantData )
        goto LABEL_37;
      data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v24->fields.typeTurn, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v23 = 0;
        if ( isDeadToEnableUpHate )
          goto LABEL_26;
      }
LABEL_34:
      LODWORD(max_length) = list->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_35;
    }
    if ( atkSvt )
    {
      data = (System_Int32_array *)BattleServantData__IsUpHateToGrantedOpponent(atkSvt, ServantData, &upHateData, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
        v23 = upHateData;
      else
        v23 = 0;
      if ( !ServantData )
        goto LABEL_37;
    }
    else
    {
      v23 = 0;
      if ( !ServantData )
        goto LABEL_37;
    }
LABEL_26:
    data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v17, &compUpHateB, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (System_Int32_array *)UpHateData__GetHighPriorityData(v23, compUpHateB, 0);
      v23 = (UpHateData_o *)data;
    }
    if ( v23 )
    {
      if ( !v12 )
        goto LABEL_37;
      items = v12->fields._items;
      v28 = Method_System_Collections_Generic_List_UpHateData__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_37;
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v23,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v23;
        sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v23, v25, v26);
      }
    }
    goto LABEL_34;
  }
LABEL_35:
  if ( !v12 )
LABEL_37:
    sub_1C372B4(data);
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v12,
                               (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
}


UpHateData_array *BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v11; // x23
  BattleData_o *data; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x29
  int32_t *m_Items; // x28
  bool v16; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_int__o *v20; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  int32_t v22; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10

  if ( (byte_4C4623C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4623C = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
LABEL_24:
    sub_1C372B4(data);
  max_length = list->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    m_Items = list->m_Items;
    v16 = isResurrectable;
    do
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_25:
        sub_1C372BC(data);
      data = this->fields.data;
      if ( !data )
        goto LABEL_24;
      ServantData = BattleData__getServantData(data, m_Items[v14], 0);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v16, v18)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v19),
            ((unsigned __int8)data & 1) != 0) )
      {
        v20 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_24;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0, 1, 0, 1, 0);
        if ( !v20 )
          goto LABEL_24;
        System_Collections_Generic_List_int___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( isCheckBuff )
        {
          BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                                 ServantData,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0,
                                                                                 0);
          System_Collections_Generic_List_int___AddRange(
            v20,
            BuffIndividualities,
            (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v20,
                                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_24;
        data = (BattleData_o *)((__int64 (__fastcall *)(intptr_t, BattleData_o *, intptr_t))funcContainsIndividuality->fields.invoke_impl)(
                                 funcContainsIndividuality->fields.method_code,
                                 data,
                                 funcContainsIndividuality->fields.method);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v14 >= LODWORD(list->max_length) )
            goto LABEL_25;
          if ( !v11 )
            goto LABEL_24;
          v22 = m_Items[v14];
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v22,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = v22;
          }
        }
      }
      LODWORD(max_length) = list->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)max_length );
  }
  return UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)v11, 0);
}


void BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.data = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3);
}


void BattleLogicTarget__updateEnemyTarget(
        BattleLogicTarget_o *this,
        System_Int32_array *targetIdList,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  int32_t *m_Items; // x24
  BattleServantData_o *v10; // x22
  int32_t v11; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UpHateData_o *upHateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C4623F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C4623F = 1;
  }
  upHateData = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !targetIdList )
      targetIdList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
    v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v6,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
    if ( !targetIdList )
      goto LABEL_27;
    max_length = targetIdList->max_length;
    data = this->fields.data;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      m_Items = targetIdList->m_Items;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
LABEL_28:
          sub_1C372BC(data);
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, m_Items[v8], 0);
        if ( !data )
          break;
        v10 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) || BattleServantData__isGuts(v10, 0) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v10, 0, &upHateData, 0);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v8 >= LODWORD(targetIdList->max_length) )
              goto LABEL_28;
            if ( !v6 )
              break;
            v11 = m_Items[v8];
            items = v6->fields._items;
            v13 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              break;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                v11,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size] = v11;
            }
          }
        }
        LODWORD(max_length) = targetIdList->max_length;
        data = this->fields.data;
        if ( (__int64)++v8 >= (int)max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1C372B4(data);
    }
LABEL_24:
    if ( !data )
      goto LABEL_27;
    BattleData__setTargetLock(data, v6, 0);
  }
}


void BattleLogicTarget__updateGlobalTarget(BattleLogicTarget_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattleData_o *v7; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
  if ( !data )
    goto LABEL_16;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v5 = data;
  if ( m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_17;
      data = this->fields.data;
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleData__getEnemyServantData(data, *((_DWORD *)&v5->fields.rootfsm + v6), 0);
      if ( !data )
        goto LABEL_16;
      data = (BattleData_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)data, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        break;
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      if ( (__int64)++v6 >= (int)m_CancellationTokenSource )
        return;
    }
    if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
LABEL_17:
      sub_1C372BC(data);
    v7 = this->fields.data;
    if ( v7 )
    {
      v7->fields.globaltargetId = *((_DWORD *)&v5->fields.rootfsm + v6);
      return;
    }
LABEL_16:
    sub_1C372B4(data);
  }
}


void BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46240 & 1) == 0 )
  {
    sub_1C37058(&BattleLogicTarget___c_TypeInfo);
    byte_4C46240 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleLogicTarget___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleLogicTarget___c___ctor(BattleLogicTarget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicTarget___c___GetShuffleArrayEachPriorityDesc_b__19_0(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._Priority_k__BackingField;
}


int32_t BattleLogicTarget___c___GetShuffleArrayEachPriorityDesc_b__19_1(
        BattleLogicTarget___c_o *this,
        System_Linq_IGrouping_int__UpHateData__o *group,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__UpHateData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C46241 & 1) == 0 )
  {
    this = (BattleLogicTarget___c_o *)sub_1C37058(&System_Linq_IGrouping_int__UpHateData__TypeInfo);
    byte_4C46241 = 1;
  }
  if ( !group )
    sub_1C372B4(this);
  klass = group->klass;
  v5 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__UpHateData__c **)p_offset - 1) != System_Linq_IGrouping_int__UpHateData__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C87870(group, System_Linq_IGrouping_int__UpHateData__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__UpHateData__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t BattleLogicTarget___c___MakeOnlyMaxPriorityArray_b__20_0(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._Priority_k__BackingField;
}


int32_t BattleLogicTarget___c___getTargetActiveIndividualities_b__16_1(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._Priority_k__BackingField;
}


bool BattleLogicTarget___c___getTargetBattleServantData_b__24_0(
        BattleLogicTarget___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.isEntry;
}


void BattleLogicTarget___c__DisplayClass16_0___ctor(
        BattleLogicTarget___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicTarget___c__DisplayClass16_0___getTargetActiveIndividualities_b__0(
        BattleLogicTarget___c__DisplayClass16_0_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleLogicTarget___c__DisplayClass16_0_o *v6; // x20
  struct BattleLogicTarget_o *_4__this; // x8
  struct BattleLogicTarget_o *v8; // x8
  BattleServantData_o *v9; // x22
  BattleServantData_o *v10; // x23
  int32_t v11; // w22
  int32_t v12; // w23

  v6 = this;
  if ( (byte_4C46242 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass16_0_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__);
    byte_4C46242 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  if ( !x )
    goto LABEL_14;
  this = (BattleLogicTarget___c__DisplayClass16_0_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_14;
  this = (BattleLogicTarget___c__DisplayClass16_0_o *)BattleData__getServantData(
                                                        (BattleData_o *)this,
                                                        x->fields._UniqueId_k__BackingField,
                                                        0);
  v8 = v6->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  if ( !y )
    goto LABEL_14;
  v9 = (BattleServantData_o *)this;
  this = (BattleLogicTarget___c__DisplayClass16_0_o *)v8->fields.data;
  if ( !this )
    goto LABEL_14;
  this = (BattleLogicTarget___c__DisplayClass16_0_o *)BattleData__getServantData(
                                                        (BattleData_o *)this,
                                                        y->fields._UniqueId_k__BackingField,
                                                        0);
  if ( !v9
    || (v10 = (BattleServantData_o *)this,
        this = (BattleLogicTarget___c__DisplayClass16_0_o *)BattleServantData__getActiveIndividualitiesNum(
                                                              v9,
                                                              v6->fields.indv,
                                                              0),
        !v10)
    || (v11 = (int)this,
        this = (BattleLogicTarget___c__DisplayClass16_0_o *)BattleServantData__getActiveIndividualitiesNum(
                                                              v10,
                                                              v6->fields.indv,
                                                              0),
        !v6->fields.indNum)
    || (v12 = (int)this,
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v6->fields.indNum,
          (Il2CppObject *)x,
          v11,
          (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass16_0_o *)v6->fields.indNum) == 0) )
  {
LABEL_14:
    sub_1C372B4(this);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    (Il2CppObject *)y,
    v12,
    (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__);
  return v12 - v11;
}


void BattleLogicTarget___c__DisplayClass16_1___ctor(
        BattleLogicTarget___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicTarget___c__DisplayClass16_1___getTargetActiveIndividualities_b__2(
        BattleLogicTarget___c__DisplayClass16_1_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._Priority_k__BackingField == this->fields.maxPriority;
}


void BattleLogicTarget___c__DisplayClass17_0___ctor(
        BattleLogicTarget___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleLogicTarget___c__DisplayClass17_0___getTargetActiveBuff_b__0(
        BattleLogicTarget___c__DisplayClass17_0_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  struct BattleLogicTarget_o *_4__this; // x8
  struct BattleLogicTarget_o *v10; // x8
  BattleServantData_o *v11; // x21
  int32_t diffVal; // [xsp+Ch] [xbp-24h] BYREF

  diffVal = 0;
  IsPriorityDifferentDesc = (BattleData_o *)BattleLogicTarget__IsPriorityDifferentDesc(x, y, &diffVal, method);
  if ( ((unsigned __int8)IsPriorityDifferentDesc & 1) != 0 )
    return diffVal;
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || !x
    || (IsPriorityDifferentDesc = _4__this->fields.data) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    x->fields._UniqueId_k__BackingField,
                                                    0),
        (v10 = this->fields.__4__this) == 0)
    || !y
    || (v11 = (BattleServantData_o *)IsPriorityDifferentDesc, (IsPriorityDifferentDesc = v10->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0)) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleServantData__getActiveBuffNum(
                                                    (BattleServantData_o *)IsPriorityDifferentDesc,
                                                    this->fields.ids,
                                                    0),
        !v11) )
  {
    sub_1C372B4(IsPriorityDifferentDesc);
  }
  return (_DWORD)IsPriorityDifferentDesc - BattleServantData__getActiveBuffNum(v11, this->fields.ids, 0);
}


void BattleLogicTarget___c__DisplayClass20_0___ctor(
        BattleLogicTarget___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicTarget___c__DisplayClass20_0___MakeOnlyMaxPriorityArray_b__1(
        BattleLogicTarget___c__DisplayClass20_0_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._Priority_k__BackingField == this->fields.maxPriority;
}


void BattleLogicTarget___c__DisplayClass21_0___ctor(
        BattleLogicTarget___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicTarget___c__DisplayClass21_0___getTargetAiAct_b__1(
        BattleLogicTarget___c__DisplayClass21_0_o *this,
        System_Int32_array *self,
        const MethodInfo *method)
{
  System_Int32_array *individuality; // x20

  if ( (byte_4C46243 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C46243 = 1;
  }
  individuality = this->fields.individuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedIndividualities(self, individuality, 0);
}


void BattleLogicTarget___c__DisplayClass21_1___ctor(
        BattleLogicTarget___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicTarget___c__DisplayClass21_1___getTargetAiAct_b__0(
        BattleLogicTarget___c__DisplayClass21_1_o *this,
        System_Int32_array *self,
        const MethodInfo *method)
{
  System_Int32_array_array *multiIndividuality; // x20

  if ( (byte_4C46244 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C46244 = 1;
  }
  multiIndividuality = this->fields.multiIndividuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedMultiIndividuality(self, multiIndividuality, 0);
}