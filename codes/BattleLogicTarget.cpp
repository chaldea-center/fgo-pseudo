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
  System_Collections_Generic_List_object__o *v7; // x22
  BattleData_o *data; // x0
  __int64 v9; // x1
  int max_length; // w8
  unsigned int v11; // w26
  UpHateData_o *v12; // x23
  const MethodInfo *v13; // x3
  BattleServantData_o *v14; // x24
  MethodInfo *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct BattleData_o *v25; // x8

  if ( (byte_5973D19 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_5973D19 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  if ( !targetlist )
    goto LABEL_23;
  max_length = targetlist->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_2213CE4(data);
      v12 = targetlist->m_Items[v11];
      if ( !v12 )
        break;
      data = this->fields.data;
      if ( !data )
        break;
      data = (BattleData_o *)BattleData__getServantData(data, v12->fields._UniqueId_k__BackingField, 0);
      if ( data )
      {
        v14 = (BattleServantData_o *)data;
        data = (BattleData_o *)BattleLogicTarget__IsTargetAlive(this, (BattleServantData_o *)data, isResurrectable, v13);
        if ( ((unsigned __int8)data & 1) != 0 )
          goto LABEL_27;
        data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, v14, v15);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          v25 = this->fields.data;
          if ( !v25 )
            break;
          data = (BattleData_o *)BattleServantData__checkDeadTurn(v14, v25->fields.typeTurn, 0);
          if ( ((unsigned __int8)data & 1) == 0 )
          {
LABEL_27:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v22 = Method_System_Collections_Generic_List_UpHateData__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                (Il2CppObject *)v12,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v12;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v24 + 4),
                (int32_t)v12,
                (System_String_o *)v15,
                v16,
                v17,
                v18,
                v19,
                v20);
            }
          }
        }
      }
      max_length = targetlist->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_21;
    }
LABEL_23:
    sub_2213CDC(data, v9);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_23;
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v7,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
}


UpHateData_array *BattleLogicTarget__GetShuffleArrayEachPriorityDesc(
        UpHateData_array *baseArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  BattleLogicTarget___c_c *v5; // x0
  struct BattleLogicTarget___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__19_0; // x21
  Il2CppObject *v8; // x22
  struct BattleLogicTarget___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v16; // x0
  __int64 v17; // x1
  BattleLogicTarget___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  struct BattleLogicTarget___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__19_1; // x21
  Il2CppObject *v22; // x22
  struct BattleLogicTarget___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x20
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Object_array *v48; // x0
  System_Collections_Generic_IEnumerable_T__o *Shuffle_object; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v55; // [xsp+18h] [xbp-48h]

  if ( (byte_5973D20 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleRandom_getShuffle_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_GroupBy_UpHateData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__UpHateData___int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_2213A60(&System_Func_UpHateData__int__TypeInfo);
    sub_2213A60(&System_Func_IGrouping_int__UpHateData___int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UpHateData__TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_0__);
    sub_2213A60(&Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_1__);
    sub_2213A60(&BattleLogicTarget___c_TypeInfo);
    byte_5973D20 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0) )
  {
    v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UpHateData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v3,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
    v5 = BattleLogicTarget___c_TypeInfo;
    if ( !*(&BattleLogicTarget___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo, v4);
      v5 = BattleLogicTarget___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__19_0 = (System_Func_object__int__o *)static_fields->__9__19_0;
    if ( !_9__19_0 )
    {
      if ( !*(&v5->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v5, v4);
        static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__19_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__19_0,
        v8,
        Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_0__,
        0);
      v9 = BattleLogicTarget___c_TypeInfo->static_fields;
      v9->__9__19_0 = (struct System_Func_UpHateData__int__o *)_9__19_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__19_0, (int32_t)_9__19_0, v10, v11, v12, v13, v14, v15);
    }
    v16 = System_Linq_Enumerable__GroupBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__TKey__o *)_9__19_0,
            (const MethodInfo_38831D8 *)Method_System_Linq_Enumerable_GroupBy_UpHateData__int___);
    v18 = BattleLogicTarget___c_TypeInfo;
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
    if ( !*(&BattleLogicTarget___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo, v17);
      v18 = BattleLogicTarget___c_TypeInfo;
    }
    v20 = v18->static_fields;
    _9__19_1 = (System_Func_object__int__o *)v20->__9__19_1;
    if ( !_9__19_1 )
    {
      if ( !*(&v18->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v18, v17);
        v20 = BattleLogicTarget___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__19_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_IGrouping_int__UpHateData___int__TypeInfo);
      System_Func_object__int____ctor(
        _9__19_1,
        v22,
        Method_BattleLogicTarget___c__GetShuffleArrayEachPriorityDesc_b__19_1__,
        0);
      v23 = BattleLogicTarget___c_TypeInfo->static_fields;
      v23->__9__19_1 = (struct System_Func_IGrouping_int__UpHateData___int__o *)_9__19_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__19_1, (int32_t)_9__19_1, v24, v25, v26, v27, v28, v29);
    }
    v30 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v19,
            (System_Func_TSource__TKey__o *)_9__19_1,
            (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_IGrouping_int__UpHateData___int___);
    if ( !v30 )
      goto LABEL_51;
    klass = v30->klass;
    v33 = v30;
    v34 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_21;
      }
      v36 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_21:
      v36 = sub_224BC3C(v30, System_Collections_Generic_IEnumerable_IGrouping_int__UpHateData___TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v36)(
            v33,
            *(_QWORD *)(v36 + 8));
    v55 = v37;
    while ( 1 )
    {
      if ( !v55 )
        sub_2213CDC(v37, v38);
      v39 = *(_QWORD *)v55;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_29;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_29:
        v42 = sub_224BC3C(v55, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v55, *(_QWORD *)(v42 + 8)) & 1) == 0 )
        break;
      v43 = *(_QWORD *)v55;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___c **)v45 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_36;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_36:
        v46 = sub_224BC3C(v55, System_Collections_Generic_IEnumerator_IGrouping_int__UpHateData___TypeInfo, 0);
      }
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(
                                                                   v55,
                                                                   *(_QWORD *)(v46 + 8));
      v48 = System_Linq_Enumerable__ToArray_object_(
              v47,
              (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
      Shuffle_object = (System_Collections_Generic_IEnumerable_T__o *)BattleRandom__getShuffle_object_(
                                                                        v48,
                                                                        (const MethodInfo_3817774 *)Method_BattleRandom_getShuffle_UpHateData___);
      if ( !v3 )
        sub_2213CDC(Shuffle_object, Shuffle_object);
      System_Collections_Generic_List_object___AddRange(
        v3,
        Shuffle_object,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UpHateData__AddRange__);
    }
    v50 = *(_QWORD *)v55;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_44;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_44:
      v53 = sub_224BC3C(v55, System_IDisposable_TypeInfo, 0);
    }
    v30 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(
                                                         v55,
                                                         *(_QWORD *)(v53 + 8));
    if ( !v3 )
LABEL_51:
      sub_2213CDC(v30, v31);
    return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                                 v3,
                                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
  }
  return baseArray;
}


bool BattleLogicTarget__IsCommandAllAttack(
        BattleLogicTarget_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData; // x0

  if ( !command || (this = (BattleLogicTarget_o *)this->fields.data) == 0 )
    sub_2213CDC(this, command);
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
    sub_2213CDC(x, y);
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
  if ( (byte_5973D17 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_2213A60(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_5973D17 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v6->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_3810380 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      && BattleServantData__isAlive(svtData, isResurrectable, 0);
}


bool BattleLogicTarget__IsTargetGuts(BattleLogicTarget_o *this, BattleServantData_o *svtData, const MethodInfo *method)
{
  BattleLogicTarget_o *v4; // x20

  v4 = this;
  if ( (byte_5973D18 & 1) == 0 )
  {
    this = (BattleLogicTarget_o *)sub_2213A60(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_5973D18 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  return !svtData->fields.isDeadAnime
      && BasicHelper__ContainsSelfNotNull_int_(
           (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
           svtData->fields.uniqueId,
           (const MethodInfo_3810380 *)Method_BasicHelper_ContainsSelfNotNull_int___)
      || BattleServantData__isGuts(svtData, 0);
}


UpHateData_array *BattleLogicTarget__MakeOnlyMaxPriorityArray(UpHateData_array *baseArray, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  long double v5; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  BattleLogicTarget___c_c *v11; // x0
  struct BattleLogicTarget___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__20_0; // x21
  Il2CppObject *v14; // x22
  struct BattleLogicTarget___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x0
  __int64 v23; // x1
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_5973D21 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Max_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UpHateData___);
    sub_2213A60(&System_Func_UpHateData__int__TypeInfo);
    sub_2213A60(&System_Func_UpHateData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__MakeOnlyMaxPriorityArray_b__20_0__);
    sub_2213A60(&Method_BattleLogicTarget___c__DisplayClass20_0__MakeOnlyMaxPriorityArray_b__1__);
    sub_2213A60(&BattleLogicTarget___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&BattleLogicTarget___c_TypeInfo);
    byte_5973D21 = 1;
  }
  v3 = sub_2213CCC(BattleLogicTarget___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0) )
  {
    v6 = Method_System_Array_Empty_UpHateData___;
    v7 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
    if ( !v7 )
    {
      sub_224B964(Method_System_Array_Empty_UpHateData___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_224B908(v5);
    if ( !*(_DWORD *)(v8 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v8, v4);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v5);
    return **(UpHateData_array ***)(v9 + 184);
  }
  else
  {
    v11 = BattleLogicTarget___c_TypeInfo;
    if ( !*(&BattleLogicTarget___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo, v4);
      v11 = BattleLogicTarget___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__20_0 = (System_Func_object__int__o *)static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v4);
        static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__20_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__20_0,
        v14,
        Method_BattleLogicTarget___c__MakeOnlyMaxPriorityArray_b__20_0__,
        0);
      v15 = BattleLogicTarget___c_TypeInfo->static_fields;
      v15->__9__20_0 = (struct System_Func_UpHateData__int__o *)_9__20_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__20_0, (int32_t)_9__20_0, v16, v17, v18, v19, v20, v21);
    }
    v22 = System_Linq_Enumerable__Max_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__int__o *)_9__20_0,
            (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_UpHateData___);
    if ( !v3 )
      sub_2213CDC(v22, v23);
    *(_DWORD *)(v3 + 16) = v22;
    v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UpHateData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v3,
      Method_BattleLogicTarget___c__DisplayClass20_0__MakeOnlyMaxPriorityArray_b__1__,
      0);
    v25 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UpHateData___);
    return (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                 v25,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
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
    sub_2213CDC(data, *(_QWORD *)&a);
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
    sub_2213CDC(IsPriorityDifferentDesc, v8);
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
    sub_2213CDC(IsPriorityDifferentDesc, v8);
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
    sub_2213CDC(IsPriorityDifferentDesc, v8);
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
    sub_2213CDC(IsPriorityDifferentDesc, v8);
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
  bool isResotreTarget; // [xsp+Ch] [xbp-34h] BYREF

  data = this->fields.data;
  isResotreTarget = 0;
  if ( !data )
    goto LABEL_9;
  data = (BattleData_o *)BattleData__isTargetLock(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_7;
  v10 = this->fields.data;
  if ( !v10
    || (data = (BattleData_o *)BattleData__getTargetLock(
                                 this->fields.data,
                                 &isResotreTarget,
                                 uniqueId,
                                 1,
                                 isMaster,
                                 addIndiv,
                                 1,
                                 0),
        v11 = this->fields.data,
        v10->fields.globaltargetId = (int)data,
        !v11)
    || (data = (BattleData_o *)v11->fields.perf) == 0 )
  {
LABEL_9:
    sub_2213CDC(data, *(_QWORD *)&uniqueId);
  }
  BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
LABEL_7:
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_9;
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
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x1
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
    sub_2213CDC(data, *(_QWORD *)&actId);
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
  return BattleLogicTarget__getTargetBase_54287616(this, ShuffleArrayEachPriorityDesc, 0, isDeadToEnableUpHate, v17);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Comparison_T__o *v24; // x22
  const MethodInfo *v25; // x4

  if ( (byte_5973D1F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_UpHateData___);
    sub_2213A60(&System_Comparison_UpHateData__TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__DisplayClass17_0__getTargetActiveBuff_b__0__);
    sub_2213A60(&BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
    byte_5973D1F = 1;
  }
  v9 = sub_2213CCC(BattleLogicTarget___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = ids;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)ids, v18, v19, v20, v21, v22, v23);
  v24 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_BattleLogicTarget___c__DisplayClass17_0__getTargetActiveBuff_b__0__,
    0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)targetlist,
    v24,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_54287616(this, targetlist, 0, isDeadToEnableUpHate, v25);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x3
  __int64 v27; // x23
  __int64 v28; // x1
  BattleLogicTarget___c_c *v29; // x0
  struct BattleLogicTarget___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__16_1; // x24
  Il2CppObject *v32; // x25
  struct BattleLogicTarget___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Func_object__bool__o *v40; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_Dictionary_object__int__o *v42; // x24
  System_Collections_Generic_Dictionary_object__int__o **v43; // x23
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Comparison_T__o *v50; // x24
  const MethodInfo *v51; // x4
  int32_t Item; // w22
  System_Collections_Generic_List_object__o *v53; // x21
  __int64 v54; // x1
  Il2CppObject *currentKey; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  System_Object_array *v68; // x0
  const MethodInfo *v69; // x1
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x0
  const MethodInfo *v71; // x4
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v73; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v74; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5973D1E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_UpHateData___);
    sub_2213A60(&System_Comparison_UpHateData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UpHateData__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Keys__);
    sub_2213A60(&System_Collections_Generic_Dictionary_UpHateData__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Max_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UpHateData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__get_Current__);
    sub_2213A60(&System_Func_UpHateData__int__TypeInfo);
    sub_2213A60(&System_Func_UpHateData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_UpHateData__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UpHateData__TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__getTargetActiveIndividualities_b__16_1__);
    sub_2213A60(&Method_BattleLogicTarget___c__DisplayClass16_0__getTargetActiveIndividualities_b__0__);
    sub_2213A60(&BattleLogicTarget___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__DisplayClass16_1__getTargetActiveIndividualities_b__2__);
    sub_2213A60(&BattleLogicTarget___c__DisplayClass16_1_TypeInfo);
    sub_2213A60(&BattleLogicTarget___c_TypeInfo);
    byte_5973D1E = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v11 = sub_2213CCC(BattleLogicTarget___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_37;
  *(_QWORD *)(v11 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = indv;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)indv, v20, v21, v22, v23, v24, v25);
  if ( aiActEnt && !AiActEntity__IsIncludeDeathSvt(aiActEnt, 0) )
    targetlist = BattleLogicTarget__DeathSvtExclusion(this, targetlist, 0, v26);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)targetlist, 0) )
  {
    v27 = sub_2213CCC(BattleLogicTarget___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0);
    v29 = BattleLogicTarget___c_TypeInfo;
    if ( !*(&BattleLogicTarget___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo, v28);
      v29 = BattleLogicTarget___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__16_1 = (System_Func_object__int__o *)static_fields->__9__16_1;
    if ( !_9__16_1 )
    {
      if ( !*(&v29->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v29, v28);
        static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__16_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UpHateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__16_1,
        v32,
        Method_BattleLogicTarget___c__getTargetActiveIndividualities_b__16_1__,
        0);
      v33 = BattleLogicTarget___c_TypeInfo->static_fields;
      v33->__9__16_1 = (struct System_Func_UpHateData__int__o *)_9__16_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__16_1, (int32_t)_9__16_1, v34, v35, v36, v37, v38, v39);
    }
    Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Linq_Enumerable__Max_object_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)targetlist,
                                                                      (System_Func_TSource__int__o *)_9__16_1,
                                                                      (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_UpHateData___);
    if ( !v27 )
      goto LABEL_37;
    *(_DWORD *)(v27 + 16) = (_DWORD)Count;
    v40 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UpHateData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v40,
      (Il2CppObject *)v27,
      Method_BattleLogicTarget___c__DisplayClass16_1__getTargetActiveIndividualities_b__2__,
      0);
    v41 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)targetlist,
            (System_Func_TSource__bool__o *)v40,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UpHateData___);
    targetlist = (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                       v41,
                                       (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  }
  v42 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_UpHateData__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v42,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_UpHateData__int___ctor__);
  *(_QWORD *)(v11 + 32) = v42;
  v43 = (System_Collections_Generic_Dictionary_object__int__o **)(v11 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v42, v44, v45, v46, v47, v48, v49);
  v50 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v50,
    (Il2CppObject *)v11,
    Method_BattleLogicTarget___c__DisplayClass16_0__getTargetActiveIndividualities_b__0__,
    0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)targetlist,
    v50,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_UpHateData___);
  Count = *(System_Collections_Generic_Dictionary_object__int__o **)(v11 + 32);
  if ( !Count )
    goto LABEL_37;
  Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_Dictionary_object__int___get_Count(
                                                                    Count,
                                                                    (const MethodInfo_3FF3D54 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Count__);
  if ( (int)Count >= 1 )
  {
    if ( targetlist )
    {
      if ( !LODWORD(targetlist->max_length) )
        sub_2213CE4(Count);
      Count = *v43;
      if ( *v43 )
      {
        Item = System_Collections_Generic_Dictionary_object__int___get_Item(
                 Count,
                 (Il2CppObject *)targetlist->m_Items[0],
                 (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
        v53 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UpHateData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v53,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
        Count = *v43;
        if ( *v43 )
        {
          Count = (System_Collections_Generic_Dictionary_object__int__o *)System_Collections_Generic_Dictionary_object__int___get_Keys(
                                                                            Count,
                                                                            (const MethodInfo_3FF3D64 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Keys__);
          if ( Count )
          {
            System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator(
              &v73,
              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)Count,
              (const MethodInfo_4388490 *)Method_System_Collections_Generic_Dictionary_KeyCollection_UpHateData__int__GetEnumerator__);
            v74 = v73;
            v73.fields._dictionary = 0;
            *(_QWORD *)&v73.fields._index = &v74;
            while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext(
                      &v74,
                      (const MethodInfo_4167930 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__MoveNext__) )
            {
              if ( !*v43 )
                sub_2213CDC(0, v54);
              currentKey = v74.fields._currentKey;
              v56 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      *v43,
                      v74.fields._currentKey,
                      (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_UpHateData__int__get_Item__);
              if ( Item == (_DWORD)v56 )
              {
                if ( !v53
                  || (items = v53->fields._items,
                      v65 = Method_System_Collections_Generic_List_UpHateData__Add__,
                      ++v53->fields._version,
                      !items) )
                {
                  sub_2213CDC(v56, v57);
                }
                size = v53->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v53,
                    currentKey,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                }
                else
                {
                  v67 = &items->obj.klass + size;
                  v53->fields._size = size + 1;
                  v67[4] = (Il2CppClass *)currentKey;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v67 + 4),
                    (int32_t)currentKey,
                    v58,
                    v59,
                    v60,
                    v61,
                    v62,
                    v63);
                }
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose(
              &v74,
              (const MethodInfo_416792C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_UpHateData__int__Dispose__);
            if ( v53 )
            {
              v68 = System_Collections_Generic_List_object___ToArray(
                      v53,
                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
              ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(
                                               (UpHateData_array *)v68,
                                               v69);
              return BattleLogicTarget__getTargetBase_54287616(
                       this,
                       ShuffleArrayEachPriorityDesc,
                       0,
                       isDeadToEnableUpHate,
                       v71);
            }
          }
        }
      }
    }
LABEL_37:
    sub_2213CDC(Count, v13);
  }
  return BattleLogicTarget__getTargetBase_54287616(this, targetlist, 0, isDeadToEnableUpHate, v51);
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_ICollection_o **v26; // x25
  long double v27; // q0
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x0
  UpHateData_array *Array; // x20
  bool v32; // w26
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v34; // x7
  __int64 v35; // x22
  System_Func_object__bool__o *v36; // x0
  System_Func_int____bool__o *v37; // x28
  Il2CppObject *v38; // x1
  intptr_t *v39; // x8
  const MethodInfo *v40; // x5
  il2cpp_array_size_t max_length; // x8
  bool v42; // w9
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x4
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x5
  bool v47; // w3
  BattleLogicTarget_o *v48; // x0
  int32_t v49; // w1

  if ( (byte_5973D22 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_UpHateData___);
    sub_2213A60(&System_Func_int____bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__DisplayClass21_0__getTargetAiAct_b__1__);
    sub_2213A60(&BattleLogicTarget___c__DisplayClass21_0_TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__DisplayClass21_1__getTargetAiAct_b__0__);
    sub_2213A60(&BattleLogicTarget___c__DisplayClass21_1_TypeInfo);
    byte_5973D22 = 1;
  }
  v17 = sub_2213CCC(BattleLogicTarget___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0);
  if ( !v17 )
    goto LABEL_60;
  *(_QWORD *)(v17 + 16) = individuality;
  v26 = (System_Collections_ICollection_o **)(v17 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 16), (int32_t)individuality, v20, v21, v22, v23, v24, v25);
  v28 = Method_System_Array_Empty_UpHateData___;
  v29 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
  if ( !v29 )
  {
    sub_224B964(Method_System_Array_Empty_UpHateData___);
    v29 = v28[7];
  }
  v30 = *(_QWORD *)(v29 + 16);
  if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
    v30 = sub_224B908(v27);
  if ( !*(_DWORD *)(v30 + 228) )
    *(__n128 *)&v27 = j_il2cpp_runtime_class_init_0(v30, v19);
  NoTargetNoActionType = *(_QWORD *)(v28[7] + 16LL);
  if ( (*(_WORD *)(NoTargetNoActionType + 309) & 1) == 0 )
    NoTargetNoActionType = sub_224B908(v27);
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
      goto LABEL_60;
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
    goto LABEL_60;
  if ( Array->max_length )
    goto LABEL_36;
  v35 = sub_2213CCC(BattleLogicTarget___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0);
  if ( !aiActEnt )
    goto LABEL_24;
  if ( !v35 )
    goto LABEL_60;
  if ( AiActEntity__TryGetMultiIndividuality(aiActEnt, (System_Int32_array_array **)(v35 + 16), 0) )
  {
    v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
    v37 = (System_Func_int____bool__o *)v36;
    v38 = (Il2CppObject *)v35;
    v39 = &Method_BattleLogicTarget___c__DisplayClass21_1__getTargetAiAct_b__0__;
  }
  else
  {
LABEL_24:
    if ( BasicHelper__IsNullOrEmpty(*v26, 0) )
      goto LABEL_33;
    v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_int____bool__TypeInfo);
    v37 = (System_Func_int____bool__o *)v36;
    v38 = (Il2CppObject *)v17;
    v39 = &Method_BattleLogicTarget___c__DisplayClass21_0__getTargetAiAct_b__1__;
  }
  System_Func_object__bool____ctor(v36, v38, *v39, 0);
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
      max_length = *(_QWORD *)(NoTargetNoActionType + 24);
      Array = (UpHateData_array *)NoTargetNoActionType;
      if ( max_length )
        v42 = 0;
      else
        v42 = v32;
      if ( v42 )
        return -1;
      goto LABEL_34;
    }
LABEL_60:
    sub_2213CDC(NoTargetNoActionType, v19);
  }
LABEL_33:
  max_length = Array->max_length;
LABEL_34:
  if ( !max_length )
    Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)targetlist, 0);
LABEL_36:
  ShuffleArrayEachPriorityDesc = BattleLogicTarget__GetShuffleArrayEachPriorityDesc(Array, v19);
  if ( target <= 11 )
  {
    if ( target <= 2 )
    {
      if ( target == 2 )
        return BattleLogicTarget__getTargetHighHp(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v44);
    }
    else
    {
      switch ( target )
      {
        case 3:
          return BattleLogicTarget__getTargetLowHp(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v44);
        case 10:
          return BattleLogicTarget__getTargetNpTurnLower(this, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v44);
        case 11:
          return BattleLogicTarget__getTargetNpGaugeHeighter(
                   this,
                   ShuffleArrayEachPriorityDesc,
                   isDeadToEnableUpHate,
                   v44);
      }
    }
    return BattleLogicTarget__getTargetBase_54287616(
             this,
             ShuffleArrayEachPriorityDesc,
             isResurrectable,
             isDeadToEnableUpHate,
             v45);
  }
  if ( target > 14 )
  {
    switch ( target )
    {
      case 15:
        v47 = isDeadToEnableUpHate;
        v48 = this;
        v49 = 0;
        return BattleLogicTarget__getTargetPosition(
                 v48,
                 v49,
                 ShuffleArrayEachPriorityDesc,
                 v47,
                 v32,
                 (const MethodInfo *)ShuffleArrayEachPriorityDesc);
      case 16:
        v47 = isDeadToEnableUpHate;
        v48 = this;
        v49 = 1;
        return BattleLogicTarget__getTargetPosition(
                 v48,
                 v49,
                 ShuffleArrayEachPriorityDesc,
                 v47,
                 v32,
                 (const MethodInfo *)ShuffleArrayEachPriorityDesc);
      case 17:
        v47 = isDeadToEnableUpHate;
        v48 = this;
        v49 = 2;
        return BattleLogicTarget__getTargetPosition(
                 v48,
                 v49,
                 ShuffleArrayEachPriorityDesc,
                 v47,
                 v32,
                 (const MethodInfo *)ShuffleArrayEachPriorityDesc);
    }
    return BattleLogicTarget__getTargetBase_54287616(
             this,
             ShuffleArrayEachPriorityDesc,
             isResurrectable,
             isDeadToEnableUpHate,
             v45);
  }
  if ( target == 12 )
    return BattleLogicTarget__getRevenge(this, actId, ShuffleArrayEachPriorityDesc, isDeadToEnableUpHate, v45);
  if ( target == 13 )
    return BattleLogicTarget__getTargetActiveIndividualities(
             this,
             (System_Int32_array *)*v26,
             ShuffleArrayEachPriorityDesc,
             aiActEnt,
             isDeadToEnableUpHate,
             (const MethodInfo *)ShuffleArrayEachPriorityDesc);
  return BattleLogicTarget__getTargetActiveBuff(
           this,
           (System_Int32_array *)*v26,
           ShuffleArrayEachPriorityDesc,
           isDeadToEnableUpHate,
           v45);
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
  return BattleLogicTarget__getTargetBase_54287616(this, Array, isResurrectable, isDeadToEnableUpHate, v9);
}


int32_t BattleLogicTarget__getTargetBase_54287616(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isResurrectable,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  int max_length; // w8
  BattleLogicTarget_o *v9; // x22
  unsigned int v10; // w25
  UpHateData_o *v11; // x23
  const MethodInfo *v12; // x3
  BattleServantData_o *v13; // x24
  const MethodInfo *v14; // x2
  struct BattleData_o *data; // x8

  if ( !targetlist )
LABEL_17:
    sub_2213CDC(this, targetlist);
  max_length = targetlist->max_length;
  if ( max_length < 1 )
    return -1;
  v9 = this;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
      sub_2213CE4(this);
    v11 = targetlist->m_Items[v10];
    if ( !v11 )
      goto LABEL_17;
    this = (BattleLogicTarget_o *)v9->fields.data;
    if ( !this )
      goto LABEL_17;
    this = (BattleLogicTarget_o *)BattleData__getServantData(
                                    (BattleData_o *)this,
                                    v11->fields._UniqueId_k__BackingField,
                                    0);
    if ( this )
    {
      v13 = (BattleServantData_o *)this;
      if ( BattleLogicTarget__IsTargetAlive(v9, (BattleServantData_o *)this, isResurrectable, v12) )
        return UpHateData__GetFixedTargetIdAndUseUpHateBuff(v11, 0);
      this = (BattleLogicTarget_o *)BattleLogicTarget__IsTargetGuts(v9, v13, v14);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        data = v9->fields.data;
        if ( !data )
          goto LABEL_17;
        this = (BattleLogicTarget_o *)BattleServantData__checkDeadTurn(v13, data->fields.typeTurn, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
      }
      if ( !isDeadToEnableUpHate )
      {
        this = (BattleLogicTarget_o *)BattleServantData__getNowHp(v13, 0);
        if ( (int)this > 0 )
          break;
      }
    }
    max_length = targetlist->max_length;
    if ( (int)++v10 >= max_length )
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
  BattleData_o *data; // x0
  bool isTargetLock; // w8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  struct System_Int32_array *actorIdlist; // x8
  struct BattleData_o *v12; // x21
  int32_t v13; // w2
  int32_t globaltargetId; // w1
  struct System_Int32_array *v15; // x8
  int32_t v16; // w1
  struct System_Int32_array *v17; // x8
  char v18; // w23
  int v19; // w22
  System_Int32_array *v20; // x5
  BattleData_o *v21; // x0
  bool v22; // w6
  struct BattleData_o *v23; // x8
  struct BattleData_o *v24; // x8
  BattleServantData_o *ServantData; // x0
  __int64 v26; // x1
  BattleLogicTarget___c_c *v27; // x8
  Il2CppObject *v28; // x21
  struct BattleLogicTarget___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__24_0; // x22
  Il2CppObject *v31; // x23
  struct BattleLogicTarget___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  Il2CppObject *v39; // x0
  BattleServantData_o *v40; // x21
  const MethodInfo *v41; // x2
  struct BattleData_o *v42; // x8
  struct System_Int32_array *v43; // x8
  int32_t v44; // w1
  const MethodInfo *v45; // x2
  struct BattleData_o *v46; // x8
  struct BattleData_o *v47; // x8
  System_Int32_array *EnemyAutoTargetOrder; // x21
  System_Comparison_int__o *v49; // x22
  struct System_Int32_array *EnemyAutoTargetOrder_k__BackingField; // x8
  BattleData_o *v51; // x22
  UpHateData_array *Array; // x0
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x3
  struct System_Int32_array *v55; // x8
  struct BattleData_o *v56; // x21
  int32_t v57; // w22
  System_Int32_array *v58; // x5
  struct BattleData_o *v59; // x8
  const MethodInfo *v60; // x2
  struct BattleData_o *v61; // x8
  bool isResotreTarget[4]; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5973D25 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_int____91707216);
    sub_2213A60(&Method_BasicHelper_TakeIf_BattleServantData___);
    sub_2213A60(&Method_BattleLogicTarget__getTargetBattleServantData_b__24_1__);
    sub_2213A60(&System_Comparison_int__TypeInfo);
    sub_2213A60(&System_Predicate_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleLogicTarget___c__getTargetBattleServantData_b__24_0__);
    sub_2213A60(&BattleLogicTarget___c_TypeInfo);
    byte_5973D25 = 1;
  }
  data = this->fields.data;
  isResotreTarget[0] = 0;
  if ( !data )
    goto LABEL_94;
  data = (BattleData_o *)BattleData__ExistsFieldEnemyIntervalBuff(data, 38, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_94;
    BattleData__ResetFieldEnemyUseBuff(data, 38, 0, 0);
  }
  if ( !task )
    goto LABEL_94;
  data = this->fields.data;
  if ( !data )
    goto LABEL_94;
  isTargetLock = BattleData__isTargetLock(data, 0);
  data = this->fields.data;
  task->fields._ExistTargetLock_k__BackingField = isTargetLock;
  if ( !data )
    goto LABEL_94;
  if ( BattleData__isTargetLock(data, 0) )
  {
    if ( task->fields.actiontype == 4 )
    {
      data = (BattleData_o *)BattleLogicTask__IsTargetTypeEnemy(task, (const MethodInfo *)task);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      actorIdlist = task->fields.actorIdlist;
      v12 = this->fields.data;
      if ( actorIdlist )
      {
        if ( !LODWORD(actorIdlist->max_length) )
          goto LABEL_95;
        v13 = actorIdlist->m_Items[0];
        if ( !v12 )
          goto LABEL_94;
      }
      else
      {
        v13 = -1;
        if ( !v12 )
          goto LABEL_94;
      }
      v21 = this->fields.data;
      v20 = 0;
      v22 = 1;
    }
    else
    {
      data = (BattleData_o *)BattleLogicTarget__IsCommandAllAttack(this, command, v9);
      v17 = task->fields.actorIdlist;
      v12 = this->fields.data;
      v18 = (char)data;
      if ( v17 )
      {
        if ( !LODWORD(v17->max_length) )
          goto LABEL_95;
        v19 = v17->m_Items[0];
      }
      else
      {
        v19 = -1;
      }
      data = (BattleData_o *)task->fields.skillInfo;
      if ( data )
      {
        data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0);
        v20 = (System_Int32_array *)data;
        if ( !v12 )
          goto LABEL_94;
      }
      else
      {
        v20 = 0;
        if ( !v12 )
          goto LABEL_94;
      }
      v21 = v12;
      v22 = (v18 ^ 1) & 1;
      v13 = v19;
    }
    data = (BattleData_o *)BattleData__getTargetLock(v21, isResotreTarget, v13, 1, 0, v20, v22, 0);
    v12->fields.globaltargetId = (int)data;
LABEL_42:
    v24 = this->fields.data;
    if ( !v24 )
      goto LABEL_94;
    data = (BattleData_o *)v24->fields.perf;
    if ( !data )
      goto LABEL_94;
    BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
    goto LABEL_45;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_94;
  globaltargetId = data->fields.globaltargetId;
  if ( globaltargetId != data->fields.MainTargetId )
  {
    data = (BattleData_o *)BattleData__getServantData(data, globaltargetId, 0);
    if ( !data )
      goto LABEL_34;
    v15 = task->fields.actorIdlist;
    if ( v15 )
    {
      if ( !LODWORD(v15->max_length) )
        goto LABEL_95;
      v16 = v15->m_Items[0];
    }
    else
    {
      v16 = -1;
    }
    if ( !BattleServantData__checkOverKill((BattleServantData_o *)data, v16, 0) )
    {
LABEL_34:
      data = this->fields.data;
      if ( !data )
        goto LABEL_94;
      BattleData__RestoreMainTargetId(data, 0);
      v23 = this->fields.data;
      if ( !v23 )
        goto LABEL_94;
      data = (BattleData_o *)v23->fields.perf;
      if ( !data )
        goto LABEL_94;
      BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
    }
  }
  BattleLogicTarget__updateEnemyTarget(this, 0, 1, v10);
LABEL_45:
  data = this->fields.data;
  if ( !data )
    goto LABEL_94;
  ServantData = BattleData__getServantData(data, data->fields.globaltargetId, 0);
  v27 = BattleLogicTarget___c_TypeInfo;
  v28 = (Il2CppObject *)ServantData;
  if ( !*(&BattleLogicTarget___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicTarget___c_TypeInfo, v26);
    v27 = BattleLogicTarget___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__24_0 = (System_Predicate_object__o *)static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, v26);
      static_fields = BattleLogicTarget___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(
      _9__24_0,
      v31,
      Method_BattleLogicTarget___c__getTargetBattleServantData_b__24_0__,
      0);
    v32 = BattleLogicTarget___c_TypeInfo->static_fields;
    v32->__9__24_0 = (struct System_Predicate_BattleServantData__o *)_9__24_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__24_0, (int32_t)_9__24_0, v33, v34, v35, v36, v37, v38);
  }
  v39 = BasicHelper__TakeIf_object_(
          v28,
          (System_Predicate_T__o *)_9__24_0,
          (const MethodInfo_3816410 *)Method_BasicHelper_TakeIf_BattleServantData___);
  if ( !v39 )
    goto LABEL_67;
  v40 = (BattleServantData_o *)v39;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)v39, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_54:
    v42 = this->fields.data;
    if ( !v42 )
      goto LABEL_94;
    BattleLogicTask__setTarget(task, v42->fields.globaltargetId, v41);
    return v40;
  }
  data = (BattleData_o *)BattleServantData__isAlive(v40, 0, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    v43 = task->fields.actorIdlist;
    if ( v43 )
    {
      if ( !LODWORD(v43->max_length) )
        goto LABEL_95;
      v44 = v43->m_Items[0];
    }
    else
    {
      v44 = -1;
    }
    data = (BattleData_o *)BattleServantData__checkOverKill(v40, v44, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_54;
  }
  if ( BattleServantData__isAlive(v40, 0, 0)
    || (data = (BattleData_o *)BattleServantData__isGuts(v40, 0), ((unsigned __int8)data & 1) == 0) )
  {
    v40->fields.overkillTargetId = -1;
LABEL_67:
    data = this->fields.data;
    if ( !data )
      goto LABEL_94;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
    v47 = this->fields.data;
    if ( !v47 )
      goto LABEL_94;
    EnemyAutoTargetOrder = (System_Int32_array *)data;
    data = (BattleData_o *)v47->fields.quest_ent;
    if ( !data )
      goto LABEL_94;
    if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x40000000000000LL, 0) )
    {
      v49 = (System_Comparison_int__o *)sub_2213CCC(System_Comparison_int__TypeInfo);
      System_Comparison_int____ctor(
        v49,
        (Il2CppObject *)this,
        Method_BattleLogicTarget__getTargetBattleServantData_b__24_1__,
        0);
      System_Array__Sort_int__58431776(
        EnemyAutoTargetOrder,
        (System_Comparison_T__o *)v49,
        (const MethodInfo_37B9920 *)Method_System_Array_Sort_int____91707216);
    }
    else
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_94;
      EnemyAutoTargetOrder_k__BackingField = data->fields._EnemyAutoTargetOrder_k__BackingField;
      if ( !EnemyAutoTargetOrder_k__BackingField )
        goto LABEL_94;
      if ( data->fields._EnemyFieldPosCount_k__BackingField <= SLODWORD(EnemyAutoTargetOrder_k__BackingField->max_length) )
        EnemyAutoTargetOrder = BattleData__GetEnemyAutoTargetOrder(data, 0);
    }
    v51 = this->fields.data;
    Array = UpHateData__MakeArray((System_Collections_Generic_IEnumerable_int__o *)EnemyAutoTargetOrder, 0);
    data = (BattleData_o *)BattleLogicTarget__getTargetBase_54287616(this, Array, 0, 1, v53);
    if ( !v51 )
      goto LABEL_94;
    BattleData__SetTargetId(v51, (int32_t)data, 0);
    BattleLogicTarget__updateEnemyTarget(this, EnemyAutoTargetOrder, 1, v54);
    data = this->fields.data;
    if ( !data )
      goto LABEL_94;
    data = (BattleData_o *)BattleData__isTargetLock(data, 0);
    if ( ((unsigned __int8)data & 1) == 0 )
      goto LABEL_88;
    v55 = task->fields.actorIdlist;
    v56 = this->fields.data;
    if ( !v55 )
    {
      v57 = -1;
      goto LABEL_83;
    }
    if ( LODWORD(v55->max_length) )
    {
      v57 = v55->m_Items[0];
LABEL_83:
      data = (BattleData_o *)task->fields.skillInfo;
      if ( data )
      {
        data = (BattleData_o *)BattleSkillInfoData__GetAddIndiv((BattleSkillInfoData_o *)data, 0);
        v58 = (System_Int32_array *)data;
        if ( !v56 )
          goto LABEL_94;
      }
      else
      {
        v58 = 0;
        if ( !v56 )
          goto LABEL_94;
      }
      data = (BattleData_o *)BattleData__getTargetLock(v56, isResotreTarget, v57, 1, 0, v58, 1, 0);
      v56->fields.globaltargetId = (int)data;
LABEL_88:
      v59 = this->fields.data;
      if ( v59 )
      {
        data = (BattleData_o *)v59->fields.perf;
        if ( data )
        {
          BattlePerformance__reViewTargetMarks((BattlePerformance_o *)data, 0);
          v61 = this->fields.data;
          if ( v61 )
          {
            BattleLogicTask__setTarget(task, v61->fields.globaltargetId, v60);
            data = this->fields.data;
            if ( data )
              return BattleData__getServantData(data, data->fields.globaltargetId, 0);
          }
        }
      }
LABEL_94:
      sub_2213CDC(data, task);
    }
LABEL_95:
    sub_2213CE4(data);
  }
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_94;
  BattleLogicTask__setTarget(task, v46->fields.globaltargetId, v45);
  v40->fields.overkillTargetId = -1;
  return v40;
}


int32_t BattleLogicTarget__getTargetHighHp(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_5973D1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_UpHateData___);
    sub_2213A60(&Method_BattleLogicTarget__getTargetHighHp_b__11_0__);
    sub_2213A60(&System_Comparison_UpHateData__TypeInfo);
    byte_5973D1A = 1;
  }
  v7 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetHighHp_b__11_0__, 0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_54287616(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetLowHp(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_5973D1B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_UpHateData___);
    sub_2213A60(&Method_BattleLogicTarget__getTargetLowHp_b__12_0__);
    sub_2213A60(&System_Comparison_UpHateData__TypeInfo);
    byte_5973D1B = 1;
  }
  v7 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleLogicTarget__getTargetLowHp_b__12_0__, 0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_54287616(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetNpGaugeHeighter(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_5973D1D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_UpHateData___);
    sub_2213A60(&Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__14_0__);
    sub_2213A60(&System_Comparison_UpHateData__TypeInfo);
    byte_5973D1D = 1;
  }
  v7 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpGaugeHeighter_b__14_0__,
    0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_54287616(this, targetlist, 0, isDeadToEnableUpHate, v8);
}


int32_t BattleLogicTarget__getTargetNpTurnLower(
        BattleLogicTarget_o *this,
        UpHateData_array *targetlist,
        bool isDeadToEnableUpHate,
        const MethodInfo *method)
{
  System_Comparison_T__o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_5973D1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Sort_UpHateData___);
    sub_2213A60(&Method_BattleLogicTarget__getTargetNpTurnLower_b__13_0__);
    sub_2213A60(&System_Comparison_UpHateData__TypeInfo);
    byte_5973D1C = 1;
  }
  v7 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UpHateData__TypeInfo);
  System_Comparison_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleLogicTarget__getTargetNpTurnLower_b__13_0__,
    0);
  System_Array__Sort_object__58432120(
    (System_Object_array *)targetlist,
    v7,
    (const MethodInfo_37B9A78 *)Method_System_Array_Sort_UpHateData___);
  return BattleLogicTarget__getTargetBase_54287616(this, targetlist, 0, isDeadToEnableUpHate, v8);
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
  UpHateData_array *ShuffleArrayEachPriorityDesc; // x1
  const MethodInfo *v21; // x4

  OnlyMaxPriorityArray = (BattleServantData_o *)BattleLogicTarget__MakeOnlyMaxPriorityArray(
                                                  targetlist,
                                                  *(const MethodInfo **)&position);
  if ( !OnlyMaxPriorityArray )
LABEL_15:
    sub_2213CDC(OnlyMaxPriorityArray, v12);
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
      return BattleLogicTarget__getTargetBase_54287616(this, ShuffleArrayEachPriorityDesc, 0, isDeadToEnableUpHate, v21);
    }
  }
  else
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= uniqueId )
        sub_2213CE4(OnlyMaxPriorityArray);
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
  return BattleLogicTarget__getTargetBase_54287616(
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
  System_Collections_Generic_List_object__o *v14; // x25
  BattleBuffData_CheckIndividualitiesData_o *v15; // x27
  System_Int32_array *data; // x0
  __int64 v17; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v20; // x26
  unsigned __int64 v21; // x29
  BattleServantData_o *ServantData; // x28
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  UpHateData_o *v26; // x27
  MethodInfo *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  struct BattleData_o *v37; // x8
  UpHateData_o *upHateData; // [xsp+10h] [xbp-70h] BYREF
  UpHateData_o *compUpHateB; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5973D24 & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_UpHateData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UpHateData__TypeInfo);
    byte_5973D24 = 1;
  }
  upHateData = 0;
  compUpHateB = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UpHateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UpHateData___ctor__);
  if ( atkSvt )
  {
    v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_2213CCC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_52826232(v15, atkSvt, 0, 0, 0, 0, 0, 1, 0);
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
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        sub_2213CE4(data);
      data = (System_Int32_array *)this->fields.data;
      if ( !data )
        goto LABEL_38;
      ServantData = BattleData__getServantData((BattleData_o *)data, list->m_Items[v21], 0);
      data = (System_Int32_array *)BattleLogicTarget__IsTargetAlive(this, ServantData, isResurrectable, v23);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
      data = (System_Int32_array *)BattleLogicTarget__IsTargetGuts(this, ServantData, v24);
      if ( ((unsigned __int8)data & 1) != 0 )
        break;
      v37 = this->fields.data;
      if ( !v37 || !ServantData )
        goto LABEL_38;
      data = (System_Int32_array *)BattleServantData__checkDeadTurn(ServantData, v37->fields.typeTurn, 0);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v26 = 0;
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
      v26 = 0;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v26 = upHateData;
        if ( execTask )
          BattleLogicTask__AddUseUpHateData(execTask, upHateData, v25);
      }
    }
    else
    {
      v26 = 0;
    }
    if ( !ServantData )
      goto LABEL_38;
LABEL_20:
    data = (System_Int32_array *)BattleServantData__isUpHate(ServantData, v20, &compUpHateB, 1, 0);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (System_Int32_array *)UpHateData__GetHighPriorityData(v26, compUpHateB, 0);
      v26 = (UpHateData_o *)data;
      if ( execTask )
        BattleLogicTask__AddUseUpHateData(execTask, compUpHateB, v27);
    }
    if ( v26 )
    {
      if ( !v14 )
        goto LABEL_38;
      items = v14->fields._items;
      v34 = Method_System_Collections_Generic_List_UpHateData__Add__;
      ++v14->fields._version;
      if ( !items )
        goto LABEL_38;
      size = v14->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)v26,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v26;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v36 + 4),
          (int32_t)v26,
          (System_String_o *)v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
    }
    goto LABEL_29;
  }
LABEL_36:
  if ( !v14 )
LABEL_38:
    sub_2213CDC(data, v17);
  return (UpHateData_array *)System_Collections_Generic_List_object___ToArray(
                               v14,
                               (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_UpHateData__ToArray__);
}


UpHateData_array *BattleLogicTarget__narrowDownIndividuality(
        BattleLogicTarget_o *this,
        System_Int32_array *list,
        System_Func_int____bool__o *funcContainsIndividuality,
        bool isResurrectable,
        bool isCheckBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v11; // x24
  BattleData_o *data; // x0
  __int64 v13; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x29
  int32_t *m_Items; // x28
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_int__o *v20; // x26
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_5973D23 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5973D23 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !list )
LABEL_24:
    sub_2213CDC(data, v13);
  max_length = list->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    m_Items = list->m_Items;
    do
    {
      if ( v15 >= (unsigned int)max_length )
LABEL_25:
        sub_2213CE4(data);
      data = this->fields.data;
      if ( !data )
        goto LABEL_24;
      ServantData = BattleData__getServantData(data, m_Items[v15], 0);
      if ( BattleLogicTarget__IsTargetAlive(this, ServantData, isResurrectable, v18)
        || (data = (BattleData_o *)BattleLogicTarget__IsTargetGuts(this, ServantData, v19),
            ((unsigned __int8)data & 1) != 0) )
      {
        v20 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v20,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !ServantData )
          goto LABEL_24;
        data = (BattleData_o *)BattleServantData__getIndividualities(ServantData, 0, 1, 0, 1, 0);
        if ( !v20 )
          goto LABEL_24;
        System_Collections_Generic_List_int___AddRange(
          v20,
          (System_Collections_Generic_IEnumerable_T__o *)data,
          (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
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
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        data = (BattleData_o *)System_Collections_Generic_List_int___ToArray(
                                 v20,
                                 (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
          items = v11->fields._items;
          v13 = (unsigned int)m_Items[v15];
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_24;
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v13,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.data = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)data,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicTarget__updateEnemyTarget(
        BattleLogicTarget_o *this,
        System_Int32_array *targetIdList,
        bool isSetUpHateUseState,
        const MethodInfo *method)
{
  System_Int32_array *FieldEnemyServantIDList; // x21
  BattleData_o *data; // x0
  System_Collections_Generic_List_int__o *v8; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x24
  int32_t *m_Items; // x26
  BattleServantData_o *v12; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  UpHateData_o *upHateData; // [xsp+8h] [xbp-48h] BYREF

  FieldEnemyServantIDList = targetIdList;
  if ( (byte_5973D26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5973D26 = 1;
  }
  data = this->fields.data;
  upHateData = 0;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
  {
    if ( !FieldEnemyServantIDList )
      FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(data, 1, 0);
    v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    data = this->fields.data;
    if ( !data )
      goto LABEL_26;
    data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
    if ( !FieldEnemyServantIDList )
      goto LABEL_26;
    max_length = FieldEnemyServantIDList->max_length;
    data = this->fields.data;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      m_Items = FieldEnemyServantIDList->m_Items;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
LABEL_27:
          sub_2213CE4(data);
        if ( !data )
          break;
        data = (BattleData_o *)BattleData__getEnemyServantData(data, m_Items[v10], 0);
        if ( !data )
          break;
        v12 = (BattleServantData_o *)data;
        if ( BattleServantData__IsApplicableUpHate((BattleServantData_o *)data, 0) )
        {
          data = (BattleData_o *)BattleServantData__isUpHate(v12, 0, &upHateData, isSetUpHateUseState, 0);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( v10 >= LODWORD(FieldEnemyServantIDList->max_length) )
              goto LABEL_27;
            if ( !v8 )
              break;
            items = v8->fields._items;
            targetIdList = (System_Int32_array *)(unsigned int)m_Items[v10];
            v14 = Method_System_Collections_Generic_List_int__Add__;
            ++v8->fields._version;
            if ( !items )
              break;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v8,
                (int32_t)targetIdList,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = size + 1;
              items->m_Items[size] = (int)targetIdList;
            }
          }
        }
        LODWORD(max_length) = FieldEnemyServantIDList->max_length;
        ++v10;
        data = this->fields.data;
        if ( (__int64)v10 >= (int)max_length )
          goto LABEL_23;
      }
LABEL_26:
      sub_2213CDC(data, targetIdList);
    }
LABEL_23:
    if ( !data )
      goto LABEL_26;
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
    goto LABEL_14;
  data = (BattleData_o *)BattleData__getFieldEnemyServantIDList(data, 1, 0);
  if ( !data )
    goto LABEL_14;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v5 = data;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_15;
      data = this->fields.data;
      if ( !data )
        goto LABEL_14;
      data = (BattleData_o *)BattleData__getEnemyServantData(data, *((_DWORD *)&v5->fields.rootfsm + v6), 0);
      if ( !data )
        goto LABEL_14;
      data = (BattleData_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)data, 0);
      if ( ((unsigned __int8)data & 1) == 0 )
        break;
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      if ( (__int64)++v6 >= (int)m_CancellationTokenSource )
        return;
    }
    if ( (unsigned int)v6 >= LODWORD(v5->fields.m_CancellationTokenSource) )
LABEL_15:
      sub_2213CE4(data);
    data = this->fields.data;
    if ( data )
    {
      BattleData__SetTargetId(data, *((_DWORD *)&v5->fields.rootfsm + v6), 0);
      return;
    }
LABEL_14:
    sub_2213CDC(data, method);
  }
}


void BattleLogicTarget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973D27 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTarget___c_TypeInfo);
    byte_5973D27 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicTarget___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicTarget___c_TypeInfo->static_fields->__9 = (struct BattleLogicTarget___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicTarget___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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

  if ( (byte_5973D28 & 1) == 0 )
  {
    this = (BattleLogicTarget___c_o *)sub_2213A60(&System_Linq_IGrouping_int__UpHateData__TypeInfo);
    byte_5973D28 = 1;
  }
  if ( !group )
    sub_2213CDC(this, group);
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
    v7 = sub_224BC3C(group, System_Linq_IGrouping_int__UpHateData__TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(System_Linq_IGrouping_int__UpHateData__o *, _QWORD))v7)(group, *(_QWORD *)(v7 + 8));
}


int32_t BattleLogicTarget___c___MakeOnlyMaxPriorityArray_b__20_0(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._Priority_k__BackingField;
}


int32_t BattleLogicTarget___c___getTargetActiveIndividualities_b__16_1(
        BattleLogicTarget___c_o *this,
        UpHateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._Priority_k__BackingField;
}


bool BattleLogicTarget___c___getTargetBattleServantData_b__24_0(
        BattleLogicTarget___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
  if ( (byte_5973D29 & 1) == 0 )
  {
    this = (BattleLogicTarget___c__DisplayClass16_0_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__);
    byte_5973D29 = 1;
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
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__),
        (this = (BattleLogicTarget___c__DisplayClass16_0_o *)v6->fields.indNum) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, x);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    (Il2CppObject *)y,
    v12,
    (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_UpHateData__int__set_Item__);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(IsPriorityDifferentDesc, v8);
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
    sub_2213CDC(this, 0);
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

  if ( (byte_5973D2A & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973D2A = 1;
  }
  individuality = this->fields.individuality;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, self);
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

  if ( (byte_5973D2B & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5973D2B = 1;
  }
  multiIndividuality = this->fields.multiIndividuality;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, self);
  return Individuality__CheckSignedMultiIndividuality(self, multiIndividuality, 0);
}