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
  __int64 v9; // x1
  int max_length; // w8
  unsigned int v11; // w25
  bool v12; // w22
  UpHateData_o *v13; // x23
  const MethodInfo *v14; // x3
  BattleServantData_o *v15; // x24
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct BattleData_o *v26; // x8

  if ( (byte_4E7AAAD & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_4E7AAAD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  if ( !targetlist )
    goto LABEL_23;
  max_length = targetlist->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    v12 = isResurrectable;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1D0F314(data);
      v13 = targetlist->m_Items[v11];
      if ( !v13 )
        break;
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, v13->fields._UniqueId_k__BackingField, 0);
      if ( data )
      {
        v15 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, v12, v14);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_27;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v15, v16);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v26 = this->fields.data;
          if ( !v26 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v15, v26->fields.typeTurn, 0);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_27:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v23 = Method_System_Collections_Generic_List_UpHateData__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v13,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v13;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v13, (int32_t)v16, v17, v18, v19, v20, v21);
            }
          }
        }
      }
      max_length = targetlist->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_21;
    }
LABEL_23:
    sub_1D0F30C(data, v9);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_23;
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v7,
                               (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v14; // x0
  BattleLogicTarget___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__int__o *_9__19_1; // x22
  Il2CppObject *v18; // x23
  struct BattleLogicTarget___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  __int64 v27; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x21
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x21
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Object_array *v44; // x0
  System_Collections_Generic_IEnumerable_T__o *Shuffle_object; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0

  if ( (byte_4E7AAB4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BattleRandom_getShuffle_UpHateData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_GroupBy_UpHateData__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__UpHateData___int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1D0F0B4(&System_Func_UpHateData__int__TypeInfo);
    sub_1D0F0B4(&System_Func_IGrouping_int__UpHateData___int__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UpHateData__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_0__);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_1__);
    sub_1D0F0B4(&BattleLogicTarget___c_TypeInfo);
    byte_4E7AAB4 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0) )
    return baseArray;
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
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
    _9__19_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_UpHateData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__19_0,
      v6,
      Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_0__,
      0);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_UpHateData__int__o *)_9__19_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
          (System_Func_TSource__TKey__o *)_9__19_0,
          (const MethodInfo_3279778 *)Method_System_Linq_Enumerable_GroupBy_UpHateData__int___);
  v15 = BattleLogicTarget___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v15 = BattleLogicTarget___c_TypeInfo;
  }
  _9__19_1 = (System_Func_object__int__o *)v15->static_fields->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleLogicTarget___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__19_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_IGrouping_int__UpHateData___int__TypeInfo);
    System_Func_object__int____ctor(
      _9__19_1,
      v18,
      Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_1__,
      0);
    v19 = BattleLogicTarget___c_TypeInfo->static_fields;
    v19->__9__19_1 = (struct System_Func_IGrouping_int__UpHateData___int__o *)_9__19_1;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v19->__9__19_1, (int32_t)_9__19_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v16,
          (System_Func_TSource__TKey__o *)_9__19_1,
          (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__UpHateData___int___);
  if ( !v26 )
    goto LABEL_49;
  klass = v26->klass;
  v29 = v26;
  v30 = *(unsigned __int16 *)&v26->klass->_2.rank;
  if ( *(_WORD *)&v26->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_21;
    }
    v32 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v32 = sub_1CE5430(v26, System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  if ( !v34 )
    sub_1D0F30C(0, v33);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_28;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_28:
      v38 = sub_1CE5430(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___c **)v41 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_35;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_35:
      v42 = sub_1CE5430(v34, System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo, 0);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(
                                                                 v34,
                                                                 *(_QWORD *)(v42 + 8));
    v44 = System_Linq_Enumerable__ToArray_object_(
            v43,
            (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
    Shuffle_object = (System_Collections_Generic_IEnumerable_T__o *)BattleRandom__getShuffle_object_(
                                                                      v44,
                                                                      (const MethodInfo_323FEE8 *)Method_BattleRandom_getShuffle_UpHateData___);
    if ( !v3 )
      sub_1D0F30C(Shuffle_object, Shuffle_object);
    System_Collections_Generic_List_object___AddRange(
      v3,
      Shuffle_object,
      (const MethodInfo_395C61C *)Method_System_Collections_Generic_List_UpHateData__AddRange__);
  }
  v46 = *(_QWORD *)v34;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_43;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_43:
    v49 = sub_1CE5430(v34, System_IDisposable_TypeInfo, 0);
  }
  v26 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(
                                                       v34,
                                                       *(_QWORD *)(v49 + 8));
  if ( !v3 )
LABEL_49:
    sub_1D0F30C(v26, v27);
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v3,
                               (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
}


bool BattleLogicTarget__IsCommandAllAttack(
        BattleLogicTarget_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0

  if ( !command || (this = (BattleLogicTarget_o *)this->fields.data) == 0 )
    sub_1D0F30C(this, command);
  ServantData = BattleData__getServantData((BattleData_o *)this, command->fields.uniqueId, 0);
  if ( ServantData )
    LOBYTE(ServantData) = BattleServantData__getAttackType(ServantData, command, 0) == 2;
  return (char)ServantData;
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
    sub_1D0F30C(x, y);
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
  if ( (byte_4E7AAAB & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1D0F0B4(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4E7AAAB = 1;
  }
  if ( !svtData )
    sub_1D0F30C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_323886C *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0);
}


bool BattleLogicTarget__IsTargetGuts(BattleLogicTarget_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_4E7AAAC & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_1D0F0B4(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4E7AAAC = 1;
  }
  if ( !svtData )
    sub_1D0F30C(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_323886C *)Method_BasicHelper_ContainsSelfNotNull_int___)
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  System_Func_object__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4E7AAB5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_UpHateData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Max_UpHateData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_UpHateData___);
    sub_1D0F0B4(&System_Func_UpHateData__int__TypeInfo);
    sub_1D0F0B4(&System_Func_UpHateData__bool__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__MakeOnlyMaxPriorityArray_b__20_0__);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__DisplayClass20_0__MakeOnlyMaxPriorityArray_b__1__);
    sub_1D0F0B4(&BattleLogicTarget___c__DisplayClass20_0_TypeInfo);
    sub_1D0F0B4(&BattleLogicTarget___c_TypeInfo);
    byte_4E7AAB5 = 1;
  }
  v3 = sub_1D0F300(BattleLogicTarget___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0) )
  {
    v5 = Method_System_Array_Empty_UpHateData___;
    v6 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
    if ( !v6 )
    {
      sub_1CE5198(Method_System_Array_Empty_UpHateData___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1CE513C(inited);
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
      _9__20_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__20_0,
        v12,
        Method_BattleLogicTarget___c__MakeOnlyMaxPriorityArray_b__20_0__,
        0);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = (struct System_Func_UpHateData__int__o *)_9__20_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
        (int32_t)_9__20_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = System_Linq_Enumerable__Max_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__int__o *)_9__20_0,
            (const MethodInfo_327DBD8 *)Method_System_Linq_Enumerable_Max_UpHateData___);
    if ( !v3 )
      sub_1D0F30C(v20, v21);
    *(_DWORD *)(v3 + 16) = v20;
    v22 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UpHateData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v3,
      Method_BattleLogicTarget___c__DisplayClass20_0__MakeOnlyMaxPriorityArray_b__1__,
      0);
    v23 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_UpHateData___);
    return (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                 v23,
                                 (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1D0F30C(data, *(_QWORD *)&a);
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
  __int64 v8; // x1
  BattleData_o *v10; // x20
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
    || (v10 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0)) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, _QWORD))IsPriorityDifferentDesc->klass[1]._1.this_arg.data)(
                                                    IsPriorityDifferentDesc,
                                                    *(_QWORD *)&IsPriorityDifferentDesc->klass[1]._1.this_arg.bits),
        !v10) )
  {
    sub_1D0F30C(IsPriorityDifferentDesc, v8);
  }
  return (_DWORD)IsPriorityDifferentDesc
       - ((__int64 (__fastcall *)(BattleData_o *, _QWORD))v10->klass[1]._1.this_arg.data)(
           v10,
           *(_QWORD *)&v10->klass[1]._1.this_arg.bits);
}


int32_t BattleLogicTarget___getTargetLowHp_b__12_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  __int64 v8; // x1
  BattleData_o *v10; // x21
  BattleData_o *v11; // x19
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
    || (v10 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0),
        !v10)
    || (v11 = IsPriorityDifferentDesc,
        IsPriorityDifferentDesc = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, _QWORD))v10->klass[1]._1.this_arg.data)(
                                                    v10,
                                                    *(_QWORD *)&v10->klass[1]._1.this_arg.bits),
        !v11) )
  {
    sub_1D0F30C(IsPriorityDifferentDesc, v8);
  }
  return (_DWORD)IsPriorityDifferentDesc
       - ((__int64 (__fastcall *)(BattleData_o *, _QWORD))v11->klass[1]._1.this_arg.data)(
           v11,
           *(_QWORD *)&v11->klass[1]._1.this_arg.bits);
}


int32_t BattleLogicTarget___getTargetNpGaugeHeighter_b__14_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  __int64 v8; // x1
  BattleData_o *v10; // x21
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
    || (v10 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0)) == 0
    || !v10 )
  {
    sub_1D0F30C(IsPriorityDifferentDesc, v8);
  }
  return HIDWORD(IsPriorityDifferentDesc->fields.totalDamageInTurn) - HIDWORD(v10->fields.totalDamageInTurn);
}


int32_t BattleLogicTarget___getTargetNpTurnLower_b__13_0(
        BattleLogicTarget_o *this,
        UpHateData_o *x,
        UpHateData_o *y,
        const MethodInfo *method)
{
  BattleData_o *IsPriorityDifferentDesc; // x0
  __int64 v8; // x1
  BattleData_o *v10; // x21
  int v11; // w8
  int v12; // w8
  int v13; // w9
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
    || (v10 = IsPriorityDifferentDesc, (IsPriorityDifferentDesc = this->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0),
        !v10)
    || !IsPriorityDifferentDesc )
  {
    sub_1D0F30C(IsPriorityDifferentDesc, v8);
  }
  if ( *(&v10->fields.battleGenderType + 1) <= 0 )
    v11 = 999;
  else
    v11 = 0;
  v12 = v11 + LODWORD(v10->fields.playerFieldStatus);
  if ( *(&IsPriorityDifferentDesc->fields.battleGenderType + 1) <= 0 )
    v13 = -999;
  else
    v13 = 0;
  return v12 - LODWORD(IsPriorityDifferentDesc->fields.playerFieldStatus) + v13;
}


// local variable allocation has failed, the output may be wrong!
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
  bool isNotTargetLock; // [xsp+Ch] [xbp-34h] BYREF

  isNotTargetLock = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_10;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__getTargetLock(
                           this->fields.data,
                           uniqueId,
                           &isNotTargetLock,
                           isMaster,
                           addIndiv,
                           1,
                           0);
  v10->fields.globaltargetId = (int)data;
  if ( isNotTargetLock )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_12;
    BattleData__RestoreMainTargetId(data, 0);
  }
  v11 = this->fields.data;
  if ( !v11 || (data = (BattleData_o *)v11->fields.perf) == 0 )
LABEL_12:
    sub_1D0F30C(data, *(_QWORD *)&uniqueId);
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
LABEL_10:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_12;
  return v12->fields.globaltargetId;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v11; // w23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x0
  const MethodInfo *v17; // x4

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
  v11 = RevengeTargetUniqueId;
  data = this->fields.data;
  if ( !data )
LABEL_10:
    sub_1D0F30C(data, *(_QWORD *)&actId);
  ServantData = BattleData__getServantData(data, v11, 0);
  if ( ServantData
    && (BattleLogicTarget__IsTargetAlive(this, ServantData, 0, v13) || BattleLogicTarget__IsTargetGuts(this, v9, v14)) )
  {
    return v11;
  }
LABEL_9:
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(
                                   targetlist,
                                   *(const MethodInfo **)&actId);
  return BattleLogicTarget__getTargetBase_48601328(this, ShuffleArrayEachPriorityDesc, 0, isDeadToEnableUpHate, v17);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Comparison_T__o *v24; // x22
  const MethodInfo *v25; // x4

  if ( (byte_4E7AAB3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_UpHateData___);
    sub_1D0F0B4(&System_Comparison_UpHateData__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetActiveBuff_b__0__);
    sub_1D0F0B4(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
    byte_4E7AAB3 = 1;
  }
  v9 = sub_1D0F300(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1D0F30C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = ids;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)ids, v18, v19, v20, v21, v22, v23);
  v24 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_BattleLogicTarget___c__DisplayClass17_0__getTargetActiveBuff_b__0__,
    0);
  System_Array__Sort_object__52538372(
    (System_Object_array *)targetlist,
    v24,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_48601328(this, targetlist, 0, isDeadToEnableUpHate, v25);
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
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x3
  __int64 v27; // x23
  BattleLogicTarget___c_c *v28; // x0
  System_Func_object__int__o *_9__16_1; // x24
  Il2CppObject *v30; // x25
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Func_object__bool__o *v38; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Collections_Generic_Dictionary_object__int__o *v40; // x24
  System_Collections_Generic_Dictionary_object__int__o **v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Comparison_T__o *v48; // x24
  const MethodInfo *v49; // x4
  int32_t Item; // w22
  System_Collections_Generic_List_object__o *v51; // x21
  __int64 v52; // x1
  Il2CppObject *currentKey; // x24
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  System_Object_array *v66; // x0
  const MethodInfo *v67; // x1
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x1
  bool v69; // w3
  BattleLogicTarget_o *v70; // x0
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v72; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v73; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4E7AAB2 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_UpHateData___);
    sub_1D0F0B4(&System_Comparison_UpHateData__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_UpHateData__int___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Keys__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_UpHateData__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Max_UpHateData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_UpHateData___);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__get_Current__);
    sub_1D0F0B4(&System_Func_UpHateData__int__TypeInfo);
    sub_1D0F0B4(&System_Func_UpHateData__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_KeyCollection_UpHateData__int__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UpHateData__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__getTargetActiveIndividualities_b__16_1__);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__DisplayClass16_0__getTargetActiveIndividualities_b__0__);
    sub_1D0F0B4(&BattleLogicTarget___c__DisplayClass16_0_TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__DisplayClass16_1__getTargetActiveIndividualities_b__2__);
    sub_1D0F0B4(&BattleLogicTarget___c__DisplayClass16_1_TypeInfo);
    sub_1D0F0B4(&BattleLogicTarget___c_TypeInfo);
    byte_4E7AAB2 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v11 = sub_1D0F300(BattleLogicTarget___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_39;
  *(_QWORD *)(v11 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = indv;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)indv, v20, v21, v22, v23, v24, v25);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0) )
    targetlist = BattleLogicTarget__DeathSvtExclusion(this, targetlist, 0, v26);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetlist, 0) )
  {
    v27 = sub_1D0F300(BattleLogicTarget___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0);
    v28 = BattleLogicTarget___c_TypeInfo;
    if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
      v28 = BattleLogicTarget___c_TypeInfo;
    }
    _9__16_1 = (System_Func_object__int__o *)v28->static_fields->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = BattleLogicTarget___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__16_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__16_1,
        v30,
        Method_BattleLogicTarget___c__getTargetActiveIndividualities_b__16_1__,
        0);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      static_fields->__9__16_1 = (struct System_Func_UpHateData__int__o *)_9__16_1;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_1,
        (int32_t)_9__16_1,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Linq_Enumerable__Max_object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)targetlist,
                                                                      (System_Func_TSource__int__o *)_9__16_1,
                                                                      (const MethodInfo_327DBD8 *)Method_System_Linq_Enumerable_Max_UpHateData___);
    if ( !v27 )
      goto LABEL_39;
    *(_DWORD *)(v27 + 16) = (_DWORD)Count;
    v38 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_UpHateData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v27,
      Method_BattleLogicTarget___c__DisplayClass16_1__getTargetActiveIndividualities_b__2__,
      0);
    v39 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)targetlist,
            (System_Func_TSource__bool__o *)v38,
            (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_UpHateData___);
    targetlist = (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                       v39,
                                       (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  }
  v40 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1D0F300(System_Collections_Generic_Dictionary_UpHateData__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v40,
    (const MethodInfo_35F7E30 *)Method_System_Collections_Generic_Dictionary_UpHateData__int___ctor__);
  *(_QWORD *)(v11 + 32) = v40;
  v41 = (System_Collections_Generic_Dictionary_object__int__o **)(v11 + 32);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v40, v42, v43, v44, v45, v46, v47);
  v48 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v48,
    (Il2CppObject *)v11,
    Method_BattleLogicTarget___c__DisplayClass16_0__getTargetActiveIndividualities_b__0__,
    0);
  System_Array__Sort_object__52538372(
    (System_Object_array *)targetlist,
    v48,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_UpHateData___);
  Count = *(System_Collections_Generic_Dictionary_object__int__o **)(v11 + 32);
  if ( !Count )
    goto LABEL_39;
  Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_Dictionary_object__int___get_Count(
                                                                    Count,
                                                                    (const MethodInfo_35F84B4 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Count__);
  if ( (int)Count < 1 )
  {
    v69 = isDeadToEnableUpHate;
    v70 = this;
    ShuffleArrayEachPriorityDesc = targetlist;
    return BattleLogicTarget__getTargetBase_48601328(v70, ShuffleArrayEachPriorityDesc, 0, v69, v49);
  }
  if ( !targetlist )
    goto LABEL_39;
  if ( !LODWORD(targetlist->max_length) )
    sub_1D0F314(Count);
  Count = *v41;
  if ( !*v41 )
    goto LABEL_39;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           Count,
           (Il2CppObject *)targetlist->m_Items[0],
           (const MethodInfo_35F8764 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
  v51 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  Count = *v41;
  if ( !*v41 )
    goto LABEL_39;
  Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                    Count,
                                                                    (const MethodInfo_35F84C4 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Keys__);
  if ( !Count )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
    &v72,
    (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
    (const MethodInfo_38A1F98 *)Method_System_Collections_Generic_Dictionary_KeyCollection_UpHateData__int__GetEnumerator__);
  v73 = v72;
  while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
            &v73,
            (const MethodInfo_3701100 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__MoveNext__) )
  {
    if ( !*v41 )
      sub_1D0F30C(0, v52);
    currentKey = v73.fields._currentKey;
    v54 = System_Collections_Generic_Dictionary_object__int___get_Item(
            *v41,
            v73.fields._currentKey,
            (const MethodInfo_35F8764 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
    if ( Item == (_DWORD)v54 )
    {
      if ( !v51 )
        sub_1D0F30C(v54, v55);
      items = v51->fields._items;
      v63 = Method_System_Collections_Generic_List_UpHateData__Add__;
      ++v51->fields._version;
      if ( !items )
        sub_1D0F30C(v54, v55);
      size = v51->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v51,
          currentKey,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        v51->fields._size = size + 1;
        v65[4] = (Il2CppClass *)currentKey;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)currentKey, v56, v57, v58, v59, v60, v61);
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
    &v73,
    (const MethodInfo_37010FC *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__Dispose__);
  if ( !v51 )
LABEL_39:
    sub_1D0F30C(Count, v13);
  v66 = System_Collections_Generic_List_object___ToArray(
          v51,
          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc((UpHateData_array *)v66, v67);
  v69 = isDeadToEnableUpHate;
  v70 = this;
  return BattleLogicTarget__getTargetBase_48601328(v70, ShuffleArrayEachPriorityDesc, 0, v69, v49);
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
        BattleLogicTask_o *execTask,
        const MethodInfo *method)
{
  __int64 v17; // x27
  __int64 NoTargetNoActionType; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_ICollection_o **v26; // x25
  long double inited; // q0
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x0
  UpHateData_array *Array; // x20
  bool v32; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v34; // x7
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x4
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x5
  int32_t result; // w0
  __int64 v39; // x21
  intptr_t *v40; // x28
  System_Func_int____bool__o *v41; // x28
  System_Func_object__bool__o *v42; // x0
  intptr_t v43; // x2
  const MethodInfo *v44; // x5
  il2cpp_array_size_t max_length; // x8
  bool v46; // w3
  BattleLogicTarget_o *v47; // x0
  int32_t v48; // w1

  if ( (byte_4E7AAB6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_UpHateData___);
    sub_1D0F0B4(&System_Func_int____bool__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__DisplayClass21_0__getTargetAiAct_b__1__);
    sub_1D0F0B4(&BattleLogicTarget___c__DisplayClass21_0_TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__DisplayClass21_1__getTargetAiAct_b__0__);
    sub_1D0F0B4(&BattleLogicTarget___c__DisplayClass21_1_TypeInfo);
    byte_4E7AAB6 = 1;
  }
  v17 = sub_1D0F300(BattleLogicTarget___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_48;
  *(_QWORD *)(v17 + 16) = individuality;
  v26 = (System_Collections_ICollection_o **)(v17 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v17 + 16), (int32_t)individuality, v20, v21, v22, v23, v24, v25);
  v28 = Method_System_Array_Empty_UpHateData___;
  v29 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
  if ( !v29 )
  {
    sub_1CE5198(Method_System_Array_Empty_UpHateData___);
    v29 = v28[7];
  }
  v30 = *(_QWORD *)(v29 + 16);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v30 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v30);
  NoTargetNoActionType = *(_QWORD *)(v28[7] + 16LL);
  if ( (*(_BYTE *)(NoTargetNoActionType + 309) & 1) == 0 )
    NoTargetNoActionType = sub_1CE513C(inited);
  Array = **(UpHateData_array ***)(NoTargetNoActionType + 184);
  if ( aiActEnt )
  {
    NoTargetNoActionType = AiActEntity__GetNoTargetNoActionType(aiActEnt, 0);
    v32 = (_DWORD)NoTargetNoActionType != 0;
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
                                      execTask,
                                      v34);
    Array = (UpHateData_array *)NoTargetNoActionType;
    goto LABEL_18;
  }
  v32 = 0;
  if ( isCheckHate )
    goto LABEL_16;
LABEL_18:
  if ( !Array )
    goto LABEL_48;
  if ( Array->max_length )
    goto LABEL_20;
  v39 = sub_1D0F300(BattleLogicTarget___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0);
  if ( !aiActEnt )
    goto LABEL_26;
  if ( !v39 )
    goto LABEL_48;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v39 + 16), 0) )
  {
    v40 = &Method_BattleLogicTarget___c__DisplayClass21_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_26:
    if ( BasicHelper__IsNullOrEmpty(*v26, 0) )
    {
      v41 = 0;
      goto LABEL_32;
    }
    v40 = &Method_BattleLogicTarget___c__DisplayClass21_0__getTargetAiAct_b__1__;
    v39 = v17;
  }
  v42 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_int____bool__TypeInfo);
  v43 = *v40;
  v41 = (System_Func_int____bool__o *)v42;
  System_Func_object__bool____ctor(v42, (Il2CppObject *)v39, v43, 0);
  if ( v41 )
  {
    NoTargetNoActionType = (__int64)BattleLogicTarget__narrowDownIndividuality(
                                      this,
                                      targetlist,
                                      v41,
                                      isResurrectable,
                                      target != 13,
                                      v44);
    if ( NoTargetNoActionType )
    {
      Array = (UpHateData_array *)NoTargetNoActionType;
      goto LABEL_32;
    }
LABEL_48:
    sub_1D0F30C(NoTargetNoActionType, v19);
  }
LABEL_32:
  max_length = Array->max_length;
  if ( v32 && v41 != 0 && max_length == 0 )
    return -1;
  if ( !max_length )
    Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)targetlist, 0);
LABEL_20:
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(Array, v19);
  switch ( target )
  {
    case 2:
      return BattleLogicTarget__getTargetHighHp(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v35);
    case 3:
      return BattleLogicTarget__getTargetLowHp(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v35);
    case 10:
      return BattleLogicTarget__getTargetNpTurnLower(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v35);
    case 11:
      return BattleLogicTarget__getTargetNpGaugeHeighter(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v35);
    case 12:
      return BattleLogicTarget__getRevenge(this, actId, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v36);
    case 13:
      return BattleLogicTarget__getTargetActiveIndividualities(
               this,
               (System_Int32_array *)*v26,
               ShuffleArrayEachPriorityDesc,
               aiActEnt,
               isDeadToEnableUpHate,
               (const MethodInfo *)ShuffleArrayEachPriorityDesc);
    case 14:
      return BattleLogicTarget__getTargetActiveBuff(
               this,
               (System_Int32_array *)*v26,
               ShuffleArrayEachPriorityDesc,
               isDeadToEnableUpHate,
               v36);
    case 15:
      v46 = isDeadToEnableUpHate;
      v47 = this;
      v48 = 0;
      goto LABEL_47;
    case 16:
      v46 = isDeadToEnableUpHate;
      v48 = 1;
      goto LABEL_46;
    case 17:
      v46 = isDeadToEnableUpHate;
      v48 = 2;
LABEL_46:
      v47 = this;
LABEL_47:
      result = BattleLogicTarget__getTargetPosition(
                 v47,
                 v48,
                 ShuffleArrayEachPriorityDesc,
                 v46,
                 v32,
                 (const MethodInfo *)ShuffleArrayEachPriorityDesc);
      break;
    default:
      result = BattleLogicTarget__getTargetBase_48601328(
                 this,
                 ShuffleArrayEachPriorityDesc,
                 isResurrectable,
                 isDeadToEnableUpHate,
                 v36);
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
  return BattleLogicTarget__getTargetBase_48601328(this, Array, isResurrectable, isDeadToEnableUpHate, v9);
}


int32_t BattleLogicTarget__getTargetBase_48601328(
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
    sub_1D0F30C(this, targetlist);
  max_length = targetlist->max_length;
  if ( max_length < 1 )
    return -1;
  v8 = this;
  v9 = 0;
  v10 = isResurrectable;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1D0F314(this);
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
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleLogicTask_o *v5; // x19
  BattleData_o *data; // x0
  BattleLogicTarget_Fields *p_fields; // x24
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  struct System_Int32_array *actorIdlist; // x8
  struct BattleData_o *v12; // x21
  int32_t globaltargetId; // w1
  struct System_Int32_array *v14; // x8
  int32_t v15; // w1
  struct System_Int32_array *v16; // x8
  struct BattleData_o *v17; // x21
  char v18; // w22
  int32_t v19; // w23
  System_Int32_array *v20; // x4
  BattleServantData_o *ServantData; // x0
  BattleLogicTarget___c_c *v22; // x8
  Il2CppObject *v23; // x21
  System_Predicate_object__o *_9__24_0; // x22
  Il2CppObject *v25; // x23
  struct BattleLogicTarget___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x0
  BattleServantData_o *v34; // x21
  const MethodInfo *v35; // x2
  BattleData_o *v36; // x8
  struct System_Int32_array *v37; // x8
  int32_t v38; // w1
  const MethodInfo *v39; // x2
  System_Int32_array *EnemyAutoTargetOrder; // x21
  System_Comparison_int__o *v41; // x22
  struct System_Int32_array *EnemyAutoTargetOrder_k__BackingField; // x8
  BattleData_o *v43; // x22
  UpHateData_array *Array; // x0
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  struct System_Int32_array *v48; // x8
  BattleData_o *v49; // x20
  int32_t v50; // w21
  System_Int32_array *v51; // x4
  bool v53; // [xsp+Ch] [xbp-54h] BYREF
  bool isNotTargetLock; // [xsp+18h] [xbp-48h] BYREF
  bool v55; // [xsp+1Ch] [xbp-44h] BYREF

  v5 = task;
  if ( (byte_4E7AAB9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_int____80368704);
    sub_1D0F0B4(&Method_BasicHelper_TakeIf_BattleServantData___);
    sub_1D0F0B4(&Method_BattleLogicTarget__getTargetBattleServantData_b__24_1__);
    sub_1D0F0B4(&System_Comparison_int__TypeInfo);
    sub_1D0F0B4(&System_Predicate_BattleServantData__TypeInfo);
    sub_1D0F0B4(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__24_0__);
    sub_1D0F0B4(&BattleLogicTarget___c_TypeInfo);
    byte_4E7AAB9 = 1;
  }
  v55 = 0;
  isNotTargetLock = 0;
  v53 = 0;
  p_fields = &this->fields;
  data = this->fields.data;
  if ( !data )
    goto LABEL_104;
  if ( BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0) )
  {
    data = p_fields->data;
    if ( !p_fields->data )
      goto LABEL_104;
    BattleData__ResetFieldEnemyUseBuff(data, 38, 0, 0);
  }
  data = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_104;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_104;
    if ( v5->fields.actiontype == 4 )
    {
      data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(v5, (const MethodInfo *)task);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      actorIdlist = v5->fields.actorIdlist;
      v12 = p_fields->data;
      if ( actorIdlist )
      {
        if ( !LODWORD(actorIdlist->max_length) )
          goto LABEL_105;
        task = (BattleLogicTask_o *)(unsigned int)actorIdlist->m_Items[0];
        if ( !v12 )
          goto LABEL_104;
      }
      else
      {
        task = (BattleLogicTask_o *)0xFFFFFFFFLL;
        if ( !v12 )
          goto LABEL_104;
      }
      data = (BattleData_o *)BattleData__getTargetLock(p_fields->data, (int32_t)task, &v55, 0, 0, 1, 0);
      v12->fields.globaltargetId = (int)data;
      if ( !v55 )
        goto LABEL_42;
    }
    else
    {
      data = (BattleData_o *)BattleLogicTarget__IsCommandAllAttack(this, command, v9);
      v16 = v5->fields.actorIdlist;
      v17 = this->fields.data;
      v18 = (char)data;
      if ( v16 )
      {
        if ( !LODWORD(v16->max_length) )
          goto LABEL_105;
        v19 = v16->m_Items[0];
      }
      else
      {
        v19 = -1;
      }
      data = (BattleData_o *)v5->fields.skillInfo;
      if ( data )
      {
        data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0);
        v20 = (System_Int32_array *)data;
        if ( !v17 )
          goto LABEL_104;
      }
      else
      {
        v20 = 0;
        if ( !v17 )
          goto LABEL_104;
      }
      data = (BattleData_o *)BattleData__getTargetLock(v17, v19, &isNotTargetLock, 0, v20, (v18 ^ 1) & 1, 0);
      v17->fields.globaltargetId = (int)data;
      if ( !isNotTargetLock )
        goto LABEL_42;
    }
    data = p_fields->data;
    if ( !p_fields->data )
      goto LABEL_104;
    BattleData__RestoreMainTargetId(data, 0);
LABEL_42:
    if ( !p_fields->data )
      goto LABEL_104;
    data = (BattleData_o *)p_fields->data->fields.perf;
    if ( !data )
      goto LABEL_104;
    BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
    goto LABEL_45;
  }
  data = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_104;
  globaltargetId = data->fields.globaltargetId;
  if ( globaltargetId != data->fields.MainTargetId )
  {
    data = (BattleData_o *)BattleData__getServantData(data, globaltargetId, 0);
    if ( !data )
      goto LABEL_35;
    if ( !v5 )
      goto LABEL_104;
    v14 = v5->fields.actorIdlist;
    if ( v14 )
    {
      if ( !LODWORD(v14->max_length) )
        goto LABEL_105;
      v15 = v14->m_Items[0];
    }
    else
    {
      v15 = -1;
    }
    if ( !BattleServantData__checkOverKill((BattleServantData_o *)data, v15, 0) )
    {
LABEL_35:
      data = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_104;
      BattleData__RestoreMainTargetId(data, 0);
    }
  }
  BattleLogicTarget__updateEnemyTarget(this, 0, 1, v10);
LABEL_45:
  data = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_104;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0);
  v22 = BattleLogicTarget___c_TypeInfo;
  v23 = (Il2CppObject *)ServantData;
  if ( !BattleLogicTarget___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo);
    v22 = BattleLogicTarget___c_TypeInfo;
  }
  _9__24_0 = (System_Predicate_object__o *)v22->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = BattleLogicTarget___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__24_0 = (System_Predicate_object__o *)sub_1D0F300(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(
      _9__24_0,
      v25,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__24_0__,
      0);
    static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Predicate_BattleServantData__o *)_9__24_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0,
      (int32_t)_9__24_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = BasicHelper__TakeIf_object_(
          v23,
          (System_Predicate_T__o *)_9__24_0,
          (const MethodInfo_323EC34 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( !v33 )
  {
LABEL_72:
    data = p_fields->data;
    if ( !p_fields->data )
      goto LABEL_104;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
    if ( !p_fields->data )
      goto LABEL_104;
    EnemyAutoTargetOrder = (System_Int32_array *)data;
    data = (BattleData_o *)p_fields->data->fields.quest_ent;
    if ( !data )
      goto LABEL_104;
    if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0) )
    {
      v41 = (System_Comparison_int__o *)sub_1D0F300(System_Comparison_int__TypeInfo);
      System_Comparison_int____ctor(
        v41,
        (Il2CppObject *)this,
        Method_BattleLogicTarget__getTargetBattleServantData_b__24_1__,
        0);
      System_Array__Sort_int__52538032(
        EnemyAutoTargetOrder,
        (System_Comparison_T__o *)v41,
        (const MethodInfo_321AAB0 *)Method_System_Array_Sort_int____80368704);
    }
    else
    {
      data = p_fields->data;
      if ( !p_fields->data )
        goto LABEL_104;
      EnemyAutoTargetOrder_k__BackingField = data->fields._EnemyAutoTargetOrder_k__BackingField;
      if ( !EnemyAutoTargetOrder_k__BackingField )
        goto LABEL_104;
      if ( data->fields._EnemyFieldPosCount_k__BackingField <= SLODWORD(EnemyAutoTargetOrder_k__BackingField->max_length) )
        EnemyAutoTargetOrder = BattleData__GetEnemyAutoTargetOrder(data, 0);
    }
    v43 = this->fields.data;
    Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)EnemyAutoTargetOrder, 0);
    data = (BattleData_o *)BattleLogicTarget__getTargetBase_48601328(this, Array, 0, 1, v45);
    if ( !v43 )
      goto LABEL_104;
    BattleData__SetTargetId(v43, (int32_t)data, 0);
    BattleLogicTarget__updateEnemyTarget(this, EnemyAutoTargetOrder, 1, v46);
    data = this->fields.data;
    if ( !data )
      goto LABEL_104;
    data = (BattleData_o *)BattleData__isTargetLock(data, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_99;
    if ( !v5 )
      goto LABEL_104;
    v48 = v5->fields.actorIdlist;
    v49 = p_fields->data;
    if ( !v48 )
    {
      v50 = -1;
      goto LABEL_89;
    }
    if ( LODWORD(v48->max_length) )
    {
      v50 = v48->m_Items[0];
LABEL_89:
      data = (BattleData_o *)v5->fields.skillInfo;
      if ( data )
      {
        data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0);
        v51 = (System_Int32_array *)data;
        if ( !v49 )
          goto LABEL_104;
      }
      else
      {
        v51 = 0;
        if ( !v49 )
          goto LABEL_104;
      }
      data = (BattleData_o *)BattleData__getTargetLock(v49, v50, &v53, 0, v51, 1, 0);
      v49->fields.globaltargetId = (int)data;
      if ( v53 )
      {
        data = p_fields->data;
        if ( !p_fields->data )
          goto LABEL_104;
        BattleData__RestoreMainTargetId(data, 0);
      }
      if ( !p_fields->data || (data = (BattleData_o *)p_fields->data->fields.perf) == 0 )
LABEL_104:
        sub_1D0F30C(data, task);
      BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
LABEL_99:
      if ( p_fields->data )
      {
        if ( v5 )
        {
          BattleLogicTask__setTarget(v5, p_fields->data->fields.globaltargetId, v47);
          data = p_fields->data;
          if ( p_fields->data )
            return BattleData__getServantData(data, data->fields.globaltargetId, 0);
        }
      }
      goto LABEL_104;
    }
LABEL_105:
    sub_1D0F314(data);
  }
  v34 = (BattleServantData_o *)v33;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v33, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v36 = p_fields->data;
    if ( p_fields->data && v5 )
      goto LABEL_56;
    goto LABEL_104;
  }
  data = (BattleData_o *)BattleServantData__isAlive(v34, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_108;
  if ( !v5 )
    goto LABEL_104;
  v37 = v5->fields.actorIdlist;
  if ( v37 )
  {
    if ( !LODWORD(v37->max_length) )
      goto LABEL_105;
    v38 = v37->m_Items[0];
  }
  else
  {
    v38 = -1;
  }
  data = (BattleData_o *)BattleServantData__checkOverKill(v34, v38, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
LABEL_108:
    if ( !BattleServantData__isAlive(v34, 0, 0) )
    {
      data = (BattleData_o *)BattleServantData__isGuts(v34, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( p_fields->data && v5 )
        {
          BattleLogicTask__setTarget(v5, p_fields->data->fields.globaltargetId, v39);
          v34->fields.overkillTargetId = -1;
          return v34;
        }
        goto LABEL_104;
      }
    }
    v34->fields.overkillTargetId = -1;
    goto LABEL_72;
  }
  v36 = p_fields->data;
  if ( !p_fields->data )
    goto LABEL_104;
LABEL_56:
  BattleLogicTask__setTarget(v5, v36->fields.globaltargetId, v35);
  return v34;
}


int32_t BattleLogicTarget__getTargetHighHp(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4E7AAAE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_UpHateData___);
    sub_1D0F0B4(&Method_BattleLogicTarget__getTargetHighHp_b__11_0__);
    sub_1D0F0B4(&System_Comparison_UpHateData__TypeInfo);
    byte_4E7AAAE = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__11_0__, 0);
  System_Array__Sort_object__52538372(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_48601328(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4E7AAAF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_UpHateData___);
    sub_1D0F0B4(&Method_BattleLogicTarget__getTargetLowHp_b__12_0__);
    sub_1D0F0B4(&System_Comparison_UpHateData__TypeInfo);
    byte_4E7AAAF = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__12_0__, 0);
  System_Array__Sort_object__52538372(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_48601328(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4E7AAB1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_UpHateData___);
    sub_1D0F0B4(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__14_0__);
    sub_1D0F0B4(&System_Comparison_UpHateData__TypeInfo);
    byte_4E7AAB1 = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__14_0__,
    0);
  System_Array__Sort_object__52538372(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_48601328(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4E7AAB0 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Sort_UpHateData___);
    sub_1D0F0B4(&Method_BattleLogicTarget__getTargetNpTurnLower_b__13_0__);
    sub_1D0F0B4(&System_Comparison_UpHateData__TypeInfo);
    byte_4E7AAB0 = 1;
  }
  v7 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__13_0__,
    0);
  System_Array__Sort_object__52538372(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_321AC04 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_48601328(this, targetlist, 0, isDeadToEnableUpHate, v8);
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
    sub_1D0F30C(OnlyMaxPriorityArray, v12);
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
      return BattleLogicTarget__getTargetBase_48601328(this, ShuffleArrayEachPriorityDesc, 0, isDeadToEnableUpHate, v21);
    }
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= uniqueId )
        sub_1D0F314(OnlyMaxPriorityArray);
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
  return BattleLogicTarget__getTargetBase_48601328(
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
        BattleLogicTask_o *execTask,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v14; // x24
  BattleBuffData_CheckIndividualitiesData_o *v15; // x27
  System_Int32_array *data; // x0
  __int64 v17; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v20; // x25
  unsigned __int64 v21; // x29
  bool v22; // w26
  BattleServantData_o *ServantData; // x28
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  UpHateData_o *v27; // x27
  const MethodInfo *v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  struct BattleData_o *v38; // x8
  UpHateData_o *upHateData; // [xsp+10h] [xbp-70h] BYREF
  UpHateData_o *compUpHateB; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4E7AAB8 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_4E7AAB8 = 1;
  }
  upHateData = 0;
  compUpHateB = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  if ( atkSvt )
  {
    v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1D0F300(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_47354668(v15, atkSvt, 0, 0, 0, 0, 0, 1, 0);
    if ( !v15 )
      goto LABEL_38;
    selfConcatSvtIndividualities_k__BackingField = v15->fields._selfConcatSvtIndividualities_k__BackingField;
  }
  else
  {
    selfConcatSvtIndividualities_k__BackingField = 0;
  }
  data = CommonFunction__JoinIndiv(selfConcatSvtIndividualities_k__BackingField, addIndiv, 0);
  if ( !list )
    goto LABEL_38;
  max_length = list->max_length;
  if ( (int)max_length >= 1 )
  {
    v20 = data;
    v21 = 0;
    v22 = isResurrectable;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        sub_1D0F314(data);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_38;
      ServantData = BattleData__getServantData((BattleData_o *)data, list->m_Items[v21], 0);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, v22, v24);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
      data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v25);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
      v38 = this->fields.data;
      if ( !v38 || !ServantData )
        goto LABEL_38;
      data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v38->fields.typeTurn, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v27 = 0;
        if ( isDeadToEnableUpHate )
          goto LABEL_20;
      }
LABEL_29:
      LODWORD(max_length) = list->max_length;
      if ( (__int64)++v21 >= (int)max_length )
        goto LABEL_36;
    }
    if ( atkSvt )
    {
      data = (System_Int32_array *)BattleServantData__IsUpHateToGrantedOpponent(atkSvt, ServantData, &upHateData, 0);
      v27 = 0;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v27 = upHateData;
        if ( execTask )
          BattleLogicTask__AddUseUpHateData(execTask, upHateData, v26);
      }
    }
    else
    {
      v27 = 0;
    }
    if ( !ServantData )
      goto LABEL_38;
LABEL_20:
    data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v20, &compUpHateB, 1, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (System_Int32_array *)UpHateData__GetHighPriorityData(v27, compUpHateB, 0);
      v27 = (UpHateData_o *)data;
      if ( execTask )
        BattleLogicTask__AddUseUpHateData(execTask, compUpHateB, v28);
    }
    if ( v27 )
    {
      if ( !v14 )
        goto LABEL_38;
      items = v14->fields._items;
      v35 = Method_System_Collections_Generic_List_UpHateData__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_38;
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v27,
          *(const MethodInfo_395C410 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v27;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v37 + 4), (int32_t)v27, (int32_t)v28, v29, v30, v31, v32, v33);
      }
    }
    goto LABEL_29;
  }
LABEL_36:
  if ( !v14 )
LABEL_38:
    sub_1D0F30C(data, v17);
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v14,
                               (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
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
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x29
  int32_t *m_Items; // x28
  bool v17; // w24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_int__o *v21; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10

  if ( (byte_4E7AAB7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E7AAB7 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
LABEL_24:
    sub_1D0F30C(data, v13);
  max_length = list->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    m_Items = list->m_Items;
    v17 = isResurrectable;
    do
    {
      if ( v15 >= (unsigned int)max_length )
LABEL_25:
        sub_1D0F314(data);
      data = this->fields.data;
      if ( !data )
        goto LABEL_24;
      ServantData = BattleData__getServantData(data, m_Items[v15], 0);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, v17, v19)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v20),
            ((unsigned __int8)data & 1) != 0) )
      {
        v21 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v21,
          (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_24;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0, 1, 0, 1, 0);
        if ( !v21 )
          goto LABEL_24;
        System_Collections_Generic_List_int___AddRange(
          v21,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
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
            v21,
            BuffIndividualities,
            (const MethodInfo_393F5F8 *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v21,
                                 (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
        if ( !funcContainsIndividuality )
          goto LABEL_24;
        data = (BattleData_o *)((__int64 (__fastcall *)(intptr_t, BattleData_o *, intptr_t))funcContainsIndividuality->fields.invoke_impl)(
                                 funcContainsIndividuality->fields.method_code,
                                 data,
                                 funcContainsIndividuality->fields.method);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v15 >= LODWORD(list->max_length) )
            goto LABEL_25;
          if ( !v11 )
            goto LABEL_24;
          v13 = (unsigned int)m_Items[v15];
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
              v13,
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = v13;
          }
        }
      }
      LODWORD(max_length) = list->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)max_length );
  }
  return UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)v11, 0);
}


void BattleLogicTarget__setInit(BattleLogicTarget_o *this, BattleData_o *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.data = data;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleLogicTarget__updateEnemyTarget(
        BattleLogicTarget_o *this,
        System_Int32_array *targetIdList,
        bool isSetUpHateUseState,
        const MethodInfo *method)
{
  System_Int32_array *FieldEnemyServantIDList; // x20
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v8; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x24
  int32_t *m_Items; // x25
  bool v12; // w22
  BattleServantData_o *v13; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UpHateData_o *upHateData; // [xsp+8h] [xbp-48h] BYREF

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_4E7AABA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4E7AABA = 1;
  }
  upHateData = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
    v8 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_27;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
    if ( !FieldEnemyServantIDList )
      goto LABEL_27;
    max_length = FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      m_Items = FieldEnemyServantIDList->m_Items;
      v12 = isSetUpHateUseState;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
LABEL_28:
          sub_1D0F314(data);
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, m_Items[v10], 0);
        if ( !data )
          break;
        v13 = (BattleServantData_o *)data;
        if ( BattleServantData__isAlive((BattleServantData_o *)data, 0, 0) || BattleServantData__isGuts(v13, 0) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v13, 0, &upHateData, v12, 0);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v10 >= LODWORD(FieldEnemyServantIDList->max_length) )
              goto LABEL_28;
            if ( !v8 )
              break;
            targetIdList = (System_Int32_array *)(unsigned int)m_Items[v10];
            items = v8->fields._items;
            v15 = Method_System_Collections_Generic_List_int__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v8,
                (int32_t)targetIdList,
                *(const MethodInfo_393F3EC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = size + 1;
              items->m_Items[size] = (int)targetIdList;
            }
          }
        }
        LODWORD(max_length) = FieldEnemyServantIDList->max_length;
        data = this->fields.data;
        if ( (__int64)++v10 >= (int)max_length )
          goto LABEL_24;
      }
LABEL_27:
      sub_1D0F30C(data, targetIdList);
    }
LABEL_24:
    if ( !data )
      goto LABEL_27;
    BattleData__setTargetLock(data, v8, 0);
  }
}


void BattleLogicTarget__updateGlobalTarget(BattleLogicTarget_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleData_o *v5; // x20
  unsigned __int64 v6; // x21

  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
  if ( !data )
    goto LABEL_15;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v5 = data;
  if ( m_CancellationTokenSource && (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_16;
      data = this->fields.data;
      if ( !data )
        goto LABEL_15;
      data = (BattleData_o *)BattleData__getEnemyServantData(data, *((_DWORD *)&v5->fields.rootfsm + v6), 0);
      if ( !data )
        goto LABEL_15;
      data = (BattleData_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)data, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        break;
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      if ( (__int64)++v6 >= (int)m_CancellationTokenSource )
        return;
    }
    if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
LABEL_16:
      sub_1D0F314(data);
    data = this->fields.data;
    if ( data )
    {
      BattleData__SetTargetId(data, *((_DWORD *)&v5->fields.rootfsm + v6), 0);
      return;
    }
LABEL_15:
    sub_1D0F30C(data, method);
  }
}


void BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7AABB & 1) == 0 )
  {
    sub_1D0F0B4(&BattleLogicTarget___c_TypeInfo);
    byte_4E7AABB = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)BattleLogicTarget___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1D0F30C(this, 0);
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

  if ( (byte_4E7AABC & 1) == 0 )
  {
    this = (BattleLogicTarget___c_o *)sub_1D0F0B4(&System_Linq_IGrouping_int__UpHateData__TypeInfo);
    byte_4E7AABC = 1;
  }
  if ( !group )
    sub_1D0F30C(this, group);
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
    v7 = sub_1CE5430(group, System_Linq_IGrouping_int__UpHateData__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__UpHateData__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t BattleLogicTarget___c___MakeOnlyMaxPriorityArray_b__20_0(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields._Priority_k__BackingField;
}


int32_t BattleLogicTarget___c___getTargetActiveIndividualities_b__16_1(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields._Priority_k__BackingField;
}


bool BattleLogicTarget___c___getTargetBattleServantData_b__24_0(
        BattleLogicTarget___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
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
  if ( (byte_4E7AABD & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass16_0_o *)sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__);
    byte_4E7AABD = 1;
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
          (const MethodInfo_35F87D0 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass16_0_o *)v6->fields.indNum) == 0) )
  {
LABEL_14:
    sub_1D0F30C(this, x);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    (Il2CppObject *)y,
    v12,
    (const MethodInfo_35F87D0 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__);
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
    sub_1D0F30C(this, 0);
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
  __int64 v8; // x1
  struct BattleLogicTarget_o *_4__this; // x8
  struct BattleLogicTarget_o *v11; // x8
  BattleServantData_o *v12; // x21
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
        (v11 = this->fields.__4__this) == 0)
    || !y
    || (v12 = (BattleServantData_o *)IsPriorityDifferentDesc, (IsPriorityDifferentDesc = v11->fields.data) == 0)
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleData__getServantData(
                                                    IsPriorityDifferentDesc,
                                                    y->fields._UniqueId_k__BackingField,
                                                    0)) == 0
    || (IsPriorityDifferentDesc = (BattleData_o *)BattleServantData__getActiveBuffNum(
                                                    (BattleServantData_o *)IsPriorityDifferentDesc,
                                                    this->fields.ids,
                                                    0),
        !v12) )
  {
    sub_1D0F30C(IsPriorityDifferentDesc, v8);
  }
  return (_DWORD)IsPriorityDifferentDesc - BattleServantData__getActiveBuffNum(v12, this->fields.ids, 0);
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
    sub_1D0F30C(this, 0);
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

  if ( (byte_4E7AABE & 1) == 0 )
  {
    sub_1D0F0B4(&Individuality_TypeInfo);
    byte_4E7AABE = 1;
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

  if ( (byte_4E7AABF & 1) == 0 )
  {
    sub_1D0F0B4(&Individuality_TypeInfo);
    byte_4E7AABF = 1;
  }
  multiIndividuality = this->fields.multiIndividuality;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckSignedMultiIndividuality(self, multiIndividuality, 0);
}